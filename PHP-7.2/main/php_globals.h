/*
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2018 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Zeev Suraski <zeev@zend.com>                                 |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_GLOBALS_H
#define PHP_GLOBALS_H

#include "zend_globals.h"

typedef struct _php_core_globals php_core_globals;

// ZTS 是线程安全的标记

#ifdef ZTS // 编译时开启了线程安全则使用线程安全库
# define PG(v) ZEND_TSRMG(core_globals_id, php_core_globals *, v)
extern PHPAPI int core_globals_id;
#else
# define PG(v) (core_globals.v) // 否则这其实就是一个普通的全局变量
extern ZEND_API struct _php_core_globals core_globals;
#endif

/* Error display modes */
#define PHP_DISPLAY_ERRORS_STDOUT	1
#define PHP_DISPLAY_ERRORS_STDERR	2

/* Track vars */
#define TRACK_VARS_POST		0
#define TRACK_VARS_GET		1
#define TRACK_VARS_COOKIE	2
#define TRACK_VARS_SERVER	3
#define TRACK_VARS_ENV		4
#define TRACK_VARS_FILES	5
#define TRACK_VARS_REQUEST	6

struct _php_tick_function_entry;

typedef struct _arg_separators {
	char *output;
	char *input;
} arg_separators;

struct _php_core_globals {
	zend_bool implicit_flush;

	zend_long output_buffering;         //输出缓存区的大小

	zend_bool enable_dl;                //是否允许使用dl函数，dl函数仅在PHP作为apache模块安装时才有效

	char *output_handler;               // 将所有脚本的输出重定向到一个输出处理函数

	char *unserialize_callback_func;    // 如果解序列化处理器需要实例化一个未定义的类，这里的回调函数将以该未定义类的名字作为参数被unserialize调用
	zend_long serialize_precision;      // 将浮点型和双精度型数据 序列化存储时的精度(有效位数)

	zend_long memory_limit;             // 一个脚本所能够申请到的最大内存
	zend_long max_input_time;           // 每个脚本解析输入数据（POST，GET，upload）的最大允许时间(秒)

	zend_bool track_errors;             // 是否在变量$php_errormsg中保存最近一个错误或警告信息
	zend_bool display_errors;           // 是否将错误信息作为输出的一部分显示
	zend_bool display_startup_errors;   // 是否显示PHP启动时的错误
	zend_bool log_errors;               // 是否在日志文件里记录错误，具体在哪里记录取决于error_log指令
	zend_long      log_errors_max_len;  // 设置错误日志中附加的与错误信息相关联的错误源的最大长度
	zend_bool ignore_repeated_errors;   // 记录错误日志时是否忽略重复的错误信息
	zend_bool ignore_repeated_source;   // 是否忽略重复的错误信息时忽略重复的错误源
	zend_bool report_memleaks;          // 是否报告内存泄露
	char *error_log;                    // 将错误日志记录到哪个文件

	char *doc_root;                     // PHP的根目录
	char *user_dir;                     // 告诉php在使用 /~username 打开脚本时到哪个目录下去找
	char *include_path;                 // 指定一组目录用于require(), include(), fopen_with_path() 函数寻找文件
	char *open_basedir;                 // 将PHP允许操作的所有文件都限制在此组目录列表下
	char *extension_dir;                // 存放扩展库的目录，也就是PHP用来寻找动态扩展模块的目录
	char *php_binary;
	char *sys_temp_dir;

	char *upload_tmp_dir;               // 文件上传时存放文件的临时目录
	zend_long upload_max_filesize;      // 允许上传的文件的最大size

	char *error_append_string;          // 用于错误信息后输出的字符串
	char *error_prepend_string;         // 用于错误信息前输出的字符串

	char *auto_prepend_file;            // 指定在主文件之前自动解析的文件名
	char *auto_append_file;             // 指定在住文件之后自动解析的文件名

	char *input_encoding;
	char *internal_encoding;
	char *output_encoding;

	arg_separators arg_separator;       // PHP所产生的URL中用来分隔参数的分隔符

	char *variables_order;              // PHP 注册 Environment GET POST Cookie Server 的顺序

	HashTable rfc1867_protected_variables; // RFC1867保护的变量名，在main/rfc1867.c文件中有用到此变量

	short connection_status;            // 连接状态，有三个状态，正常，中断，超时

	/* In 7.1/7.2 branches, this was initially a short,
	 * maintain struct alignment with subsequent padding.
	 */
	zend_bool ignore_user_abort;        // 是否即使在用户中止请求后也坚持完成整个请求
	char ignore_user_abort_reserved_padding;

	unsigned char header_is_being_sent; // 是否头信息正在发送

	zend_llist tick_functions;          //  仅在main目录下的php_ticks.c文件中有用到，此处定义的函数在register_tick_function等函数中有用到。

	zval http_globals[6];               // 存放GET、POST、SERVER等信息

	zend_bool expose_php;               // 是否展示php的信息

	zend_bool register_argc_argv;       // 是否声明$argv和$argc全局变量(包含用GET方法的信息)
	zend_bool auto_globals_jit;         // 是否仅在使用到$_SERVER和$_ENV变量时才创建(而不是在脚本一启动时就自动创建)。

	char *docref_root;                  // 如果打开了html_errors指令，PHP将会在出错信息上显示超连接
	char *docref_ext;                   // 指定文件的扩展名(必须含有'.')

	zend_bool html_errors;              // 是否在出错信息中使用HTML标记。
	zend_bool xmlrpc_errors;

	zend_long xmlrpc_error_number;

	zend_bool activated_auto_globals[8];

	zend_bool modules_activated;        // 是否已经激活模块
	zend_bool file_uploads;             // 是否允许HTTP文件上传
	zend_bool during_request_startup;   // 是否在请求初始化过程中
	zend_bool allow_url_fopen;          // 是否允许打开远程文件
	zend_bool enable_post_data_reading; // 是否总是生成$HTTP_RAW_POST_DATA变量(原始POST数据)
	zend_bool report_zend_debug;        // 是否打开zend debug，仅在main/main.c文件中有使用

	int last_error_type;                // 最后的错误类型
	char *last_error_message;           // 最后的错误信息
	char *last_error_file;              // 最后的错误文件
	int  last_error_lineno;             // 最后的错误行

	char *php_sys_temp_dir;

	char *disable_functions;            // 该指令接受一个用逗号分隔的函数名列表，以禁用特定的函数。
	char *disable_classes;              // 该指令接受一个用逗号分隔的类名列表，以禁用特定的类
	zend_bool allow_url_include;        // 是否允许include/require远程文件
#ifdef PHP_WIN32
	zend_bool com_initialized;
#endif
	zend_long max_input_nesting_level;  // 最大的嵌套层数
	zend_long max_input_vars;
	zend_bool in_user_include;          // 是否在用户包含空间

	char *user_ini_filename;            // 用户的ini文件名
	zend_long user_ini_cache_ttl;       // ini缓存过期限制

	char *request_order;                // 优先级比variables_order高，在request变量生成时用到

	zend_bool mail_x_header;            // 仅在ext/standard/mail.c文件中使用
	char *mail_log;

	zend_bool in_error_log;

#ifdef PHP_WIN32
	zend_bool windows_show_crt_warning;
#endif
};


#endif /* PHP_GLOBALS_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: sw=4 ts=4 fdm=marker
 * vim<600: sw=4 ts=4
 */

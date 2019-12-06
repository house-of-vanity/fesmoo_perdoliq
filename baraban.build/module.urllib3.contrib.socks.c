/* Generated code for Python source for module 'urllib3.contrib.socks'
 * created by Nuitka version 0.6.0
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_urllib3$contrib$socks is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$contrib$socks;
PyDictObject *moduledict_urllib3$contrib$socks;

/* The module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_headers;
static PyObject *const_str_plain_SOCKSHTTPSConnection;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_proxy_url;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_HTTPConnection;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_connection_pool_kw;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_proxy_rdns;
static PyObject *const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple;
static PyObject *const_str_plain_socket_err;
extern PyObject *const_str_plain_num_pools;
extern PyObject *const_str_plain_scheme;
static PyObject *const_str_plain_SOCKSConnection;
extern PyObject *const_str_plain_SocketError;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_HTTPSConnection;
static PyObject *const_str_digest_f78fd7e71ec8b1168658a1182c635393;
extern PyObject *const_tuple_str_chr_58_tuple;
extern PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
static PyObject *const_str_digest_b03980105d8ed0a56e9e14d3250ee347;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_host;
static PyObject *const_str_plain_PROXY_TYPE_SOCKS5;
extern PyObject *const_str_plain_rdns;
extern PyObject *const_str_plain_https;
extern PyObject *const_tuple_str_plain_DependencyWarning_tuple;
extern PyObject *const_str_plain_parse_url;
static PyObject *const_str_digest_2983a94eafe1544a2fb028e71037e164;
static PyObject *const_str_digest_75fb4308a53d1e344eda8ae00b794973;
extern PyObject *const_str_plain_conn;
static PyObject *const_str_plain_socks4;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_tuple_str_plain__socks_options_tuple;
extern PyObject *const_str_plain_DependencyWarning;
extern PyObject *const_str_digest_a93bc1dc732be398b86f8538baa37185;
extern PyObject *const_str_plain_poolmanager;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain__socks_options;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_f72fad5ee1f5fa45bf4f9a22d2727edb;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_digest_2aefadf3d76d6ea1554d4b4c222ace1b;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain_SOCKSHTTPConnectionPool;
extern PyObject *const_tuple_str_plain_error_str_plain_timeout_tuple;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_NewConnectionError;
static PyObject *const_str_plain_proxy_port;
static PyObject *const_str_plain_proxy_username;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple;
extern PyObject *const_str_plain_source_address;
extern PyObject *const_str_plain_HTTPSConnectionPool;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_plain_proxy_addr;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain__new_conn;
static PyObject *const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple;
extern PyObject *const_str_plain_connectionpool;
extern PyObject *const_str_plain_PoolManager;
static PyObject *const_str_digest_0db81917611a5fd74de2cba5c5857df4;
extern PyObject *const_str_plain_proxy_type;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_extra_kw;
extern PyObject *const_str_plain_socks;
static PyObject *const_str_plain_PROXY_TYPE_SOCKS4;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_parsed;
extern PyObject *const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
extern PyObject *const_str_digest_03224f9e3167cae45c1e00020c2975eb;
static PyObject *const_str_digest_eeea122c4ef21297597db82f300a3894;
static PyObject *const_str_plain_proxy_host;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_socks5h;
static PyObject *const_tuple_str_plain_PoolManager_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_d2feb5bdfccf41aa10971180163e4a5d;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_socks4a;
extern PyObject *const_str_plain_socket_options;
extern PyObject *const_str_plain_password;
static PyObject *const_str_plain_socks_version;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_dc47b5c985c62efa64cf26cdf57dd814;
static PyObject *const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple;
extern PyObject *const_str_plain_SOCKSProxyManager;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_SocketTimeout;
static PyObject *const_str_digest_f46252f7edbbe06b2f6f437384187e97;
static PyObject *const_str_plain_proxy_password;
extern PyObject *const_str_plain_auth;
extern PyObject *const_tuple_str_plain_parse_url_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_create_connection;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_socks5;
extern PyObject *const_str_plain_HTTPConnectionPool;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_pool_classes_by_scheme;
extern PyObject *const_str_plain_ConnectionCls;
static PyObject *const_tuple_none_none_int_pos_10_none_tuple;
extern PyObject *const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
static PyObject *const_str_plain_socks_options;
static PyObject *const_str_plain_SOCKSHTTPSConnectionPool;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_SOCKSHTTPSConnection = UNSTREAM_STRING( &constant_bin[ 1481968 ], 20, 1 );
    const_str_plain_proxy_rdns = UNSTREAM_STRING( &constant_bin[ 1481988 ], 10, 1 );
    const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple, 0, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    PyTuple_SET_ITEM( const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple, 1, const_str_plain_NewConnectionError ); Py_INCREF( const_str_plain_NewConnectionError );
    const_str_plain_socket_err = UNSTREAM_STRING( &constant_bin[ 1481998 ], 10, 1 );
    const_str_plain_SOCKSConnection = UNSTREAM_STRING( &constant_bin[ 1482008 ], 15, 1 );
    const_str_digest_f78fd7e71ec8b1168658a1182c635393 = UNSTREAM_STRING( &constant_bin[ 1482023 ], 194, 0 );
    const_str_digest_b03980105d8ed0a56e9e14d3250ee347 = UNSTREAM_STRING( &constant_bin[ 1482217 ], 749, 0 );
    const_str_plain_PROXY_TYPE_SOCKS5 = UNSTREAM_STRING( &constant_bin[ 1482966 ], 17, 1 );
    const_str_digest_2983a94eafe1544a2fb028e71037e164 = UNSTREAM_STRING( &constant_bin[ 1482983 ], 57, 0 );
    const_str_digest_75fb4308a53d1e344eda8ae00b794973 = UNSTREAM_STRING( &constant_bin[ 1483040 ], 71, 0 );
    const_str_plain_socks4 = UNSTREAM_STRING( &constant_bin[ 1483111 ], 6, 1 );
    const_tuple_str_plain__socks_options_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__socks_options_tuple, 0, const_str_plain__socks_options ); Py_INCREF( const_str_plain__socks_options );
    const_str_digest_f72fad5ee1f5fa45bf4f9a22d2727edb = UNSTREAM_STRING( &constant_bin[ 1483117 ], 65, 0 );
    const_str_digest_2aefadf3d76d6ea1554d4b4c222ace1b = UNSTREAM_STRING( &constant_bin[ 1483182 ], 25, 0 );
    const_str_plain_SOCKSHTTPConnectionPool = UNSTREAM_STRING( &constant_bin[ 1483207 ], 23, 1 );
    const_str_plain_proxy_port = UNSTREAM_STRING( &constant_bin[ 1483230 ], 10, 1 );
    const_str_plain_proxy_username = UNSTREAM_STRING( &constant_bin[ 1483240 ], 14, 1 );
    const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple, 0, const_str_plain_HTTPConnection ); Py_INCREF( const_str_plain_HTTPConnection );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple, 1, const_str_plain_HTTPSConnection ); Py_INCREF( const_str_plain_HTTPSConnection );
    const_str_plain_proxy_addr = UNSTREAM_STRING( &constant_bin[ 1483254 ], 10, 1 );
    const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 1, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 2, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 3, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 4, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_str_digest_0db81917611a5fd74de2cba5c5857df4 = UNSTREAM_STRING( &constant_bin[ 1483264 ], 24, 0 );
    const_str_plain_PROXY_TYPE_SOCKS4 = UNSTREAM_STRING( &constant_bin[ 1483288 ], 17, 1 );
    const_str_digest_eeea122c4ef21297597db82f300a3894 = UNSTREAM_STRING( &constant_bin[ 1483305 ], 104, 0 );
    const_str_plain_proxy_host = UNSTREAM_STRING( &constant_bin[ 1472455 ], 10, 1 );
    const_str_plain_socks5h = UNSTREAM_STRING( &constant_bin[ 1483409 ], 7, 1 );
    const_tuple_str_plain_PoolManager_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PoolManager_tuple, 0, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    const_str_digest_d2feb5bdfccf41aa10971180163e4a5d = UNSTREAM_STRING( &constant_bin[ 1483416 ], 41, 0 );
    const_str_plain_socks4a = UNSTREAM_STRING( &constant_bin[ 1483457 ], 7, 1 );
    const_str_plain_socks_version = UNSTREAM_STRING( &constant_bin[ 1483464 ], 13, 1 );
    const_str_digest_dc47b5c985c62efa64cf26cdf57dd814 = UNSTREAM_STRING( &constant_bin[ 1483477 ], 30, 0 );
    const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 1, const_str_plain_proxy_url ); Py_INCREF( const_str_plain_proxy_url );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 2, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 3, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 4, const_str_plain_num_pools ); Py_INCREF( const_str_plain_num_pools );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 5, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 6, const_str_plain_connection_pool_kw ); Py_INCREF( const_str_plain_connection_pool_kw );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 7, const_str_plain_parsed ); Py_INCREF( const_str_plain_parsed );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 8, const_str_plain_split ); Py_INCREF( const_str_plain_split );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 9, const_str_plain_socks_version ); Py_INCREF( const_str_plain_socks_version );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 10, const_str_plain_rdns ); Py_INCREF( const_str_plain_rdns );
    const_str_plain_socks_options = UNSTREAM_STRING( &constant_bin[ 1483507 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 11, const_str_plain_socks_options ); Py_INCREF( const_str_plain_socks_options );
    PyTuple_SET_ITEM( const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 12, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_f46252f7edbbe06b2f6f437384187e97 = UNSTREAM_STRING( &constant_bin[ 1483520 ], 26, 0 );
    const_str_plain_proxy_password = UNSTREAM_STRING( &constant_bin[ 1483546 ], 14, 1 );
    const_str_plain_socks5 = UNSTREAM_STRING( &constant_bin[ 1483409 ], 6, 1 );
    const_tuple_none_none_int_pos_10_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 2, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain_SOCKSHTTPSConnectionPool = UNSTREAM_STRING( &constant_bin[ 1483560 ], 24, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$contrib$socks( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c66510d8b0a3ff44f3582729486b0950;
static PyCodeObject *codeobj_07a94fd7ce17eae1aeb1c260208ead2a;
static PyCodeObject *codeobj_a0fba70b9f712df307fd0c0b87e8c3da;
static PyCodeObject *codeobj_83c454c319c2605519a85ae8de7f5210;
static PyCodeObject *codeobj_753af24db826bdfcf57423f8b4cf4810;
static PyCodeObject *codeobj_33d760c269a1620a47105e33fb2c25b5;
static PyCodeObject *codeobj_bc1487bfaeb48dc48bf81722bb367a1f;
static PyCodeObject *codeobj_a7efd342f2b3275237691080fd9ff37d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_2983a94eafe1544a2fb028e71037e164;
    codeobj_c66510d8b0a3ff44f3582729486b0950 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dc47b5c985c62efa64cf26cdf57dd814, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_07a94fd7ce17eae1aeb1c260208ead2a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSConnection, 59, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_a0fba70b9f712df307fd0c0b87e8c3da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSHTTPConnectionPool, 133, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_83c454c319c2605519a85ae8de7f5210 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSHTTPSConnectionPool, 137, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_753af24db826bdfcf57423f8b4cf4810 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSProxyManager, 141, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_33d760c269a1620a47105e33fb2c25b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 63, const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_bc1487bfaeb48dc48bf81722bb367a1f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 151, const_tuple_0924ff2207fbeb909d8df2176a1e48e7_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_a7efd342f2b3275237691080fd9ff37d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__new_conn, 67, const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_2__new_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_3___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$contrib$socks$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_33d760c269a1620a47105e33fb2c25b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_33d760c269a1620a47105e33fb2c25b5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_33d760c269a1620a47105e33fb2c25b5, codeobj_33d760c269a1620a47105e33fb2c25b5, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_33d760c269a1620a47105e33fb2c25b5 = cache_frame_33d760c269a1620a47105e33fb2c25b5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_33d760c269a1620a47105e33fb2c25b5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_33d760c269a1620a47105e33fb2c25b5 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_assattr_target_1;
    CHECK_OBJECT( par_kwargs );
    tmp_called_instance_1 = par_kwargs;
    frame_33d760c269a1620a47105e33fb2c25b5->m_frame.f_lineno = 64;
    tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain__socks_options_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__socks_options, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_type_name_1 = tmp_mvar_value_1;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    if ( par_args == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_args;
    if ( par_kwargs == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kwargs;
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33d760c269a1620a47105e33fb2c25b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33d760c269a1620a47105e33fb2c25b5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_33d760c269a1620a47105e33fb2c25b5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_33d760c269a1620a47105e33fb2c25b5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_33d760c269a1620a47105e33fb2c25b5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_33d760c269a1620a47105e33fb2c25b5,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        NULL
    );


    // Release cached frame.
    if ( frame_33d760c269a1620a47105e33fb2c25b5 == cache_frame_33d760c269a1620a47105e33fb2c25b5 )
    {
        Py_DECREF( frame_33d760c269a1620a47105e33fb2c25b5 );
    }
    cache_frame_33d760c269a1620a47105e33fb2c25b5 = NULL;

    assertFrameObject( frame_33d760c269a1620a47105e33fb2c25b5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_args );
    par_args = NULL;

    }
    {
    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    }
    {
    goto function_return_exit;
    }
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_args );
    par_args = NULL;

    }
    {
    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    }
    // End of try:
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_1___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_urllib3$contrib$socks$$$function_2__new_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_extra_kw = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_e = NULL;
    PyObject *var_error = NULL;
    struct Nuitka_FrameObject *frame_a7efd342f2b3275237691080fd9ff37d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_a7efd342f2b3275237691080fd9ff37d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = PyDict_New();
    assert( var_extra_kw == NULL );
    var_extra_kw = tmp_assign_source_1;

    }
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a7efd342f2b3275237691080fd9ff37d, codeobj_a7efd342f2b3275237691080fd9ff37d, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a7efd342f2b3275237691080fd9ff37d = cache_frame_a7efd342f2b3275237691080fd9ff37d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a7efd342f2b3275237691080fd9ff37d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a7efd342f2b3275237691080fd9ff37d ) == 2 ); // Frame stack

    // Framed code:
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_attribute_value_1;
    int tmp_truth_name_1;
    CHECK_OBJECT( par_self );
    tmp_source_name_1 = par_self;
    tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_source_address );
    if ( tmp_attribute_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_attribute_value_1 );

        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_attribute_value_1 );
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;
    tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_source_address );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( var_extra_kw == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_extra_kw;
    tmp_ass_subscript_1 = const_str_plain_source_address;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_1:;
    }
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_attribute_value_2;
    int tmp_truth_name_2;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_self;
    tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_socket_options );
    if ( tmp_attribute_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_attribute_value_2 );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_attribute_value_2 );
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_source_name_4;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_2;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_self;
    tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_socket_options );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( var_extra_kw == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = var_extra_kw;
    tmp_ass_subscript_2 = const_str_plain_socket_options;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_2:;
    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_source_name_5;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_source_name_9;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_source_name_10;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_source_name_11;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_source_name_12;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_source_name_13;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_source_name_14;
    PyObject *tmp_dircall_arg4_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_5 = tmp_mvar_value_1;
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_create_connection );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_6 = par_self;
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_host );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_tuple_element_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_7 = par_self;
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_port );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_proxy_type;
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_8 = par_self;
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__socks_options );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = const_str_plain_socks_version;
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 7 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_proxy_addr;
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_9 = par_self;
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__socks_options );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_2 = const_str_plain_proxy_host;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_proxy_port;
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_10 = par_self;
    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__socks_options );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_3 = const_str_plain_proxy_port;
    tmp_dict_value_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_proxy_username;
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_11 = par_self;
    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__socks_options );
    if ( tmp_subscribed_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_4 = const_str_plain_username;
    tmp_dict_value_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_4 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_proxy_password;
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_12 = par_self;
    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__socks_options );
    if ( tmp_subscribed_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_5 = const_str_plain_password;
    tmp_dict_value_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscribed_name_5 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_proxy_rdns;
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_13 = par_self;
    tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__socks_options );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_6 = const_str_plain_rdns;
    tmp_dict_value_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_timeout;
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_14 = par_self;
    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_timeout );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    if ( var_extra_kw == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg4_1 = var_extra_kw;
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_assign_source_2 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_2;

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    }
    {
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a7efd342f2b3275237691080fd9ff37d, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a7efd342f2b3275237691080fd9ff37d, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    }
    {
    // Tried code:
    {
    nuitka_bool tmp_condition_result_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_mvar_value_2;
    tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketTimeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    tmp_compexpr_right_1 = tmp_mvar_value_2;
    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    }
    {
    // Tried code:
    {
    PyObject *tmp_raise_type_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_mvar_value_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_1 = tmp_mvar_value_3;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = par_self;
    tmp_left_name_1 = const_str_digest_03224f9e3167cae45c1e00020c2975eb;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_15 = par_self;
    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_host );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_right_name_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_16 = par_self;
    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_timeout );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    frame_a7efd342f2b3275237691080fd9ff37d->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 92;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_4;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( var_e );
    var_e = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    }
    // End of try:
    }
    goto branch_end_3;
    branch_no_3:;
    {
    nuitka_bool tmp_condition_result_4;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_source_name_17;
    PyObject *tmp_mvar_value_4;
    tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    tmp_source_name_17 = tmp_mvar_value_4;
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ProxyError );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    PyObject *tmp_assign_source_4;
    tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_4;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    }
    {
    // Tried code:
    {
    nuitka_bool tmp_condition_result_5;
    PyObject *tmp_source_name_18;
    PyObject *tmp_attribute_value_3;
    int tmp_truth_name_3;
    CHECK_OBJECT( var_e );
    tmp_source_name_18 = var_e;
    tmp_attribute_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_socket_err );
    if ( tmp_attribute_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_3 );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_attribute_value_3 );

        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_attribute_value_3 );
    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_source_name_19;
    if ( var_e == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_source_name_19 = var_e;
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_socket_err );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    assert( var_error == NULL );
    var_error = tmp_assign_source_5;

    }
    {
    nuitka_bool tmp_condition_result_6;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_mvar_value_5;
    CHECK_OBJECT( var_error );
    tmp_isinstance_inst_1 = var_error;
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout );
    }

    if ( tmp_mvar_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketTimeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_isinstance_cls_1 = tmp_mvar_value_5;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    {
    PyObject *tmp_raise_type_2;
    PyObject *tmp_called_name_2;
    PyObject *tmp_mvar_value_6;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_left_name_2;
    PyObject *tmp_right_name_2;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_mvar_value_6 == NULL ))
    {
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_mvar_value_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_2 = tmp_mvar_value_6;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_3 = par_self;
    tmp_left_name_2 = const_str_digest_03224f9e3167cae45c1e00020c2975eb;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_source_name_20 = par_self;
    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_host );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_right_name_2 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_4 );
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_source_name_21 = par_self;
    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_timeout );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_4 );
    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    frame_a7efd342f2b3275237691080fd9ff37d->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 102;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    }
    goto branch_end_6;
    branch_no_6:;
    {
    PyObject *tmp_raise_type_3;
    PyObject *tmp_called_name_3;
    PyObject *tmp_mvar_value_7;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_left_name_3;
    PyObject *tmp_right_name_3;
    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

    if (unlikely( tmp_mvar_value_7 == NULL ))
    {
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
    }

    if ( tmp_mvar_value_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NewConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_3 = tmp_mvar_value_7;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_5 = par_self;
    tmp_left_name_3 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
    CHECK_OBJECT( var_error );
    tmp_right_name_3 = var_error;
    tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    frame_a7efd342f2b3275237691080fd9ff37d->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 108;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    }
    branch_end_6:;
    }
    goto branch_end_5;
    branch_no_5:;
    {
    PyObject *tmp_raise_type_4;
    PyObject *tmp_called_name_4;
    PyObject *tmp_mvar_value_8;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_left_name_4;
    PyObject *tmp_right_name_4;
    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

    if (unlikely( tmp_mvar_value_8 == NULL ))
    {
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
    }

    if ( tmp_mvar_value_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NewConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_4 = tmp_mvar_value_8;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_7 = par_self;
    tmp_left_name_4 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
    if ( var_e == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_right_name_4 = var_e;
    tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    frame_a7efd342f2b3275237691080fd9ff37d->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 113;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    }
    branch_end_5:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( var_e );
    var_e = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    }
    // End of try:
    }
    goto branch_end_4;
    branch_no_4:;
    {
    nuitka_bool tmp_condition_result_7;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_mvar_value_9;
    tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketError );

    if (unlikely( tmp_mvar_value_9 == NULL ))
    {
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
    }

    if ( tmp_mvar_value_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    tmp_compexpr_right_3 = tmp_mvar_value_9;
    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    {
    PyObject *tmp_assign_source_6;
    tmp_assign_source_6 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_6;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    }
    {
    // Tried code:
    {
    PyObject *tmp_raise_type_5;
    PyObject *tmp_called_name_5;
    PyObject *tmp_mvar_value_10;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_left_name_5;
    PyObject *tmp_right_name_5;
    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

    if (unlikely( tmp_mvar_value_10 == NULL ))
    {
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
    }

    if ( tmp_mvar_value_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NewConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }

    tmp_called_name_5 = tmp_mvar_value_10;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }

    tmp_args_element_name_9 = par_self;
    tmp_left_name_5 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
    CHECK_OBJECT( var_e );
    tmp_right_name_5 = var_e;
    tmp_args_element_name_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }
    frame_a7efd342f2b3275237691080fd9ff37d->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_raise_type_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }
    exception_type = tmp_raise_type_5;
    exception_lineno = 119;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_6;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( var_e );
    var_e = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    }
    // End of try:
    }
    goto branch_end_7;
    branch_no_7:;
    {
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 78;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a7efd342f2b3275237691080fd9ff37d->m_frame) frame_a7efd342f2b3275237691080fd9ff37d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    }
    branch_end_7:;
    }
    branch_end_4:;
    }
    branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    }
    // End of try:
    }
    // End of try:
    try_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7efd342f2b3275237691080fd9ff37d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7efd342f2b3275237691080fd9ff37d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a7efd342f2b3275237691080fd9ff37d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a7efd342f2b3275237691080fd9ff37d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a7efd342f2b3275237691080fd9ff37d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7efd342f2b3275237691080fd9ff37d,
        type_description_1,
        par_self,
        var_extra_kw,
        var_conn,
        var_e,
        var_error
    );


    // Release cached frame.
    if ( frame_a7efd342f2b3275237691080fd9ff37d == cache_frame_a7efd342f2b3275237691080fd9ff37d )
    {
        Py_DECREF( frame_a7efd342f2b3275237691080fd9ff37d );
    }
    cache_frame_a7efd342f2b3275237691080fd9ff37d = NULL;

    assertFrameObject( frame_a7efd342f2b3275237691080fd9ff37d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
    CHECK_OBJECT( var_conn );
    tmp_return_value = var_conn;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    }
    {
    Py_XDECREF( var_conn );
    var_conn = NULL;

    }
    {
    goto function_return_exit;
    }
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    }
    {
    Py_XDECREF( var_e );
    var_e = NULL;

    }
    {
    Py_XDECREF( var_error );
    var_error = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    }
    // End of try:
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_urllib3$contrib$socks$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_proxy_url = python_pars[ 1 ];
    PyObject *par_username = python_pars[ 2 ];
    PyObject *par_password = python_pars[ 3 ];
    PyObject *par_num_pools = python_pars[ 4 ];
    PyObject *par_headers = python_pars[ 5 ];
    PyObject *par_connection_pool_kw = python_pars[ 6 ];
    PyObject *var_parsed = NULL;
    PyObject *var_split = NULL;
    PyObject *var_socks_version = NULL;
    PyObject *var_rdns = NULL;
    PyObject *var_socks_options = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bc1487bfaeb48dc48bf81722bb367a1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bc1487bfaeb48dc48bf81722bb367a1f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc1487bfaeb48dc48bf81722bb367a1f, codeobj_bc1487bfaeb48dc48bf81722bb367a1f, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bc1487bfaeb48dc48bf81722bb367a1f = cache_frame_bc1487bfaeb48dc48bf81722bb367a1f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc1487bfaeb48dc48bf81722bb367a1f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc1487bfaeb48dc48bf81722bb367a1f ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_args_element_name_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_parse_url );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = tmp_mvar_value_1;
    CHECK_OBJECT( par_proxy_url );
    tmp_args_element_name_1 = par_proxy_url;
    frame_bc1487bfaeb48dc48bf81722bb367a1f->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_parsed == NULL );
    var_parsed = tmp_assign_source_1;

    }
    {
    nuitka_bool tmp_condition_result_1;
    int tmp_and_left_truth_1;
    nuitka_bool tmp_and_left_value_1;
    nuitka_bool tmp_and_right_value_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_and_left_truth_2;
    nuitka_bool tmp_and_left_value_2;
    nuitka_bool tmp_and_right_value_2;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_source_name_1;
    if ( par_username == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = par_username;
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    if ( par_password == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = par_password;
    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    if ( var_parsed == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = var_parsed;
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_auth );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = Py_None;
    tmp_and_right_value_2 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_compexpr_left_3 );
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_condition_result_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_condition_result_1 = tmp_and_left_value_1;
    and_end_1:;
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_source_name_2;
    if ( var_parsed == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = var_parsed;
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_auth );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    frame_bc1487bfaeb48dc48bf81722bb367a1f->m_frame.f_lineno = 156;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_split == NULL );
    var_split = tmp_assign_source_2;

    }
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_len_arg_1;
    CHECK_OBJECT( var_split );
    tmp_len_arg_1 = var_split;
    tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_int_pos_2;
    tmp_res = RICH_COMPARE_BOOL_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_3;
    PyObject *tmp_iter_arg_1;
    if ( var_split == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "split" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "ooooooooooooN";
        goto try_except_handler_2;
    }

    tmp_iter_arg_1 = var_split;
    tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ooooooooooooN";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_4;
    PyObject *tmp_unpack_1;
    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooooooooooN";
        exception_lineno = 158;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;

    }
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_unpack_2;
    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooooooooooN";
        exception_lineno = 158;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;

    }
    {
    PyObject *tmp_iterator_name_1;
    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooN";
                exception_lineno = 158;
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooN";
        exception_lineno = 158;
        goto try_except_handler_3;
    }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    }
    // End of try:
    try_end_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    }
    {
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_2:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    }
    {
    PyObject *tmp_assign_source_6;
    CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
    {
        PyObject *old = par_username;
        par_username = tmp_assign_source_6;
        Py_INCREF( par_username );
        Py_XDECREF( old );
    }

    }
    {
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    }
    {
    PyObject *tmp_assign_source_7;
    CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
    {
        PyObject *old = par_password;
        par_password = tmp_assign_source_7;
        Py_INCREF( par_password );
        Py_XDECREF( old );
    }

    }
    {
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    }
    branch_no_2:;
    }
    branch_no_1:;
    }
    {
    nuitka_bool tmp_condition_result_3;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_source_name_3;
    if ( var_parsed == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = var_parsed;
    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_scheme );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = const_str_plain_socks5;
    tmp_res = RICH_COMPARE_BOOL_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_source_name_4;
    PyObject *tmp_mvar_value_2;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = tmp_mvar_value_2;
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PROXY_TYPE_SOCKS5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_socks_version == NULL );
    var_socks_version = tmp_assign_source_8;

    }
    {
    PyObject *tmp_assign_source_9;
    tmp_assign_source_9 = Py_False;
    assert( var_rdns == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_rdns = tmp_assign_source_9;

    }
    goto branch_end_3;
    branch_no_3:;
    {
    nuitka_bool tmp_condition_result_4;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_source_name_5;
    if ( var_parsed == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = var_parsed;
    tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_scheme );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_6 = const_str_plain_socks5h;
    tmp_res = RICH_COMPARE_BOOL_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    PyObject *tmp_assign_source_10;
    PyObject *tmp_source_name_6;
    PyObject *tmp_mvar_value_3;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = tmp_mvar_value_3;
    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_PROXY_TYPE_SOCKS5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_socks_version == NULL );
    var_socks_version = tmp_assign_source_10;

    }
    {
    PyObject *tmp_assign_source_11;
    tmp_assign_source_11 = Py_True;
    assert( var_rdns == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_rdns = tmp_assign_source_11;

    }
    goto branch_end_4;
    branch_no_4:;
    {
    nuitka_bool tmp_condition_result_5;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_source_name_7;
    if ( var_parsed == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = var_parsed;
    tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_scheme );
    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_7 = const_str_plain_socks4;
    tmp_res = RICH_COMPARE_BOOL_EQ( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    {
    PyObject *tmp_assign_source_12;
    PyObject *tmp_source_name_8;
    PyObject *tmp_mvar_value_4;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = tmp_mvar_value_4;
    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_PROXY_TYPE_SOCKS4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_socks_version == NULL );
    var_socks_version = tmp_assign_source_12;

    }
    {
    PyObject *tmp_assign_source_13;
    tmp_assign_source_13 = Py_False;
    assert( var_rdns == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_rdns = tmp_assign_source_13;

    }
    goto branch_end_5;
    branch_no_5:;
    {
    nuitka_bool tmp_condition_result_6;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_right_8;
    PyObject *tmp_source_name_9;
    if ( var_parsed == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = var_parsed;
    tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_scheme );
    if ( tmp_compexpr_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_8 = const_str_plain_socks4a;
    tmp_res = RICH_COMPARE_BOOL_EQ( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    Py_DECREF( tmp_compexpr_left_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    {
    PyObject *tmp_assign_source_14;
    PyObject *tmp_source_name_10;
    PyObject *tmp_mvar_value_5;
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_mvar_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = tmp_mvar_value_5;
    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_PROXY_TYPE_SOCKS4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_socks_version == NULL );
    var_socks_version = tmp_assign_source_14;

    }
    {
    PyObject *tmp_assign_source_15;
    tmp_assign_source_15 = Py_True;
    assert( var_rdns == NULL );
    Py_INCREF( tmp_assign_source_15 );
    var_rdns = tmp_assign_source_15;

    }
    goto branch_end_6;
    branch_no_6:;
    {
    PyObject *tmp_raise_type_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    tmp_left_name_1 = const_str_digest_d2feb5bdfccf41aa10971180163e4a5d;
    if ( par_proxy_url == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = par_proxy_url;
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    frame_bc1487bfaeb48dc48bf81722bb367a1f->m_frame.f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 172;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
    }
    branch_end_6:;
    }
    branch_end_5:;
    }
    branch_end_4:;
    }
    branch_end_3:;
    }
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    if ( par_proxy_url == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = par_proxy_url;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_proxy_url, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assign_source_16;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_source_name_11;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_source_name_12;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_6;
    tmp_dict_key_1 = const_str_plain_socks_version;
    if ( var_socks_version == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socks_version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = var_socks_version;
    tmp_assign_source_16 = _PyDict_NewPresized( 6 );
    tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_proxy_host;
    if ( var_parsed == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = var_parsed;
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_host );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        exception_lineno = 180;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_proxy_port;
    if ( var_parsed == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = var_parsed;
    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_port );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        exception_lineno = 181;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_username;
    if ( par_username == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = par_username;
    tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_password;
    if ( par_password == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = par_password;
    tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_rdns;
    if ( var_rdns == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rdns" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = var_rdns;
    tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    assert( var_socks_options == NULL );
    var_socks_options = tmp_assign_source_16;

    }
    {
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    CHECK_OBJECT( var_socks_options );
    tmp_ass_subvalue_1 = var_socks_options;
    if ( par_connection_pool_kw == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection_pool_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = par_connection_pool_kw;
    tmp_ass_subscript_1 = const_str_plain__socks_options;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_source_name_13;
    PyObject *tmp_type_name_1;
    PyObject *tmp_mvar_value_6;
    PyObject *tmp_object_name_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_dircall_arg3_1;
    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );

    if (unlikely( tmp_mvar_value_6 == NULL ))
    {
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );
    }

    if ( tmp_mvar_value_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_type_name_1 = tmp_mvar_value_6;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;
    tmp_source_name_13 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    if ( par_num_pools == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "num_pools" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_num_pools;
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    if ( par_headers == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_headers;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    if ( par_connection_pool_kw == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection_pool_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_connection_pool_kw;
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_5_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    }
    {
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_source_name_14;
    PyObject *tmp_mvar_value_7;
    PyObject *tmp_assattr_target_2;
    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );

    if (unlikely( tmp_mvar_value_7 == NULL ))
    {
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );
    }

    if ( tmp_mvar_value_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = tmp_mvar_value_7;
    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_pool_classes_by_scheme );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pool_classes_by_scheme, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooooooooooN";
        goto frame_exception_exit_1;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc1487bfaeb48dc48bf81722bb367a1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc1487bfaeb48dc48bf81722bb367a1f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc1487bfaeb48dc48bf81722bb367a1f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc1487bfaeb48dc48bf81722bb367a1f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc1487bfaeb48dc48bf81722bb367a1f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc1487bfaeb48dc48bf81722bb367a1f,
        type_description_1,
        par_self,
        par_proxy_url,
        par_username,
        par_password,
        par_num_pools,
        par_headers,
        par_connection_pool_kw,
        var_parsed,
        var_split,
        var_socks_version,
        var_rdns,
        var_socks_options,
        NULL
    );


    // Release cached frame.
    if ( frame_bc1487bfaeb48dc48bf81722bb367a1f == cache_frame_bc1487bfaeb48dc48bf81722bb367a1f )
    {
        Py_DECREF( frame_bc1487bfaeb48dc48bf81722bb367a1f );
    }
    cache_frame_bc1487bfaeb48dc48bf81722bb367a1f = NULL;

    assertFrameObject( frame_bc1487bfaeb48dc48bf81722bb367a1f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_proxy_url );
    par_proxy_url = NULL;

    }
    {
    Py_XDECREF( par_username );
    par_username = NULL;

    }
    {
    Py_XDECREF( par_password );
    par_password = NULL;

    }
    {
    Py_XDECREF( par_num_pools );
    par_num_pools = NULL;

    }
    {
    Py_XDECREF( par_headers );
    par_headers = NULL;

    }
    {
    Py_XDECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

    }
    {
    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    }
    {
    Py_XDECREF( var_split );
    var_split = NULL;

    }
    {
    Py_XDECREF( var_socks_version );
    var_socks_version = NULL;

    }
    {
    Py_XDECREF( var_rdns );
    var_rdns = NULL;

    }
    {
    Py_XDECREF( var_socks_options );
    var_socks_options = NULL;

    }
    {
    goto function_return_exit;
    }
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_proxy_url );
    par_proxy_url = NULL;

    }
    {
    Py_XDECREF( par_username );
    par_username = NULL;

    }
    {
    Py_XDECREF( par_password );
    par_password = NULL;

    }
    {
    Py_XDECREF( par_num_pools );
    par_num_pools = NULL;

    }
    {
    Py_XDECREF( par_headers );
    par_headers = NULL;

    }
    {
    Py_XDECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

    }
    {
    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    }
    {
    Py_XDECREF( var_split );
    var_split = NULL;

    }
    {
    Py_XDECREF( var_socks_version );
    var_socks_version = NULL;

    }
    {
    Py_XDECREF( var_rdns );
    var_rdns = NULL;

    }
    {
    Py_XDECREF( var_socks_options );
    var_socks_options = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    }
    // End of try:
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_3___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$socks$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_0db81917611a5fd74de2cba5c5857df4,
#endif
        codeobj_33d760c269a1620a47105e33fb2c25b5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$socks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_2__new_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$socks$$$function_2__new_conn,
        const_str_plain__new_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_2aefadf3d76d6ea1554d4b4c222ace1b,
#endif
        codeobj_a7efd342f2b3275237691080fd9ff37d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$socks,
        const_str_digest_f72fad5ee1f5fa45bf4f9a22d2727edb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_3___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$socks$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_f46252f7edbbe06b2f6f437384187e97,
#endif
        codeobj_bc1487bfaeb48dc48bf81722bb367a1f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$socks,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$contrib$socks =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.contrib.socks",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;

extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( urllib3$contrib$socks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$contrib$socks );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.socks: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.socks: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.socks: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$contrib$socks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$contrib$socks = Py_InitModule4(
        "urllib3.contrib.socks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$contrib$socks = PyModule_Create( &mdef_urllib3$contrib$socks );
#endif

    moduledict_urllib3$contrib$socks = MODULE_DICT( module_urllib3$contrib$socks );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$contrib$socks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$socks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$socks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$contrib$socks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d0cac7c67d1189a986b25b7cf105347d, module_urllib3$contrib$socks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_c66510d8b0a3ff44f3582729486b0950;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$contrib$socks_59 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_07a94fd7ce17eae1aeb1c260208ead2a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_07a94fd7ce17eae1aeb1c260208ead2a_2 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_urllib3$contrib$socks_129 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_urllib3$contrib$socks_133 = NULL;
    struct Nuitka_FrameObject *frame_a0fba70b9f712df307fd0c0b87e8c3da_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a0fba70b9f712df307fd0c0b87e8c3da_3 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_urllib3$contrib$socks_137 = NULL;
    struct Nuitka_FrameObject *frame_83c454c319c2605519a85ae8de7f5210_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_83c454c319c2605519a85ae8de7f5210_4 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_urllib3$contrib$socks_141 = NULL;
    struct Nuitka_FrameObject *frame_753af24db826bdfcf57423f8b4cf4810_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_753af24db826bdfcf57423f8b4cf4810_5 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = const_str_digest_b03980105d8ed0a56e9e14d3250ee347;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_2983a94eafe1544a2fb028e71037e164;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_c66510d8b0a3ff44f3582729486b0950 = MAKE_MODULE_FRAME( codeobj_c66510d8b0a3ff44f3582729486b0950, module_urllib3$contrib$socks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c66510d8b0a3ff44f3582729486b0950 );
    assert( Py_REFCNT( frame_c66510d8b0a3ff44f3582729486b0950 ) == 2 );

    // Framed code:
    {
    PyObject *tmp_assign_source_4;
    PyObject *tmp_import_name_from_1;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 24;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_name_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_level_name_1;
    tmp_name_name_1 = const_str_plain_socks;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 27;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks, tmp_assign_source_5 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    }
    {
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c66510d8b0a3ff44f3582729486b0950, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c66510d8b0a3ff44f3582729486b0950, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    }
    {
    // Tried code:
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compexpr_right_1 = PyExc_ImportError;
    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_2;
    }
    tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_name_name_2;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_level_name_2;
    tmp_name_name_2 = const_str_plain_warnings;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 29;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_level_name_3;
    tmp_name_name_3 = const_str_plain_exceptions;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_DependencyWarning_tuple;
    tmp_level_name_3 = const_int_pos_2;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 30;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_DependencyWarning,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DependencyWarning );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_DependencyWarning, tmp_assign_source_7 );
    }
    {
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_mvar_value_2;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;

        goto try_except_handler_2;
    }

    tmp_source_name_1 = tmp_mvar_value_1;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = const_str_digest_f78fd7e71ec8b1168658a1182c635393;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_DependencyWarning );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DependencyWarning );
    }

    if ( tmp_mvar_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DependencyWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;

        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = tmp_mvar_value_2;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    }
    {
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 39;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c66510d8b0a3ff44f3582729486b0950->m_frame) frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 26;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c66510d8b0a3ff44f3582729486b0950->m_frame) frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    }
    branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    }
    // End of try:
    }
    // End of try:
    try_end_1:;
    }
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_name_name_4;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_level_name_4;
    tmp_name_name_4 = const_str_plain_socket;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_error_str_plain_timeout_tuple;
    tmp_level_name_4 = const_int_0;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 41;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_9;
    PyObject *tmp_import_name_from_3;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_3 = tmp_import_from_1__module;
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_error );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_9 );
    }
    {
    PyObject *tmp_assign_source_10;
    PyObject *tmp_import_name_from_4;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_4 = tmp_import_from_1__module;
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_timeout );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketTimeout, tmp_assign_source_10 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_2:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    }
    {
    PyObject *tmp_assign_source_11;
    PyObject *tmp_name_name_5;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_level_name_5;
    tmp_name_name_5 = const_str_plain_connection;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple;
    tmp_level_name_5 = const_int_pos_2;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 43;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_12;
    PyObject *tmp_import_name_from_5;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_5 = tmp_import_from_2__module;
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_HTTPConnection,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HTTPConnection );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnection, tmp_assign_source_12 );
    }
    {
    PyObject *tmp_assign_source_13;
    PyObject *tmp_import_name_from_6;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_6 = tmp_import_from_2__module;
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_HTTPSConnection,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_HTTPSConnection );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_13 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_3:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    }
    {
    PyObject *tmp_assign_source_14;
    PyObject *tmp_name_name_6;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_level_name_6;
    tmp_name_name_6 = const_str_plain_connectionpool;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
    tmp_level_name_6 = const_int_pos_2;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 46;
    tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_14;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_15;
    PyObject *tmp_import_name_from_7;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_7 = tmp_import_from_3__module;
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_HTTPConnectionPool,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_HTTPConnectionPool );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool, tmp_assign_source_15 );
    }
    {
    PyObject *tmp_assign_source_16;
    PyObject *tmp_import_name_from_8;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_8 = tmp_import_from_3__module;
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_HTTPSConnectionPool,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_HTTPSConnectionPool );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool, tmp_assign_source_16 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_4:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    }
    {
    PyObject *tmp_assign_source_17;
    PyObject *tmp_name_name_7;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_level_name_7;
    tmp_name_name_7 = const_str_plain_exceptions;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple;
    tmp_level_name_7 = const_int_pos_2;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 49;
    tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_17;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_18;
    PyObject *tmp_import_name_from_9;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_9 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_ConnectTimeoutError,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_18 );
    }
    {
    PyObject *tmp_assign_source_19;
    PyObject *tmp_import_name_from_10;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_10 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain_NewConnectionError,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_NewConnectionError );
    }

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_19 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_5:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    }
    {
    PyObject *tmp_assign_source_20;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_name_name_8;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_level_name_8;
    tmp_name_name_8 = const_str_plain_poolmanager;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_PoolManager_tuple;
    tmp_level_name_8 = const_int_pos_2;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 50;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_PoolManager,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_PoolManager );
    }

    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_20 );
    }
    {
    PyObject *tmp_assign_source_21;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_name_name_9;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_level_name_9;
    tmp_name_name_9 = const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
    tmp_globals_name_9 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_parse_url_tuple;
    tmp_level_name_9 = const_int_pos_2;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 51;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_12 ) )
    {
       tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_12,
            (PyObject *)MODULE_DICT(tmp_import_name_from_12),
            const_str_plain_parse_url,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_parse_url );
    }

    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_21 );
    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_22;
    PyObject *tmp_name_name_10;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_level_name_10;
    tmp_name_name_10 = const_str_plain_ssl;
    tmp_globals_name_10 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = Py_None;
    tmp_level_name_10 = const_int_0;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 54;
    tmp_assign_source_22 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_22 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    }
    {
    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_c66510d8b0a3ff44f3582729486b0950, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_c66510d8b0a3ff44f3582729486b0950, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    }
    {
    // Tried code:
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_2;
    tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_compexpr_right_2 = PyExc_ImportError;
    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    PyObject *tmp_assign_source_23;
    tmp_assign_source_23 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_23 );
    }
    goto branch_end_2;
    branch_no_2:;
    {
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 53;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c66510d8b0a3ff44f3582729486b0950->m_frame) frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_8;
    }
    branch_end_2:;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_7:;
    }
    {
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    }
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;
    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_24;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_mvar_value_3;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnection );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;

        goto try_except_handler_9;
    }

    tmp_tuple_element_1 = tmp_mvar_value_3;
    tmp_assign_source_24 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_24;

    }
    {
    PyObject *tmp_assign_source_25;
    PyObject *tmp_dircall_arg1_1;
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_25 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_25;

    }
    {
    PyObject *tmp_assign_source_26;
    tmp_assign_source_26 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;

    }
    {
    PyObject *tmp_assign_source_27;
    PyObject *tmp_metaclass_name_1;
    nuitka_bool tmp_condition_result_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_key_name_2;
    nuitka_bool tmp_condition_result_4;
    int tmp_truth_name_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_bases_name_1;
    tmp_key_name_1 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_bases_name_1 = tmp_class_creation_1__bases;
    tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_27;

    }
    {
    nuitka_bool tmp_condition_result_5;
    PyObject *tmp_key_name_3;
    PyObject *tmp_dict_name_3;
    tmp_key_name_3 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    {
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    }
    branch_no_3:;
    }
    {
    nuitka_bool tmp_condition_result_6;
    PyObject *tmp_source_name_2;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_source_name_2 = tmp_class_creation_1__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_2, const_str_plain___prepare__ );
    tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    PyObject *tmp_assign_source_28;
    PyObject *tmp_called_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_kw_name_1;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_source_name_3 = tmp_class_creation_1__metaclass;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    tmp_tuple_element_2 = const_str_plain_SOCKSConnection;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 59;
    tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_28;

    }
    {
    nuitka_bool tmp_condition_result_7;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_source_name_4;
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_source_name_4 = tmp_class_creation_1__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___getitem__ );
    tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    {
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_source_name_5;
    PyObject *tmp_type_arg_2;
    tmp_raise_type_1 = PyExc_TypeError;
    tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
    tmp_getattr_attr_1 = const_str_plain___name__;
    tmp_getattr_default_1 = const_str_angle_metaclass;
    tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    tmp_right_name_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_type_arg_2 = tmp_class_creation_1__prepared;
    tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( !(tmp_source_name_5 == NULL) );
    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 59;

        goto try_except_handler_9;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_raise_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 59;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_9;
    }
    branch_no_5:;
    }
    goto branch_end_4;
    branch_no_4:;
    {
    PyObject *tmp_assign_source_29;
    tmp_assign_source_29 = PyDict_New();
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_29;

    }
    branch_end_4:;
    }
    {
    PyObject *tmp_assign_source_30;
    {
    PyObject *tmp_set_locals_1;
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_set_locals_1 = tmp_class_creation_1__prepared;
    locals_urllib3$contrib$socks_59 = tmp_set_locals_1;
    Py_INCREF( tmp_set_locals_1 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_59, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_11;
    }
    }
    {
    tmp_dictset_value = const_str_digest_75fb4308a53d1e344eda8ae00b794973;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_59, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_11;
    }
    }
    {
    tmp_dictset_value = const_str_plain_SOCKSConnection;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_59, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_11;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_07a94fd7ce17eae1aeb1c260208ead2a_2, codeobj_07a94fd7ce17eae1aeb1c260208ead2a, module_urllib3$contrib$socks, sizeof(void *) );
    frame_07a94fd7ce17eae1aeb1c260208ead2a_2 = cache_frame_07a94fd7ce17eae1aeb1c260208ead2a_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_07a94fd7ce17eae1aeb1c260208ead2a_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_07a94fd7ce17eae1aeb1c260208ead2a_2 ) == 2 ); // Frame stack

    // Framed code:
    {
    tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$socks$$$function_1___init__(  );



    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_59, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$socks$$$function_2__new_conn(  );



    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_59, const_str_plain__new_conn, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_07a94fd7ce17eae1aeb1c260208ead2a_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_07a94fd7ce17eae1aeb1c260208ead2a_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_07a94fd7ce17eae1aeb1c260208ead2a_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_07a94fd7ce17eae1aeb1c260208ead2a_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_07a94fd7ce17eae1aeb1c260208ead2a_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_07a94fd7ce17eae1aeb1c260208ead2a_2,
        type_description_2,
        outline_0_var___class__
    );


    // Release cached frame.
    if ( frame_07a94fd7ce17eae1aeb1c260208ead2a_2 == cache_frame_07a94fd7ce17eae1aeb1c260208ead2a_2 )
    {
        Py_DECREF( frame_07a94fd7ce17eae1aeb1c260208ead2a_2 );
    }
    cache_frame_07a94fd7ce17eae1aeb1c260208ead2a_2 = NULL;

    assertFrameObject( frame_07a94fd7ce17eae1aeb1c260208ead2a_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_11;
    skip_nested_handling_1:;
    {
    nuitka_bool tmp_condition_result_8;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_3;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_compexpr_left_3 = tmp_class_creation_1__bases;
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_compexpr_right_3 = tmp_class_creation_1__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_11;
    }
    tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    {
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_dictset_value = tmp_class_creation_1__bases_orig;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_59, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_11;
    }
    }
    branch_no_6:;
    }
    {
    PyObject *tmp_assign_source_31;
    PyObject *tmp_called_name_3;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_kw_name_2;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_called_name_3 = tmp_class_creation_1__metaclass;
    tmp_tuple_element_4 = const_str_plain_SOCKSConnection;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_4 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_urllib3$contrib$socks_59;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 59;
    tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_11;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_31;

    }
    {
    CHECK_OBJECT( outline_0_var___class__ );
    tmp_assign_source_30 = outline_0_var___class__;
    Py_INCREF( tmp_assign_source_30 );
    goto try_return_handler_11;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    {
    Py_DECREF( locals_urllib3$contrib$socks_59 );
    locals_urllib3$contrib$socks_59 = NULL;
    }
    {
    goto try_return_handler_10;
    }
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_urllib3$contrib$socks_59 );
    locals_urllib3$contrib$socks_59 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    {
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    }
    {
    goto outline_result_1;
    }
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto outline_exception_1;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 59;
    goto try_except_handler_9;
    outline_result_1:;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection, tmp_assign_source_30 );
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_8:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_32;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_mvar_value_4;
    PyObject *tmp_mvar_value_5;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;

        goto try_except_handler_12;
    }

    tmp_tuple_element_5 = tmp_mvar_value_4;
    tmp_assign_source_32 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_5 );
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );
    }

    if ( tmp_mvar_value_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPSConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;

        goto try_except_handler_12;
    }

    tmp_tuple_element_5 = tmp_mvar_value_5;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_32, 1, tmp_tuple_element_5 );
    assert( tmp_class_creation_2__bases_orig == NULL );
    tmp_class_creation_2__bases_orig = tmp_assign_source_32;

    }
    {
    PyObject *tmp_assign_source_33;
    PyObject *tmp_dircall_arg1_2;
    CHECK_OBJECT( tmp_class_creation_2__bases_orig );
    tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_33 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_33;

    }
    {
    PyObject *tmp_assign_source_34;
    tmp_assign_source_34 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_34;

    }
    {
    PyObject *tmp_assign_source_35;
    PyObject *tmp_metaclass_name_2;
    nuitka_bool tmp_condition_result_9;
    PyObject *tmp_key_name_4;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_key_name_5;
    nuitka_bool tmp_condition_result_10;
    int tmp_truth_name_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_bases_name_2;
    tmp_key_name_4 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    tmp_condition_result_10 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_4:;
    condexpr_end_3:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_bases_name_2 = tmp_class_creation_2__bases;
    tmp_assign_source_35 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_35;

    }
    {
    nuitka_bool tmp_condition_result_11;
    PyObject *tmp_key_name_6;
    PyObject *tmp_dict_name_6;
    tmp_key_name_6 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    {
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    }
    branch_no_7:;
    }
    {
    nuitka_bool tmp_condition_result_12;
    PyObject *tmp_source_name_6;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_source_name_6 = tmp_class_creation_2__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___prepare__ );
    tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    {
    PyObject *tmp_assign_source_36;
    PyObject *tmp_called_name_4;
    PyObject *tmp_source_name_7;
    PyObject *tmp_args_name_3;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_kw_name_3;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_source_name_7 = tmp_class_creation_2__metaclass;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    tmp_tuple_element_6 = const_str_plain_SOCKSHTTPSConnection;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_tuple_element_6 = tmp_class_creation_2__bases;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 129;
    tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_36;

    }
    {
    nuitka_bool tmp_condition_result_13;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_source_name_8;
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_source_name_8 = tmp_class_creation_2__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_8, const_str_plain___getitem__ );
    tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    tmp_condition_result_13 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    {
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_value_2;
    PyObject *tmp_left_name_2;
    PyObject *tmp_right_name_2;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_source_name_9;
    PyObject *tmp_type_arg_4;
    tmp_raise_type_2 = PyExc_TypeError;
    tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
    tmp_getattr_attr_2 = const_str_plain___name__;
    tmp_getattr_default_2 = const_str_angle_metaclass;
    tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    tmp_right_name_2 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_type_arg_4 = tmp_class_creation_2__prepared;
    tmp_source_name_9 = BUILTIN_TYPE1( tmp_type_arg_4 );
    assert( !(tmp_source_name_9 == NULL) );
    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 129;

        goto try_except_handler_12;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
    tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_raise_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_value = tmp_raise_value_2;
    exception_lineno = 129;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_12;
    }
    branch_no_9:;
    }
    goto branch_end_8;
    branch_no_8:;
    {
    PyObject *tmp_assign_source_37;
    tmp_assign_source_37 = PyDict_New();
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_37;

    }
    branch_end_8:;
    }
    {
    PyObject *tmp_assign_source_38;
    {
    PyObject *tmp_set_locals_2;
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_set_locals_2 = tmp_class_creation_2__prepared;
    locals_urllib3$contrib$socks_129 = tmp_set_locals_2;
    Py_INCREF( tmp_set_locals_2 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_129, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_14;
    }
    }
    {
    tmp_dictset_value = const_str_plain_SOCKSHTTPSConnection;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_129, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_14;
    }
    }
    {
    nuitka_bool tmp_condition_result_14;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_4;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_compexpr_left_4 = tmp_class_creation_2__bases;
    CHECK_OBJECT( tmp_class_creation_2__bases_orig );
    tmp_compexpr_right_4 = tmp_class_creation_2__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_14;
    }
    tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    {
    CHECK_OBJECT( tmp_class_creation_2__bases_orig );
    tmp_dictset_value = tmp_class_creation_2__bases_orig;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_129, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_14;
    }
    }
    branch_no_10:;
    }
    {
    PyObject *tmp_assign_source_39;
    PyObject *tmp_called_name_5;
    PyObject *tmp_args_name_4;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_kw_name_4;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_called_name_5 = tmp_class_creation_2__metaclass;
    tmp_tuple_element_8 = const_str_plain_SOCKSHTTPSConnection;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_tuple_element_8 = tmp_class_creation_2__bases;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_urllib3$contrib$socks_129;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 129;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_14;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_39;

    }
    {
    CHECK_OBJECT( outline_1_var___class__ );
    tmp_assign_source_38 = outline_1_var___class__;
    Py_INCREF( tmp_assign_source_38 );
    goto try_return_handler_14;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    {
    Py_DECREF( locals_urllib3$contrib$socks_129 );
    locals_urllib3$contrib$socks_129 = NULL;
    }
    {
    goto try_return_handler_13;
    }
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_urllib3$contrib$socks_129 );
    locals_urllib3$contrib$socks_129 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_13;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    {
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    }
    {
    goto outline_result_2;
    }
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_2;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 129;
    goto try_except_handler_12;
    outline_result_2:;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnection, tmp_assign_source_38 );
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_9:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_40;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_mvar_value_6;
    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );

    if (unlikely( tmp_mvar_value_6 == NULL ))
    {
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );
    }

    if ( tmp_mvar_value_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPConnectionPool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;

        goto try_except_handler_15;
    }

    tmp_tuple_element_9 = tmp_mvar_value_6;
    tmp_assign_source_40 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_3__bases_orig == NULL );
    tmp_class_creation_3__bases_orig = tmp_assign_source_40;

    }
    {
    PyObject *tmp_assign_source_41;
    PyObject *tmp_dircall_arg1_3;
    CHECK_OBJECT( tmp_class_creation_3__bases_orig );
    tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_41 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_41;

    }
    {
    PyObject *tmp_assign_source_42;
    tmp_assign_source_42 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_42;

    }
    {
    PyObject *tmp_assign_source_43;
    PyObject *tmp_metaclass_name_3;
    nuitka_bool tmp_condition_result_15;
    PyObject *tmp_key_name_7;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_key_name_8;
    nuitka_bool tmp_condition_result_16;
    int tmp_truth_name_3;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_bases_name_3;
    tmp_key_name_7 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    tmp_condition_result_16 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_6:;
    condexpr_end_5:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_bases_name_3 = tmp_class_creation_3__bases;
    tmp_assign_source_43 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_43;

    }
    {
    nuitka_bool tmp_condition_result_17;
    PyObject *tmp_key_name_9;
    PyObject *tmp_dict_name_9;
    tmp_key_name_9 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    {
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    }
    branch_no_11:;
    }
    {
    nuitka_bool tmp_condition_result_18;
    PyObject *tmp_source_name_10;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_source_name_10 = tmp_class_creation_3__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_10, const_str_plain___prepare__ );
    tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    {
    PyObject *tmp_assign_source_44;
    PyObject *tmp_called_name_6;
    PyObject *tmp_source_name_11;
    PyObject *tmp_args_name_5;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_kw_name_5;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_source_name_11 = tmp_class_creation_3__metaclass;
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    tmp_tuple_element_10 = const_str_plain_SOCKSHTTPConnectionPool;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_tuple_element_10 = tmp_class_creation_3__bases;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 133;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_44;

    }
    {
    nuitka_bool tmp_condition_result_19;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_source_name_12;
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_source_name_12 = tmp_class_creation_3__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_12, const_str_plain___getitem__ );
    tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    tmp_condition_result_19 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    {
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_value_3;
    PyObject *tmp_left_name_3;
    PyObject *tmp_right_name_3;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_getattr_target_3;
    PyObject *tmp_getattr_attr_3;
    PyObject *tmp_getattr_default_3;
    PyObject *tmp_source_name_13;
    PyObject *tmp_type_arg_6;
    tmp_raise_type_3 = PyExc_TypeError;
    tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
    tmp_getattr_attr_3 = const_str_plain___name__;
    tmp_getattr_default_3 = const_str_angle_metaclass;
    tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    tmp_right_name_3 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_11 );
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_type_arg_6 = tmp_class_creation_3__prepared;
    tmp_source_name_13 = BUILTIN_TYPE1( tmp_type_arg_6 );
    assert( !(tmp_source_name_13 == NULL) );
    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 133;

        goto try_except_handler_15;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_11 );
    tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_raise_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_15;
    }
    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_value = tmp_raise_value_3;
    exception_lineno = 133;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_15;
    }
    branch_no_13:;
    }
    goto branch_end_12;
    branch_no_12:;
    {
    PyObject *tmp_assign_source_45;
    tmp_assign_source_45 = PyDict_New();
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_45;

    }
    branch_end_12:;
    }
    {
    PyObject *tmp_assign_source_46;
    {
    PyObject *tmp_set_locals_3;
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_set_locals_3 = tmp_class_creation_3__prepared;
    locals_urllib3$contrib$socks_133 = tmp_set_locals_3;
    Py_INCREF( tmp_set_locals_3 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_133, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_17;
    }
    }
    {
    tmp_dictset_value = const_str_plain_SOCKSHTTPConnectionPool;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_133, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_17;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_a0fba70b9f712df307fd0c0b87e8c3da_3, codeobj_a0fba70b9f712df307fd0c0b87e8c3da, module_urllib3$contrib$socks, sizeof(void *) );
    frame_a0fba70b9f712df307fd0c0b87e8c3da_3 = cache_frame_a0fba70b9f712df307fd0c0b87e8c3da_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0fba70b9f712df307fd0c0b87e8c3da_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0fba70b9f712df307fd0c0b87e8c3da_3 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_mvar_value_7;
    tmp_dictset_value = PyObject_GetItem( locals_urllib3$contrib$socks_133, const_str_plain_SOCKSConnection );

    if ( tmp_dictset_value == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSConnection" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        tmp_dictset_value = tmp_mvar_value_7;
        Py_INCREF( tmp_dictset_value );
        }
    }

    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_133, const_str_plain_ConnectionCls, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_2 = "o";
        goto frame_exception_exit_3;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0fba70b9f712df307fd0c0b87e8c3da_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0fba70b9f712df307fd0c0b87e8c3da_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0fba70b9f712df307fd0c0b87e8c3da_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0fba70b9f712df307fd0c0b87e8c3da_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0fba70b9f712df307fd0c0b87e8c3da_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0fba70b9f712df307fd0c0b87e8c3da_3,
        type_description_2,
        outline_2_var___class__
    );


    // Release cached frame.
    if ( frame_a0fba70b9f712df307fd0c0b87e8c3da_3 == cache_frame_a0fba70b9f712df307fd0c0b87e8c3da_3 )
    {
        Py_DECREF( frame_a0fba70b9f712df307fd0c0b87e8c3da_3 );
    }
    cache_frame_a0fba70b9f712df307fd0c0b87e8c3da_3 = NULL;

    assertFrameObject( frame_a0fba70b9f712df307fd0c0b87e8c3da_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_17;
    skip_nested_handling_2:;
    {
    nuitka_bool tmp_condition_result_20;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_5;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_compexpr_left_5 = tmp_class_creation_3__bases;
    CHECK_OBJECT( tmp_class_creation_3__bases_orig );
    tmp_compexpr_right_5 = tmp_class_creation_3__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_17;
    }
    tmp_condition_result_20 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    {
    CHECK_OBJECT( tmp_class_creation_3__bases_orig );
    tmp_dictset_value = tmp_class_creation_3__bases_orig;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_133, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_17;
    }
    }
    branch_no_14:;
    }
    {
    PyObject *tmp_assign_source_47;
    PyObject *tmp_called_name_7;
    PyObject *tmp_args_name_6;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_kw_name_6;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_called_name_7 = tmp_class_creation_3__metaclass;
    tmp_tuple_element_12 = const_str_plain_SOCKSHTTPConnectionPool;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_tuple_element_12 = tmp_class_creation_3__bases;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = locals_urllib3$contrib$socks_133;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_12 );
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 133;
    tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_17;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_47;

    }
    {
    CHECK_OBJECT( outline_2_var___class__ );
    tmp_assign_source_46 = outline_2_var___class__;
    Py_INCREF( tmp_assign_source_46 );
    goto try_return_handler_17;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    {
    Py_DECREF( locals_urllib3$contrib$socks_133 );
    locals_urllib3$contrib$socks_133 = NULL;
    }
    {
    goto try_return_handler_16;
    }
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_urllib3$contrib$socks_133 );
    locals_urllib3$contrib$socks_133 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_16;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    {
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    }
    {
    goto outline_result_3;
    }
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto outline_exception_3;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 133;
    goto try_except_handler_15;
    outline_result_3:;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPConnectionPool, tmp_assign_source_46 );
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_10:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_48;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_mvar_value_8;
    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool );

    if (unlikely( tmp_mvar_value_8 == NULL ))
    {
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool );
    }

    if ( tmp_mvar_value_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPSConnectionPool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;

        goto try_except_handler_18;
    }

    tmp_tuple_element_13 = tmp_mvar_value_8;
    tmp_assign_source_48 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_48, 0, tmp_tuple_element_13 );
    assert( tmp_class_creation_4__bases_orig == NULL );
    tmp_class_creation_4__bases_orig = tmp_assign_source_48;

    }
    {
    PyObject *tmp_assign_source_49;
    PyObject *tmp_dircall_arg1_4;
    CHECK_OBJECT( tmp_class_creation_4__bases_orig );
    tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_49 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_49;

    }
    {
    PyObject *tmp_assign_source_50;
    tmp_assign_source_50 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_50;

    }
    {
    PyObject *tmp_assign_source_51;
    PyObject *tmp_metaclass_name_4;
    nuitka_bool tmp_condition_result_21;
    PyObject *tmp_key_name_10;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_key_name_11;
    nuitka_bool tmp_condition_result_22;
    int tmp_truth_name_4;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_bases_name_4;
    tmp_key_name_10 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_truth_name_4 = CHECK_IF_TRUE( tmp_class_creation_4__bases );
    if ( tmp_truth_name_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    tmp_condition_result_22 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_8:;
    condexpr_end_7:;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_bases_name_4 = tmp_class_creation_4__bases;
    tmp_assign_source_51 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_51;

    }
    {
    nuitka_bool tmp_condition_result_23;
    PyObject *tmp_key_name_12;
    PyObject *tmp_dict_name_12;
    tmp_key_name_12 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    tmp_condition_result_23 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    {
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    }
    branch_no_15:;
    }
    {
    nuitka_bool tmp_condition_result_24;
    PyObject *tmp_source_name_14;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_source_name_14 = tmp_class_creation_4__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_14, const_str_plain___prepare__ );
    tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    {
    PyObject *tmp_assign_source_52;
    PyObject *tmp_called_name_8;
    PyObject *tmp_source_name_15;
    PyObject *tmp_args_name_7;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_kw_name_7;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_source_name_15 = tmp_class_creation_4__metaclass;
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    tmp_tuple_element_14 = const_str_plain_SOCKSHTTPSConnectionPool;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_tuple_element_14 = tmp_class_creation_4__bases;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 137;
    tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_52;

    }
    {
    nuitka_bool tmp_condition_result_25;
    PyObject *tmp_operand_name_4;
    PyObject *tmp_source_name_16;
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_source_name_16 = tmp_class_creation_4__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_16, const_str_plain___getitem__ );
    tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    tmp_condition_result_25 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    {
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_value_4;
    PyObject *tmp_left_name_4;
    PyObject *tmp_right_name_4;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_getattr_target_4;
    PyObject *tmp_getattr_attr_4;
    PyObject *tmp_getattr_default_4;
    PyObject *tmp_source_name_17;
    PyObject *tmp_type_arg_8;
    tmp_raise_type_4 = PyExc_TypeError;
    tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
    tmp_getattr_attr_4 = const_str_plain___name__;
    tmp_getattr_default_4 = const_str_angle_metaclass;
    tmp_tuple_element_15 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    tmp_right_name_4 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_15 );
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_type_arg_8 = tmp_class_creation_4__prepared;
    tmp_source_name_17 = BUILTIN_TYPE1( tmp_type_arg_8 );
    assert( !(tmp_source_name_17 == NULL) );
    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_4 );

        exception_lineno = 137;

        goto try_except_handler_18;
    }
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_15 );
    tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_raise_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_18;
    }
    exception_type = tmp_raise_type_4;
    Py_INCREF( tmp_raise_type_4 );
    exception_value = tmp_raise_value_4;
    exception_lineno = 137;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_18;
    }
    branch_no_17:;
    }
    goto branch_end_16;
    branch_no_16:;
    {
    PyObject *tmp_assign_source_53;
    tmp_assign_source_53 = PyDict_New();
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_53;

    }
    branch_end_16:;
    }
    {
    PyObject *tmp_assign_source_54;
    {
    PyObject *tmp_set_locals_4;
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_set_locals_4 = tmp_class_creation_4__prepared;
    locals_urllib3$contrib$socks_137 = tmp_set_locals_4;
    Py_INCREF( tmp_set_locals_4 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_137, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_20;
    }
    }
    {
    tmp_dictset_value = const_str_plain_SOCKSHTTPSConnectionPool;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_137, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_20;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_83c454c319c2605519a85ae8de7f5210_4, codeobj_83c454c319c2605519a85ae8de7f5210, module_urllib3$contrib$socks, sizeof(void *) );
    frame_83c454c319c2605519a85ae8de7f5210_4 = cache_frame_83c454c319c2605519a85ae8de7f5210_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83c454c319c2605519a85ae8de7f5210_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83c454c319c2605519a85ae8de7f5210_4 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_mvar_value_9;
    tmp_dictset_value = PyObject_GetItem( locals_urllib3$contrib$socks_137, const_str_plain_SOCKSHTTPSConnection );

    if ( tmp_dictset_value == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnection );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnection );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSHTTPSConnection" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

        tmp_dictset_value = tmp_mvar_value_9;
        Py_INCREF( tmp_dictset_value );
        }
    }

    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_137, const_str_plain_ConnectionCls, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_2 = "o";
        goto frame_exception_exit_4;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83c454c319c2605519a85ae8de7f5210_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83c454c319c2605519a85ae8de7f5210_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83c454c319c2605519a85ae8de7f5210_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83c454c319c2605519a85ae8de7f5210_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83c454c319c2605519a85ae8de7f5210_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83c454c319c2605519a85ae8de7f5210_4,
        type_description_2,
        outline_3_var___class__
    );


    // Release cached frame.
    if ( frame_83c454c319c2605519a85ae8de7f5210_4 == cache_frame_83c454c319c2605519a85ae8de7f5210_4 )
    {
        Py_DECREF( frame_83c454c319c2605519a85ae8de7f5210_4 );
    }
    cache_frame_83c454c319c2605519a85ae8de7f5210_4 = NULL;

    assertFrameObject( frame_83c454c319c2605519a85ae8de7f5210_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;
    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_20;
    skip_nested_handling_3:;
    {
    nuitka_bool tmp_condition_result_26;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_6;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_compexpr_left_6 = tmp_class_creation_4__bases;
    CHECK_OBJECT( tmp_class_creation_4__bases_orig );
    tmp_compexpr_right_6 = tmp_class_creation_4__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_20;
    }
    tmp_condition_result_26 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    {
    CHECK_OBJECT( tmp_class_creation_4__bases_orig );
    tmp_dictset_value = tmp_class_creation_4__bases_orig;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_137, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_20;
    }
    }
    branch_no_18:;
    }
    {
    PyObject *tmp_assign_source_55;
    PyObject *tmp_called_name_9;
    PyObject *tmp_args_name_8;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_kw_name_8;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_called_name_9 = tmp_class_creation_4__metaclass;
    tmp_tuple_element_16 = const_str_plain_SOCKSHTTPSConnectionPool;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_tuple_element_16 = tmp_class_creation_4__bases;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
    tmp_tuple_element_16 = locals_urllib3$contrib$socks_137;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_16 );
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 137;
    tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_20;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_55;

    }
    {
    CHECK_OBJECT( outline_3_var___class__ );
    tmp_assign_source_54 = outline_3_var___class__;
    Py_INCREF( tmp_assign_source_54 );
    goto try_return_handler_20;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    {
    Py_DECREF( locals_urllib3$contrib$socks_137 );
    locals_urllib3$contrib$socks_137 = NULL;
    }
    {
    goto try_return_handler_19;
    }
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_urllib3$contrib$socks_137 );
    locals_urllib3$contrib$socks_137 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_19;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    {
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    }
    {
    goto outline_result_4;
    }
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto outline_exception_4;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 137;
    goto try_except_handler_18;
    outline_result_4:;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnectionPool, tmp_assign_source_54 );
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_11:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_56;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_mvar_value_10;
    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_PoolManager );

    if (unlikely( tmp_mvar_value_10 == NULL ))
    {
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolManager );
    }

    if ( tmp_mvar_value_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;

        goto try_except_handler_21;
    }

    tmp_tuple_element_17 = tmp_mvar_value_10;
    tmp_assign_source_56 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_56, 0, tmp_tuple_element_17 );
    assert( tmp_class_creation_5__bases_orig == NULL );
    tmp_class_creation_5__bases_orig = tmp_assign_source_56;

    }
    {
    PyObject *tmp_assign_source_57;
    PyObject *tmp_dircall_arg1_5;
    CHECK_OBJECT( tmp_class_creation_5__bases_orig );
    tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
    Py_INCREF( tmp_dircall_arg1_5 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
        tmp_assign_source_57 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_57;

    }
    {
    PyObject *tmp_assign_source_58;
    tmp_assign_source_58 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_58;

    }
    {
    PyObject *tmp_assign_source_59;
    PyObject *tmp_metaclass_name_5;
    nuitka_bool tmp_condition_result_27;
    PyObject *tmp_key_name_13;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_key_name_14;
    nuitka_bool tmp_condition_result_28;
    int tmp_truth_name_5;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_bases_name_5;
    tmp_key_name_13 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_truth_name_5 = CHECK_IF_TRUE( tmp_class_creation_5__bases );
    if ( tmp_truth_name_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    tmp_condition_result_28 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_10:;
    condexpr_end_9:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_bases_name_5 = tmp_class_creation_5__bases;
    tmp_assign_source_59 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_59;

    }
    {
    nuitka_bool tmp_condition_result_29;
    PyObject *tmp_key_name_15;
    PyObject *tmp_dict_name_15;
    tmp_key_name_15 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    tmp_condition_result_29 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    {
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    }
    branch_no_19:;
    }
    {
    nuitka_bool tmp_condition_result_30;
    PyObject *tmp_source_name_18;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_source_name_18 = tmp_class_creation_5__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_18, const_str_plain___prepare__ );
    tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    {
    PyObject *tmp_assign_source_60;
    PyObject *tmp_called_name_10;
    PyObject *tmp_source_name_19;
    PyObject *tmp_args_name_9;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_kw_name_9;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_source_name_19 = tmp_class_creation_5__metaclass;
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___prepare__ );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    tmp_tuple_element_18 = const_str_plain_SOCKSProxyManager;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_18 );
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_tuple_element_18 = tmp_class_creation_5__bases;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_18 );
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 141;
    tmp_assign_source_60 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_60;

    }
    {
    nuitka_bool tmp_condition_result_31;
    PyObject *tmp_operand_name_5;
    PyObject *tmp_source_name_20;
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_source_name_20 = tmp_class_creation_5__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_20, const_str_plain___getitem__ );
    tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    tmp_condition_result_31 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    {
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_value_5;
    PyObject *tmp_left_name_5;
    PyObject *tmp_right_name_5;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_getattr_target_5;
    PyObject *tmp_getattr_attr_5;
    PyObject *tmp_getattr_default_5;
    PyObject *tmp_source_name_21;
    PyObject *tmp_type_arg_10;
    tmp_raise_type_5 = PyExc_TypeError;
    tmp_left_name_5 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
    tmp_getattr_attr_5 = const_str_plain___name__;
    tmp_getattr_default_5 = const_str_angle_metaclass;
    tmp_tuple_element_19 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
    if ( tmp_tuple_element_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    tmp_right_name_5 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_19 );
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_type_arg_10 = tmp_class_creation_5__prepared;
    tmp_source_name_21 = BUILTIN_TYPE1( tmp_type_arg_10 );
    assert( !(tmp_source_name_21 == NULL) );
    tmp_tuple_element_19 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_tuple_element_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_5 );

        exception_lineno = 141;

        goto try_except_handler_21;
    }
    PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_19 );
    tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_raise_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_21;
    }
    exception_type = tmp_raise_type_5;
    Py_INCREF( tmp_raise_type_5 );
    exception_value = tmp_raise_value_5;
    exception_lineno = 141;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_21;
    }
    branch_no_21:;
    }
    goto branch_end_20;
    branch_no_20:;
    {
    PyObject *tmp_assign_source_61;
    tmp_assign_source_61 = PyDict_New();
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_61;

    }
    branch_end_20:;
    }
    {
    PyObject *tmp_assign_source_62;
    {
    PyObject *tmp_set_locals_5;
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_set_locals_5 = tmp_class_creation_5__prepared;
    locals_urllib3$contrib$socks_141 = tmp_set_locals_5;
    Py_INCREF( tmp_set_locals_5 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_141, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_23;
    }
    }
    {
    tmp_dictset_value = const_str_digest_eeea122c4ef21297597db82f300a3894;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_141, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_23;
    }
    }
    {
    tmp_dictset_value = const_str_plain_SOCKSProxyManager;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_141, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_23;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_753af24db826bdfcf57423f8b4cf4810_5, codeobj_753af24db826bdfcf57423f8b4cf4810, module_urllib3$contrib$socks, sizeof(void *) );
    frame_753af24db826bdfcf57423f8b4cf4810_5 = cache_frame_753af24db826bdfcf57423f8b4cf4810_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_753af24db826bdfcf57423f8b4cf4810_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_753af24db826bdfcf57423f8b4cf4810_5 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_mvar_value_11;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_mvar_value_12;
    tmp_dict_key_1 = const_str_plain_http;
    tmp_dict_value_1 = PyObject_GetItem( locals_urllib3$contrib$socks_141, const_str_plain_SOCKSHTTPConnectionPool );

    if ( tmp_dict_value_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPConnectionPool );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPConnectionPool );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSHTTPConnectionPool" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        tmp_dict_value_1 = tmp_mvar_value_11;
        Py_INCREF( tmp_dict_value_1 );
        }
    }

    tmp_dictset_value = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_https;
    tmp_dict_value_2 = PyObject_GetItem( locals_urllib3$contrib$socks_141, const_str_plain_SOCKSHTTPSConnectionPool );

    if ( tmp_dict_value_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnectionPool );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnectionPool );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSHTTPSConnectionPool" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        tmp_dict_value_2 = tmp_mvar_value_12;
        Py_INCREF( tmp_dict_value_2 );
        }
    }

    tmp_res = PyDict_SetItem( tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_141, const_str_plain_pool_classes_by_scheme, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_2 = "o";
        goto frame_exception_exit_5;
    }
    }
    {
    PyObject *tmp_defaults_1;
    tmp_defaults_1 = const_tuple_none_none_int_pos_10_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$socks$$$function_3___init__( tmp_defaults_1 );



    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_141, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_2 = "o";
        goto frame_exception_exit_5;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_753af24db826bdfcf57423f8b4cf4810_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_753af24db826bdfcf57423f8b4cf4810_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_753af24db826bdfcf57423f8b4cf4810_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_753af24db826bdfcf57423f8b4cf4810_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_753af24db826bdfcf57423f8b4cf4810_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_753af24db826bdfcf57423f8b4cf4810_5,
        type_description_2,
        outline_4_var___class__
    );


    // Release cached frame.
    if ( frame_753af24db826bdfcf57423f8b4cf4810_5 == cache_frame_753af24db826bdfcf57423f8b4cf4810_5 )
    {
        Py_DECREF( frame_753af24db826bdfcf57423f8b4cf4810_5 );
    }
    cache_frame_753af24db826bdfcf57423f8b4cf4810_5 = NULL;

    assertFrameObject( frame_753af24db826bdfcf57423f8b4cf4810_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;
    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_23;
    skip_nested_handling_4:;
    {
    nuitka_bool tmp_condition_result_32;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_right_7;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_compexpr_left_7 = tmp_class_creation_5__bases;
    CHECK_OBJECT( tmp_class_creation_5__bases_orig );
    tmp_compexpr_right_7 = tmp_class_creation_5__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_23;
    }
    tmp_condition_result_32 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_32 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    {
    CHECK_OBJECT( tmp_class_creation_5__bases_orig );
    tmp_dictset_value = tmp_class_creation_5__bases_orig;
    tmp_res = PyObject_SetItem( locals_urllib3$contrib$socks_141, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_23;
    }
    }
    branch_no_22:;
    }
    {
    PyObject *tmp_assign_source_63;
    PyObject *tmp_called_name_11;
    PyObject *tmp_args_name_10;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_kw_name_10;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_called_name_11 = tmp_class_creation_5__metaclass;
    tmp_tuple_element_20 = const_str_plain_SOCKSProxyManager;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_20 );
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_tuple_element_20 = tmp_class_creation_5__bases;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = locals_urllib3$contrib$socks_141;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_20 );
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
    frame_c66510d8b0a3ff44f3582729486b0950->m_frame.f_lineno = 141;
    tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_23;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_63;

    }
    {
    CHECK_OBJECT( outline_4_var___class__ );
    tmp_assign_source_62 = outline_4_var___class__;
    Py_INCREF( tmp_assign_source_62 );
    goto try_return_handler_23;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    {
    Py_DECREF( locals_urllib3$contrib$socks_141 );
    locals_urllib3$contrib$socks_141 = NULL;
    }
    {
    goto try_return_handler_22;
    }
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_urllib3$contrib$socks_141 );
    locals_urllib3$contrib$socks_141 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_22;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    {
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    }
    {
    goto outline_result_5;
    }
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto outline_exception_5;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 141;
    goto try_except_handler_21;
    outline_result_5:;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager, tmp_assign_source_62 );
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_12:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c66510d8b0a3ff44f3582729486b0950 );
#endif
    popFrameStack();

    assertFrameObject( frame_c66510d8b0a3ff44f3582729486b0950 );

    goto frame_no_exception_5;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c66510d8b0a3ff44f3582729486b0950 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c66510d8b0a3ff44f3582729486b0950, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c66510d8b0a3ff44f3582729486b0950->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c66510d8b0a3ff44f3582729486b0950, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_5:;
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    }

    return MOD_RETURN_VALUE( module_urllib3$contrib$socks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

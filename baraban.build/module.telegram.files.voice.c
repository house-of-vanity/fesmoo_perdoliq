/* Generated code for Python source for module 'telegram.files.voice'
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

/* The _module_telegram$files$voice is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_telegram$files$voice;
PyDictObject *moduledict_telegram$files$voice;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_get_file;
static PyObject *const_str_digest_a71b9ff3011fa60f05134b29e2e162cf;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_tuple_str_plain_TelegramObject_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain__id_attrs;
extern PyObject *const_str_plain_Voice;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_mime_type;
static PyObject *const_str_digest_15d4c9cbf888f5ef026a66d25425a6b5;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_file_size;
extern PyObject *const_int_0;
static PyObject *const_str_digest_b3c7b349e9819d48e8e4170089c43a09;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_bot;
extern PyObject *const_str_plain_TelegramObject;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_ac30c41ddf112ca06767ed13468db0ce;
extern PyObject *const_str_plain_de_json;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_a8d6554234de0e057c3c0e5377c6a252;
extern PyObject *const_tuple_str_plain_self_str_plain_timeout_str_plain_kwargs_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_telegram;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_cc17f41c3839187d091a0c9780ba0d99;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_digest_975383e548b57227c07531bd54e51c1c;
static PyObject *const_str_digest_7692932be330dd1cd264625e7779f22e;
extern PyObject *const_tuple_20e0b3bec4ab147948eec94e87ff90d7_tuple;
extern PyObject *const_str_plain_duration;
static PyObject *const_str_digest_5a37c27d593b8f9fe0a932a32aea63d6;
static PyObject *const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_file_id;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_timeout;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_a71b9ff3011fa60f05134b29e2e162cf = UNSTREAM_STRING( &constant_bin[ 1286876 ], 56, 0 );
    const_str_digest_15d4c9cbf888f5ef026a66d25425a6b5 = UNSTREAM_STRING( &constant_bin[ 1286932 ], 20, 0 );
    const_str_digest_b3c7b349e9819d48e8e4170089c43a09 = UNSTREAM_STRING( &constant_bin[ 1286952 ], 29, 0 );
    const_str_digest_ac30c41ddf112ca06767ed13468db0ce = UNSTREAM_STRING( &constant_bin[ 1286981 ], 64, 0 );
    const_str_digest_a8d6554234de0e057c3c0e5377c6a252 = UNSTREAM_STRING( &constant_bin[ 1287045 ], 14, 0 );
    const_str_digest_cc17f41c3839187d091a0c9780ba0d99 = UNSTREAM_STRING( &constant_bin[ 1287059 ], 885, 0 );
    const_str_digest_7692932be330dd1cd264625e7779f22e = UNSTREAM_STRING( &constant_bin[ 1287944 ], 13, 0 );
    const_str_digest_5a37c27d593b8f9fe0a932a32aea63d6 = UNSTREAM_STRING( &constant_bin[ 1287957 ], 14, 0 );
    const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple, 1, const_str_plain_file_id ); Py_INCREF( const_str_plain_file_id );
    PyTuple_SET_ITEM( const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple, 2, const_str_plain_duration ); Py_INCREF( const_str_plain_duration );
    PyTuple_SET_ITEM( const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple, 3, const_str_plain_mime_type ); Py_INCREF( const_str_plain_mime_type );
    PyTuple_SET_ITEM( const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple, 4, const_str_plain_file_size ); Py_INCREF( const_str_plain_file_size );
    PyTuple_SET_ITEM( const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple, 5, const_str_plain_bot ); Py_INCREF( const_str_plain_bot );
    PyTuple_SET_ITEM( const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple, 6, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_telegram$files$voice( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_52d1070673a0342e4f23ea53bf72f82e;
static PyCodeObject *codeobj_4dd196ddb071a899db9d39382d267280;
static PyCodeObject *codeobj_de9f8545264deca5ab5bee3383f66bf9;
static PyCodeObject *codeobj_033d858aacc75d8d26956f43f6b32384;
static PyCodeObject *codeobj_89dc98e52723bf789f2093f40fd6296f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a71b9ff3011fa60f05134b29e2e162cf;
    codeobj_52d1070673a0342e4f23ea53bf72f82e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b3c7b349e9819d48e8e4170089c43a09, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4dd196ddb071a899db9d39382d267280 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Voice, 24, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_de9f8545264deca5ab5bee3383f66bf9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 44, const_tuple_67d73e9b8d80798dd19dee9043de037e_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_033d858aacc75d8d26956f43f6b32384 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_de_json, 55, const_tuple_20e0b3bec4ab147948eec94e87ff90d7_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_89dc98e52723bf789f2093f40fd6296f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_file, 64, const_tuple_str_plain_self_str_plain_timeout_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_telegram$files$voice$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_telegram$files$voice$$$function_2_de_json(  );


static PyObject *MAKE_FUNCTION_telegram$files$voice$$$function_3_get_file( PyObject *defaults );


// The module function definitions.
static PyObject *impl_telegram$files$voice$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_file_id = python_pars[ 1 ];
    PyObject *par_duration = python_pars[ 2 ];
    PyObject *par_mime_type = python_pars[ 3 ];
    PyObject *par_file_size = python_pars[ 4 ];
    PyObject *par_bot = python_pars[ 5 ];
    PyObject *par_kwargs = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_de9f8545264deca5ab5bee3383f66bf9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_de9f8545264deca5ab5bee3383f66bf9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de9f8545264deca5ab5bee3383f66bf9, codeobj_de9f8545264deca5ab5bee3383f66bf9, module_telegram$files$voice, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_de9f8545264deca5ab5bee3383f66bf9 = cache_frame_de9f8545264deca5ab5bee3383f66bf9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de9f8545264deca5ab5bee3383f66bf9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de9f8545264deca5ab5bee3383f66bf9 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_unicode_arg_1;
    PyObject *tmp_assattr_target_1;
    CHECK_OBJECT( par_file_id );
    tmp_unicode_arg_1 = par_file_id;
    tmp_assattr_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooooo";
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

        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_file_id, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_assattr_target_2;
    if ( par_duration == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "duration" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_int_arg_1 = par_duration;
    tmp_assattr_name_2 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooooooo";
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

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_duration, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_3;
    if ( par_mime_type == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mime_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_3 = par_mime_type;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_mime_type, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_4;
    if ( par_file_size == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "file_size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_4 = par_file_size;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_file_size, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_5;
    if ( par_bot == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bot" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_5 = par_bot;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_bot, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_assattr_target_6;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_file_id );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assattr_name_6, 0, tmp_tuple_element_1 );
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__id_attrs, tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de9f8545264deca5ab5bee3383f66bf9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de9f8545264deca5ab5bee3383f66bf9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de9f8545264deca5ab5bee3383f66bf9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de9f8545264deca5ab5bee3383f66bf9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de9f8545264deca5ab5bee3383f66bf9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de9f8545264deca5ab5bee3383f66bf9,
        type_description_1,
        par_self,
        par_file_id,
        par_duration,
        par_mime_type,
        par_file_size,
        par_bot,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_de9f8545264deca5ab5bee3383f66bf9 == cache_frame_de9f8545264deca5ab5bee3383f66bf9 )
    {
        Py_DECREF( frame_de9f8545264deca5ab5bee3383f66bf9 );
    }
    cache_frame_de9f8545264deca5ab5bee3383f66bf9 = NULL;

    assertFrameObject( frame_de9f8545264deca5ab5bee3383f66bf9 );

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
    NUITKA_CANNOT_GET_HERE( telegram$files$voice$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_file_id );
    par_file_id = NULL;

    }
    {
    Py_XDECREF( par_duration );
    par_duration = NULL;

    }
    {
    Py_XDECREF( par_mime_type );
    par_mime_type = NULL;

    }
    {
    Py_XDECREF( par_file_size );
    par_file_size = NULL;

    }
    {
    Py_XDECREF( par_bot );
    par_bot = NULL;

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
    Py_XDECREF( par_file_id );
    par_file_id = NULL;

    }
    {
    Py_XDECREF( par_duration );
    par_duration = NULL;

    }
    {
    Py_XDECREF( par_mime_type );
    par_mime_type = NULL;

    }
    {
    Py_XDECREF( par_file_size );
    par_file_size = NULL;

    }
    {
    Py_XDECREF( par_bot );
    par_bot = NULL;

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
    NUITKA_CANNOT_GET_HERE( telegram$files$voice$$$function_1___init__ );
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


static PyObject *impl_telegram$files$voice$$$function_2_de_json( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_bot = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_033d858aacc75d8d26956f43f6b32384;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_033d858aacc75d8d26956f43f6b32384 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_033d858aacc75d8d26956f43f6b32384, codeobj_033d858aacc75d8d26956f43f6b32384, module_telegram$files$voice, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_033d858aacc75d8d26956f43f6b32384 = cache_frame_033d858aacc75d8d26956f43f6b32384;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_033d858aacc75d8d26956f43f6b32384 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_033d858aacc75d8d26956f43f6b32384 ) == 2 ); // Frame stack

    // Framed code:
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_operand_name_1;
    CHECK_OBJECT( par_data );
    tmp_operand_name_1 = par_data;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    }
    branch_no_1:;
    }
    {
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain_Voice );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Voice );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Voice" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_type_name_1 = tmp_mvar_value_1;
    if ( par_cls == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_cls;
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_de_json );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    if ( par_data == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_data;
    if ( par_bot == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bot" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_bot;
    frame_033d858aacc75d8d26956f43f6b32384->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_data;
        par_data = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    }
    {
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg3_1;
    if ( par_cls == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = par_cls;
    tmp_dict_key_1 = const_str_plain_bot;
    if ( par_bot == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bot" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = par_bot;
    tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    CHECK_OBJECT( par_data );
    tmp_dircall_arg3_1 = par_data;
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_10_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_033d858aacc75d8d26956f43f6b32384 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_033d858aacc75d8d26956f43f6b32384 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_033d858aacc75d8d26956f43f6b32384 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_033d858aacc75d8d26956f43f6b32384, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_033d858aacc75d8d26956f43f6b32384->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_033d858aacc75d8d26956f43f6b32384, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_033d858aacc75d8d26956f43f6b32384,
        type_description_1,
        par_cls,
        par_data,
        par_bot,
        NULL
    );


    // Release cached frame.
    if ( frame_033d858aacc75d8d26956f43f6b32384 == cache_frame_033d858aacc75d8d26956f43f6b32384 )
    {
        Py_DECREF( frame_033d858aacc75d8d26956f43f6b32384 );
    }
    cache_frame_033d858aacc75d8d26956f43f6b32384 = NULL;

    assertFrameObject( frame_033d858aacc75d8d26956f43f6b32384 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$voice$$$function_2_de_json );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_cls );
    par_cls = NULL;

    }
    {
    Py_XDECREF( par_data );
    par_data = NULL;

    }
    {
    Py_XDECREF( par_bot );
    par_bot = NULL;

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
    Py_XDECREF( par_cls );
    par_cls = NULL;

    }
    {
    Py_XDECREF( par_data );
    par_data = NULL;

    }
    {
    Py_XDECREF( par_bot );
    par_bot = NULL;

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
    NUITKA_CANNOT_GET_HERE( telegram$files$voice$$$function_2_de_json );
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


static PyObject *impl_telegram$files$voice$$$function_3_get_file( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_89dc98e52723bf789f2093f40fd6296f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_89dc98e52723bf789f2093f40fd6296f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_89dc98e52723bf789f2093f40fd6296f, codeobj_89dc98e52723bf789f2093f40fd6296f, module_telegram$files$voice, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_89dc98e52723bf789f2093f40fd6296f = cache_frame_89dc98e52723bf789f2093f40fd6296f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_89dc98e52723bf789f2093f40fd6296f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_89dc98e52723bf789f2093f40fd6296f ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_source_name_3;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg4_1;
    CHECK_OBJECT( par_self );
    tmp_source_name_2 = par_self;
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bot );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_file );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
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
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_self;
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_file_id );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_timeout;
    if ( par_timeout == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = par_timeout;
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    if ( par_kwargs == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg4_1 = par_kwargs;
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89dc98e52723bf789f2093f40fd6296f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89dc98e52723bf789f2093f40fd6296f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89dc98e52723bf789f2093f40fd6296f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89dc98e52723bf789f2093f40fd6296f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89dc98e52723bf789f2093f40fd6296f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89dc98e52723bf789f2093f40fd6296f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89dc98e52723bf789f2093f40fd6296f,
        type_description_1,
        par_self,
        par_timeout,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_89dc98e52723bf789f2093f40fd6296f == cache_frame_89dc98e52723bf789f2093f40fd6296f )
    {
        Py_DECREF( frame_89dc98e52723bf789f2093f40fd6296f );
    }
    cache_frame_89dc98e52723bf789f2093f40fd6296f = NULL;

    assertFrameObject( frame_89dc98e52723bf789f2093f40fd6296f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$voice$$$function_3_get_file );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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
    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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
    NUITKA_CANNOT_GET_HERE( telegram$files$voice$$$function_3_get_file );
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



static PyObject *MAKE_FUNCTION_telegram$files$voice$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_telegram$files$voice$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_a8d6554234de0e057c3c0e5377c6a252,
#endif
        codeobj_de9f8545264deca5ab5bee3383f66bf9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_telegram$files$voice,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_telegram$files$voice$$$function_2_de_json(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_telegram$files$voice$$$function_2_de_json,
        const_str_plain_de_json,
#if PYTHON_VERSION >= 300
        const_str_digest_7692932be330dd1cd264625e7779f22e,
#endif
        codeobj_033d858aacc75d8d26956f43f6b32384,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_telegram$files$voice,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_telegram$files$voice$$$function_3_get_file( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_telegram$files$voice$$$function_3_get_file,
        const_str_plain_get_file,
#if PYTHON_VERSION >= 300
        const_str_digest_5a37c27d593b8f9fe0a932a32aea63d6,
#endif
        codeobj_89dc98e52723bf789f2093f40fd6296f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_telegram$files$voice,
        const_str_digest_975383e548b57227c07531bd54e51c1c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_telegram$files$voice =
{
    PyModuleDef_HEAD_INIT,
    "telegram.files.voice",   /* m_name */
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

MOD_INIT_DECL( telegram$files$voice )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_telegram$files$voice );
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
    puts("telegram.files.voice: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram.files.voice: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram.files.voice: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittelegram$files$voice" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_telegram$files$voice = Py_InitModule4(
        "telegram.files.voice",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_telegram$files$voice = PyModule_Create( &mdef_telegram$files$voice );
#endif

    moduledict_telegram$files$voice = MODULE_DICT( module_telegram$files$voice );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_telegram$files$voice,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram$files$voice,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram$files$voice,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_telegram$files$voice );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_15d4c9cbf888f5ef026a66d25425a6b5, module_telegram$files$voice );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_52d1070673a0342e4f23ea53bf72f82e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    bool tmp_result;
    PyObject *locals_telegram$files$voice_24 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4dd196ddb071a899db9d39382d267280_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4dd196ddb071a899db9d39382d267280_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = const_str_digest_ac30c41ddf112ca06767ed13468db0ce;
    UPDATE_STRING_DICT0( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_a71b9ff3011fa60f05134b29e2e162cf;
    UPDATE_STRING_DICT0( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_52d1070673a0342e4f23ea53bf72f82e = MAKE_MODULE_FRAME( codeobj_52d1070673a0342e4f23ea53bf72f82e, module_telegram$files$voice );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_52d1070673a0342e4f23ea53bf72f82e );
    assert( Py_REFCNT( frame_52d1070673a0342e4f23ea53bf72f82e ) == 2 );

    // Framed code:
    {
    PyObject *tmp_assign_source_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_level_name_1;
    tmp_name_name_1 = const_str_plain_telegram;
    tmp_globals_name_1 = (PyObject *)moduledict_telegram$files$voice;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TelegramObject_tuple;
    tmp_level_name_1 = const_int_0;
    frame_52d1070673a0342e4f23ea53bf72f82e->m_frame.f_lineno = 21;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TelegramObject );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain_TelegramObject, tmp_assign_source_4 );
    }
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_mvar_value_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain_TelegramObject );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TelegramObject );
    }

    CHECK_OBJECT( tmp_mvar_value_1 );
    tmp_tuple_element_1 = tmp_mvar_value_1;
    tmp_assign_source_5 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_5;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_dircall_arg1_1;
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_6 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_6;

    }
    {
    PyObject *tmp_assign_source_7;
    tmp_assign_source_7 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;

    }
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_metaclass_name_1;
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_key_name_2;
    nuitka_bool tmp_condition_result_2;
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


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_bases_name_1 = tmp_class_creation_1__bases;
    tmp_assign_source_8 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_8;

    }
    {
    nuitka_bool tmp_condition_result_3;
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


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    }
    branch_no_1:;
    }
    {
    nuitka_bool tmp_condition_result_4;
    PyObject *tmp_source_name_1;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_source_name_1 = tmp_class_creation_1__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
    tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_kw_name_1;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_source_name_2 = tmp_class_creation_1__metaclass;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    tmp_tuple_element_2 = const_str_plain_Voice;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
    frame_52d1070673a0342e4f23ea53bf72f82e->m_frame.f_lineno = 24;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_9;

    }
    {
    nuitka_bool tmp_condition_result_5;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_source_name_3;
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_source_name_3 = tmp_class_creation_1__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
    tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_source_name_4;
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


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    tmp_right_name_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_type_arg_2 = tmp_class_creation_1__prepared;
    tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( !(tmp_source_name_4 == NULL) );
    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 24;

        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_raise_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 24;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_1;
    }
    branch_no_3:;
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assign_source_10;
    tmp_assign_source_10 = PyDict_New();
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_10;

    }
    branch_end_2:;
    }
    {
    PyObject *tmp_assign_source_11;
    {
    PyObject *tmp_set_locals_1;
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_set_locals_1 = tmp_class_creation_1__prepared;
    locals_telegram$files$voice_24 = tmp_set_locals_1;
    Py_INCREF( tmp_set_locals_1 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_15d4c9cbf888f5ef026a66d25425a6b5;
    tmp_res = PyObject_SetItem( locals_telegram$files$voice_24, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    }
    {
    tmp_dictset_value = const_str_digest_cc17f41c3839187d091a0c9780ba0d99;
    tmp_res = PyObject_SetItem( locals_telegram$files$voice_24, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    }
    {
    tmp_dictset_value = const_str_plain_Voice;
    tmp_res = PyObject_SetItem( locals_telegram$files$voice_24, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_4dd196ddb071a899db9d39382d267280_2, codeobj_4dd196ddb071a899db9d39382d267280, module_telegram$files$voice, sizeof(void *) );
    frame_4dd196ddb071a899db9d39382d267280_2 = cache_frame_4dd196ddb071a899db9d39382d267280_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4dd196ddb071a899db9d39382d267280_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4dd196ddb071a899db9d39382d267280_2 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_1;
    tmp_defaults_1 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_telegram$files$voice$$$function_1___init__( tmp_defaults_1 );



    tmp_res = PyObject_SetItem( locals_telegram$files$voice_24, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    nuitka_bool tmp_condition_result_6;
    PyObject *tmp_called_name_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_classmethod_arg_1;
    tmp_res = MAPPING_HAS_ITEM( locals_telegram$files$voice_24, const_str_plain_classmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_called_name_2 = PyObject_GetItem( locals_telegram$files$voice_24, const_str_plain_classmethod );

    if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }

    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_1 = MAKE_FUNCTION_telegram$files$voice$$$function_2_de_json(  );



    frame_4dd196ddb071a899db9d39382d267280_2->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_classmethod_arg_1 = MAKE_FUNCTION_telegram$files$voice$$$function_2_de_json(  );



    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    condexpr_end_3:;
    tmp_res = PyObject_SetItem( locals_telegram$files$voice_24, const_str_plain_de_json, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    PyObject *tmp_defaults_2;
    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_telegram$files$voice$$$function_3_get_file( tmp_defaults_2 );



    tmp_res = PyObject_SetItem( locals_telegram$files$voice_24, const_str_plain_get_file, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4dd196ddb071a899db9d39382d267280_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4dd196ddb071a899db9d39382d267280_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4dd196ddb071a899db9d39382d267280_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4dd196ddb071a899db9d39382d267280_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4dd196ddb071a899db9d39382d267280_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4dd196ddb071a899db9d39382d267280_2,
        type_description_2,
        outline_0_var___class__
    );


    // Release cached frame.
    if ( frame_4dd196ddb071a899db9d39382d267280_2 == cache_frame_4dd196ddb071a899db9d39382d267280_2 )
    {
        Py_DECREF( frame_4dd196ddb071a899db9d39382d267280_2 );
    }
    cache_frame_4dd196ddb071a899db9d39382d267280_2 = NULL;

    assertFrameObject( frame_4dd196ddb071a899db9d39382d267280_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    {
    nuitka_bool tmp_condition_result_7;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_compexpr_left_1 = tmp_class_creation_1__bases;
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_dictset_value = tmp_class_creation_1__bases_orig;
    tmp_res = PyObject_SetItem( locals_telegram$files$voice_24, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    }
    branch_no_4:;
    }
    {
    PyObject *tmp_assign_source_12;
    PyObject *tmp_called_name_3;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_kw_name_2;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_called_name_3 = tmp_class_creation_1__metaclass;
    tmp_tuple_element_4 = const_str_plain_Voice;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_4 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_telegram$files$voice_24;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
    frame_52d1070673a0342e4f23ea53bf72f82e->m_frame.f_lineno = 24;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_12;

    }
    {
    CHECK_OBJECT( outline_0_var___class__ );
    tmp_assign_source_11 = outline_0_var___class__;
    Py_INCREF( tmp_assign_source_11 );
    goto try_return_handler_3;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$voice );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    {
    Py_DECREF( locals_telegram$files$voice_24 );
    locals_telegram$files$voice_24 = NULL;
    }
    {
    goto try_return_handler_2;
    }
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
    Py_DECREF( locals_telegram$files$voice_24 );
    locals_telegram$files$voice_24 = NULL;
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
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$voice );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    {
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    }
    {
    goto outline_result_1;
    }
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
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$voice );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 24;
    goto try_except_handler_1;
    outline_result_1:;
    UPDATE_STRING_DICT1( moduledict_telegram$files$voice, (Nuitka_StringObject *)const_str_plain_Voice, tmp_assign_source_11 );
    }
    goto try_end_1;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_52d1070673a0342e4f23ea53bf72f82e );
#endif
    popFrameStack();

    assertFrameObject( frame_52d1070673a0342e4f23ea53bf72f82e );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_52d1070673a0342e4f23ea53bf72f82e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52d1070673a0342e4f23ea53bf72f82e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52d1070673a0342e4f23ea53bf72f82e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52d1070673a0342e4f23ea53bf72f82e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
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

    return MOD_RETURN_VALUE( module_telegram$files$voice );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

/* Generated code for Python source for module 'webencodings.x_user_defined'
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

/* The _module_webencodings$x_user_defined is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_webencodings$x_user_defined;
PyDictObject *moduledict_webencodings$x_user_defined;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_codecs;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_incrementaldecoder;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_fd3f8c72728220dfb8ed4f95550f885b;
extern PyObject *const_str_plain_streamreader;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_3689ec1e31b5fe05bb28f5381f0f3e86;
extern PyObject *const_str_plain_strict;
extern PyObject *const_str_plain_IncrementalEncoder;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_IncrementalDecoder;
extern PyObject *const_str_plain_codec_info;
static PyObject *const_str_digest_1a0b59091a47248f5c65256f1c0b9fb6;
extern PyObject *const_str_digest_fda4539bf5c3e3ae7e66c49b1d119209;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_StreamReader;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_3179e2122dd7061084af2364299c0c3b;
extern PyObject *const_str_plain_Codec;
extern PyObject *const_str_plain_charmap_build;
extern PyObject *const_str_plain_streamwriter;
extern PyObject *const_str_digest_9c2697f4f6c856c85eba2363c29ccabb;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_input;
static PyObject *const_str_digest_757471e357555d75c0603655fe6be091;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_final;
static PyObject *const_str_digest_a58b321aa4cc089adbbb0391035263c4;
static PyObject *const_str_plain_encoding_table;
extern PyObject *const_str_plain_CodecInfo;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_decoding_table;
extern PyObject *const_str_plain_errors;
static PyObject *const_tuple_str_plain_self_str_plain_input_str_plain_errors_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_charmap_encode;
extern PyObject *const_str_plain_StreamWriter;
extern PyObject *const_tuple_str_plain_strict_tuple;
extern PyObject *const_str_plain_charmap_decode;
extern PyObject *const_str_plain_incrementalencoder;
static PyObject *const_tuple_str_plain_self_str_plain_input_str_plain_final_tuple;
static PyObject *const_str_digest_d1839f1f30f2f4b2778b131732fea084;
static PyObject *const_str_digest_fcfb7a6ab4c672d1b8dae9c2229fa83f;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_fd3f8c72728220dfb8ed4f95550f885b = UNSTREAM_STRING( &constant_bin[ 13697 ], 25, 0 );
    const_str_digest_3689ec1e31b5fe05bb28f5381f0f3e86 = UNSTREAM_STRING( &constant_bin[ 13816 ], 12, 0 );
    const_str_digest_1a0b59091a47248f5c65256f1c0b9fb6 = UNSTREAM_STRING( &constant_bin[ 1547480 ], 27, 0 );
    const_str_digest_3179e2122dd7061084af2364299c0c3b = UNSTREAM_STRING( &constant_bin[ 1547507 ], 63, 0 );
    const_str_digest_757471e357555d75c0603655fe6be091 = UNSTREAM_STRING( &constant_bin[ 1547570 ], 512, 0 );
    const_str_digest_a58b321aa4cc089adbbb0391035263c4 = UNSTREAM_STRING( &constant_bin[ 1548082 ], 36, 0 );
    const_str_plain_encoding_table = UNSTREAM_STRING( &constant_bin[ 1548118 ], 14, 1 );
    const_str_plain_decoding_table = UNSTREAM_STRING( &constant_bin[ 1548132 ], 14, 1 );
    const_tuple_str_plain_self_str_plain_input_str_plain_errors_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input_str_plain_errors_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input_str_plain_errors_tuple, 1, const_str_plain_input ); Py_INCREF( const_str_plain_input );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input_str_plain_errors_tuple, 2, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    const_tuple_str_plain_self_str_plain_input_str_plain_final_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input_str_plain_final_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input_str_plain_final_tuple, 1, const_str_plain_input ); Py_INCREF( const_str_plain_input );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input_str_plain_final_tuple, 2, const_str_plain_final ); Py_INCREF( const_str_plain_final );
    const_str_digest_d1839f1f30f2f4b2778b131732fea084 = UNSTREAM_STRING( &constant_bin[ 14593 ], 12, 0 );
    const_str_digest_fcfb7a6ab4c672d1b8dae9c2229fa83f = UNSTREAM_STRING( &constant_bin[ 1548146 ], 213, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_webencodings$x_user_defined( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e30fbd5c05454efc2a51f8575ec64efe;
static PyCodeObject *codeobj_54b9d1afcbabd3f094b8b482d4ebae96;
static PyCodeObject *codeobj_3eb035687d2a5a4036bc1bf8013906d0;
static PyCodeObject *codeobj_cdb189cbe7bde61a5078ceb4dbff15c5;
static PyCodeObject *codeobj_f91197873116ea4a7eeed3abb355ff5d;
static PyCodeObject *codeobj_64c6c586b4ed0902d828fdead21ac0ec;
static PyCodeObject *codeobj_6dee9af75a3fc6440982aae9b90b06a6;
static PyCodeObject *codeobj_23286b137410364bb1be4690c293fde2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_3179e2122dd7061084af2364299c0c3b;
    codeobj_e30fbd5c05454efc2a51f8575ec64efe = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a58b321aa4cc089adbbb0391035263c4, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_54b9d1afcbabd3f094b8b482d4ebae96 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Codec, 21, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_3eb035687d2a5a4036bc1bf8013906d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_IncrementalDecoder, 35, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_cdb189cbe7bde61a5078ceb4dbff15c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_IncrementalEncoder, 30, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_f91197873116ea4a7eeed3abb355ff5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 26, const_tuple_str_plain_self_str_plain_input_str_plain_errors_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_64c6c586b4ed0902d828fdead21ac0ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 36, const_tuple_str_plain_self_str_plain_input_str_plain_final_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_6dee9af75a3fc6440982aae9b90b06a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 23, const_tuple_str_plain_self_str_plain_input_str_plain_errors_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_23286b137410364bb1be4690c293fde2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 31, const_tuple_str_plain_self_str_plain_input_str_plain_final_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_webencodings$x_user_defined$$$function_1_encode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_webencodings$x_user_defined$$$function_2_decode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_webencodings$x_user_defined$$$function_3_encode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_webencodings$x_user_defined$$$function_4_decode( PyObject *defaults );


// The module function definitions.
static PyObject *impl_webencodings$x_user_defined$$$function_1_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_input = python_pars[ 1 ];
    PyObject *par_errors = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_6dee9af75a3fc6440982aae9b90b06a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6dee9af75a3fc6440982aae9b90b06a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6dee9af75a3fc6440982aae9b90b06a6, codeobj_6dee9af75a3fc6440982aae9b90b06a6, module_webencodings$x_user_defined, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6dee9af75a3fc6440982aae9b90b06a6 = cache_frame_6dee9af75a3fc6440982aae9b90b06a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6dee9af75a3fc6440982aae9b90b06a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6dee9af75a3fc6440982aae9b90b06a6 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_mvar_value_2;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = tmp_mvar_value_1;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_charmap_encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( par_input == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "input" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_input;
    if ( par_errors == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_errors;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_encoding_table );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoding_table );
    }

    if ( tmp_mvar_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoding_table" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = tmp_mvar_value_2;
    frame_6dee9af75a3fc6440982aae9b90b06a6->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dee9af75a3fc6440982aae9b90b06a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dee9af75a3fc6440982aae9b90b06a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dee9af75a3fc6440982aae9b90b06a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6dee9af75a3fc6440982aae9b90b06a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6dee9af75a3fc6440982aae9b90b06a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6dee9af75a3fc6440982aae9b90b06a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6dee9af75a3fc6440982aae9b90b06a6,
        type_description_1,
        par_self,
        par_input,
        par_errors
    );


    // Release cached frame.
    if ( frame_6dee9af75a3fc6440982aae9b90b06a6 == cache_frame_6dee9af75a3fc6440982aae9b90b06a6 )
    {
        Py_DECREF( frame_6dee9af75a3fc6440982aae9b90b06a6 );
    }
    cache_frame_6dee9af75a3fc6440982aae9b90b06a6 = NULL;

    assertFrameObject( frame_6dee9af75a3fc6440982aae9b90b06a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined$$$function_1_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_input );
    par_input = NULL;

    }
    {
    Py_XDECREF( par_errors );
    par_errors = NULL;

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
    Py_XDECREF( par_input );
    par_input = NULL;

    }
    {
    Py_XDECREF( par_errors );
    par_errors = NULL;

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
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined$$$function_1_encode );
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


static PyObject *impl_webencodings$x_user_defined$$$function_2_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_input = python_pars[ 1 ];
    PyObject *par_errors = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_f91197873116ea4a7eeed3abb355ff5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f91197873116ea4a7eeed3abb355ff5d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f91197873116ea4a7eeed3abb355ff5d, codeobj_f91197873116ea4a7eeed3abb355ff5d, module_webencodings$x_user_defined, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f91197873116ea4a7eeed3abb355ff5d = cache_frame_f91197873116ea4a7eeed3abb355ff5d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f91197873116ea4a7eeed3abb355ff5d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f91197873116ea4a7eeed3abb355ff5d ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_mvar_value_2;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = tmp_mvar_value_1;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_charmap_decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( par_input == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "input" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_input;
    if ( par_errors == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_errors;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_decoding_table );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoding_table );
    }

    if ( tmp_mvar_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoding_table" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = tmp_mvar_value_2;
    frame_f91197873116ea4a7eeed3abb355ff5d->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f91197873116ea4a7eeed3abb355ff5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f91197873116ea4a7eeed3abb355ff5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f91197873116ea4a7eeed3abb355ff5d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f91197873116ea4a7eeed3abb355ff5d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f91197873116ea4a7eeed3abb355ff5d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f91197873116ea4a7eeed3abb355ff5d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f91197873116ea4a7eeed3abb355ff5d,
        type_description_1,
        par_self,
        par_input,
        par_errors
    );


    // Release cached frame.
    if ( frame_f91197873116ea4a7eeed3abb355ff5d == cache_frame_f91197873116ea4a7eeed3abb355ff5d )
    {
        Py_DECREF( frame_f91197873116ea4a7eeed3abb355ff5d );
    }
    cache_frame_f91197873116ea4a7eeed3abb355ff5d = NULL;

    assertFrameObject( frame_f91197873116ea4a7eeed3abb355ff5d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined$$$function_2_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_input );
    par_input = NULL;

    }
    {
    Py_XDECREF( par_errors );
    par_errors = NULL;

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
    Py_XDECREF( par_input );
    par_input = NULL;

    }
    {
    Py_XDECREF( par_errors );
    par_errors = NULL;

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
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined$$$function_2_decode );
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


static PyObject *impl_webencodings$x_user_defined$$$function_3_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_input = python_pars[ 1 ];
    PyObject *par_final = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_23286b137410364bb1be4690c293fde2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_23286b137410364bb1be4690c293fde2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_23286b137410364bb1be4690c293fde2, codeobj_23286b137410364bb1be4690c293fde2, module_webencodings$x_user_defined, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_23286b137410364bb1be4690c293fde2 = cache_frame_23286b137410364bb1be4690c293fde2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23286b137410364bb1be4690c293fde2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23286b137410364bb1be4690c293fde2 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_source_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_mvar_value_2;
    PyObject *tmp_subscript_name_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = tmp_mvar_value_1;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_charmap_encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( par_input == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "input" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_input;
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_errors );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_encoding_table );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoding_table );
    }

    if ( tmp_mvar_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoding_table" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = tmp_mvar_value_2;
    frame_23286b137410364bb1be4690c293fde2->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23286b137410364bb1be4690c293fde2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23286b137410364bb1be4690c293fde2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23286b137410364bb1be4690c293fde2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23286b137410364bb1be4690c293fde2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23286b137410364bb1be4690c293fde2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23286b137410364bb1be4690c293fde2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23286b137410364bb1be4690c293fde2,
        type_description_1,
        par_self,
        par_input,
        par_final
    );


    // Release cached frame.
    if ( frame_23286b137410364bb1be4690c293fde2 == cache_frame_23286b137410364bb1be4690c293fde2 )
    {
        Py_DECREF( frame_23286b137410364bb1be4690c293fde2 );
    }
    cache_frame_23286b137410364bb1be4690c293fde2 = NULL;

    assertFrameObject( frame_23286b137410364bb1be4690c293fde2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined$$$function_3_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_input );
    par_input = NULL;

    }
    {
    Py_XDECREF( par_final );
    par_final = NULL;

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
    Py_XDECREF( par_input );
    par_input = NULL;

    }
    {
    Py_XDECREF( par_final );
    par_final = NULL;

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
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined$$$function_3_encode );
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


static PyObject *impl_webencodings$x_user_defined$$$function_4_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_input = python_pars[ 1 ];
    PyObject *par_final = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_64c6c586b4ed0902d828fdead21ac0ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64c6c586b4ed0902d828fdead21ac0ec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64c6c586b4ed0902d828fdead21ac0ec, codeobj_64c6c586b4ed0902d828fdead21ac0ec, module_webencodings$x_user_defined, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_64c6c586b4ed0902d828fdead21ac0ec = cache_frame_64c6c586b4ed0902d828fdead21ac0ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64c6c586b4ed0902d828fdead21ac0ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64c6c586b4ed0902d828fdead21ac0ec ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_source_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_mvar_value_2;
    PyObject *tmp_subscript_name_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = tmp_mvar_value_1;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_charmap_decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( par_input == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "input" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_input;
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_errors );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_decoding_table );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoding_table );
    }

    if ( tmp_mvar_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoding_table" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = tmp_mvar_value_2;
    frame_64c6c586b4ed0902d828fdead21ac0ec->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64c6c586b4ed0902d828fdead21ac0ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_64c6c586b4ed0902d828fdead21ac0ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64c6c586b4ed0902d828fdead21ac0ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64c6c586b4ed0902d828fdead21ac0ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64c6c586b4ed0902d828fdead21ac0ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64c6c586b4ed0902d828fdead21ac0ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64c6c586b4ed0902d828fdead21ac0ec,
        type_description_1,
        par_self,
        par_input,
        par_final
    );


    // Release cached frame.
    if ( frame_64c6c586b4ed0902d828fdead21ac0ec == cache_frame_64c6c586b4ed0902d828fdead21ac0ec )
    {
        Py_DECREF( frame_64c6c586b4ed0902d828fdead21ac0ec );
    }
    cache_frame_64c6c586b4ed0902d828fdead21ac0ec = NULL;

    assertFrameObject( frame_64c6c586b4ed0902d828fdead21ac0ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined$$$function_4_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_input );
    par_input = NULL;

    }
    {
    Py_XDECREF( par_final );
    par_final = NULL;

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
    Py_XDECREF( par_input );
    par_input = NULL;

    }
    {
    Py_XDECREF( par_final );
    par_final = NULL;

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
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined$$$function_4_decode );
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



static PyObject *MAKE_FUNCTION_webencodings$x_user_defined$$$function_1_encode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_webencodings$x_user_defined$$$function_1_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_3689ec1e31b5fe05bb28f5381f0f3e86,
#endif
        codeobj_6dee9af75a3fc6440982aae9b90b06a6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_webencodings$x_user_defined,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_webencodings$x_user_defined$$$function_2_decode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_webencodings$x_user_defined$$$function_2_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        const_str_digest_d1839f1f30f2f4b2778b131732fea084,
#endif
        codeobj_f91197873116ea4a7eeed3abb355ff5d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_webencodings$x_user_defined,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_webencodings$x_user_defined$$$function_3_encode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_webencodings$x_user_defined$$$function_3_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_fd3f8c72728220dfb8ed4f95550f885b,
#endif
        codeobj_23286b137410364bb1be4690c293fde2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_webencodings$x_user_defined,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_webencodings$x_user_defined$$$function_4_decode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_webencodings$x_user_defined$$$function_4_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        const_str_digest_fda4539bf5c3e3ae7e66c49b1d119209,
#endif
        codeobj_64c6c586b4ed0902d828fdead21ac0ec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_webencodings$x_user_defined,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_webencodings$x_user_defined =
{
    PyModuleDef_HEAD_INIT,
    "webencodings.x_user_defined",   /* m_name */
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

MOD_INIT_DECL( webencodings$x_user_defined )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_webencodings$x_user_defined );
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
    puts("webencodings.x_user_defined: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("webencodings.x_user_defined: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("webencodings.x_user_defined: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initwebencodings$x_user_defined" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_webencodings$x_user_defined = Py_InitModule4(
        "webencodings.x_user_defined",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_webencodings$x_user_defined = PyModule_Create( &mdef_webencodings$x_user_defined );
#endif

    moduledict_webencodings$x_user_defined = MODULE_DICT( module_webencodings$x_user_defined );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_webencodings$x_user_defined,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_webencodings$x_user_defined,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_webencodings$x_user_defined,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_webencodings$x_user_defined );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_1a0b59091a47248f5c65256f1c0b9fb6, module_webencodings$x_user_defined );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    struct Nuitka_FrameObject *frame_e30fbd5c05454efc2a51f8575ec64efe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    bool tmp_result;
    PyObject *locals_webencodings$x_user_defined_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_54b9d1afcbabd3f094b8b482d4ebae96_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_54b9d1afcbabd3f094b8b482d4ebae96_2 = NULL;
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
    PyObject *locals_webencodings$x_user_defined_30 = NULL;
    struct Nuitka_FrameObject *frame_cdb189cbe7bde61a5078ceb4dbff15c5_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 = NULL;
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
    PyObject *locals_webencodings$x_user_defined_35 = NULL;
    struct Nuitka_FrameObject *frame_3eb035687d2a5a4036bc1bf8013906d0_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3eb035687d2a5a4036bc1bf8013906d0_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_webencodings$x_user_defined_40 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_webencodings$x_user_defined_44 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = const_str_digest_fcfb7a6ab4c672d1b8dae9c2229fa83f;
    UPDATE_STRING_DICT0( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_3179e2122dd7061084af2364299c0c3b;
    UPDATE_STRING_DICT0( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_e30fbd5c05454efc2a51f8575ec64efe = MAKE_MODULE_FRAME( codeobj_e30fbd5c05454efc2a51f8575ec64efe, module_webencodings$x_user_defined );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e30fbd5c05454efc2a51f8575ec64efe );
    assert( Py_REFCNT( frame_e30fbd5c05454efc2a51f8575ec64efe ) == 2 );

    // Framed code:
    {
    PyObject *tmp_assign_source_4;
    PyObject *tmp_import_name_from_1;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 14;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4 );
    }
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_name_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_level_name_1;
    tmp_name_name_1 = const_str_plain_codecs;
    tmp_globals_name_1 = (PyObject *)moduledict_webencodings$x_user_defined;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 16;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs, tmp_assign_source_5 );
    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    CHECK_OBJECT( tmp_mvar_value_1 );
    tmp_source_name_1 = tmp_mvar_value_1;
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Codec );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    tmp_assign_source_6 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_6;

    }
    {
    PyObject *tmp_assign_source_7;
    PyObject *tmp_dircall_arg1_1;
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_7 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_7;

    }
    {
    PyObject *tmp_assign_source_8;
    tmp_assign_source_8 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;

    }
    {
    PyObject *tmp_assign_source_9;
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


        exception_lineno = 21;

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


        exception_lineno = 21;

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


        exception_lineno = 21;

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


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

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
    tmp_assign_source_9 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_9;

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


        exception_lineno = 21;

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


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    }
    branch_no_1:;
    }
    {
    nuitka_bool tmp_condition_result_4;
    PyObject *tmp_source_name_2;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_source_name_2 = tmp_class_creation_1__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_2, const_str_plain___prepare__ );
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
    PyObject *tmp_assign_source_10;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_kw_name_1;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_source_name_3 = tmp_class_creation_1__metaclass;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    tmp_tuple_element_2 = const_str_plain_Codec;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 21;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_10;

    }
    {
    nuitka_bool tmp_condition_result_5;
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


        exception_lineno = 21;

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


        exception_lineno = 21;

        goto try_except_handler_1;
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

        exception_lineno = 21;

        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_raise_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 21;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_1;
    }
    branch_no_3:;
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assign_source_11;
    tmp_assign_source_11 = PyDict_New();
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_11;

    }
    branch_end_2:;
    }
    {
    PyObject *tmp_assign_source_12;
    {
    PyObject *tmp_set_locals_1;
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_set_locals_1 = tmp_class_creation_1__prepared;
    locals_webencodings$x_user_defined_21 = tmp_set_locals_1;
    Py_INCREF( tmp_set_locals_1 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_1a0b59091a47248f5c65256f1c0b9fb6;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_21, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_3;
    }
    }
    {
    tmp_dictset_value = const_str_plain_Codec;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_21, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_3;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_54b9d1afcbabd3f094b8b482d4ebae96_2, codeobj_54b9d1afcbabd3f094b8b482d4ebae96, module_webencodings$x_user_defined, sizeof(void *) );
    frame_54b9d1afcbabd3f094b8b482d4ebae96_2 = cache_frame_54b9d1afcbabd3f094b8b482d4ebae96_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_54b9d1afcbabd3f094b8b482d4ebae96_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_54b9d1afcbabd3f094b8b482d4ebae96_2 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_1;
    tmp_defaults_1 = const_tuple_str_plain_strict_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_webencodings$x_user_defined$$$function_1_encode( tmp_defaults_1 );



    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_21, const_str_plain_encode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    PyObject *tmp_defaults_2;
    tmp_defaults_2 = const_tuple_str_plain_strict_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_webencodings$x_user_defined$$$function_2_decode( tmp_defaults_2 );



    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_21, const_str_plain_decode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54b9d1afcbabd3f094b8b482d4ebae96_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54b9d1afcbabd3f094b8b482d4ebae96_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54b9d1afcbabd3f094b8b482d4ebae96_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54b9d1afcbabd3f094b8b482d4ebae96_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54b9d1afcbabd3f094b8b482d4ebae96_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_54b9d1afcbabd3f094b8b482d4ebae96_2,
        type_description_2,
        outline_0_var___class__
    );


    // Release cached frame.
    if ( frame_54b9d1afcbabd3f094b8b482d4ebae96_2 == cache_frame_54b9d1afcbabd3f094b8b482d4ebae96_2 )
    {
        Py_DECREF( frame_54b9d1afcbabd3f094b8b482d4ebae96_2 );
    }
    cache_frame_54b9d1afcbabd3f094b8b482d4ebae96_2 = NULL;

    assertFrameObject( frame_54b9d1afcbabd3f094b8b482d4ebae96_2 );

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
    nuitka_bool tmp_condition_result_6;
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


        exception_lineno = 21;

        goto try_except_handler_3;
    }
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
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_dictset_value = tmp_class_creation_1__bases_orig;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_21, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_3;
    }
    }
    branch_no_4:;
    }
    {
    PyObject *tmp_assign_source_13;
    PyObject *tmp_called_name_2;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_kw_name_2;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_called_name_2 = tmp_class_creation_1__metaclass;
    tmp_tuple_element_4 = const_str_plain_Codec;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_4 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_webencodings$x_user_defined_21;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 21;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_13;

    }
    {
    CHECK_OBJECT( outline_0_var___class__ );
    tmp_assign_source_12 = outline_0_var___class__;
    Py_INCREF( tmp_assign_source_12 );
    goto try_return_handler_3;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    {
    Py_DECREF( locals_webencodings$x_user_defined_21 );
    locals_webencodings$x_user_defined_21 = NULL;
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
    Py_DECREF( locals_webencodings$x_user_defined_21 );
    locals_webencodings$x_user_defined_21 = NULL;
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
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
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
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 21;
    goto try_except_handler_1;
    outline_result_1:;
    UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_Codec, tmp_assign_source_12 );
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
    PyObject *tmp_assign_source_14;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_mvar_value_2;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;

        goto try_except_handler_4;
    }

    tmp_source_name_6 = tmp_mvar_value_2;
    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IncrementalEncoder );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_assign_source_14 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_2__bases_orig == NULL );
    tmp_class_creation_2__bases_orig = tmp_assign_source_14;

    }
    {
    PyObject *tmp_assign_source_15;
    PyObject *tmp_dircall_arg1_2;
    CHECK_OBJECT( tmp_class_creation_2__bases_orig );
    tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_15 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_15;

    }
    {
    PyObject *tmp_assign_source_16;
    tmp_assign_source_16 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_16;

    }
    {
    PyObject *tmp_assign_source_17;
    PyObject *tmp_metaclass_name_2;
    nuitka_bool tmp_condition_result_7;
    PyObject *tmp_key_name_4;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_key_name_5;
    nuitka_bool tmp_condition_result_8;
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


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_4:;
    condexpr_end_3:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_bases_name_2 = tmp_class_creation_2__bases;
    tmp_assign_source_17 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_17;

    }
    {
    nuitka_bool tmp_condition_result_9;
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


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    {
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    }
    branch_no_5:;
    }
    {
    nuitka_bool tmp_condition_result_10;
    PyObject *tmp_source_name_7;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_source_name_7 = tmp_class_creation_2__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___prepare__ );
    tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    {
    PyObject *tmp_assign_source_18;
    PyObject *tmp_called_name_3;
    PyObject *tmp_source_name_8;
    PyObject *tmp_args_name_3;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_kw_name_3;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_source_name_8 = tmp_class_creation_2__metaclass;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_tuple_element_6 = const_str_plain_IncrementalEncoder;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_tuple_element_6 = tmp_class_creation_2__bases;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 30;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_18;

    }
    {
    nuitka_bool tmp_condition_result_11;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_source_name_9;
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_source_name_9 = tmp_class_creation_2__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___getitem__ );
    tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_value_2;
    PyObject *tmp_left_name_2;
    PyObject *tmp_right_name_2;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_source_name_10;
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


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_right_name_2 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_type_arg_4 = tmp_class_creation_2__prepared;
    tmp_source_name_10 = BUILTIN_TYPE1( tmp_type_arg_4 );
    assert( !(tmp_source_name_10 == NULL) );
    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 30;

        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
    tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_raise_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_value = tmp_raise_value_2;
    exception_lineno = 30;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_4;
    }
    branch_no_7:;
    }
    goto branch_end_6;
    branch_no_6:;
    {
    PyObject *tmp_assign_source_19;
    tmp_assign_source_19 = PyDict_New();
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_19;

    }
    branch_end_6:;
    }
    {
    PyObject *tmp_assign_source_20;
    {
    PyObject *tmp_set_locals_2;
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_set_locals_2 = tmp_class_creation_2__prepared;
    locals_webencodings$x_user_defined_30 = tmp_set_locals_2;
    Py_INCREF( tmp_set_locals_2 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_1a0b59091a47248f5c65256f1c0b9fb6;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_30, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    }
    {
    tmp_dictset_value = const_str_plain_IncrementalEncoder;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_30, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_cdb189cbe7bde61a5078ceb4dbff15c5_3, codeobj_cdb189cbe7bde61a5078ceb4dbff15c5, module_webencodings$x_user_defined, sizeof(void *) );
    frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 = cache_frame_cdb189cbe7bde61a5078ceb4dbff15c5_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_3;
    tmp_defaults_3 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_webencodings$x_user_defined$$$function_3_encode( tmp_defaults_3 );



    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_30, const_str_plain_encode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_2 = "o";
        goto frame_exception_exit_3;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cdb189cbe7bde61a5078ceb4dbff15c5_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cdb189cbe7bde61a5078ceb4dbff15c5_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cdb189cbe7bde61a5078ceb4dbff15c5_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cdb189cbe7bde61a5078ceb4dbff15c5_3,
        type_description_2,
        outline_1_var___class__
    );


    // Release cached frame.
    if ( frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 == cache_frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 )
    {
        Py_DECREF( frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 );
    }
    cache_frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 = NULL;

    assertFrameObject( frame_cdb189cbe7bde61a5078ceb4dbff15c5_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_6;
    skip_nested_handling_2:;
    {
    nuitka_bool tmp_condition_result_12;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_2;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_compexpr_left_2 = tmp_class_creation_2__bases;
    CHECK_OBJECT( tmp_class_creation_2__bases_orig );
    tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
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
    CHECK_OBJECT( tmp_class_creation_2__bases_orig );
    tmp_dictset_value = tmp_class_creation_2__bases_orig;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_30, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    }
    branch_no_8:;
    }
    {
    PyObject *tmp_assign_source_21;
    PyObject *tmp_called_name_4;
    PyObject *tmp_args_name_4;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_kw_name_4;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_called_name_4 = tmp_class_creation_2__metaclass;
    tmp_tuple_element_8 = const_str_plain_IncrementalEncoder;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_tuple_element_8 = tmp_class_creation_2__bases;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_webencodings$x_user_defined_30;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 30;
    tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_21;

    }
    {
    CHECK_OBJECT( outline_1_var___class__ );
    tmp_assign_source_20 = outline_1_var___class__;
    Py_INCREF( tmp_assign_source_20 );
    goto try_return_handler_6;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    {
    Py_DECREF( locals_webencodings$x_user_defined_30 );
    locals_webencodings$x_user_defined_30 = NULL;
    }
    {
    goto try_return_handler_5;
    }
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
    Py_DECREF( locals_webencodings$x_user_defined_30 );
    locals_webencodings$x_user_defined_30 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    {
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    }
    {
    goto outline_result_2;
    }
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
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 30;
    goto try_except_handler_4;
    outline_result_2:;
    UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_IncrementalEncoder, tmp_assign_source_20 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_2:;
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
    PyObject *tmp_assign_source_22;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_source_name_11;
    PyObject *tmp_mvar_value_3;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;

        goto try_except_handler_7;
    }

    tmp_source_name_11 = tmp_mvar_value_3;
    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_IncrementalDecoder );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    tmp_assign_source_22 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_3__bases_orig == NULL );
    tmp_class_creation_3__bases_orig = tmp_assign_source_22;

    }
    {
    PyObject *tmp_assign_source_23;
    PyObject *tmp_dircall_arg1_3;
    CHECK_OBJECT( tmp_class_creation_3__bases_orig );
    tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_23 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_23;

    }
    {
    PyObject *tmp_assign_source_24;
    tmp_assign_source_24 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_24;

    }
    {
    PyObject *tmp_assign_source_25;
    PyObject *tmp_metaclass_name_3;
    nuitka_bool tmp_condition_result_13;
    PyObject *tmp_key_name_7;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_key_name_8;
    nuitka_bool tmp_condition_result_14;
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


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_6:;
    condexpr_end_5:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_bases_name_3 = tmp_class_creation_3__bases;
    tmp_assign_source_25 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_25;

    }
    {
    nuitka_bool tmp_condition_result_15;
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


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    {
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    }
    branch_no_9:;
    }
    {
    nuitka_bool tmp_condition_result_16;
    PyObject *tmp_source_name_12;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_source_name_12 = tmp_class_creation_3__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_12, const_str_plain___prepare__ );
    tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    {
    PyObject *tmp_assign_source_26;
    PyObject *tmp_called_name_5;
    PyObject *tmp_source_name_13;
    PyObject *tmp_args_name_5;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_kw_name_5;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_source_name_13 = tmp_class_creation_3__metaclass;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    tmp_tuple_element_10 = const_str_plain_IncrementalDecoder;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_tuple_element_10 = tmp_class_creation_3__bases;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 35;
    tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_26;

    }
    {
    nuitka_bool tmp_condition_result_17;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_source_name_14;
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_source_name_14 = tmp_class_creation_3__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_14, const_str_plain___getitem__ );
    tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_value_3;
    PyObject *tmp_left_name_3;
    PyObject *tmp_right_name_3;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_getattr_target_3;
    PyObject *tmp_getattr_attr_3;
    PyObject *tmp_getattr_default_3;
    PyObject *tmp_source_name_15;
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


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    tmp_right_name_3 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_11 );
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_type_arg_6 = tmp_class_creation_3__prepared;
    tmp_source_name_15 = BUILTIN_TYPE1( tmp_type_arg_6 );
    assert( !(tmp_source_name_15 == NULL) );
    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 35;

        goto try_except_handler_7;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_11 );
    tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_raise_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_value = tmp_raise_value_3;
    exception_lineno = 35;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_7;
    }
    branch_no_11:;
    }
    goto branch_end_10;
    branch_no_10:;
    {
    PyObject *tmp_assign_source_27;
    tmp_assign_source_27 = PyDict_New();
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_27;

    }
    branch_end_10:;
    }
    {
    PyObject *tmp_assign_source_28;
    {
    PyObject *tmp_set_locals_3;
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_set_locals_3 = tmp_class_creation_3__prepared;
    locals_webencodings$x_user_defined_35 = tmp_set_locals_3;
    Py_INCREF( tmp_set_locals_3 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_1a0b59091a47248f5c65256f1c0b9fb6;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_35, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_9;
    }
    }
    {
    tmp_dictset_value = const_str_plain_IncrementalDecoder;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_35, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_9;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_3eb035687d2a5a4036bc1bf8013906d0_4, codeobj_3eb035687d2a5a4036bc1bf8013906d0, module_webencodings$x_user_defined, sizeof(void *) );
    frame_3eb035687d2a5a4036bc1bf8013906d0_4 = cache_frame_3eb035687d2a5a4036bc1bf8013906d0_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3eb035687d2a5a4036bc1bf8013906d0_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3eb035687d2a5a4036bc1bf8013906d0_4 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_4;
    tmp_defaults_4 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_webencodings$x_user_defined$$$function_4_decode( tmp_defaults_4 );



    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_35, const_str_plain_decode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_2 = "o";
        goto frame_exception_exit_4;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3eb035687d2a5a4036bc1bf8013906d0_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3eb035687d2a5a4036bc1bf8013906d0_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3eb035687d2a5a4036bc1bf8013906d0_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3eb035687d2a5a4036bc1bf8013906d0_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3eb035687d2a5a4036bc1bf8013906d0_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3eb035687d2a5a4036bc1bf8013906d0_4,
        type_description_2,
        outline_2_var___class__
    );


    // Release cached frame.
    if ( frame_3eb035687d2a5a4036bc1bf8013906d0_4 == cache_frame_3eb035687d2a5a4036bc1bf8013906d0_4 )
    {
        Py_DECREF( frame_3eb035687d2a5a4036bc1bf8013906d0_4 );
    }
    cache_frame_3eb035687d2a5a4036bc1bf8013906d0_4 = NULL;

    assertFrameObject( frame_3eb035687d2a5a4036bc1bf8013906d0_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;
    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_9;
    skip_nested_handling_3:;
    {
    nuitka_bool tmp_condition_result_18;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_3;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_compexpr_left_3 = tmp_class_creation_3__bases;
    CHECK_OBJECT( tmp_class_creation_3__bases_orig );
    tmp_compexpr_right_3 = tmp_class_creation_3__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_9;
    }
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
    CHECK_OBJECT( tmp_class_creation_3__bases_orig );
    tmp_dictset_value = tmp_class_creation_3__bases_orig;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_35, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_9;
    }
    }
    branch_no_12:;
    }
    {
    PyObject *tmp_assign_source_29;
    PyObject *tmp_called_name_6;
    PyObject *tmp_args_name_6;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_kw_name_6;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_called_name_6 = tmp_class_creation_3__metaclass;
    tmp_tuple_element_12 = const_str_plain_IncrementalDecoder;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_tuple_element_12 = tmp_class_creation_3__bases;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = locals_webencodings$x_user_defined_35;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_12 );
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 35;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_9;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_29;

    }
    {
    CHECK_OBJECT( outline_2_var___class__ );
    tmp_assign_source_28 = outline_2_var___class__;
    Py_INCREF( tmp_assign_source_28 );
    goto try_return_handler_9;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    {
    Py_DECREF( locals_webencodings$x_user_defined_35 );
    locals_webencodings$x_user_defined_35 = NULL;
    }
    {
    goto try_return_handler_8;
    }
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_webencodings$x_user_defined_35 );
    locals_webencodings$x_user_defined_35 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    {
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    }
    {
    goto outline_result_3;
    }
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
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_3;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 35;
    goto try_except_handler_7;
    outline_result_3:;
    UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_IncrementalDecoder, tmp_assign_source_28 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_3:;
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
    PyObject *tmp_assign_source_30;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_mvar_value_4;
    PyObject *tmp_source_name_16;
    PyObject *tmp_mvar_value_5;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_Codec );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Codec );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Codec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;

        goto try_except_handler_10;
    }

    tmp_tuple_element_13 = tmp_mvar_value_4;
    tmp_assign_source_30 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_30, 0, tmp_tuple_element_13 );
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;

        goto try_except_handler_10;
    }

    tmp_source_name_16 = tmp_mvar_value_5;
    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_StreamWriter );
    if ( tmp_tuple_element_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        exception_lineno = 40;

        goto try_except_handler_10;
    }
    PyTuple_SET_ITEM( tmp_assign_source_30, 1, tmp_tuple_element_13 );
    assert( tmp_class_creation_4__bases_orig == NULL );
    tmp_class_creation_4__bases_orig = tmp_assign_source_30;

    }
    {
    PyObject *tmp_assign_source_31;
    PyObject *tmp_dircall_arg1_4;
    CHECK_OBJECT( tmp_class_creation_4__bases_orig );
    tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_31 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_31;

    }
    {
    PyObject *tmp_assign_source_32;
    tmp_assign_source_32 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_32;

    }
    {
    PyObject *tmp_assign_source_33;
    PyObject *tmp_metaclass_name_4;
    nuitka_bool tmp_condition_result_19;
    PyObject *tmp_key_name_10;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_key_name_11;
    nuitka_bool tmp_condition_result_20;
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


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_truth_name_4 = CHECK_IF_TRUE( tmp_class_creation_4__bases );
    if ( tmp_truth_name_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    tmp_condition_result_20 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_8:;
    condexpr_end_7:;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_bases_name_4 = tmp_class_creation_4__bases;
    tmp_assign_source_33 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_33;

    }
    {
    nuitka_bool tmp_condition_result_21;
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


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    {
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    }
    branch_no_13:;
    }
    {
    nuitka_bool tmp_condition_result_22;
    PyObject *tmp_source_name_17;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_source_name_17 = tmp_class_creation_4__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_17, const_str_plain___prepare__ );
    tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    {
    PyObject *tmp_assign_source_34;
    PyObject *tmp_called_name_7;
    PyObject *tmp_source_name_18;
    PyObject *tmp_args_name_7;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_kw_name_7;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_source_name_18 = tmp_class_creation_4__metaclass;
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    tmp_tuple_element_14 = const_str_plain_StreamWriter;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_tuple_element_14 = tmp_class_creation_4__bases;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 40;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_34;

    }
    {
    nuitka_bool tmp_condition_result_23;
    PyObject *tmp_operand_name_4;
    PyObject *tmp_source_name_19;
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_source_name_19 = tmp_class_creation_4__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_19, const_str_plain___getitem__ );
    tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    tmp_condition_result_23 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_value_4;
    PyObject *tmp_left_name_4;
    PyObject *tmp_right_name_4;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_getattr_target_4;
    PyObject *tmp_getattr_attr_4;
    PyObject *tmp_getattr_default_4;
    PyObject *tmp_source_name_20;
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


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    tmp_right_name_4 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_15 );
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_type_arg_8 = tmp_class_creation_4__prepared;
    tmp_source_name_20 = BUILTIN_TYPE1( tmp_type_arg_8 );
    assert( !(tmp_source_name_20 == NULL) );
    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_4 );

        exception_lineno = 40;

        goto try_except_handler_10;
    }
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_15 );
    tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_raise_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_10;
    }
    exception_type = tmp_raise_type_4;
    Py_INCREF( tmp_raise_type_4 );
    exception_value = tmp_raise_value_4;
    exception_lineno = 40;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_10;
    }
    branch_no_15:;
    }
    goto branch_end_14;
    branch_no_14:;
    {
    PyObject *tmp_assign_source_35;
    tmp_assign_source_35 = PyDict_New();
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_35;

    }
    branch_end_14:;
    }
    {
    PyObject *tmp_assign_source_36;
    {
    PyObject *tmp_set_locals_4;
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_set_locals_4 = tmp_class_creation_4__prepared;
    locals_webencodings$x_user_defined_40 = tmp_set_locals_4;
    Py_INCREF( tmp_set_locals_4 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_1a0b59091a47248f5c65256f1c0b9fb6;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_40, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_12;
    }
    }
    {
    tmp_dictset_value = const_str_plain_StreamWriter;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_40, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_12;
    }
    }
    {
    nuitka_bool tmp_condition_result_24;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_4;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_compexpr_left_4 = tmp_class_creation_4__bases;
    CHECK_OBJECT( tmp_class_creation_4__bases_orig );
    tmp_compexpr_right_4 = tmp_class_creation_4__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_12;
    }
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
    CHECK_OBJECT( tmp_class_creation_4__bases_orig );
    tmp_dictset_value = tmp_class_creation_4__bases_orig;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_40, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_12;
    }
    }
    branch_no_16:;
    }
    {
    PyObject *tmp_assign_source_37;
    PyObject *tmp_called_name_8;
    PyObject *tmp_args_name_8;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_kw_name_8;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_called_name_8 = tmp_class_creation_4__metaclass;
    tmp_tuple_element_16 = const_str_plain_StreamWriter;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_tuple_element_16 = tmp_class_creation_4__bases;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
    tmp_tuple_element_16 = locals_webencodings$x_user_defined_40;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_16 );
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 40;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_12;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_37;

    }
    {
    CHECK_OBJECT( outline_3_var___class__ );
    tmp_assign_source_36 = outline_3_var___class__;
    Py_INCREF( tmp_assign_source_36 );
    goto try_return_handler_12;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    {
    Py_DECREF( locals_webencodings$x_user_defined_40 );
    locals_webencodings$x_user_defined_40 = NULL;
    }
    {
    goto try_return_handler_11;
    }
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_webencodings$x_user_defined_40 );
    locals_webencodings$x_user_defined_40 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    {
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    }
    {
    goto outline_result_4;
    }
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_4;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 40;
    goto try_except_handler_10;
    outline_result_4:;
    UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_StreamWriter, tmp_assign_source_36 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_4:;
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
    PyObject *tmp_assign_source_38;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_mvar_value_6;
    PyObject *tmp_source_name_21;
    PyObject *tmp_mvar_value_7;
    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_Codec );

    if (unlikely( tmp_mvar_value_6 == NULL ))
    {
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Codec );
    }

    if ( tmp_mvar_value_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Codec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;

        goto try_except_handler_13;
    }

    tmp_tuple_element_17 = tmp_mvar_value_6;
    tmp_assign_source_38 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_38, 0, tmp_tuple_element_17 );
    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_7 == NULL ))
    {
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;

        goto try_except_handler_13;
    }

    tmp_source_name_21 = tmp_mvar_value_7;
    tmp_tuple_element_17 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_StreamReader );
    if ( tmp_tuple_element_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_38 );

        exception_lineno = 44;

        goto try_except_handler_13;
    }
    PyTuple_SET_ITEM( tmp_assign_source_38, 1, tmp_tuple_element_17 );
    assert( tmp_class_creation_5__bases_orig == NULL );
    tmp_class_creation_5__bases_orig = tmp_assign_source_38;

    }
    {
    PyObject *tmp_assign_source_39;
    PyObject *tmp_dircall_arg1_5;
    CHECK_OBJECT( tmp_class_creation_5__bases_orig );
    tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
    Py_INCREF( tmp_dircall_arg1_5 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
        tmp_assign_source_39 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_39;

    }
    {
    PyObject *tmp_assign_source_40;
    tmp_assign_source_40 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_40;

    }
    {
    PyObject *tmp_assign_source_41;
    PyObject *tmp_metaclass_name_5;
    nuitka_bool tmp_condition_result_25;
    PyObject *tmp_key_name_13;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_key_name_14;
    nuitka_bool tmp_condition_result_26;
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


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_truth_name_5 = CHECK_IF_TRUE( tmp_class_creation_5__bases );
    if ( tmp_truth_name_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    tmp_condition_result_26 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
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


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_10:;
    condexpr_end_9:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_bases_name_5 = tmp_class_creation_5__bases;
    tmp_assign_source_41 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_41;

    }
    {
    nuitka_bool tmp_condition_result_27;
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


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    {
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    }
    branch_no_17:;
    }
    {
    nuitka_bool tmp_condition_result_28;
    PyObject *tmp_source_name_22;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_source_name_22 = tmp_class_creation_5__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_22, const_str_plain___prepare__ );
    tmp_condition_result_28 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    {
    PyObject *tmp_assign_source_42;
    PyObject *tmp_called_name_9;
    PyObject *tmp_source_name_23;
    PyObject *tmp_args_name_9;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_kw_name_9;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_source_name_23 = tmp_class_creation_5__metaclass;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    tmp_tuple_element_18 = const_str_plain_StreamReader;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_18 );
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_tuple_element_18 = tmp_class_creation_5__bases;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_18 );
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 44;
    tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_42;

    }
    {
    nuitka_bool tmp_condition_result_29;
    PyObject *tmp_operand_name_5;
    PyObject *tmp_source_name_24;
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_source_name_24 = tmp_class_creation_5__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_24, const_str_plain___getitem__ );
    tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    tmp_condition_result_29 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_value_5;
    PyObject *tmp_left_name_5;
    PyObject *tmp_right_name_5;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_getattr_target_5;
    PyObject *tmp_getattr_attr_5;
    PyObject *tmp_getattr_default_5;
    PyObject *tmp_source_name_25;
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


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    tmp_right_name_5 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_19 );
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_type_arg_10 = tmp_class_creation_5__prepared;
    tmp_source_name_25 = BUILTIN_TYPE1( tmp_type_arg_10 );
    assert( !(tmp_source_name_25 == NULL) );
    tmp_tuple_element_19 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_tuple_element_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_5 );

        exception_lineno = 44;

        goto try_except_handler_13;
    }
    PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_19 );
    tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_raise_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_13;
    }
    exception_type = tmp_raise_type_5;
    Py_INCREF( tmp_raise_type_5 );
    exception_value = tmp_raise_value_5;
    exception_lineno = 44;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_13;
    }
    branch_no_19:;
    }
    goto branch_end_18;
    branch_no_18:;
    {
    PyObject *tmp_assign_source_43;
    tmp_assign_source_43 = PyDict_New();
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_43;

    }
    branch_end_18:;
    }
    {
    PyObject *tmp_assign_source_44;
    {
    PyObject *tmp_set_locals_5;
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_set_locals_5 = tmp_class_creation_5__prepared;
    locals_webencodings$x_user_defined_44 = tmp_set_locals_5;
    Py_INCREF( tmp_set_locals_5 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_1a0b59091a47248f5c65256f1c0b9fb6;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_44, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_15;
    }
    }
    {
    tmp_dictset_value = const_str_plain_StreamReader;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_44, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_15;
    }
    }
    {
    nuitka_bool tmp_condition_result_30;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_5;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_compexpr_left_5 = tmp_class_creation_5__bases;
    CHECK_OBJECT( tmp_class_creation_5__bases_orig );
    tmp_compexpr_right_5 = tmp_class_creation_5__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_15;
    }
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
    CHECK_OBJECT( tmp_class_creation_5__bases_orig );
    tmp_dictset_value = tmp_class_creation_5__bases_orig;
    tmp_res = PyObject_SetItem( locals_webencodings$x_user_defined_44, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_15;
    }
    }
    branch_no_20:;
    }
    {
    PyObject *tmp_assign_source_45;
    PyObject *tmp_called_name_10;
    PyObject *tmp_args_name_10;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_kw_name_10;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_called_name_10 = tmp_class_creation_5__metaclass;
    tmp_tuple_element_20 = const_str_plain_StreamReader;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_20 );
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_tuple_element_20 = tmp_class_creation_5__bases;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = locals_webencodings$x_user_defined_44;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_20 );
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 44;
    tmp_assign_source_45 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_15;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_45;

    }
    {
    CHECK_OBJECT( outline_4_var___class__ );
    tmp_assign_source_44 = outline_4_var___class__;
    Py_INCREF( tmp_assign_source_44 );
    goto try_return_handler_15;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    {
    Py_DECREF( locals_webencodings$x_user_defined_44 );
    locals_webencodings$x_user_defined_44 = NULL;
    }
    {
    goto try_return_handler_14;
    }
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_webencodings$x_user_defined_44 );
    locals_webencodings$x_user_defined_44 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    {
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    }
    {
    goto outline_result_5;
    }
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto outline_exception_5;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( webencodings$x_user_defined );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 44;
    goto try_except_handler_13;
    outline_result_5:;
    UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_StreamReader, tmp_assign_source_44 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_5:;
    }
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
    {
    PyObject *tmp_assign_source_46;
    PyObject *tmp_called_name_11;
    PyObject *tmp_source_name_26;
    PyObject *tmp_mvar_value_8;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_source_name_27;
    PyObject *tmp_called_name_12;
    PyObject *tmp_mvar_value_9;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_source_name_28;
    PyObject *tmp_called_name_13;
    PyObject *tmp_mvar_value_10;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_mvar_value_11;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_mvar_value_12;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_mvar_value_13;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_mvar_value_14;
    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_8 == NULL ))
    {
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;

        goto frame_exception_exit_1;
    }

    tmp_source_name_26 = tmp_mvar_value_8;
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_CodecInfo );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_name;
    tmp_dict_value_1 = const_str_digest_9c2697f4f6c856c85eba2363c29ccabb;
    tmp_kw_name_11 = _PyDict_NewPresized( 7 );
    tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_encode;
    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_Codec );

    if (unlikely( tmp_mvar_value_9 == NULL ))
    {
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Codec );
    }

    if ( tmp_mvar_value_9 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Codec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = tmp_mvar_value_9;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 52;
    tmp_source_name_27 = CALL_FUNCTION_NO_ARGS( tmp_called_name_12 );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_encode );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_decode;
    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_Codec );

    if (unlikely( tmp_mvar_value_10 == NULL ))
    {
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Codec );
    }

    if ( tmp_mvar_value_10 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Codec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = tmp_mvar_value_10;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 53;
    tmp_source_name_28 = CALL_FUNCTION_NO_ARGS( tmp_called_name_13 );
    if ( tmp_source_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_decode );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_incrementalencoder;
    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_IncrementalEncoder );

    if (unlikely( tmp_mvar_value_11 == NULL ))
    {
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IncrementalEncoder );
    }

    if ( tmp_mvar_value_11 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IncrementalEncoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = tmp_mvar_value_11;
    tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_incrementaldecoder;
    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_IncrementalDecoder );

    if (unlikely( tmp_mvar_value_12 == NULL ))
    {
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IncrementalDecoder );
    }

    if ( tmp_mvar_value_12 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IncrementalDecoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = tmp_mvar_value_12;
    tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_streamreader;
    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_StreamReader );

    if (unlikely( tmp_mvar_value_13 == NULL ))
    {
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StreamReader );
    }

    if ( tmp_mvar_value_13 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "StreamReader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = tmp_mvar_value_13;
    tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_streamwriter;
    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_StreamWriter );

    if (unlikely( tmp_mvar_value_14 == NULL ))
    {
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StreamWriter );
    }

    if ( tmp_mvar_value_14 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "StreamWriter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = tmp_mvar_value_14;
    tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 50;
    tmp_assign_source_46 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_kw_name_11 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codec_info, tmp_assign_source_46 );
    }
    {
    PyObject *tmp_assign_source_47;
    tmp_assign_source_47 = const_str_digest_757471e357555d75c0603655fe6be091;
    UPDATE_STRING_DICT0( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_decoding_table, tmp_assign_source_47 );
    }
    {
    PyObject *tmp_assign_source_48;
    PyObject *tmp_called_name_14;
    PyObject *tmp_source_name_29;
    PyObject *tmp_mvar_value_15;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_mvar_value_16;
    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_mvar_value_15 == NULL ))
    {
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_mvar_value_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 325;

        goto frame_exception_exit_1;
    }

    tmp_source_name_29 = tmp_mvar_value_15;
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_charmap_build );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;

        goto frame_exception_exit_1;
    }
    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_decoding_table );

    if (unlikely( tmp_mvar_value_16 == NULL ))
    {
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoding_table );
    }

    if ( tmp_mvar_value_16 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoding_table" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 325;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = tmp_mvar_value_16;
    frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame.f_lineno = 325;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_webencodings$x_user_defined, (Nuitka_StringObject *)const_str_plain_encoding_table, tmp_assign_source_48 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e30fbd5c05454efc2a51f8575ec64efe );
#endif
    popFrameStack();

    assertFrameObject( frame_e30fbd5c05454efc2a51f8575ec64efe );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e30fbd5c05454efc2a51f8575ec64efe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e30fbd5c05454efc2a51f8575ec64efe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e30fbd5c05454efc2a51f8575ec64efe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e30fbd5c05454efc2a51f8575ec64efe, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;

    return MOD_RETURN_VALUE( module_webencodings$x_user_defined );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

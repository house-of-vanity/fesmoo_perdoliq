/* Generated code for Python source for module 'cryptography.exceptions'
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

/* The _module_cryptography$exceptions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$exceptions;
PyDictObject *moduledict_cryptography$exceptions;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
extern PyObject *const_str_plain_UNSUPPORTED_PADDING;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain_NotYetFinalized;
static PyObject *const_str_plain_UNSUPPORTED_DIFFIE_HELLMAN;
extern PyObject *const_str_plain_InvalidSignature;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_UNSUPPORTED_EXCHANGE_ALGORITHM;
extern PyObject *const_str_plain_AlreadyUpdated;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_tuple_str_plain_Enum_tuple;
extern PyObject *const_str_plain__Reasons;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_91ab46b9da9e5862f52a2e5815c9651b;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_UNSUPPORTED_HASH;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_InternalError;
extern PyObject *const_str_plain_UNSUPPORTED_SERIALIZATION;
extern PyObject *const_str_plain_UNSUPPORTED_MGF;
extern PyObject *const_str_plain_BACKEND_MISSING_INTERFACE;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_AlreadyFinalized;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_enum;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_digest_cb454735284bb8f0c06510e24b994694;
extern PyObject *const_str_plain_InvalidKey;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_c5fc5dd6f8b6f2ea81ca68767e0e88c6_tuple;
extern PyObject *const_str_plain_message;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_UnsupportedAlgorithm;
static PyObject *const_str_plain_err_code;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_UNSUPPORTED_ELLIPTIC_CURVE;
static PyObject *const_str_plain_UNSUPPORTED_X509;
static PyObject *const_str_digest_95c5b81d821608fe5024162478961a2c;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_5f8fdc556191a389afcb0a8fd0b9fe6d;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_b55c823e1d4197120070fc4e93300ddc_tuple;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_InvalidTag;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain__reason;
extern PyObject *const_str_plain_Enum;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM;
extern PyObject *const_str_plain_UNSUPPORTED_CIPHER;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_UNSUPPORTED_DIFFIE_HELLMAN = UNSTREAM_STRING( &constant_bin[ 452564 ], 26, 1 );
    const_str_digest_91ab46b9da9e5862f52a2e5815c9651b = UNSTREAM_STRING( &constant_bin[ 452590 ], 29, 0 );
    const_str_digest_cb454735284bb8f0c06510e24b994694 = UNSTREAM_STRING( &constant_bin[ 452619 ], 32, 0 );
    const_tuple_c5fc5dd6f8b6f2ea81ca68767e0e88c6_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c5fc5dd6f8b6f2ea81ca68767e0e88c6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c5fc5dd6f8b6f2ea81ca68767e0e88c6_tuple, 1, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_c5fc5dd6f8b6f2ea81ca68767e0e88c6_tuple, 2, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_c5fc5dd6f8b6f2ea81ca68767e0e88c6_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_plain_err_code = UNSTREAM_STRING( &constant_bin[ 452651 ], 8, 1 );
    const_str_plain_UNSUPPORTED_X509 = UNSTREAM_STRING( &constant_bin[ 452659 ], 16, 1 );
    const_str_digest_95c5b81d821608fe5024162478961a2c = UNSTREAM_STRING( &constant_bin[ 452675 ], 59, 0 );
    const_str_digest_5f8fdc556191a389afcb0a8fd0b9fe6d = UNSTREAM_STRING( &constant_bin[ 452734 ], 22, 0 );
    const_tuple_b55c823e1d4197120070fc4e93300ddc_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b55c823e1d4197120070fc4e93300ddc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b55c823e1d4197120070fc4e93300ddc_tuple, 1, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_b55c823e1d4197120070fc4e93300ddc_tuple, 2, const_str_plain_err_code ); Py_INCREF( const_str_plain_err_code );
    PyTuple_SET_ITEM( const_tuple_b55c823e1d4197120070fc4e93300ddc_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$exceptions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5dae65dd3b52b37e49dad011f2e89bd3;
static PyCodeObject *codeobj_f1559b1ac594d0c5fbad7ecabf7db3fe;
static PyCodeObject *codeobj_4e3a7bdc329c992798c499a94d0f0971;
static PyCodeObject *codeobj_9d403526520a334fff8d3f284917a6e3;
static PyCodeObject *codeobj_c6510913bdf13e67051c5acfd7edd6a3;
static PyCodeObject *codeobj_d565e40cd3ac335f119a397e2722c6b4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_95c5b81d821608fe5024162478961a2c;
    codeobj_5dae65dd3b52b37e49dad011f2e89bd3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cb454735284bb8f0c06510e24b994694, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f1559b1ac594d0c5fbad7ecabf7db3fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_InternalError, 50, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_4e3a7bdc329c992798c499a94d0f0971 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UnsupportedAlgorithm, 24, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_9d403526520a334fff8d3f284917a6e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__Reasons, 10, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c6510913bdf13e67051c5acfd7edd6a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 25, const_tuple_c5fc5dd6f8b6f2ea81ca68767e0e88c6_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_d565e40cd3ac335f119a397e2722c6b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 51, const_tuple_b55c823e1d4197120070fc4e93300ddc_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_cryptography$exceptions$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_cryptography$exceptions$$$function_2___init__(  );


// The module function definitions.
static PyObject *impl_cryptography$exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    PyObject *par_reason = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c6510913bdf13e67051c5acfd7edd6a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c6510913bdf13e67051c5acfd7edd6a3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c6510913bdf13e67051c5acfd7edd6a3, codeobj_c6510913bdf13e67051c5acfd7edd6a3, module_cryptography$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c6510913bdf13e67051c5acfd7edd6a3 = cache_frame_c6510913bdf13e67051c5acfd7edd6a3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c6510913bdf13e67051c5acfd7edd6a3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c6510913bdf13e67051c5acfd7edd6a3 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_args_element_name_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnsupportedAlgorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_type_name_1 = tmp_mvar_value_1;
    CHECK_OBJECT( par_self );
    tmp_object_name_1 = par_self;
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    if ( par_message == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_message;
    frame_c6510913bdf13e67051c5acfd7edd6a3->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    }
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    if ( par_reason == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reason" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = par_reason;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__reason, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6510913bdf13e67051c5acfd7edd6a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6510913bdf13e67051c5acfd7edd6a3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c6510913bdf13e67051c5acfd7edd6a3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c6510913bdf13e67051c5acfd7edd6a3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c6510913bdf13e67051c5acfd7edd6a3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c6510913bdf13e67051c5acfd7edd6a3,
        type_description_1,
        par_self,
        par_message,
        par_reason,
        NULL
    );


    // Release cached frame.
    if ( frame_c6510913bdf13e67051c5acfd7edd6a3 == cache_frame_c6510913bdf13e67051c5acfd7edd6a3 )
    {
        Py_DECREF( frame_c6510913bdf13e67051c5acfd7edd6a3 );
    }
    cache_frame_c6510913bdf13e67051c5acfd7edd6a3 = NULL;

    assertFrameObject( frame_c6510913bdf13e67051c5acfd7edd6a3 );

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
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_message );
    par_message = NULL;

    }
    {
    Py_XDECREF( par_reason );
    par_reason = NULL;

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
    Py_XDECREF( par_message );
    par_message = NULL;

    }
    {
    Py_XDECREF( par_reason );
    par_reason = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions$$$function_1___init__ );
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


static PyObject *impl_cryptography$exceptions$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_msg = python_pars[ 1 ];
    PyObject *par_err_code = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_d565e40cd3ac335f119a397e2722c6b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d565e40cd3ac335f119a397e2722c6b4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d565e40cd3ac335f119a397e2722c6b4, codeobj_d565e40cd3ac335f119a397e2722c6b4, module_cryptography$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d565e40cd3ac335f119a397e2722c6b4 = cache_frame_d565e40cd3ac335f119a397e2722c6b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d565e40cd3ac335f119a397e2722c6b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d565e40cd3ac335f119a397e2722c6b4 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_args_element_name_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_InternalError );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InternalError );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InternalError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_type_name_1 = tmp_mvar_value_1;
    CHECK_OBJECT( par_self );
    tmp_object_name_1 = par_self;
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    if ( par_msg == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_msg;
    frame_d565e40cd3ac335f119a397e2722c6b4->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    }
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    if ( par_err_code == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "err_code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = par_err_code;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_err_code, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d565e40cd3ac335f119a397e2722c6b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d565e40cd3ac335f119a397e2722c6b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d565e40cd3ac335f119a397e2722c6b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d565e40cd3ac335f119a397e2722c6b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d565e40cd3ac335f119a397e2722c6b4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d565e40cd3ac335f119a397e2722c6b4,
        type_description_1,
        par_self,
        par_msg,
        par_err_code,
        NULL
    );


    // Release cached frame.
    if ( frame_d565e40cd3ac335f119a397e2722c6b4 == cache_frame_d565e40cd3ac335f119a397e2722c6b4 )
    {
        Py_DECREF( frame_d565e40cd3ac335f119a397e2722c6b4 );
    }
    cache_frame_d565e40cd3ac335f119a397e2722c6b4 = NULL;

    assertFrameObject( frame_d565e40cd3ac335f119a397e2722c6b4 );

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
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_msg );
    par_msg = NULL;

    }
    {
    Py_XDECREF( par_err_code );
    par_err_code = NULL;

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
    Py_XDECREF( par_msg );
    par_msg = NULL;

    }
    {
    Py_XDECREF( par_err_code );
    par_err_code = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions$$$function_2___init__ );
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



static PyObject *MAKE_FUNCTION_cryptography$exceptions$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_91ab46b9da9e5862f52a2e5815c9651b,
#endif
        codeobj_c6510913bdf13e67051c5acfd7edd6a3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$exceptions$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$exceptions$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_5f8fdc556191a389afcb0a8fd0b9fe6d,
#endif
        codeobj_d565e40cd3ac335f119a397e2722c6b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.exceptions",   /* m_name */
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

MOD_INIT_DECL( cryptography$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$exceptions );
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
    puts("cryptography.exceptions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$exceptions = Py_InitModule4(
        "cryptography.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$exceptions = PyModule_Create( &mdef_cryptography$exceptions );
#endif

    moduledict_cryptography$exceptions = MODULE_DICT( module_cryptography$exceptions );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_82e5b7f1075745a8638e06059354d03c, module_cryptography$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_5dae65dd3b52b37e49dad011f2e89bd3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    bool tmp_result;
    PyObject *locals_cryptography$exceptions_10 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_9d403526520a334fff8d3f284917a6e3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d403526520a334fff8d3f284917a6e3_2 = NULL;
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
    PyObject *locals_cryptography$exceptions_24 = NULL;
    struct Nuitka_FrameObject *frame_4e3a7bdc329c992798c499a94d0f0971_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4e3a7bdc329c992798c499a94d0f0971_3 = NULL;
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
    PyObject *locals_cryptography$exceptions_30 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_cryptography$exceptions_34 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_cryptography$exceptions_38 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_cryptography$exceptions_42 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_cryptography$exceptions_46 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_cryptography$exceptions_50 = NULL;
    struct Nuitka_FrameObject *frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_cryptography$exceptions_56 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_95c5b81d821608fe5024162478961a2c;
    UPDATE_STRING_DICT0( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
    PyObject *tmp_assign_source_4;
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_4 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    }
    // Frame without reuse.
    frame_5dae65dd3b52b37e49dad011f2e89bd3 = MAKE_MODULE_FRAME( codeobj_5dae65dd3b52b37e49dad011f2e89bd3, module_cryptography$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5dae65dd3b52b37e49dad011f2e89bd3 );
    assert( Py_REFCNT( frame_5dae65dd3b52b37e49dad011f2e89bd3 ) == 2 );

    // Framed code:
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_import_name_from_1;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_1 = tmp_import_from_1__module;
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    }
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_import_name_from_2;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_2 = tmp_import_from_1__module;
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    PyObject *tmp_import_name_from_3;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_3 = tmp_import_from_1__module;
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_1:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    }
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_level_name_1;
    tmp_name_name_1 = const_str_plain_enum;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$exceptions;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Enum_tuple;
    tmp_level_name_1 = const_int_0;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Enum );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_Enum, tmp_assign_source_8 );
    }
    {
    PyObject *tmp_assign_source_9;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_mvar_value_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_Enum );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Enum );
    }

    CHECK_OBJECT( tmp_mvar_value_1 );
    tmp_tuple_element_1 = tmp_mvar_value_1;
    tmp_assign_source_9 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_9;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_10;
    PyObject *tmp_dircall_arg1_1;
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_10 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_10;

    }
    {
    PyObject *tmp_assign_source_11;
    tmp_assign_source_11 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;

    }
    {
    PyObject *tmp_assign_source_12;
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


        exception_lineno = 10;

        goto try_except_handler_2;
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


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_2;
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


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_bases_name_1 = tmp_class_creation_1__bases;
    tmp_assign_source_12 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_12;

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


        exception_lineno = 10;

        goto try_except_handler_2;
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


        exception_lineno = 10;

        goto try_except_handler_2;
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
    PyObject *tmp_assign_source_13;
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


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    tmp_tuple_element_2 = const_str_plain__Reasons;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 10;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_13;

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


        exception_lineno = 10;

        goto try_except_handler_2;
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


        exception_lineno = 10;

        goto try_except_handler_2;
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

        exception_lineno = 10;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_raise_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 10;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_2;
    }
    branch_no_3:;
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assign_source_14;
    tmp_assign_source_14 = PyDict_New();
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_14;

    }
    branch_end_2:;
    }
    {
    PyObject *tmp_assign_source_15;
    {
    PyObject *tmp_set_locals_1;
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_set_locals_1 = tmp_class_creation_1__prepared;
    locals_cryptography$exceptions_10 = tmp_set_locals_1;
    Py_INCREF( tmp_set_locals_1 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_4;
    }
    }
    {
    tmp_dictset_value = const_str_plain__Reasons;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_4;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_9d403526520a334fff8d3f284917a6e3_2, codeobj_9d403526520a334fff8d3f284917a6e3, module_cryptography$exceptions, sizeof(void *) );
    frame_9d403526520a334fff8d3f284917a6e3_2 = cache_frame_9d403526520a334fff8d3f284917a6e3_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d403526520a334fff8d3f284917a6e3_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d403526520a334fff8d3f284917a6e3_2 ) == 2 ); // Frame stack

    // Framed code:
    {
    tmp_dictset_value = const_int_0;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_BACKEND_MISSING_INTERFACE, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_1;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_HASH, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_2;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_CIPHER, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_3;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_PADDING, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_4;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_MGF, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_5;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_6;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_ELLIPTIC_CURVE, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_7;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_SERIALIZATION, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_8;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_X509, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_9;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_EXCHANGE_ALGORITHM, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }
    {
    tmp_dictset_value = const_int_pos_10;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain_UNSUPPORTED_DIFFIE_HELLMAN, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d403526520a334fff8d3f284917a6e3_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d403526520a334fff8d3f284917a6e3_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d403526520a334fff8d3f284917a6e3_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d403526520a334fff8d3f284917a6e3_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d403526520a334fff8d3f284917a6e3_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d403526520a334fff8d3f284917a6e3_2,
        type_description_2,
        outline_0_var___class__
    );


    // Release cached frame.
    if ( frame_9d403526520a334fff8d3f284917a6e3_2 == cache_frame_9d403526520a334fff8d3f284917a6e3_2 )
    {
        Py_DECREF( frame_9d403526520a334fff8d3f284917a6e3_2 );
    }
    cache_frame_9d403526520a334fff8d3f284917a6e3_2 = NULL;

    assertFrameObject( frame_9d403526520a334fff8d3f284917a6e3_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
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


        exception_lineno = 10;

        goto try_except_handler_4;
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
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_10, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_4;
    }
    }
    branch_no_4:;
    }
    {
    PyObject *tmp_assign_source_16;
    PyObject *tmp_called_name_2;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_kw_name_2;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_called_name_2 = tmp_class_creation_1__metaclass;
    tmp_tuple_element_4 = const_str_plain__Reasons;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_4 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_cryptography$exceptions_10;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 10;
    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_16;

    }
    {
    CHECK_OBJECT( outline_0_var___class__ );
    tmp_assign_source_15 = outline_0_var___class__;
    Py_INCREF( tmp_assign_source_15 );
    goto try_return_handler_4;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    {
    Py_DECREF( locals_cryptography$exceptions_10 );
    locals_cryptography$exceptions_10 = NULL;
    }
    {
    goto try_return_handler_3;
    }
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
    Py_DECREF( locals_cryptography$exceptions_10 );
    locals_cryptography$exceptions_10 = NULL;
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
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    {
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    }
    {
    goto outline_result_1;
    }
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
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 10;
    goto try_except_handler_2;
    outline_result_1:;
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain__Reasons, tmp_assign_source_15 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_2:;
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
    PyObject *tmp_assign_source_17;
    PyObject *tmp_dircall_arg1_2;
    tmp_dircall_arg1_2 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_17 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_17;

    }
    {
    PyObject *tmp_assign_source_18;
    tmp_assign_source_18 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_18;

    }
    {
    PyObject *tmp_assign_source_19;
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


        exception_lineno = 24;

        goto try_except_handler_5;
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


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_5;
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


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_4:;
    condexpr_end_3:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_bases_name_2 = tmp_class_creation_2__bases;
    tmp_assign_source_19 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_19;

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


        exception_lineno = 24;

        goto try_except_handler_5;
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


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    }
    branch_no_5:;
    }
    {
    nuitka_bool tmp_condition_result_10;
    PyObject *tmp_source_name_5;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_source_name_5 = tmp_class_creation_2__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
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
    PyObject *tmp_assign_source_20;
    PyObject *tmp_called_name_3;
    PyObject *tmp_source_name_6;
    PyObject *tmp_args_name_3;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_kw_name_3;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_source_name_6 = tmp_class_creation_2__metaclass;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    tmp_tuple_element_5 = const_str_plain_UnsupportedAlgorithm;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 24;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_20;

    }
    {
    nuitka_bool tmp_condition_result_11;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_source_name_7;
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_source_name_7 = tmp_class_creation_2__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
    tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_5;
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
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_source_name_8;
    PyObject *tmp_type_arg_4;
    tmp_raise_type_2 = PyExc_TypeError;
    tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
    tmp_getattr_attr_2 = const_str_plain___name__;
    tmp_getattr_default_2 = const_str_angle_metaclass;
    tmp_tuple_element_6 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    tmp_right_name_2 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_6 );
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_type_arg_4 = tmp_class_creation_2__prepared;
    tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
    assert( !(tmp_source_name_8 == NULL) );
    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 24;

        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_6 );
    tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_raise_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_value = tmp_raise_value_2;
    exception_lineno = 24;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_5;
    }
    branch_no_7:;
    }
    goto branch_end_6;
    branch_no_6:;
    {
    PyObject *tmp_assign_source_21;
    tmp_assign_source_21 = PyDict_New();
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_21;

    }
    branch_end_6:;
    }
    {
    PyObject *tmp_assign_source_22;
    {
    PyObject *tmp_set_locals_2;
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_set_locals_2 = tmp_class_creation_2__prepared;
    locals_cryptography$exceptions_24 = tmp_set_locals_2;
    Py_INCREF( tmp_set_locals_2 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_24, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_7;
    }
    }
    {
    tmp_dictset_value = const_str_plain_UnsupportedAlgorithm;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_24, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_7;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_4e3a7bdc329c992798c499a94d0f0971_3, codeobj_4e3a7bdc329c992798c499a94d0f0971, module_cryptography$exceptions, sizeof(void *) );
    frame_4e3a7bdc329c992798c499a94d0f0971_3 = cache_frame_4e3a7bdc329c992798c499a94d0f0971_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4e3a7bdc329c992798c499a94d0f0971_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4e3a7bdc329c992798c499a94d0f0971_3 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_1;
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$exceptions$$$function_1___init__( tmp_defaults_1 );



    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_24, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_2 = "o";
        goto frame_exception_exit_3;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e3a7bdc329c992798c499a94d0f0971_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e3a7bdc329c992798c499a94d0f0971_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e3a7bdc329c992798c499a94d0f0971_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e3a7bdc329c992798c499a94d0f0971_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e3a7bdc329c992798c499a94d0f0971_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4e3a7bdc329c992798c499a94d0f0971_3,
        type_description_2,
        outline_1_var___class__
    );


    // Release cached frame.
    if ( frame_4e3a7bdc329c992798c499a94d0f0971_3 == cache_frame_4e3a7bdc329c992798c499a94d0f0971_3 )
    {
        Py_DECREF( frame_4e3a7bdc329c992798c499a94d0f0971_3 );
    }
    cache_frame_4e3a7bdc329c992798c499a94d0f0971_3 = NULL;

    assertFrameObject( frame_4e3a7bdc329c992798c499a94d0f0971_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_7;
    skip_nested_handling_2:;
    {
    nuitka_bool tmp_condition_result_12;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_2;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_compexpr_left_2 = tmp_class_creation_2__bases;
    tmp_compexpr_right_2 = const_tuple_type_Exception_tuple;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_7;
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
    tmp_dictset_value = const_tuple_type_Exception_tuple;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_24, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_7;
    }
    }
    branch_no_8:;
    }
    {
    PyObject *tmp_assign_source_23;
    PyObject *tmp_called_name_4;
    PyObject *tmp_args_name_4;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_kw_name_4;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_called_name_4 = tmp_class_creation_2__metaclass;
    tmp_tuple_element_7 = const_str_plain_UnsupportedAlgorithm;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_tuple_element_7 = tmp_class_creation_2__bases;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = locals_cryptography$exceptions_24;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 24;
    tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_7;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_23;

    }
    {
    CHECK_OBJECT( outline_1_var___class__ );
    tmp_assign_source_22 = outline_1_var___class__;
    Py_INCREF( tmp_assign_source_22 );
    goto try_return_handler_7;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    {
    Py_DECREF( locals_cryptography$exceptions_24 );
    locals_cryptography$exceptions_24 = NULL;
    }
    {
    goto try_return_handler_6;
    }
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_cryptography$exceptions_24 );
    locals_cryptography$exceptions_24 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    {
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    }
    {
    goto outline_result_2;
    }
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
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_2;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 24;
    goto try_except_handler_5;
    outline_result_2:;
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm, tmp_assign_source_22 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_3:;
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
    PyObject *tmp_assign_source_24;
    PyObject *tmp_dircall_arg1_3;
    tmp_dircall_arg1_3 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_24 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_24;

    }
    {
    PyObject *tmp_assign_source_25;
    tmp_assign_source_25 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_25;

    }
    {
    PyObject *tmp_assign_source_26;
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


        exception_lineno = 30;

        goto try_except_handler_8;
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


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_8;
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


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_6:;
    condexpr_end_5:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_bases_name_3 = tmp_class_creation_3__bases;
    tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_26;

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


        exception_lineno = 30;

        goto try_except_handler_8;
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


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    }
    branch_no_9:;
    }
    {
    nuitka_bool tmp_condition_result_16;
    PyObject *tmp_source_name_9;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_source_name_9 = tmp_class_creation_3__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
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
    PyObject *tmp_assign_source_27;
    PyObject *tmp_called_name_5;
    PyObject *tmp_source_name_10;
    PyObject *tmp_args_name_5;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_kw_name_5;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_source_name_10 = tmp_class_creation_3__metaclass;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    tmp_tuple_element_8 = const_str_plain_AlreadyFinalized;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 30;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_27;

    }
    {
    nuitka_bool tmp_condition_result_17;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_source_name_11;
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_source_name_11 = tmp_class_creation_3__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
    tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_8;
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
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_getattr_target_3;
    PyObject *tmp_getattr_attr_3;
    PyObject *tmp_getattr_default_3;
    PyObject *tmp_source_name_12;
    PyObject *tmp_type_arg_6;
    tmp_raise_type_3 = PyExc_TypeError;
    tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
    tmp_getattr_attr_3 = const_str_plain___name__;
    tmp_getattr_default_3 = const_str_angle_metaclass;
    tmp_tuple_element_9 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    tmp_right_name_3 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_9 );
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_type_arg_6 = tmp_class_creation_3__prepared;
    tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_6 );
    assert( !(tmp_source_name_12 == NULL) );
    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 30;

        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_9 );
    tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_raise_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_8;
    }
    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_value = tmp_raise_value_3;
    exception_lineno = 30;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_8;
    }
    branch_no_11:;
    }
    goto branch_end_10;
    branch_no_10:;
    {
    PyObject *tmp_assign_source_28;
    tmp_assign_source_28 = PyDict_New();
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_28;

    }
    branch_end_10:;
    }
    {
    PyObject *tmp_assign_source_29;
    {
    PyObject *tmp_set_locals_3;
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_set_locals_3 = tmp_class_creation_3__prepared;
    locals_cryptography$exceptions_30 = tmp_set_locals_3;
    Py_INCREF( tmp_set_locals_3 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_30, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_10;
    }
    }
    {
    tmp_dictset_value = const_str_plain_AlreadyFinalized;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_30, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_10;
    }
    }
    {
    nuitka_bool tmp_condition_result_18;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_3;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_compexpr_left_3 = tmp_class_creation_3__bases;
    tmp_compexpr_right_3 = const_tuple_type_Exception_tuple;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_10;
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
    tmp_dictset_value = const_tuple_type_Exception_tuple;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_30, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_10;
    }
    }
    branch_no_12:;
    }
    {
    PyObject *tmp_assign_source_30;
    PyObject *tmp_called_name_6;
    PyObject *tmp_args_name_6;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_kw_name_6;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_called_name_6 = tmp_class_creation_3__metaclass;
    tmp_tuple_element_10 = const_str_plain_AlreadyFinalized;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_10 );
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_tuple_element_10 = tmp_class_creation_3__bases;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = locals_cryptography$exceptions_30;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_10 );
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 30;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_10;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_30;

    }
    {
    CHECK_OBJECT( outline_2_var___class__ );
    tmp_assign_source_29 = outline_2_var___class__;
    Py_INCREF( tmp_assign_source_29 );
    goto try_return_handler_10;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    {
    Py_DECREF( locals_cryptography$exceptions_30 );
    locals_cryptography$exceptions_30 = NULL;
    }
    {
    goto try_return_handler_9;
    }
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_cryptography$exceptions_30 );
    locals_cryptography$exceptions_30 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    {
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    }
    {
    goto outline_result_3;
    }
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_3;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 30;
    goto try_except_handler_8;
    outline_result_3:;
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_AlreadyFinalized, tmp_assign_source_29 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_4:;
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
    PyObject *tmp_assign_source_31;
    PyObject *tmp_dircall_arg1_4;
    tmp_dircall_arg1_4 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_31 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_11;
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


        exception_lineno = 34;

        goto try_except_handler_11;
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


        exception_lineno = 34;

        goto try_except_handler_11;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_truth_name_4 = CHECK_IF_TRUE( tmp_class_creation_4__bases );
    if ( tmp_truth_name_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_11;
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


        exception_lineno = 34;

        goto try_except_handler_11;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_11;
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


        exception_lineno = 34;

        goto try_except_handler_11;
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


        exception_lineno = 34;

        goto try_except_handler_11;
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


        exception_lineno = 34;

        goto try_except_handler_11;
    }
    }
    branch_no_13:;
    }
    {
    nuitka_bool tmp_condition_result_22;
    PyObject *tmp_source_name_13;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_source_name_13 = tmp_class_creation_4__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
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
    PyObject *tmp_source_name_14;
    PyObject *tmp_args_name_7;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_kw_name_7;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_source_name_14 = tmp_class_creation_4__metaclass;
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_11;
    }
    tmp_tuple_element_11 = const_str_plain_AlreadyUpdated;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_11 );
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_11 );
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 34;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_34;

    }
    {
    nuitka_bool tmp_condition_result_23;
    PyObject *tmp_operand_name_4;
    PyObject *tmp_source_name_15;
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_source_name_15 = tmp_class_creation_4__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
    tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_11;
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
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_getattr_target_4;
    PyObject *tmp_getattr_attr_4;
    PyObject *tmp_getattr_default_4;
    PyObject *tmp_source_name_16;
    PyObject *tmp_type_arg_8;
    tmp_raise_type_4 = PyExc_TypeError;
    tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
    tmp_getattr_attr_4 = const_str_plain___name__;
    tmp_getattr_default_4 = const_str_angle_metaclass;
    tmp_tuple_element_12 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
    if ( tmp_tuple_element_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_11;
    }
    tmp_right_name_4 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_12 );
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_type_arg_8 = tmp_class_creation_4__prepared;
    tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_8 );
    assert( !(tmp_source_name_16 == NULL) );
    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_tuple_element_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_4 );

        exception_lineno = 34;

        goto try_except_handler_11;
    }
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_12 );
    tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_raise_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_11;
    }
    exception_type = tmp_raise_type_4;
    Py_INCREF( tmp_raise_type_4 );
    exception_value = tmp_raise_value_4;
    exception_lineno = 34;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_11;
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
    locals_cryptography$exceptions_34 = tmp_set_locals_4;
    Py_INCREF( tmp_set_locals_4 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_34, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_13;
    }
    }
    {
    tmp_dictset_value = const_str_plain_AlreadyUpdated;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_34, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_13;
    }
    }
    {
    nuitka_bool tmp_condition_result_24;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_4;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_compexpr_left_4 = tmp_class_creation_4__bases;
    tmp_compexpr_right_4 = const_tuple_type_Exception_tuple;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_13;
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
    tmp_dictset_value = const_tuple_type_Exception_tuple;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_34, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_13;
    }
    }
    branch_no_16:;
    }
    {
    PyObject *tmp_assign_source_37;
    PyObject *tmp_called_name_8;
    PyObject *tmp_args_name_8;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_kw_name_8;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_called_name_8 = tmp_class_creation_4__metaclass;
    tmp_tuple_element_13 = const_str_plain_AlreadyUpdated;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_13 );
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_tuple_element_13 = tmp_class_creation_4__bases;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_13 );
    tmp_tuple_element_13 = locals_cryptography$exceptions_34;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_13 );
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 34;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_13;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_37;

    }
    {
    CHECK_OBJECT( outline_3_var___class__ );
    tmp_assign_source_36 = outline_3_var___class__;
    Py_INCREF( tmp_assign_source_36 );
    goto try_return_handler_13;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    {
    Py_DECREF( locals_cryptography$exceptions_34 );
    locals_cryptography$exceptions_34 = NULL;
    }
    {
    goto try_return_handler_12;
    }
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_cryptography$exceptions_34 );
    locals_cryptography$exceptions_34 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    {
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    }
    {
    goto outline_result_4;
    }
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_4;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 34;
    goto try_except_handler_11;
    outline_result_4:;
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_AlreadyUpdated, tmp_assign_source_36 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_5:;
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
    PyObject *tmp_dircall_arg1_5;
    tmp_dircall_arg1_5 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_dircall_arg1_5 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
        tmp_assign_source_38 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_38;

    }
    {
    PyObject *tmp_assign_source_39;
    tmp_assign_source_39 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_39;

    }
    {
    PyObject *tmp_assign_source_40;
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


        exception_lineno = 38;

        goto try_except_handler_14;
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


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_truth_name_5 = CHECK_IF_TRUE( tmp_class_creation_5__bases );
    if ( tmp_truth_name_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_14;
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


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_10:;
    condexpr_end_9:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_bases_name_5 = tmp_class_creation_5__bases;
    tmp_assign_source_40 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_40;

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


        exception_lineno = 38;

        goto try_except_handler_14;
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


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    }
    branch_no_17:;
    }
    {
    nuitka_bool tmp_condition_result_28;
    PyObject *tmp_source_name_17;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_source_name_17 = tmp_class_creation_5__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_17, const_str_plain___prepare__ );
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
    PyObject *tmp_assign_source_41;
    PyObject *tmp_called_name_9;
    PyObject *tmp_source_name_18;
    PyObject *tmp_args_name_9;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_kw_name_9;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_source_name_18 = tmp_class_creation_5__metaclass;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    tmp_tuple_element_14 = const_str_plain_NotYetFinalized;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_14 );
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_tuple_element_14 = tmp_class_creation_5__bases;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_14 );
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 38;
    tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_41;

    }
    {
    nuitka_bool tmp_condition_result_29;
    PyObject *tmp_operand_name_5;
    PyObject *tmp_source_name_19;
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_source_name_19 = tmp_class_creation_5__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_19, const_str_plain___getitem__ );
    tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_14;
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
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_getattr_target_5;
    PyObject *tmp_getattr_attr_5;
    PyObject *tmp_getattr_default_5;
    PyObject *tmp_source_name_20;
    PyObject *tmp_type_arg_10;
    tmp_raise_type_5 = PyExc_TypeError;
    tmp_left_name_5 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
    tmp_getattr_attr_5 = const_str_plain___name__;
    tmp_getattr_default_5 = const_str_angle_metaclass;
    tmp_tuple_element_15 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    tmp_right_name_5 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_15 );
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_type_arg_10 = tmp_class_creation_5__prepared;
    tmp_source_name_20 = BUILTIN_TYPE1( tmp_type_arg_10 );
    assert( !(tmp_source_name_20 == NULL) );
    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_5 );

        exception_lineno = 38;

        goto try_except_handler_14;
    }
    PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_15 );
    tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_raise_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_14;
    }
    exception_type = tmp_raise_type_5;
    Py_INCREF( tmp_raise_type_5 );
    exception_value = tmp_raise_value_5;
    exception_lineno = 38;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_14;
    }
    branch_no_19:;
    }
    goto branch_end_18;
    branch_no_18:;
    {
    PyObject *tmp_assign_source_42;
    tmp_assign_source_42 = PyDict_New();
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_42;

    }
    branch_end_18:;
    }
    {
    PyObject *tmp_assign_source_43;
    {
    PyObject *tmp_set_locals_5;
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_set_locals_5 = tmp_class_creation_5__prepared;
    locals_cryptography$exceptions_38 = tmp_set_locals_5;
    Py_INCREF( tmp_set_locals_5 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_38, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_16;
    }
    }
    {
    tmp_dictset_value = const_str_plain_NotYetFinalized;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_38, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_16;
    }
    }
    {
    nuitka_bool tmp_condition_result_30;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_5;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_compexpr_left_5 = tmp_class_creation_5__bases;
    tmp_compexpr_right_5 = const_tuple_type_Exception_tuple;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_16;
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
    tmp_dictset_value = const_tuple_type_Exception_tuple;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_38, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_16;
    }
    }
    branch_no_20:;
    }
    {
    PyObject *tmp_assign_source_44;
    PyObject *tmp_called_name_10;
    PyObject *tmp_args_name_10;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_kw_name_10;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_called_name_10 = tmp_class_creation_5__metaclass;
    tmp_tuple_element_16 = const_str_plain_NotYetFinalized;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_16 );
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_tuple_element_16 = tmp_class_creation_5__bases;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_16 );
    tmp_tuple_element_16 = locals_cryptography$exceptions_38;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_16 );
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 38;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_16;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_44;

    }
    {
    CHECK_OBJECT( outline_4_var___class__ );
    tmp_assign_source_43 = outline_4_var___class__;
    Py_INCREF( tmp_assign_source_43 );
    goto try_return_handler_16;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    {
    Py_DECREF( locals_cryptography$exceptions_38 );
    locals_cryptography$exceptions_38 = NULL;
    }
    {
    goto try_return_handler_15;
    }
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_cryptography$exceptions_38 );
    locals_cryptography$exceptions_38 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    {
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    }
    {
    goto outline_result_5;
    }
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_5;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 38;
    goto try_except_handler_14;
    outline_result_5:;
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_NotYetFinalized, tmp_assign_source_43 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_6:;
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
    // Tried code:
    {
    PyObject *tmp_assign_source_45;
    PyObject *tmp_dircall_arg1_6;
    tmp_dircall_arg1_6 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_dircall_arg1_6 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
        tmp_assign_source_45 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_45;

    }
    {
    PyObject *tmp_assign_source_46;
    tmp_assign_source_46 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_46;

    }
    {
    PyObject *tmp_assign_source_47;
    PyObject *tmp_metaclass_name_6;
    nuitka_bool tmp_condition_result_31;
    PyObject *tmp_key_name_16;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_key_name_17;
    nuitka_bool tmp_condition_result_32;
    int tmp_truth_name_6;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_bases_name_6;
    tmp_key_name_16 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    tmp_condition_result_31 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_truth_name_6 = CHECK_IF_TRUE( tmp_class_creation_6__bases );
    if ( tmp_truth_name_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    tmp_condition_result_32 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_32 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;
    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_12:;
    condexpr_end_11:;
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_bases_name_6 = tmp_class_creation_6__bases;
    tmp_assign_source_47 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_47;

    }
    {
    nuitka_bool tmp_condition_result_33;
    PyObject *tmp_key_name_18;
    PyObject *tmp_dict_name_18;
    tmp_key_name_18 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    tmp_condition_result_33 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_33 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    {
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    }
    branch_no_21:;
    }
    {
    nuitka_bool tmp_condition_result_34;
    PyObject *tmp_source_name_21;
    CHECK_OBJECT( tmp_class_creation_6__metaclass );
    tmp_source_name_21 = tmp_class_creation_6__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_21, const_str_plain___prepare__ );
    tmp_condition_result_34 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_34 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    {
    PyObject *tmp_assign_source_48;
    PyObject *tmp_called_name_11;
    PyObject *tmp_source_name_22;
    PyObject *tmp_args_name_11;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_kw_name_11;
    CHECK_OBJECT( tmp_class_creation_6__metaclass );
    tmp_source_name_22 = tmp_class_creation_6__metaclass;
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    tmp_tuple_element_17 = const_str_plain_InvalidTag;
    tmp_args_name_11 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_17 );
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_tuple_element_17 = tmp_class_creation_6__bases;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_17 );
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 42;
    tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_48;

    }
    {
    nuitka_bool tmp_condition_result_35;
    PyObject *tmp_operand_name_6;
    PyObject *tmp_source_name_23;
    CHECK_OBJECT( tmp_class_creation_6__prepared );
    tmp_source_name_23 = tmp_class_creation_6__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_23, const_str_plain___getitem__ );
    tmp_operand_name_6 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    tmp_condition_result_35 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_35 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    {
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_value_6;
    PyObject *tmp_left_name_6;
    PyObject *tmp_right_name_6;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_getattr_target_6;
    PyObject *tmp_getattr_attr_6;
    PyObject *tmp_getattr_default_6;
    PyObject *tmp_source_name_24;
    PyObject *tmp_type_arg_12;
    tmp_raise_type_6 = PyExc_TypeError;
    tmp_left_name_6 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_6__metaclass );
    tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
    tmp_getattr_attr_6 = const_str_plain___name__;
    tmp_getattr_default_6 = const_str_angle_metaclass;
    tmp_tuple_element_18 = BUILTIN_GETATTR( tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6 );
    if ( tmp_tuple_element_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    tmp_right_name_6 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_18 );
    CHECK_OBJECT( tmp_class_creation_6__prepared );
    tmp_type_arg_12 = tmp_class_creation_6__prepared;
    tmp_source_name_24 = BUILTIN_TYPE1( tmp_type_arg_12 );
    assert( !(tmp_source_name_24 == NULL) );
    tmp_tuple_element_18 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_tuple_element_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 42;

        goto try_except_handler_17;
    }
    PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_18 );
    tmp_raise_value_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_raise_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_17;
    }
    exception_type = tmp_raise_type_6;
    Py_INCREF( tmp_raise_type_6 );
    exception_value = tmp_raise_value_6;
    exception_lineno = 42;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_17;
    }
    branch_no_23:;
    }
    goto branch_end_22;
    branch_no_22:;
    {
    PyObject *tmp_assign_source_49;
    tmp_assign_source_49 = PyDict_New();
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_49;

    }
    branch_end_22:;
    }
    {
    PyObject *tmp_assign_source_50;
    {
    PyObject *tmp_set_locals_6;
    CHECK_OBJECT( tmp_class_creation_6__prepared );
    tmp_set_locals_6 = tmp_class_creation_6__prepared;
    locals_cryptography$exceptions_42 = tmp_set_locals_6;
    Py_INCREF( tmp_set_locals_6 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_42, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_19;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InvalidTag;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_42, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_19;
    }
    }
    {
    nuitka_bool tmp_condition_result_36;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_6;
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_compexpr_left_6 = tmp_class_creation_6__bases;
    tmp_compexpr_right_6 = const_tuple_type_Exception_tuple;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_19;
    }
    tmp_condition_result_36 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_36 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    {
    tmp_dictset_value = const_tuple_type_Exception_tuple;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_42, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_19;
    }
    }
    branch_no_24:;
    }
    {
    PyObject *tmp_assign_source_51;
    PyObject *tmp_called_name_12;
    PyObject *tmp_args_name_12;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_kw_name_12;
    CHECK_OBJECT( tmp_class_creation_6__metaclass );
    tmp_called_name_12 = tmp_class_creation_6__metaclass;
    tmp_tuple_element_19 = const_str_plain_InvalidTag;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_19 );
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_tuple_element_19 = tmp_class_creation_6__bases;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_19 );
    tmp_tuple_element_19 = locals_cryptography$exceptions_42;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_19 );
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 42;
    tmp_assign_source_51 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_19;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_51;

    }
    {
    CHECK_OBJECT( outline_5_var___class__ );
    tmp_assign_source_50 = outline_5_var___class__;
    Py_INCREF( tmp_assign_source_50 );
    goto try_return_handler_19;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    {
    Py_DECREF( locals_cryptography$exceptions_42 );
    locals_cryptography$exceptions_42 = NULL;
    }
    {
    goto try_return_handler_18;
    }
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_cryptography$exceptions_42 );
    locals_cryptography$exceptions_42 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    {
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    }
    {
    goto outline_result_6;
    }
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto outline_exception_6;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 42;
    goto try_except_handler_17;
    outline_result_6:;
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidTag, tmp_assign_source_50 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_7:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_52;
    PyObject *tmp_dircall_arg1_7;
    tmp_dircall_arg1_7 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_dircall_arg1_7 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
        tmp_assign_source_52 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_52;

    }
    {
    PyObject *tmp_assign_source_53;
    tmp_assign_source_53 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_53;

    }
    {
    PyObject *tmp_assign_source_54;
    PyObject *tmp_metaclass_name_7;
    nuitka_bool tmp_condition_result_37;
    PyObject *tmp_key_name_19;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_key_name_20;
    nuitka_bool tmp_condition_result_38;
    int tmp_truth_name_7;
    PyObject *tmp_type_arg_13;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_bases_name_7;
    tmp_key_name_19 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
    tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    tmp_condition_result_37 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_37 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
    tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    CHECK_OBJECT( tmp_class_creation_7__bases );
    tmp_truth_name_7 = CHECK_IF_TRUE( tmp_class_creation_7__bases );
    if ( tmp_truth_name_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    tmp_condition_result_38 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_38 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    CHECK_OBJECT( tmp_class_creation_7__bases );
    tmp_subscribed_name_7 = tmp_class_creation_7__bases;
    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
    if ( tmp_type_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_13 );
    Py_DECREF( tmp_type_arg_13 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_14:;
    condexpr_end_13:;
    CHECK_OBJECT( tmp_class_creation_7__bases );
    tmp_bases_name_7 = tmp_class_creation_7__bases;
    tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    Py_DECREF( tmp_metaclass_name_7 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_54;

    }
    {
    nuitka_bool tmp_condition_result_39;
    PyObject *tmp_key_name_21;
    PyObject *tmp_dict_name_21;
    tmp_key_name_21 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
    tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    tmp_condition_result_39 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_39 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    {
    CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    }
    branch_no_25:;
    }
    {
    nuitka_bool tmp_condition_result_40;
    PyObject *tmp_source_name_25;
    CHECK_OBJECT( tmp_class_creation_7__metaclass );
    tmp_source_name_25 = tmp_class_creation_7__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_25, const_str_plain___prepare__ );
    tmp_condition_result_40 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_40 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    {
    PyObject *tmp_assign_source_55;
    PyObject *tmp_called_name_13;
    PyObject *tmp_source_name_26;
    PyObject *tmp_args_name_13;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_kw_name_13;
    CHECK_OBJECT( tmp_class_creation_7__metaclass );
    tmp_source_name_26 = tmp_class_creation_7__metaclass;
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    tmp_tuple_element_20 = const_str_plain_InvalidSignature;
    tmp_args_name_13 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_20 );
    CHECK_OBJECT( tmp_class_creation_7__bases );
    tmp_tuple_element_20 = tmp_class_creation_7__bases;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_20 );
    CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 46;
    tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_55;

    }
    {
    nuitka_bool tmp_condition_result_41;
    PyObject *tmp_operand_name_7;
    PyObject *tmp_source_name_27;
    CHECK_OBJECT( tmp_class_creation_7__prepared );
    tmp_source_name_27 = tmp_class_creation_7__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_27, const_str_plain___getitem__ );
    tmp_operand_name_7 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    tmp_condition_result_41 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_41 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    {
    PyObject *tmp_raise_type_7;
    PyObject *tmp_raise_value_7;
    PyObject *tmp_left_name_7;
    PyObject *tmp_right_name_7;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_getattr_target_7;
    PyObject *tmp_getattr_attr_7;
    PyObject *tmp_getattr_default_7;
    PyObject *tmp_source_name_28;
    PyObject *tmp_type_arg_14;
    tmp_raise_type_7 = PyExc_TypeError;
    tmp_left_name_7 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_7__metaclass );
    tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
    tmp_getattr_attr_7 = const_str_plain___name__;
    tmp_getattr_default_7 = const_str_angle_metaclass;
    tmp_tuple_element_21 = BUILTIN_GETATTR( tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7 );
    if ( tmp_tuple_element_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    tmp_right_name_7 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_21 );
    CHECK_OBJECT( tmp_class_creation_7__prepared );
    tmp_type_arg_14 = tmp_class_creation_7__prepared;
    tmp_source_name_28 = BUILTIN_TYPE1( tmp_type_arg_14 );
    assert( !(tmp_source_name_28 == NULL) );
    tmp_tuple_element_21 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_tuple_element_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_7 );

        exception_lineno = 46;

        goto try_except_handler_20;
    }
    PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_21 );
    tmp_raise_value_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_raise_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    exception_type = tmp_raise_type_7;
    Py_INCREF( tmp_raise_type_7 );
    exception_value = tmp_raise_value_7;
    exception_lineno = 46;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_20;
    }
    branch_no_27:;
    }
    goto branch_end_26;
    branch_no_26:;
    {
    PyObject *tmp_assign_source_56;
    tmp_assign_source_56 = PyDict_New();
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_56;

    }
    branch_end_26:;
    }
    {
    PyObject *tmp_assign_source_57;
    {
    PyObject *tmp_set_locals_7;
    CHECK_OBJECT( tmp_class_creation_7__prepared );
    tmp_set_locals_7 = tmp_class_creation_7__prepared;
    locals_cryptography$exceptions_46 = tmp_set_locals_7;
    Py_INCREF( tmp_set_locals_7 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_46, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_22;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InvalidSignature;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_46, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_22;
    }
    }
    {
    nuitka_bool tmp_condition_result_42;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_right_7;
    CHECK_OBJECT( tmp_class_creation_7__bases );
    tmp_compexpr_left_7 = tmp_class_creation_7__bases;
    tmp_compexpr_right_7 = const_tuple_type_Exception_tuple;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_22;
    }
    tmp_condition_result_42 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_42 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    {
    tmp_dictset_value = const_tuple_type_Exception_tuple;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_46, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_22;
    }
    }
    branch_no_28:;
    }
    {
    PyObject *tmp_assign_source_58;
    PyObject *tmp_called_name_14;
    PyObject *tmp_args_name_14;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_kw_name_14;
    CHECK_OBJECT( tmp_class_creation_7__metaclass );
    tmp_called_name_14 = tmp_class_creation_7__metaclass;
    tmp_tuple_element_22 = const_str_plain_InvalidSignature;
    tmp_args_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_22 );
    CHECK_OBJECT( tmp_class_creation_7__bases );
    tmp_tuple_element_22 = tmp_class_creation_7__bases;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_22 );
    tmp_tuple_element_22 = locals_cryptography$exceptions_46;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_22 );
    CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 46;
    tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_22;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_58;

    }
    {
    CHECK_OBJECT( outline_6_var___class__ );
    tmp_assign_source_57 = outline_6_var___class__;
    Py_INCREF( tmp_assign_source_57 );
    goto try_return_handler_22;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    {
    Py_DECREF( locals_cryptography$exceptions_46 );
    locals_cryptography$exceptions_46 = NULL;
    }
    {
    goto try_return_handler_21;
    }
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_cryptography$exceptions_46 );
    locals_cryptography$exceptions_46 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_21;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    {
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    }
    {
    goto outline_result_7;
    }
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto outline_exception_7;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 46;
    goto try_except_handler_20;
    outline_result_7:;
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidSignature, tmp_assign_source_57 );
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_8:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_59;
    PyObject *tmp_dircall_arg1_8;
    tmp_dircall_arg1_8 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_dircall_arg1_8 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
        tmp_assign_source_59 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    assert( tmp_class_creation_8__bases == NULL );
    tmp_class_creation_8__bases = tmp_assign_source_59;

    }
    {
    PyObject *tmp_assign_source_60;
    tmp_assign_source_60 = PyDict_New();
    assert( tmp_class_creation_8__class_decl_dict == NULL );
    tmp_class_creation_8__class_decl_dict = tmp_assign_source_60;

    }
    {
    PyObject *tmp_assign_source_61;
    PyObject *tmp_metaclass_name_8;
    nuitka_bool tmp_condition_result_43;
    PyObject *tmp_key_name_22;
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dict_name_23;
    PyObject *tmp_key_name_23;
    nuitka_bool tmp_condition_result_44;
    int tmp_truth_name_8;
    PyObject *tmp_type_arg_15;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_bases_name_8;
    tmp_key_name_22 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
    tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    tmp_condition_result_43 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_43 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
    tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;
    tmp_key_name_23 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    CHECK_OBJECT( tmp_class_creation_8__bases );
    tmp_truth_name_8 = CHECK_IF_TRUE( tmp_class_creation_8__bases );
    if ( tmp_truth_name_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    tmp_condition_result_44 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_44 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    CHECK_OBJECT( tmp_class_creation_8__bases );
    tmp_subscribed_name_8 = tmp_class_creation_8__bases;
    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
    if ( tmp_type_arg_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_15 );
    Py_DECREF( tmp_type_arg_15 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_8 );
    condexpr_end_16:;
    condexpr_end_15:;
    CHECK_OBJECT( tmp_class_creation_8__bases );
    tmp_bases_name_8 = tmp_class_creation_8__bases;
    tmp_assign_source_61 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    Py_DECREF( tmp_metaclass_name_8 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_61;

    }
    {
    nuitka_bool tmp_condition_result_45;
    PyObject *tmp_key_name_24;
    PyObject *tmp_dict_name_24;
    tmp_key_name_24 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
    tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    tmp_condition_result_45 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_45 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    {
    CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    }
    branch_no_29:;
    }
    {
    nuitka_bool tmp_condition_result_46;
    PyObject *tmp_source_name_29;
    CHECK_OBJECT( tmp_class_creation_8__metaclass );
    tmp_source_name_29 = tmp_class_creation_8__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_29, const_str_plain___prepare__ );
    tmp_condition_result_46 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_46 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    {
    PyObject *tmp_assign_source_62;
    PyObject *tmp_called_name_15;
    PyObject *tmp_source_name_30;
    PyObject *tmp_args_name_15;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_kw_name_15;
    CHECK_OBJECT( tmp_class_creation_8__metaclass );
    tmp_source_name_30 = tmp_class_creation_8__metaclass;
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain___prepare__ );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    tmp_tuple_element_23 = const_str_plain_InternalError;
    tmp_args_name_15 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_23 );
    CHECK_OBJECT( tmp_class_creation_8__bases );
    tmp_tuple_element_23 = tmp_class_creation_8__bases;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_23 );
    CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
    tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 50;
    tmp_assign_source_62 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_15 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_62;

    }
    {
    nuitka_bool tmp_condition_result_47;
    PyObject *tmp_operand_name_8;
    PyObject *tmp_source_name_31;
    CHECK_OBJECT( tmp_class_creation_8__prepared );
    tmp_source_name_31 = tmp_class_creation_8__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_31, const_str_plain___getitem__ );
    tmp_operand_name_8 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    tmp_condition_result_47 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_47 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    {
    PyObject *tmp_raise_type_8;
    PyObject *tmp_raise_value_8;
    PyObject *tmp_left_name_8;
    PyObject *tmp_right_name_8;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_getattr_target_8;
    PyObject *tmp_getattr_attr_8;
    PyObject *tmp_getattr_default_8;
    PyObject *tmp_source_name_32;
    PyObject *tmp_type_arg_16;
    tmp_raise_type_8 = PyExc_TypeError;
    tmp_left_name_8 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_8__metaclass );
    tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
    tmp_getattr_attr_8 = const_str_plain___name__;
    tmp_getattr_default_8 = const_str_angle_metaclass;
    tmp_tuple_element_24 = BUILTIN_GETATTR( tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8 );
    if ( tmp_tuple_element_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    tmp_right_name_8 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_24 );
    CHECK_OBJECT( tmp_class_creation_8__prepared );
    tmp_type_arg_16 = tmp_class_creation_8__prepared;
    tmp_source_name_32 = BUILTIN_TYPE1( tmp_type_arg_16 );
    assert( !(tmp_source_name_32 == NULL) );
    tmp_tuple_element_24 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_32 );
    if ( tmp_tuple_element_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_8 );

        exception_lineno = 50;

        goto try_except_handler_23;
    }
    PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_24 );
    tmp_raise_value_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_raise_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_23;
    }
    exception_type = tmp_raise_type_8;
    Py_INCREF( tmp_raise_type_8 );
    exception_value = tmp_raise_value_8;
    exception_lineno = 50;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_23;
    }
    branch_no_31:;
    }
    goto branch_end_30;
    branch_no_30:;
    {
    PyObject *tmp_assign_source_63;
    tmp_assign_source_63 = PyDict_New();
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_63;

    }
    branch_end_30:;
    }
    {
    PyObject *tmp_assign_source_64;
    {
    PyObject *tmp_set_locals_8;
    CHECK_OBJECT( tmp_class_creation_8__prepared );
    tmp_set_locals_8 = tmp_class_creation_8__prepared;
    locals_cryptography$exceptions_50 = tmp_set_locals_8;
    Py_INCREF( tmp_set_locals_8 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_50, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_25;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InternalError;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_50, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_25;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4, codeobj_f1559b1ac594d0c5fbad7ecabf7db3fe, module_cryptography$exceptions, sizeof(void *) );
    frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 = cache_frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 ) == 2 ); // Frame stack

    // Framed code:
    {
    tmp_dictset_value = MAKE_FUNCTION_cryptography$exceptions$$$function_2___init__(  );



    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_50, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_2 = "o";
        goto frame_exception_exit_4;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4,
        type_description_2,
        outline_7_var___class__
    );


    // Release cached frame.
    if ( frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 == cache_frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 )
    {
        Py_DECREF( frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 );
    }
    cache_frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 = NULL;

    assertFrameObject( frame_f1559b1ac594d0c5fbad7ecabf7db3fe_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;
    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_25;
    skip_nested_handling_3:;
    {
    nuitka_bool tmp_condition_result_48;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_right_8;
    CHECK_OBJECT( tmp_class_creation_8__bases );
    tmp_compexpr_left_8 = tmp_class_creation_8__bases;
    tmp_compexpr_right_8 = const_tuple_type_Exception_tuple;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_25;
    }
    tmp_condition_result_48 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_48 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_32;
    }
    else
    {
        goto branch_no_32;
    }
    branch_yes_32:;
    {
    tmp_dictset_value = const_tuple_type_Exception_tuple;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_50, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_25;
    }
    }
    branch_no_32:;
    }
    {
    PyObject *tmp_assign_source_65;
    PyObject *tmp_called_name_16;
    PyObject *tmp_args_name_16;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_kw_name_16;
    CHECK_OBJECT( tmp_class_creation_8__metaclass );
    tmp_called_name_16 = tmp_class_creation_8__metaclass;
    tmp_tuple_element_25 = const_str_plain_InternalError;
    tmp_args_name_16 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_25 );
    CHECK_OBJECT( tmp_class_creation_8__bases );
    tmp_tuple_element_25 = tmp_class_creation_8__bases;
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_25 );
    tmp_tuple_element_25 = locals_cryptography$exceptions_50;
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_25 );
    CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
    tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 50;
    tmp_assign_source_65 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_25;
    }
    assert( outline_7_var___class__ == NULL );
    outline_7_var___class__ = tmp_assign_source_65;

    }
    {
    CHECK_OBJECT( outline_7_var___class__ );
    tmp_assign_source_64 = outline_7_var___class__;
    Py_INCREF( tmp_assign_source_64 );
    goto try_return_handler_25;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_25:;
    {
    Py_DECREF( locals_cryptography$exceptions_50 );
    locals_cryptography$exceptions_50 = NULL;
    }
    {
    goto try_return_handler_24;
    }
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_cryptography$exceptions_50 );
    locals_cryptography$exceptions_50 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_24;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_24:;
    {
    CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
    Py_DECREF( outline_7_var___class__ );
    outline_7_var___class__ = NULL;

    }
    {
    goto outline_result_8;
    }
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto outline_exception_8;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 50;
    goto try_except_handler_23;
    outline_result_8:;
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_InternalError, tmp_assign_source_64 );
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_9:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__prepared );
    Py_DECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_66;
    PyObject *tmp_dircall_arg1_9;
    tmp_dircall_arg1_9 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_dircall_arg1_9 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
        tmp_assign_source_66 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    assert( tmp_class_creation_9__bases == NULL );
    tmp_class_creation_9__bases = tmp_assign_source_66;

    }
    {
    PyObject *tmp_assign_source_67;
    tmp_assign_source_67 = PyDict_New();
    assert( tmp_class_creation_9__class_decl_dict == NULL );
    tmp_class_creation_9__class_decl_dict = tmp_assign_source_67;

    }
    {
    PyObject *tmp_assign_source_68;
    PyObject *tmp_metaclass_name_9;
    nuitka_bool tmp_condition_result_49;
    PyObject *tmp_key_name_25;
    PyObject *tmp_dict_name_25;
    PyObject *tmp_dict_name_26;
    PyObject *tmp_key_name_26;
    nuitka_bool tmp_condition_result_50;
    int tmp_truth_name_9;
    PyObject *tmp_type_arg_17;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_bases_name_9;
    tmp_key_name_25 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
    tmp_dict_name_25 = tmp_class_creation_9__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_25, tmp_key_name_25 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    tmp_condition_result_49 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_49 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
    tmp_dict_name_26 = tmp_class_creation_9__class_decl_dict;
    tmp_key_name_26 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    CHECK_OBJECT( tmp_class_creation_9__bases );
    tmp_truth_name_9 = CHECK_IF_TRUE( tmp_class_creation_9__bases );
    if ( tmp_truth_name_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    tmp_condition_result_50 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_50 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    CHECK_OBJECT( tmp_class_creation_9__bases );
    tmp_subscribed_name_9 = tmp_class_creation_9__bases;
    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
    if ( tmp_type_arg_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_17 );
    Py_DECREF( tmp_type_arg_17 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_9 );
    condexpr_end_18:;
    condexpr_end_17:;
    CHECK_OBJECT( tmp_class_creation_9__bases );
    tmp_bases_name_9 = tmp_class_creation_9__bases;
    tmp_assign_source_68 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    Py_DECREF( tmp_metaclass_name_9 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_68;

    }
    {
    nuitka_bool tmp_condition_result_51;
    PyObject *tmp_key_name_27;
    PyObject *tmp_dict_name_27;
    tmp_key_name_27 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
    tmp_dict_name_27 = tmp_class_creation_9__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_27, tmp_key_name_27 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    tmp_condition_result_51 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_51 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_33;
    }
    else
    {
        goto branch_no_33;
    }
    branch_yes_33:;
    {
    CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    }
    branch_no_33:;
    }
    {
    nuitka_bool tmp_condition_result_52;
    PyObject *tmp_source_name_33;
    CHECK_OBJECT( tmp_class_creation_9__metaclass );
    tmp_source_name_33 = tmp_class_creation_9__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_33, const_str_plain___prepare__ );
    tmp_condition_result_52 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_52 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_34;
    }
    else
    {
        goto branch_no_34;
    }
    branch_yes_34:;
    {
    PyObject *tmp_assign_source_69;
    PyObject *tmp_called_name_17;
    PyObject *tmp_source_name_34;
    PyObject *tmp_args_name_17;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_kw_name_17;
    CHECK_OBJECT( tmp_class_creation_9__metaclass );
    tmp_source_name_34 = tmp_class_creation_9__metaclass;
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    tmp_tuple_element_26 = const_str_plain_InvalidKey;
    tmp_args_name_17 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_26 );
    CHECK_OBJECT( tmp_class_creation_9__bases );
    tmp_tuple_element_26 = tmp_class_creation_9__bases;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_26 );
    CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
    tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 56;
    tmp_assign_source_69 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_name_17 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    assert( tmp_class_creation_9__prepared == NULL );
    tmp_class_creation_9__prepared = tmp_assign_source_69;

    }
    {
    nuitka_bool tmp_condition_result_53;
    PyObject *tmp_operand_name_9;
    PyObject *tmp_source_name_35;
    CHECK_OBJECT( tmp_class_creation_9__prepared );
    tmp_source_name_35 = tmp_class_creation_9__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_35, const_str_plain___getitem__ );
    tmp_operand_name_9 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    tmp_condition_result_53 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_53 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_35;
    }
    else
    {
        goto branch_no_35;
    }
    branch_yes_35:;
    {
    PyObject *tmp_raise_type_9;
    PyObject *tmp_raise_value_9;
    PyObject *tmp_left_name_9;
    PyObject *tmp_right_name_9;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_getattr_target_9;
    PyObject *tmp_getattr_attr_9;
    PyObject *tmp_getattr_default_9;
    PyObject *tmp_source_name_36;
    PyObject *tmp_type_arg_18;
    tmp_raise_type_9 = PyExc_TypeError;
    tmp_left_name_9 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_9__metaclass );
    tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
    tmp_getattr_attr_9 = const_str_plain___name__;
    tmp_getattr_default_9 = const_str_angle_metaclass;
    tmp_tuple_element_27 = BUILTIN_GETATTR( tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9 );
    if ( tmp_tuple_element_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    tmp_right_name_9 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_27 );
    CHECK_OBJECT( tmp_class_creation_9__prepared );
    tmp_type_arg_18 = tmp_class_creation_9__prepared;
    tmp_source_name_36 = BUILTIN_TYPE1( tmp_type_arg_18 );
    assert( !(tmp_source_name_36 == NULL) );
    tmp_tuple_element_27 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_36 );
    if ( tmp_tuple_element_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_9 );

        exception_lineno = 56;

        goto try_except_handler_26;
    }
    PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_27 );
    tmp_raise_value_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_raise_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_26;
    }
    exception_type = tmp_raise_type_9;
    Py_INCREF( tmp_raise_type_9 );
    exception_value = tmp_raise_value_9;
    exception_lineno = 56;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_26;
    }
    branch_no_35:;
    }
    goto branch_end_34;
    branch_no_34:;
    {
    PyObject *tmp_assign_source_70;
    tmp_assign_source_70 = PyDict_New();
    assert( tmp_class_creation_9__prepared == NULL );
    tmp_class_creation_9__prepared = tmp_assign_source_70;

    }
    branch_end_34:;
    }
    {
    PyObject *tmp_assign_source_71;
    {
    PyObject *tmp_set_locals_9;
    CHECK_OBJECT( tmp_class_creation_9__prepared );
    tmp_set_locals_9 = tmp_class_creation_9__prepared;
    locals_cryptography$exceptions_56 = tmp_set_locals_9;
    Py_INCREF( tmp_set_locals_9 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_56, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_28;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InvalidKey;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_56, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_28;
    }
    }
    {
    nuitka_bool tmp_condition_result_54;
    PyObject *tmp_compexpr_left_9;
    PyObject *tmp_compexpr_right_9;
    CHECK_OBJECT( tmp_class_creation_9__bases );
    tmp_compexpr_left_9 = tmp_class_creation_9__bases;
    tmp_compexpr_right_9 = const_tuple_type_Exception_tuple;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_9, tmp_compexpr_right_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_28;
    }
    tmp_condition_result_54 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_54 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_36;
    }
    else
    {
        goto branch_no_36;
    }
    branch_yes_36:;
    {
    tmp_dictset_value = const_tuple_type_Exception_tuple;
    tmp_res = PyObject_SetItem( locals_cryptography$exceptions_56, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_28;
    }
    }
    branch_no_36:;
    }
    {
    PyObject *tmp_assign_source_72;
    PyObject *tmp_called_name_18;
    PyObject *tmp_args_name_18;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_kw_name_18;
    CHECK_OBJECT( tmp_class_creation_9__metaclass );
    tmp_called_name_18 = tmp_class_creation_9__metaclass;
    tmp_tuple_element_28 = const_str_plain_InvalidKey;
    tmp_args_name_18 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_28 );
    CHECK_OBJECT( tmp_class_creation_9__bases );
    tmp_tuple_element_28 = tmp_class_creation_9__bases;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_28 );
    tmp_tuple_element_28 = locals_cryptography$exceptions_56;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_28 );
    CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
    tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;
    frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame.f_lineno = 56;
    tmp_assign_source_72 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_28;
    }
    assert( outline_8_var___class__ == NULL );
    outline_8_var___class__ = tmp_assign_source_72;

    }
    {
    CHECK_OBJECT( outline_8_var___class__ );
    tmp_assign_source_71 = outline_8_var___class__;
    Py_INCREF( tmp_assign_source_71 );
    goto try_return_handler_28;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_28:;
    {
    Py_DECREF( locals_cryptography$exceptions_56 );
    locals_cryptography$exceptions_56 = NULL;
    }
    {
    goto try_return_handler_27;
    }
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_cryptography$exceptions_56 );
    locals_cryptography$exceptions_56 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_27;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    {
    CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
    Py_DECREF( outline_8_var___class__ );
    outline_8_var___class__ = NULL;

    }
    {
    goto outline_result_9;
    }
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto outline_exception_9;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 56;
    goto try_except_handler_26;
    outline_result_9:;
    UPDATE_STRING_DICT1( moduledict_cryptography$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidKey, tmp_assign_source_71 );
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_10:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5dae65dd3b52b37e49dad011f2e89bd3 );
#endif
    popFrameStack();

    assertFrameObject( frame_5dae65dd3b52b37e49dad011f2e89bd3 );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5dae65dd3b52b37e49dad011f2e89bd3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5dae65dd3b52b37e49dad011f2e89bd3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5dae65dd3b52b37e49dad011f2e89bd3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5dae65dd3b52b37e49dad011f2e89bd3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_decl_dict );
    Py_DECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__prepared );
    Py_DECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    }

    return MOD_RETURN_VALUE( module_cryptography$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

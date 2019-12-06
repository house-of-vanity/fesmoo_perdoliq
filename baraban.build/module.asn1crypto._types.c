/* Generated code for Python source for module 'asn1crypto._types'
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

/* The _module_asn1crypto$_types is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_asn1crypto$_types;
PyDictObject *moduledict_asn1crypto$_types;

/* The module constants used, if any. */
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_e746be9f19c8f90caa6d901ec113ca09;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_type_name;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_builtins;
static PyObject *const_str_digest_4dfb811e2c5bd89f72a685ad800102c1;
extern PyObject *const_str_plain_byte_string;
static PyObject *const_str_digest_61d2ec5184a95531101855ad0ec91635;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_chr;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain___builtin__;
extern PyObject *const_str_plain_bytes;
static PyObject *const_set_565a0396aa40318e0c9d250136af7385;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain_num_tuple;
extern PyObject *const_str_plain_int;
static PyObject *const_tuple_str_plain_value_str_plain_cls_tuple;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_chr_cls;
extern PyObject *const_tuple_str_plain_b_tuple;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_str_plain_byte_string_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_str_cls;
extern PyObject *const_int_pos_3;
static PyObject *const_str_digest_79eb27773663ed2c126c71b4c000ba3b;
extern PyObject *const_str_plain_inspect;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_int_types;
extern PyObject *const_str_plain_bytes_to_list;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_3114c7847ed30512509505e34fc4f6e0;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_isclass;
extern PyObject *const_str_plain_byte_cls;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e746be9f19c8f90caa6d901ec113ca09 = UNSTREAM_STRING( &constant_bin[ 14637 ], 17, 0 );
    const_str_digest_4dfb811e2c5bd89f72a685ad800102c1 = UNSTREAM_STRING( &constant_bin[ 14654 ], 26, 0 );
    const_str_digest_61d2ec5184a95531101855ad0ec91635 = UNSTREAM_STRING( &constant_bin[ 14680 ], 53, 0 );
    const_set_565a0396aa40318e0c9d250136af7385 = PySet_New( NULL );
    PySet_Add( const_set_565a0396aa40318e0c9d250136af7385, const_str_plain_builtins );
    PySet_Add( const_set_565a0396aa40318e0c9d250136af7385, const_str_plain___builtin__ );
    assert( PySet_Size( const_set_565a0396aa40318e0c9d250136af7385 ) == 2 );
    const_tuple_str_plain_value_str_plain_cls_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_cls_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_cls_tuple, 1, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    const_tuple_str_plain_byte_string_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_byte_string_tuple, 0, const_str_plain_byte_string ); Py_INCREF( const_str_plain_byte_string );
    const_str_digest_79eb27773663ed2c126c71b4c000ba3b = UNSTREAM_STRING( &constant_bin[ 14733 ], 188, 0 );
    const_str_digest_3114c7847ed30512509505e34fc4f6e0 = UNSTREAM_STRING( &constant_bin[ 14921 ], 5, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_asn1crypto$_types( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a2a7001f72ee79238e3aeea2be606fd9;
static PyCodeObject *codeobj_2c600f556306f17830214b23d8e628c2;
static PyCodeObject *codeobj_9d8cc031e9e26acf125483a8d188ef27;
static PyCodeObject *codeobj_b6b2913c9fbaf500552f898eb4c3e7a6;
static PyCodeObject *codeobj_2faf590bb5ebd47f134f4a8cf5b96d7e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_61d2ec5184a95531101855ad0ec91635;
    codeobj_a2a7001f72ee79238e3aeea2be606fd9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 14, const_tuple_str_plain_b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_2c600f556306f17830214b23d8e628c2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4dfb811e2c5bd89f72a685ad800102c1, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_9d8cc031e9e26acf125483a8d188ef27 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bytes_to_list, 13, const_tuple_str_plain_byte_string_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_b6b2913c9fbaf500552f898eb4c3e7a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_chr_cls, 25, const_tuple_str_plain_num_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_2faf590bb5ebd47f134f4a8cf5b96d7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_type_name, 29, const_tuple_str_plain_value_str_plain_cls_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_1_bytes_to_list(  );


static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_2_chr_cls(  );


static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_3_type_name(  );


// The module function definitions.
static PyObject *impl_asn1crypto$_types$$$function_1_bytes_to_list( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_byte_string = python_pars[ 0 ];
    PyObject *outline_0_var_b = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_9d8cc031e9e26acf125483a8d188ef27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_a2a7001f72ee79238e3aeea2be606fd9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a2a7001f72ee79238e3aeea2be606fd9_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_9d8cc031e9e26acf125483a8d188ef27 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d8cc031e9e26acf125483a8d188ef27, codeobj_9d8cc031e9e26acf125483a8d188ef27, module_asn1crypto$_types, sizeof(void *) );
    frame_9d8cc031e9e26acf125483a8d188ef27 = cache_frame_9d8cc031e9e26acf125483a8d188ef27;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d8cc031e9e26acf125483a8d188ef27 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d8cc031e9e26acf125483a8d188ef27 ) == 2 ); // Frame stack

    // Framed code:
    {
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_1;
    PyObject *tmp_iter_arg_1;
    CHECK_OBJECT( par_byte_string );
    tmp_iter_arg_1 = par_byte_string;
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    assert( tmp_listcomp_1__$0 == NULL );
    tmp_listcomp_1__$0 = tmp_assign_source_1;

    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_listcomp_1__contraction == NULL );
    tmp_listcomp_1__contraction = tmp_assign_source_2;

    }
    MAKE_OR_REUSE_FRAME( cache_frame_a2a7001f72ee79238e3aeea2be606fd9_2, codeobj_a2a7001f72ee79238e3aeea2be606fd9, module_asn1crypto$_types, sizeof(void *) );
    frame_a2a7001f72ee79238e3aeea2be606fd9_2 = cache_frame_a2a7001f72ee79238e3aeea2be606fd9_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a2a7001f72ee79238e3aeea2be606fd9_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a2a7001f72ee79238e3aeea2be606fd9_2 ) == 2 ); // Frame stack

    // Framed code:
    {
    // Tried code:
    {
    loop_start_1:;
    {
    PyObject *tmp_next_source_1;
    PyObject *tmp_assign_source_3;
    CHECK_OBJECT( tmp_listcomp_1__$0 );
    tmp_next_source_1 = tmp_listcomp_1__$0;
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_2 = "o";
            exception_lineno = 14;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_listcomp_1__iter_value_0;
        tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    }
    {
    PyObject *tmp_assign_source_4;
    CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
    tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
    {
        PyObject *old = outline_0_var_b;
        outline_0_var_b = tmp_assign_source_4;
        Py_INCREF( outline_0_var_b );
        Py_XDECREF( old );
    }

    }
    {
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_ord_arg_1;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_append_list_1 = tmp_listcomp_1__contraction;
    CHECK_OBJECT( outline_0_var_b );
    tmp_ord_arg_1 = outline_0_var_b;
    tmp_append_value_1 = BUILTIN_ORD( tmp_ord_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    }
    {
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_types$$$function_1_bytes_to_list );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    {
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    }
    {
    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    }
    {
    goto frame_return_exit_2;
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
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    }
    {
    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    }
    // End of try:
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2a7001f72ee79238e3aeea2be606fd9_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2a7001f72ee79238e3aeea2be606fd9_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2a7001f72ee79238e3aeea2be606fd9_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2a7001f72ee79238e3aeea2be606fd9_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2a7001f72ee79238e3aeea2be606fd9_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2a7001f72ee79238e3aeea2be606fd9_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a2a7001f72ee79238e3aeea2be606fd9_2,
        type_description_2,
        outline_0_var_b
    );


    // Release cached frame.
    if ( frame_a2a7001f72ee79238e3aeea2be606fd9_2 == cache_frame_a2a7001f72ee79238e3aeea2be606fd9_2 )
    {
        Py_DECREF( frame_a2a7001f72ee79238e3aeea2be606fd9_2 );
    }
    cache_frame_a2a7001f72ee79238e3aeea2be606fd9_2 = NULL;

    assertFrameObject( frame_a2a7001f72ee79238e3aeea2be606fd9_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_types$$$function_1_bytes_to_list );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    {
    Py_XDECREF( outline_0_var_b );
    outline_0_var_b = NULL;

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
    Py_XDECREF( outline_0_var_b );
    outline_0_var_b = NULL;

    }
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
    NUITKA_CANNOT_GET_HERE( asn1crypto$_types$$$function_1_bytes_to_list );
    return NULL;
    outline_exception_1:;
    exception_lineno = 14;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d8cc031e9e26acf125483a8d188ef27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d8cc031e9e26acf125483a8d188ef27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d8cc031e9e26acf125483a8d188ef27 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d8cc031e9e26acf125483a8d188ef27, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d8cc031e9e26acf125483a8d188ef27->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d8cc031e9e26acf125483a8d188ef27, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d8cc031e9e26acf125483a8d188ef27,
        type_description_1,
        par_byte_string
    );


    // Release cached frame.
    if ( frame_9d8cc031e9e26acf125483a8d188ef27 == cache_frame_9d8cc031e9e26acf125483a8d188ef27 )
    {
        Py_DECREF( frame_9d8cc031e9e26acf125483a8d188ef27 );
    }
    cache_frame_9d8cc031e9e26acf125483a8d188ef27 = NULL;

    assertFrameObject( frame_9d8cc031e9e26acf125483a8d188ef27 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_types$$$function_1_bytes_to_list );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_byte_string );
    par_byte_string = NULL;

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
    Py_XDECREF( par_byte_string );
    par_byte_string = NULL;

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
    NUITKA_CANNOT_GET_HERE( asn1crypto$_types$$$function_1_bytes_to_list );
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


static PyObject *impl_asn1crypto$_types$$$function_2_chr_cls( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_num = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b6b2913c9fbaf500552f898eb4c3e7a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b6b2913c9fbaf500552f898eb4c3e7a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b6b2913c9fbaf500552f898eb4c3e7a6, codeobj_b6b2913c9fbaf500552f898eb4c3e7a6, module_asn1crypto$_types, sizeof(void *) );
    frame_b6b2913c9fbaf500552f898eb4c3e7a6 = cache_frame_b6b2913c9fbaf500552f898eb4c3e7a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b6b2913c9fbaf500552f898eb4c3e7a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b6b2913c9fbaf500552f898eb4c3e7a6 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_bytes_arg_1;
    PyObject *tmp_list_element_1;
    CHECK_OBJECT( par_num );
    tmp_list_element_1 = par_num;
    tmp_bytes_arg_1 = PyList_New( 1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_bytes_arg_1, 0, tmp_list_element_1 );
    tmp_return_value = BUILTIN_BYTES1( tmp_bytes_arg_1 );
    Py_DECREF( tmp_bytes_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6b2913c9fbaf500552f898eb4c3e7a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6b2913c9fbaf500552f898eb4c3e7a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6b2913c9fbaf500552f898eb4c3e7a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b6b2913c9fbaf500552f898eb4c3e7a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b6b2913c9fbaf500552f898eb4c3e7a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b6b2913c9fbaf500552f898eb4c3e7a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b6b2913c9fbaf500552f898eb4c3e7a6,
        type_description_1,
        par_num
    );


    // Release cached frame.
    if ( frame_b6b2913c9fbaf500552f898eb4c3e7a6 == cache_frame_b6b2913c9fbaf500552f898eb4c3e7a6 )
    {
        Py_DECREF( frame_b6b2913c9fbaf500552f898eb4c3e7a6 );
    }
    cache_frame_b6b2913c9fbaf500552f898eb4c3e7a6 = NULL;

    assertFrameObject( frame_b6b2913c9fbaf500552f898eb4c3e7a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_types$$$function_2_chr_cls );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_num );
    par_num = NULL;

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
    Py_XDECREF( par_num );
    par_num = NULL;

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
    NUITKA_CANNOT_GET_HERE( asn1crypto$_types$$$function_2_chr_cls );
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


static PyObject *impl_asn1crypto$_types$$$function_3_type_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *var_cls = NULL;
    struct Nuitka_FrameObject *frame_2faf590bb5ebd47f134f4a8cf5b96d7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2faf590bb5ebd47f134f4a8cf5b96d7e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2faf590bb5ebd47f134f4a8cf5b96d7e, codeobj_2faf590bb5ebd47f134f4a8cf5b96d7e, module_asn1crypto$_types, sizeof(void *)+sizeof(void *) );
    frame_2faf590bb5ebd47f134f4a8cf5b96d7e = cache_frame_2faf590bb5ebd47f134f4a8cf5b96d7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2faf590bb5ebd47f134f4a8cf5b96d7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2faf590bb5ebd47f134f4a8cf5b96d7e ) == 2 ); // Frame stack

    // Framed code:
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_call_result_1;
    PyObject *tmp_args_element_name_1;
    int tmp_truth_name_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_inspect );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inspect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = tmp_mvar_value_1;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isclass );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( par_value == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_value;
    frame_2faf590bb5ebd47f134f4a8cf5b96d7e->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_call_result_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_1 );

        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_1 );
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
    PyObject *tmp_assign_source_1;
    if ( par_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = par_value;
    assert( var_cls == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_cls = tmp_assign_source_1;

    }
    goto branch_end_1;
    branch_no_1:;
    {
    PyObject *tmp_assign_source_2;
    PyObject *tmp_source_name_2;
    if ( par_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_value;
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_cls == NULL );
    var_cls = tmp_assign_source_2;

    }
    branch_end_1:;
    }
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_source_name_3;
    CHECK_OBJECT( var_cls );
    tmp_source_name_3 = var_cls;
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___module__ );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = PySet_New( const_set_565a0396aa40318e0c9d250136af7385 );
    tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    PyObject *tmp_source_name_4;
    if ( var_cls == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = var_cls;
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    }
    branch_no_2:;
    }
    {
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    tmp_left_name_1 = const_str_digest_3114c7847ed30512509505e34fc4f6e0;
    if ( var_cls == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = var_cls;
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___module__ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    if ( var_cls == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = var_cls;
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___name__ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 46;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2faf590bb5ebd47f134f4a8cf5b96d7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2faf590bb5ebd47f134f4a8cf5b96d7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2faf590bb5ebd47f134f4a8cf5b96d7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2faf590bb5ebd47f134f4a8cf5b96d7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2faf590bb5ebd47f134f4a8cf5b96d7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2faf590bb5ebd47f134f4a8cf5b96d7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2faf590bb5ebd47f134f4a8cf5b96d7e,
        type_description_1,
        par_value,
        var_cls
    );


    // Release cached frame.
    if ( frame_2faf590bb5ebd47f134f4a8cf5b96d7e == cache_frame_2faf590bb5ebd47f134f4a8cf5b96d7e )
    {
        Py_DECREF( frame_2faf590bb5ebd47f134f4a8cf5b96d7e );
    }
    cache_frame_2faf590bb5ebd47f134f4a8cf5b96d7e = NULL;

    assertFrameObject( frame_2faf590bb5ebd47f134f4a8cf5b96d7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_types$$$function_3_type_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_value );
    par_value = NULL;

    }
    {
    Py_XDECREF( var_cls );
    var_cls = NULL;

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
    Py_XDECREF( par_value );
    par_value = NULL;

    }
    {
    Py_XDECREF( var_cls );
    var_cls = NULL;

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
    NUITKA_CANNOT_GET_HERE( asn1crypto$_types$$$function_3_type_name );
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



static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_1_bytes_to_list(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_types$$$function_1_bytes_to_list,
        const_str_plain_bytes_to_list,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d8cc031e9e26acf125483a8d188ef27,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_types,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_2_chr_cls(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_types$$$function_2_chr_cls,
        const_str_plain_chr_cls,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b6b2913c9fbaf500552f898eb4c3e7a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_types,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_3_type_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_types$$$function_3_type_name,
        const_str_plain_type_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2faf590bb5ebd47f134f4a8cf5b96d7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_types,
        const_str_digest_79eb27773663ed2c126c71b4c000ba3b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_asn1crypto$_types =
{
    PyModuleDef_HEAD_INIT,
    "asn1crypto._types",   /* m_name */
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

MOD_INIT_DECL( asn1crypto$_types )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_asn1crypto$_types );
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
    puts("asn1crypto._types: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("asn1crypto._types: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("asn1crypto._types: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initasn1crypto$_types" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_asn1crypto$_types = Py_InitModule4(
        "asn1crypto._types",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_asn1crypto$_types = PyModule_Create( &mdef_asn1crypto$_types );
#endif

    moduledict_asn1crypto$_types = MODULE_DICT( module_asn1crypto$_types );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_asn1crypto$_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_asn1crypto$_types );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e746be9f19c8f90caa6d901ec113ca09, module_asn1crypto$_types );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_2c600f556306f17830214b23d8e628c2;
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

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_61d2ec5184a95531101855ad0ec91635;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
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
    frame_2c600f556306f17830214b23d8e628c2 = MAKE_MODULE_FRAME( codeobj_2c600f556306f17830214b23d8e628c2, module_asn1crypto$_types );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2c600f556306f17830214b23d8e628c2 );
    assert( Py_REFCNT( frame_2c600f556306f17830214b23d8e628c2 ) == 2 );

    // Framed code:
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_import_name_from_1;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_1 = tmp_import_from_1__module;
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_5 );
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


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    PyObject *tmp_import_name_from_3;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_3 = tmp_import_from_1__module;
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    }
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_import_name_from_4;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_4 = tmp_import_from_1__module;
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_print_function );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
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
    PyObject *tmp_assign_source_9;
    PyObject *tmp_name_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_level_name_1;
    tmp_name_name_1 = const_str_plain_inspect;
    tmp_globals_name_1 = (PyObject *)moduledict_asn1crypto$_types;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_2c600f556306f17830214b23d8e628c2->m_frame.f_lineno = 4;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_9 );
    }
    {
    PyObject *tmp_assign_source_10;
    PyObject *tmp_name_name_2;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_level_name_2;
    tmp_name_name_2 = const_str_plain_sys;
    tmp_globals_name_2 = (PyObject *)moduledict_asn1crypto$_types;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_2c600f556306f17830214b23d8e628c2->m_frame.f_lineno = 5;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    assert( !(tmp_assign_source_10 == NULL) );
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_10 );
    }
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    CHECK_OBJECT( tmp_mvar_value_1 );
    tmp_source_name_1 = tmp_mvar_value_1;
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_tuple_int_pos_3_tuple;
    tmp_res = RICH_COMPARE_BOOL_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
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
    PyObject *tmp_assign_source_11;
    PyObject *tmp_mvar_value_2;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 9;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = tmp_mvar_value_2;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_str_cls, tmp_assign_source_11 );
    }
    {
    PyObject *tmp_assign_source_12;
    tmp_assign_source_12 = (PyObject *)&PyUnicode_Type;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_byte_cls, tmp_assign_source_12 );
    }
    {
    PyObject *tmp_assign_source_13;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_mvar_value_3;
    tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
    tmp_assign_source_13 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 0, tmp_tuple_element_1 );
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_long );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
    }

    if ( tmp_mvar_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "long" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = tmp_mvar_value_3;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 1, tmp_tuple_element_1 );
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_13 );
    }
    {
    PyObject *tmp_assign_source_14;
    tmp_assign_source_14 = MAKE_FUNCTION_asn1crypto$_types$$$function_1_bytes_to_list(  );



    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_bytes_to_list, tmp_assign_source_14 );
    }
    {
    PyObject *tmp_assign_source_15;
    tmp_assign_source_15 = LOOKUP_BUILTIN( const_str_plain_chr );
    assert( tmp_assign_source_15 != NULL );
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_chr_cls, tmp_assign_source_15 );
    }
    goto branch_end_1;
    branch_no_1:;
    {
    PyObject *tmp_assign_source_16;
    tmp_assign_source_16 = (PyObject *)&PyUnicode_Type;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_str_cls, tmp_assign_source_16 );
    }
    {
    PyObject *tmp_assign_source_17;
    tmp_assign_source_17 = (PyObject *)&PyBytes_Type;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_byte_cls, tmp_assign_source_17 );
    }
    {
    PyObject *tmp_assign_source_18;
    tmp_assign_source_18 = (PyObject *)&PyLong_Type;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_18 );
    }
    {
    PyObject *tmp_assign_source_19;
    tmp_assign_source_19 = (PyObject *)&PyList_Type;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_bytes_to_list, tmp_assign_source_19 );
    }
    {
    PyObject *tmp_assign_source_20;
    tmp_assign_source_20 = MAKE_FUNCTION_asn1crypto$_types$$$function_2_chr_cls(  );



    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_chr_cls, tmp_assign_source_20 );
    }
    branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c600f556306f17830214b23d8e628c2 );
#endif
    popFrameStack();

    assertFrameObject( frame_2c600f556306f17830214b23d8e628c2 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c600f556306f17830214b23d8e628c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c600f556306f17830214b23d8e628c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c600f556306f17830214b23d8e628c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c600f556306f17830214b23d8e628c2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
    PyObject *tmp_assign_source_21;
    tmp_assign_source_21 = MAKE_FUNCTION_asn1crypto$_types$$$function_3_type_name(  );



    UPDATE_STRING_DICT1( moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_type_name, tmp_assign_source_21 );
    }

    return MOD_RETURN_VALUE( module_asn1crypto$_types );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

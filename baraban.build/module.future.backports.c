/* Generated code for Python source for module 'future.backports'
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

/* The _module_future$backports is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$backports;
PyDictObject *moduledict_future$backports;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_import_top_level_modules_tuple;
extern PyObject *const_str_plain_cmp_to_key;
extern PyObject *const_str_plain_sys;
static PyObject *const_list_str_digest_5ce534849d19157b05d75880ee19c826_list;
static PyObject *const_str_digest_e4d218f3181b084c6fa9048275909a11;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_import_top_level_modules;
extern PyObject *const_str_plain_count;
static PyObject *const_str_digest_2c6ddba72f17db96affc59bbacac080d;
extern PyObject *const_int_0;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_version_info;
static PyObject *const_str_digest_5ce534849d19157b05d75880ee19c826;
extern PyObject *const_str_plain_OrderedDict;
extern PyObject *const_str_plain_recursive_repr;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_741d67a63a1148262437f3f97bcea1cd;
extern PyObject *const_str_plain__count_elements;
extern PyObject *const_str_plain_check_output;
extern PyObject *const_str_plain___future_module__;
static PyObject *const_str_digest_56e2a4fa51368fac9dc4cd5172ab73dc;
static PyObject *const_str_plain_misc;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_ChainMap;
static PyObject *const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_Counter;
extern PyObject *const_str_digest_9ceff9e9dc2f123ff8fecafdd8ee49a7;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_digest_5ce534849d19157b05d75880ee19c826_list = PyList_New( 1 );
    const_str_digest_5ce534849d19157b05d75880ee19c826 = UNSTREAM_STRING( &constant_bin[ 541246 ], 49, 0 );
    PyList_SET_ITEM( const_list_str_digest_5ce534849d19157b05d75880ee19c826_list, 0, const_str_digest_5ce534849d19157b05d75880ee19c826 ); Py_INCREF( const_str_digest_5ce534849d19157b05d75880ee19c826 );
    const_str_digest_e4d218f3181b084c6fa9048275909a11 = UNSTREAM_STRING( &constant_bin[ 541295 ], 26, 0 );
    const_str_digest_2c6ddba72f17db96affc59bbacac080d = UNSTREAM_STRING( &constant_bin[ 541321 ], 25, 0 );
    const_str_digest_56e2a4fa51368fac9dc4cd5172ab73dc = UNSTREAM_STRING( &constant_bin[ 541346 ], 61, 0 );
    const_str_plain_misc = UNSTREAM_STRING( &constant_bin[ 541407 ], 4, 1 );
    const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple, 0, const_str_plain_ceil ); Py_INCREF( const_str_plain_ceil );
    PyTuple_SET_ITEM( const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple, 1, const_str_plain_OrderedDict ); Py_INCREF( const_str_plain_OrderedDict );
    PyTuple_SET_ITEM( const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple, 2, const_str_plain_Counter ); Py_INCREF( const_str_plain_Counter );
    PyTuple_SET_ITEM( const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple, 3, const_str_plain_ChainMap ); Py_INCREF( const_str_plain_ChainMap );
    PyTuple_SET_ITEM( const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple, 4, const_str_plain_check_output ); Py_INCREF( const_str_plain_check_output );
    PyTuple_SET_ITEM( const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple, 5, const_str_plain_count ); Py_INCREF( const_str_plain_count );
    PyTuple_SET_ITEM( const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple, 6, const_str_plain_recursive_repr ); Py_INCREF( const_str_plain_recursive_repr );
    PyTuple_SET_ITEM( const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple, 7, const_str_plain__count_elements ); Py_INCREF( const_str_plain__count_elements );
    PyTuple_SET_ITEM( const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple, 8, const_str_plain_cmp_to_key ); Py_INCREF( const_str_plain_cmp_to_key );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$backports( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6865c7e517a581bd52865398bff8f06d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_56e2a4fa51368fac9dc4cd5172ab73dc;
    codeobj_6865c7e517a581bd52865398bff8f06d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2c6ddba72f17db96affc59bbacac080d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$backports =
{
    PyModuleDef_HEAD_INIT,
    "future.backports",   /* m_name */
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

MOD_INIT_DECL( future$backports )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$backports );
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
    puts("future.backports: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("future.backports: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("future.backports: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initfuture$backports" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$backports = Py_InitModule4(
        "future.backports",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_future$backports = PyModule_Create( &mdef_future$backports );
#endif

    moduledict_future$backports = MODULE_DICT( module_future$backports );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_future$backports,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_future$backports );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_741d67a63a1148262437f3f97bcea1cd, module_future$backports );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_6865c7e517a581bd52865398bff8f06d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = const_str_digest_e4d218f3181b084c6fa9048275909a11;
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_56e2a4fa51368fac9dc4cd5172ab73dc;
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_5ce534849d19157b05d75880ee19c826_list );
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
    PyObject *tmp_assign_source_4;
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    // Frame without reuse.
    frame_6865c7e517a581bd52865398bff8f06d = MAKE_MODULE_FRAME( codeobj_6865c7e517a581bd52865398bff8f06d, module_future$backports );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6865c7e517a581bd52865398bff8f06d );
    assert( Py_REFCNT( frame_6865c7e517a581bd52865398bff8f06d ) == 2 );

    // Framed code:
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_import_name_from_1;
    frame_6865c7e517a581bd52865398bff8f06d->m_frame.f_lineno = 5;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    }
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_name_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_level_name_1;
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_future$backports;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_6865c7e517a581bd52865398bff8f06d->m_frame.f_lineno = 7;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_assign_source_6 == NULL) );
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    tmp_assign_source_7 = Py_True;
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___future_module__, tmp_assign_source_7 );
    }
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_name_name_2;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_level_name_2;
    tmp_name_name_2 = const_str_digest_9ceff9e9dc2f123ff8fecafdd8ee49a7;
    tmp_globals_name_2 = (PyObject *)moduledict_future$backports;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_import_top_level_modules_tuple;
    tmp_level_name_2 = const_int_0;
    frame_6865c7e517a581bd52865398bff8f06d->m_frame.f_lineno = 10;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_import_top_level_modules );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_import_top_level_modules, tmp_assign_source_8 );
    }
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_subscript_name_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 13;

        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = tmp_mvar_value_1;
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_3;
    tmp_res = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

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
    PyObject *tmp_called_name_1;
    PyObject *tmp_mvar_value_2;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_import_top_level_modules );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_import_top_level_modules );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "import_top_level_modules" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;

        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = tmp_mvar_value_2;
    frame_6865c7e517a581bd52865398bff8f06d->m_frame.f_lineno = 14;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    }
    branch_no_1:;
    }
    {
    PyObject *tmp_assign_source_9;
    PyObject *tmp_name_name_3;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_level_name_3;
    tmp_name_name_3 = const_str_plain_misc;
    tmp_globals_name_3 = (PyObject *)moduledict_future$backports;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_2ace21bef809b9a757f5a19d2a9c6f1d_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_6865c7e517a581bd52865398bff8f06d->m_frame.f_lineno = 17;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_9;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_10;
    PyObject *tmp_import_name_from_3;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_3 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_ceil,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ceil );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_ceil, tmp_assign_source_10 );
    }
    {
    PyObject *tmp_assign_source_11;
    PyObject *tmp_import_name_from_4;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_4 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_OrderedDict,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_OrderedDict );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_11 );
    }
    {
    PyObject *tmp_assign_source_12;
    PyObject *tmp_import_name_from_5;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_5 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_Counter,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Counter );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_Counter, tmp_assign_source_12 );
    }
    {
    PyObject *tmp_assign_source_13;
    PyObject *tmp_import_name_from_6;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_6 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_ChainMap,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ChainMap );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_ChainMap, tmp_assign_source_13 );
    }
    {
    PyObject *tmp_assign_source_14;
    PyObject *tmp_import_name_from_7;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_7 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_check_output,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_check_output );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_check_output, tmp_assign_source_14 );
    }
    {
    PyObject *tmp_assign_source_15;
    PyObject *tmp_import_name_from_8;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_8 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_count,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_count );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_count, tmp_assign_source_15 );
    }
    {
    PyObject *tmp_assign_source_16;
    PyObject *tmp_import_name_from_9;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_9 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_recursive_repr,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_recursive_repr );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_recursive_repr, tmp_assign_source_16 );
    }
    {
    PyObject *tmp_assign_source_17;
    PyObject *tmp_import_name_from_10;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_10 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain__count_elements,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__count_elements );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain__count_elements, tmp_assign_source_17 );
    }
    {
    PyObject *tmp_assign_source_18;
    PyObject *tmp_import_name_from_11;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_11 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_cmp_to_key,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_cmp_to_key );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_cmp_to_key, tmp_assign_source_18 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6865c7e517a581bd52865398bff8f06d );
#endif
    popFrameStack();

    assertFrameObject( frame_6865c7e517a581bd52865398bff8f06d );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6865c7e517a581bd52865398bff8f06d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6865c7e517a581bd52865398bff8f06d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6865c7e517a581bd52865398bff8f06d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6865c7e517a581bd52865398bff8f06d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    }

    return MOD_RETURN_VALUE( module_future$backports );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

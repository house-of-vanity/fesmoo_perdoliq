/* Generated code for Python source for module 'future.builtins'
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

/* The _module_future$builtins is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$builtins;
PyDictObject *moduledict_future$builtins;

/* The module constants used, if any. */
extern PyObject *const_str_digest_96b7425961f73d341c56a14b3f3d9e23;
static PyObject *const_tuple_c1ac707d44f3393a13d39121a733050d_tuple;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_isinstance;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_builtins;
extern PyObject *const_str_plain_newdict;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_hex;
extern PyObject *const_str_digest_35567259d2afb422e342c2eb1620e11c;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_chr;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_newrange;
extern PyObject *const_str_plain_newstr;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_plain_pow;
extern PyObject *const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_newbytes;
static PyObject *const_list_str_digest_14b034cfbf917dfd429aeed2a90cebf9_list;
extern PyObject *const_str_plain_oct;
static PyObject *const_list_ef9d79d9490155a6b72984fe1a6ca422_list;
static PyObject *const_str_digest_ac359c5815a472ac0dfc028c273ac8a1;
static PyObject *const_str_digest_7cbcdc8c38075b403161c78a6ef71ffd;
extern PyObject *const_str_plain_future;
extern PyObject *const_tuple_str_plain_utils_tuple;
static PyObject *const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple;
extern PyObject *const_str_plain_input;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_round;
static PyObject *const_str_digest_af03faf29de1d1b29971a2e5b1a31d2b;
extern PyObject *const_str_plain_newint;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_14b034cfbf917dfd429aeed2a90cebf9;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_str_plain_next;
extern PyObject *const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
extern PyObject *const_str_plain_newlist;
extern PyObject *const_tuple_str_plain_PY3_tuple;
static PyObject *const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple;
extern PyObject *const_str_plain_super;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_newobject;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_c1ac707d44f3393a13d39121a733050d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 0, const_str_plain_newbytes ); Py_INCREF( const_str_plain_newbytes );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 1, const_str_plain_newdict ); Py_INCREF( const_str_plain_newdict );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 2, const_str_plain_newint ); Py_INCREF( const_str_plain_newint );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 3, const_str_plain_newlist ); Py_INCREF( const_str_plain_newlist );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 4, const_str_plain_newobject ); Py_INCREF( const_str_plain_newobject );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 5, const_str_plain_newrange ); Py_INCREF( const_str_plain_newrange );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 6, const_str_plain_newstr ); Py_INCREF( const_str_plain_newstr );
    const_list_str_digest_14b034cfbf917dfd429aeed2a90cebf9_list = PyList_New( 1 );
    const_str_digest_14b034cfbf917dfd429aeed2a90cebf9 = UNSTREAM_STRING( &constant_bin[ 699330 ], 48, 0 );
    PyList_SET_ITEM( const_list_str_digest_14b034cfbf917dfd429aeed2a90cebf9_list, 0, const_str_digest_14b034cfbf917dfd429aeed2a90cebf9 ); Py_INCREF( const_str_digest_14b034cfbf917dfd429aeed2a90cebf9 );
    const_list_ef9d79d9490155a6b72984fe1a6ca422_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 699378 ], 127 );
    const_str_digest_ac359c5815a472ac0dfc028c273ac8a1 = UNSTREAM_STRING( &constant_bin[ 699505 ], 24, 0 );
    const_str_digest_7cbcdc8c38075b403161c78a6ef71ffd = UNSTREAM_STRING( &constant_bin[ 699529 ], 223, 0 );
    const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, 0, const_str_plain_filter ); Py_INCREF( const_str_plain_filter );
    PyTuple_SET_ITEM( const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, 1, const_str_plain_map ); Py_INCREF( const_str_plain_map );
    PyTuple_SET_ITEM( const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, 2, const_str_plain_zip ); Py_INCREF( const_str_plain_zip );
    const_str_digest_af03faf29de1d1b29971a2e5b1a31d2b = UNSTREAM_STRING( &constant_bin[ 699752 ], 60, 0 );
    const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 0, const_str_plain_ascii ); Py_INCREF( const_str_plain_ascii );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 1, const_str_plain_chr ); Py_INCREF( const_str_plain_chr );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 2, const_str_plain_hex ); Py_INCREF( const_str_plain_hex );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 3, const_str_plain_input ); Py_INCREF( const_str_plain_input );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 4, const_str_plain_isinstance ); Py_INCREF( const_str_plain_isinstance );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 5, const_str_plain_next ); Py_INCREF( const_str_plain_next );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 6, const_str_plain_oct ); Py_INCREF( const_str_plain_oct );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 7, const_str_plain_open ); Py_INCREF( const_str_plain_open );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 8, const_str_plain_pow ); Py_INCREF( const_str_plain_pow );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 9, const_str_plain_round ); Py_INCREF( const_str_plain_round );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 10, const_str_plain_super ); Py_INCREF( const_str_plain_super );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$builtins( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2004ab47b2e069e5cd97cece2a6aa08d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_af03faf29de1d1b29971a2e5b1a31d2b;
    codeobj_2004ab47b2e069e5cd97cece2a6aa08d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ac359c5815a472ac0dfc028c273ac8a1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$builtins =
{
    PyModuleDef_HEAD_INIT,
    "future.builtins",   /* m_name */
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

MOD_INIT_DECL( future$builtins )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$builtins );
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
    puts("future.builtins: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("future.builtins: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("future.builtins: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initfuture$builtins" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$builtins = Py_InitModule4(
        "future.builtins",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_future$builtins = PyModule_Create( &mdef_future$builtins );
#endif

    moduledict_future$builtins = MODULE_DICT( module_future$builtins );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_future$builtins,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_future$builtins );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2, module_future$builtins );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_2004ab47b2e069e5cd97cece2a6aa08d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    int tmp_res;

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = const_str_digest_7cbcdc8c38075b403161c78a6ef71ffd;
    UPDATE_STRING_DICT0( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_af03faf29de1d1b29971a2e5b1a31d2b;
    UPDATE_STRING_DICT0( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_14b034cfbf917dfd429aeed2a90cebf9_list );
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
    PyObject *tmp_assign_source_4;
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    // Frame without reuse.
    frame_2004ab47b2e069e5cd97cece2a6aa08d = MAKE_MODULE_FRAME( codeobj_2004ab47b2e069e5cd97cece2a6aa08d, module_future$builtins );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2004ab47b2e069e5cd97cece2a6aa08d );
    assert( Py_REFCNT( frame_2004ab47b2e069e5cd97cece2a6aa08d ) == 2 );

    // Framed code:
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_name_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_level_name_1;
    tmp_name_name_1 = const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4;
    tmp_globals_name_1 = (PyObject *)moduledict_future$builtins;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple;
    tmp_level_name_1 = const_int_0;
    frame_2004ab47b2e069e5cd97cece2a6aa08d->m_frame.f_lineno = 10;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_5;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_import_name_from_1;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_1 = tmp_import_from_1__module;
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_filter );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_filter, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    PyObject *tmp_import_name_from_2;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_2 = tmp_import_from_1__module;
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_map );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_map, tmp_assign_source_7 );
    }
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_import_name_from_3;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_3 = tmp_import_from_1__module;
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_zip );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_zip, tmp_assign_source_8 );
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
    PyObject *tmp_name_name_2;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_level_name_2;
    tmp_name_name_2 = const_str_digest_35567259d2afb422e342c2eb1620e11c;
    tmp_globals_name_2 = (PyObject *)moduledict_future$builtins;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple;
    tmp_level_name_2 = const_int_0;
    frame_2004ab47b2e069e5cd97cece2a6aa08d->m_frame.f_lineno = 13;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_9;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_10;
    PyObject *tmp_import_name_from_4;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_4 = tmp_import_from_2__module;
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ascii );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_ascii, tmp_assign_source_10 );
    }
    {
    PyObject *tmp_assign_source_11;
    PyObject *tmp_import_name_from_5;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_5 = tmp_import_from_2__module;
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_chr );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_chr, tmp_assign_source_11 );
    }
    {
    PyObject *tmp_assign_source_12;
    PyObject *tmp_import_name_from_6;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_6 = tmp_import_from_2__module;
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_hex );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_hex, tmp_assign_source_12 );
    }
    {
    PyObject *tmp_assign_source_13;
    PyObject *tmp_import_name_from_7;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_7 = tmp_import_from_2__module;
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_input );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_input, tmp_assign_source_13 );
    }
    {
    PyObject *tmp_assign_source_14;
    PyObject *tmp_import_name_from_8;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_8 = tmp_import_from_2__module;
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_isinstance );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_isinstance, tmp_assign_source_14 );
    }
    {
    PyObject *tmp_assign_source_15;
    PyObject *tmp_import_name_from_9;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_9 = tmp_import_from_2__module;
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_next );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_next, tmp_assign_source_15 );
    }
    {
    PyObject *tmp_assign_source_16;
    PyObject *tmp_import_name_from_10;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_10 = tmp_import_from_2__module;
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_oct );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_oct, tmp_assign_source_16 );
    }
    {
    PyObject *tmp_assign_source_17;
    PyObject *tmp_import_name_from_11;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_11 = tmp_import_from_2__module;
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_open );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_open, tmp_assign_source_17 );
    }
    {
    PyObject *tmp_assign_source_18;
    PyObject *tmp_import_name_from_12;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_12 = tmp_import_from_2__module;
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_pow );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_pow, tmp_assign_source_18 );
    }
    {
    PyObject *tmp_assign_source_19;
    PyObject *tmp_import_name_from_13;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_13 = tmp_import_from_2__module;
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_round );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_round, tmp_assign_source_19 );
    }
    {
    PyObject *tmp_assign_source_20;
    PyObject *tmp_import_name_from_14;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_14 = tmp_import_from_2__module;
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_super );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_super, tmp_assign_source_20 );
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
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

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
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    }
    {
    PyObject *tmp_assign_source_21;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_name_name_3;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_level_name_3;
    tmp_name_name_3 = const_str_digest_118c8611317729818c37c760127e23b2;
    tmp_globals_name_3 = (PyObject *)moduledict_future$builtins;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_PY3_tuple;
    tmp_level_name_3 = const_int_0;
    frame_2004ab47b2e069e5cd97cece2a6aa08d->m_frame.f_lineno = 15;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_PY3 );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_21 );
    }
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_mvar_value_1;
    int tmp_truth_name_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_PY3 );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3 );
    }

    CHECK_OBJECT( tmp_mvar_value_1 );
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_1 );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    PyObject *tmp_assign_source_22;
    PyObject *tmp_name_name_4;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_level_name_4;
    tmp_name_name_4 = const_str_plain_builtins;
    tmp_globals_name_4 = (PyObject *)moduledict_future$builtins;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_2004ab47b2e069e5cd97cece2a6aa08d->m_frame.f_lineno = 18;
    tmp_assign_source_22 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    assert( !(tmp_assign_source_22 == NULL) );
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins, tmp_assign_source_22 );
    }
    {
    PyObject *tmp_assign_source_23;
    PyObject *tmp_source_name_1;
    PyObject *tmp_mvar_value_2;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    CHECK_OBJECT( tmp_mvar_value_2 );
    tmp_source_name_1 = tmp_mvar_value_2;
    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bytes );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_23 );
    }
    {
    PyObject *tmp_assign_source_24;
    PyObject *tmp_source_name_2;
    PyObject *tmp_mvar_value_3;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;

        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = tmp_mvar_value_3;
    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dict );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_dict, tmp_assign_source_24 );
    }
    {
    PyObject *tmp_assign_source_25;
    PyObject *tmp_source_name_3;
    PyObject *tmp_mvar_value_4;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = tmp_mvar_value_4;
    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_int );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_25 );
    }
    {
    PyObject *tmp_assign_source_26;
    PyObject *tmp_source_name_4;
    PyObject *tmp_mvar_value_5;
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_mvar_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;

        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = tmp_mvar_value_5;
    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_list );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_list, tmp_assign_source_26 );
    }
    {
    PyObject *tmp_assign_source_27;
    PyObject *tmp_source_name_5;
    PyObject *tmp_mvar_value_6;
    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_mvar_value_6 == NULL ))
    {
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_mvar_value_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = tmp_mvar_value_6;
    tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_object );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_27 );
    }
    {
    PyObject *tmp_assign_source_28;
    PyObject *tmp_source_name_6;
    PyObject *tmp_mvar_value_7;
    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_mvar_value_7 == NULL ))
    {
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_mvar_value_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;

        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = tmp_mvar_value_7;
    tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_range );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_28 );
    }
    {
    PyObject *tmp_assign_source_29;
    PyObject *tmp_source_name_7;
    PyObject *tmp_mvar_value_8;
    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_mvar_value_8 == NULL ))
    {
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_mvar_value_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = tmp_mvar_value_8;
    tmp_assign_source_29 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_str );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_29 );
    }
    {
    PyObject *tmp_assign_source_30;
    tmp_assign_source_30 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_30 );
    }
    goto branch_end_1;
    branch_no_1:;
    {
    PyObject *tmp_assign_source_31;
    PyObject *tmp_name_name_5;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_level_name_5;
    tmp_name_name_5 = const_str_digest_96b7425961f73d341c56a14b3f3d9e23;
    tmp_globals_name_5 = (PyObject *)moduledict_future$builtins;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_c1ac707d44f3393a13d39121a733050d_tuple;
    tmp_level_name_5 = const_int_0;
    frame_2004ab47b2e069e5cd97cece2a6aa08d->m_frame.f_lineno = 28;
    tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_31;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_32;
    PyObject *tmp_import_name_from_16;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_16 = tmp_import_from_3__module;
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_newbytes );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_32 );
    }
    {
    PyObject *tmp_assign_source_33;
    PyObject *tmp_import_name_from_17;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_17 = tmp_import_from_3__module;
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_newdict );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_dict, tmp_assign_source_33 );
    }
    {
    PyObject *tmp_assign_source_34;
    PyObject *tmp_import_name_from_18;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_18 = tmp_import_from_3__module;
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_newint );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_34 );
    }
    {
    PyObject *tmp_assign_source_35;
    PyObject *tmp_import_name_from_19;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_19 = tmp_import_from_3__module;
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_newlist );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_list, tmp_assign_source_35 );
    }
    {
    PyObject *tmp_assign_source_36;
    PyObject *tmp_import_name_from_20;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_20 = tmp_import_from_3__module;
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_newobject );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_36 );
    }
    {
    PyObject *tmp_assign_source_37;
    PyObject *tmp_import_name_from_21;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_21 = tmp_import_from_3__module;
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_newrange );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_37 );
    }
    {
    PyObject *tmp_assign_source_38;
    PyObject *tmp_import_name_from_22;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_22 = tmp_import_from_3__module;
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_newstr );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_38 );
    }
    goto try_end_3;
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
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

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
    try_end_3:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    }
    branch_end_1:;
    }
    {
    PyObject *tmp_assign_source_39;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_name_name_6;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_level_name_6;
    tmp_name_name_6 = const_str_plain_future;
    tmp_globals_name_6 = (PyObject *)moduledict_future$builtins;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_utils_tuple;
    tmp_level_name_6 = const_int_0;
    frame_2004ab47b2e069e5cd97cece2a6aa08d->m_frame.f_lineno = 35;
    tmp_import_name_from_23 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_utils );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_39 );
    }
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_source_name_8;
    PyObject *tmp_mvar_value_9;
    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_mvar_value_9 == NULL ))
    {
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    CHECK_OBJECT( tmp_mvar_value_9 );
    tmp_source_name_8 = tmp_mvar_value_9;
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_PY3 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    PyObject *tmp_assign_source_40;
    tmp_assign_source_40 = LIST_COPY( const_list_ef9d79d9490155a6b72984fe1a6ca422_list );
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_40 );
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assign_source_41;
    tmp_assign_source_41 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_41 );
    }
    branch_end_2:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2004ab47b2e069e5cd97cece2a6aa08d );
#endif
    popFrameStack();

    assertFrameObject( frame_2004ab47b2e069e5cd97cece2a6aa08d );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2004ab47b2e069e5cd97cece2a6aa08d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2004ab47b2e069e5cd97cece2a6aa08d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2004ab47b2e069e5cd97cece2a6aa08d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2004ab47b2e069e5cd97cece2a6aa08d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_future$builtins );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

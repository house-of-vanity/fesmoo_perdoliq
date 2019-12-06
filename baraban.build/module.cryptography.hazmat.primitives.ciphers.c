/* Generated code for Python source for module 'cryptography.hazmat.primitives.ciphers'
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

/* The _module_cryptography$hazmat$primitives$ciphers is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$ciphers;
PyDictObject *moduledict_cryptography$hazmat$primitives$ciphers;

/* The module constants used, if any. */
static PyObject *const_list_2b054774c0066cbef99416ec16db7f55_list;
static PyObject *const_str_digest_50be226755fb35a1992c4b8f94050655;
extern PyObject *const_str_plain_AEADCipherContext;
extern PyObject *const_str_digest_14ef95124e44c60f7f171703f1a5fe7a;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_3c86091b0221420e37a141b05af53ea1;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_CipherContext;
static PyObject *const_list_str_digest_3c86091b0221420e37a141b05af53ea1_list;
static PyObject *const_str_digest_4e08540ba859fd29f7b4cdc8479a7553;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_CipherAlgorithm;
extern PyObject *const_str_plain_Cipher;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5;
extern PyObject *const_str_plain_AEADEncryptionContext;
extern PyObject *const_str_plain_BlockCipherAlgorithm;
extern PyObject *const_str_plain_AEADDecryptionContext;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_2b054774c0066cbef99416ec16db7f55_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_2b054774c0066cbef99416ec16db7f55_list, 0, const_str_plain_Cipher ); Py_INCREF( const_str_plain_Cipher );
    PyList_SET_ITEM( const_list_2b054774c0066cbef99416ec16db7f55_list, 1, const_str_plain_CipherAlgorithm ); Py_INCREF( const_str_plain_CipherAlgorithm );
    PyList_SET_ITEM( const_list_2b054774c0066cbef99416ec16db7f55_list, 2, const_str_plain_BlockCipherAlgorithm ); Py_INCREF( const_str_plain_BlockCipherAlgorithm );
    PyList_SET_ITEM( const_list_2b054774c0066cbef99416ec16db7f55_list, 3, const_str_plain_CipherContext ); Py_INCREF( const_str_plain_CipherContext );
    PyList_SET_ITEM( const_list_2b054774c0066cbef99416ec16db7f55_list, 4, const_str_plain_AEADCipherContext ); Py_INCREF( const_str_plain_AEADCipherContext );
    PyList_SET_ITEM( const_list_2b054774c0066cbef99416ec16db7f55_list, 5, const_str_plain_AEADDecryptionContext ); Py_INCREF( const_str_plain_AEADDecryptionContext );
    PyList_SET_ITEM( const_list_2b054774c0066cbef99416ec16db7f55_list, 6, const_str_plain_AEADEncryptionContext ); Py_INCREF( const_str_plain_AEADEncryptionContext );
    const_str_digest_50be226755fb35a1992c4b8f94050655 = UNSTREAM_STRING( &constant_bin[ 499749 ], 47, 0 );
    const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple, 0, const_str_plain_AEADCipherContext ); Py_INCREF( const_str_plain_AEADCipherContext );
    PyTuple_SET_ITEM( const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple, 1, const_str_plain_AEADDecryptionContext ); Py_INCREF( const_str_plain_AEADDecryptionContext );
    PyTuple_SET_ITEM( const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple, 2, const_str_plain_AEADEncryptionContext ); Py_INCREF( const_str_plain_AEADEncryptionContext );
    PyTuple_SET_ITEM( const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple, 3, const_str_plain_BlockCipherAlgorithm ); Py_INCREF( const_str_plain_BlockCipherAlgorithm );
    PyTuple_SET_ITEM( const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple, 4, const_str_plain_Cipher ); Py_INCREF( const_str_plain_Cipher );
    PyTuple_SET_ITEM( const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple, 5, const_str_plain_CipherAlgorithm ); Py_INCREF( const_str_plain_CipherAlgorithm );
    PyTuple_SET_ITEM( const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple, 6, const_str_plain_CipherContext ); Py_INCREF( const_str_plain_CipherContext );
    const_str_digest_3c86091b0221420e37a141b05af53ea1 = UNSTREAM_STRING( &constant_bin[ 499796 ], 71, 0 );
    const_list_str_digest_3c86091b0221420e37a141b05af53ea1_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_3c86091b0221420e37a141b05af53ea1_list, 0, const_str_digest_3c86091b0221420e37a141b05af53ea1 ); Py_INCREF( const_str_digest_3c86091b0221420e37a141b05af53ea1 );
    const_str_digest_4e08540ba859fd29f7b4cdc8479a7553 = UNSTREAM_STRING( &constant_bin[ 499867 ], 83, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$ciphers( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_759cdfbcce6161066835c3db8c7ad8e7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4e08540ba859fd29f7b4cdc8479a7553;
    codeobj_759cdfbcce6161066835c3db8c7ad8e7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_50be226755fb35a1992c4b8f94050655, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$ciphers =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.primitives.ciphers",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$ciphers );
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
    puts("cryptography.hazmat.primitives.ciphers: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.ciphers: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.ciphers: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$primitives$ciphers" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$ciphers = Py_InitModule4(
        "cryptography.hazmat.primitives.ciphers",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$primitives$ciphers = PyModule_Create( &mdef_cryptography$hazmat$primitives$ciphers );
#endif

    moduledict_cryptography$hazmat$primitives$ciphers = MODULE_DICT( module_cryptography$hazmat$primitives$ciphers );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$ciphers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$primitives$ciphers );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5, module_cryptography$hazmat$primitives$ciphers );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_759cdfbcce6161066835c3db8c7ad8e7;
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

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_4e08540ba859fd29f7b4cdc8479a7553;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_3c86091b0221420e37a141b05af53ea1_list );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
    PyObject *tmp_assign_source_4;
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
    PyObject *tmp_assign_source_5;
    tmp_assign_source_5 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_5 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_5 );
    tmp_import_from_1__module = tmp_assign_source_5;

    }
    // Frame without reuse.
    frame_759cdfbcce6161066835c3db8c7ad8e7 = MAKE_MODULE_FRAME( codeobj_759cdfbcce6161066835c3db8c7ad8e7, module_cryptography$hazmat$primitives$ciphers );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_759cdfbcce6161066835c3db8c7ad8e7 );
    assert( Py_REFCNT( frame_759cdfbcce6161066835c3db8c7ad8e7 ) == 2 );

    // Framed code:
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_import_name_from_1;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_1 = tmp_import_from_1__module;
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    PyObject *tmp_import_name_from_2;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_2 = tmp_import_from_1__module;
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_7 );
    }
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_import_name_from_3;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_3 = tmp_import_from_1__module;
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
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
    tmp_name_name_1 = const_str_digest_14ef95124e44c60f7f171703f1a5fe7a;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_d65a6a29ac71ba4a818ba18f2d8f4b96_tuple;
    tmp_level_name_1 = const_int_0;
    frame_759cdfbcce6161066835c3db8c7ad8e7->m_frame.f_lineno = 7;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

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
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_AEADCipherContext );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_AEADCipherContext, tmp_assign_source_10 );
    }
    {
    PyObject *tmp_assign_source_11;
    PyObject *tmp_import_name_from_5;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_5 = tmp_import_from_2__module;
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_AEADDecryptionContext );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_AEADDecryptionContext, tmp_assign_source_11 );
    }
    {
    PyObject *tmp_assign_source_12;
    PyObject *tmp_import_name_from_6;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_6 = tmp_import_from_2__module;
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_AEADEncryptionContext );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_AEADEncryptionContext, tmp_assign_source_12 );
    }
    {
    PyObject *tmp_assign_source_13;
    PyObject *tmp_import_name_from_7;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_7 = tmp_import_from_2__module;
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_BlockCipherAlgorithm );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm, tmp_assign_source_13 );
    }
    {
    PyObject *tmp_assign_source_14;
    PyObject *tmp_import_name_from_8;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_8 = tmp_import_from_2__module;
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Cipher );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_Cipher, tmp_assign_source_14 );
    }
    {
    PyObject *tmp_assign_source_15;
    PyObject *tmp_import_name_from_9;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_9 = tmp_import_from_2__module;
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_CipherAlgorithm );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm, tmp_assign_source_15 );
    }
    {
    PyObject *tmp_assign_source_16;
    PyObject *tmp_import_name_from_10;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_10 = tmp_import_from_2__module;
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_CipherContext );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain_CipherContext, tmp_assign_source_16 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_759cdfbcce6161066835c3db8c7ad8e7 );
#endif
    popFrameStack();

    assertFrameObject( frame_759cdfbcce6161066835c3db8c7ad8e7 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_759cdfbcce6161066835c3db8c7ad8e7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_759cdfbcce6161066835c3db8c7ad8e7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_759cdfbcce6161066835c3db8c7ad8e7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_759cdfbcce6161066835c3db8c7ad8e7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    }
    {
    PyObject *tmp_assign_source_17;
    tmp_assign_source_17 = LIST_COPY( const_list_2b054774c0066cbef99416ec16db7f55_list );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_17 );
    }

    return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$ciphers );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

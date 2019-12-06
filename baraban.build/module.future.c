/* Generated code for Python source for module 'future'
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

/* The _module_future is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future;
PyDictObject *moduledict_future;

/* The module constants used, if any. */
static PyObject *const_str_digest_827be8ca6f78945f9b799f1bb7058d7f;
extern PyObject *const_str_plain___copyright__;
static PyObject *const_str_digest_c7af852c1188058de8660805d58e6ce9;
static PyObject *const_str_digest_c835de59491d71f5fa4214a52e59c916;
static PyObject *const_str_plain___ver_patch__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_1efe19ca3a448b736c47e11804beaf90;
extern PyObject *const_int_0;
static PyObject *const_str_plain___ver_sub__;
static PyObject *const_str_plain___ver_major__;
extern PyObject *const_str_plain_MIT;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_digest_75004edd329bcef49f1ce314decd5e2f;
extern PyObject *const_str_plain_future;
extern PyObject *const_str_plain___license__;
static PyObject *const_str_digest_f8a287e5475c93aad3bd229c65467909;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___title__;
static PyObject *const_str_digest_095def3e8747ed2c54e585fd400d95b9;
extern PyObject *const_str_empty;
static PyObject *const_str_plain___ver_minor__;
static PyObject *const_list_str_digest_827be8ca6f78945f9b799f1bb7058d7f_list;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_827be8ca6f78945f9b799f1bb7058d7f = UNSTREAM_STRING( &constant_bin[ 538431 ], 39, 0 );
    const_str_digest_c7af852c1188058de8660805d58e6ce9 = UNSTREAM_STRING( &constant_bin[ 538470 ], 15, 0 );
    const_str_digest_c835de59491d71f5fa4214a52e59c916 = UNSTREAM_STRING( &constant_bin[ 538485 ], 10, 0 );
    const_str_plain___ver_patch__ = UNSTREAM_STRING( &constant_bin[ 538495 ], 13, 1 );
    const_str_digest_1efe19ca3a448b736c47e11804beaf90 = UNSTREAM_STRING( &constant_bin[ 538508 ], 12, 0 );
    const_str_plain___ver_sub__ = UNSTREAM_STRING( &constant_bin[ 538520 ], 11, 1 );
    const_str_plain___ver_major__ = UNSTREAM_STRING( &constant_bin[ 538531 ], 13, 1 );
    const_str_digest_75004edd329bcef49f1ce314decd5e2f = UNSTREAM_STRING( &constant_bin[ 538544 ], 2638, 0 );
    const_str_digest_f8a287e5475c93aad3bd229c65467909 = UNSTREAM_STRING( &constant_bin[ 541182 ], 51, 0 );
    const_str_digest_095def3e8747ed2c54e585fd400d95b9 = UNSTREAM_STRING( &constant_bin[ 541058 ], 43, 0 );
    const_str_plain___ver_minor__ = UNSTREAM_STRING( &constant_bin[ 541233 ], 13, 1 );
    const_list_str_digest_827be8ca6f78945f9b799f1bb7058d7f_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_827be8ca6f78945f9b799f1bb7058d7f_list, 0, const_str_digest_827be8ca6f78945f9b799f1bb7058d7f ); Py_INCREF( const_str_digest_827be8ca6f78945f9b799f1bb7058d7f );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_83d1ad813a931ac3e2d6eace71e86eb3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f8a287e5475c93aad3bd229c65467909;
    codeobj_83d1ad813a931ac3e2d6eace71e86eb3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c7af852c1188058de8660805d58e6ce9, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future =
{
    PyModuleDef_HEAD_INIT,
    "future",   /* m_name */
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

MOD_INIT_DECL( future )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future );
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
    puts("future: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("future: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("future: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initfuture" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future = Py_InitModule4(
        "future",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_future = PyModule_Create( &mdef_future );
#endif

    moduledict_future = MODULE_DICT( module_future );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_future,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_future,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_future,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_future );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_future, module_future );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_future, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    struct Nuitka_FrameObject *frame_83d1ad813a931ac3e2d6eace71e86eb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = const_str_digest_75004edd329bcef49f1ce314decd5e2f;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_f8a287e5475c93aad3bd229c65467909;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_827be8ca6f78945f9b799f1bb7058d7f_list );
    UPDATE_STRING_DICT1( moduledict_future, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
    PyObject *tmp_assign_source_4;
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
    PyObject *tmp_assign_source_5;
    tmp_assign_source_5 = const_str_plain_future;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_5 );
    }
    {
    PyObject *tmp_assign_source_6;
    tmp_assign_source_6 = const_str_digest_1efe19ca3a448b736c47e11804beaf90;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    tmp_assign_source_7 = const_str_plain_MIT;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_7 );
    }
    {
    PyObject *tmp_assign_source_8;
    tmp_assign_source_8 = const_str_digest_095def3e8747ed2c54e585fd400d95b9;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_8 );
    }
    {
    PyObject *tmp_assign_source_9;
    tmp_assign_source_9 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_major__, tmp_assign_source_9 );
    }
    {
    PyObject *tmp_assign_source_10;
    tmp_assign_source_10 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_minor__, tmp_assign_source_10 );
    }
    {
    PyObject *tmp_assign_source_11;
    tmp_assign_source_11 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_patch__, tmp_assign_source_11 );
    }
    {
    PyObject *tmp_assign_source_12;
    tmp_assign_source_12 = const_str_empty;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_sub__, tmp_assign_source_12 );
    }
    // Frame without reuse.
    frame_83d1ad813a931ac3e2d6eace71e86eb3 = MAKE_MODULE_FRAME( codeobj_83d1ad813a931ac3e2d6eace71e86eb3, module_future );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_83d1ad813a931ac3e2d6eace71e86eb3 );
    assert( Py_REFCNT( frame_83d1ad813a931ac3e2d6eace71e86eb3 ) == 2 );

    // Framed code:
    {
    PyObject *tmp_assign_source_13;
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_mvar_value_2;
    PyObject *tmp_mvar_value_3;
    PyObject *tmp_mvar_value_4;
    tmp_left_name_1 = const_str_digest_c835de59491d71f5fa4214a52e59c916;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_major__ );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___ver_major__ );
    }

    CHECK_OBJECT( tmp_mvar_value_1 );
    tmp_tuple_element_1 = tmp_mvar_value_1;
    tmp_right_name_1 = PyTuple_New( 4 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_minor__ );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___ver_minor__ );
    }

    CHECK_OBJECT( tmp_mvar_value_2 );
    tmp_tuple_element_1 = tmp_mvar_value_2;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_patch__ );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___ver_patch__ );
    }

    CHECK_OBJECT( tmp_mvar_value_3 );
    tmp_tuple_element_1 = tmp_mvar_value_3;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_sub__ );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___ver_sub__ );
    }

    CHECK_OBJECT( tmp_mvar_value_4 );
    tmp_tuple_element_1 = tmp_mvar_value_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
    tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_13 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83d1ad813a931ac3e2d6eace71e86eb3 );
#endif
    popFrameStack();

    assertFrameObject( frame_83d1ad813a931ac3e2d6eace71e86eb3 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83d1ad813a931ac3e2d6eace71e86eb3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83d1ad813a931ac3e2d6eace71e86eb3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83d1ad813a931ac3e2d6eace71e86eb3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83d1ad813a931ac3e2d6eace71e86eb3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_future );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

/* Generated code for Python source for module 'telegram.constants'
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

/* The _module_telegram$constants is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_telegram$constants;
PyDictObject *moduledict_telegram$constants;

/* The module constants used, if any. */
extern PyObject *const_str_plain_MAX_MESSAGES_PER_MINUTE_PER_GROUP;
extern PyObject *const_int_pos_20;
static PyObject *const_list_int_pos_443_int_pos_80_int_pos_88_int_pos_8443_list;
static PyObject *const_int_pos_8443;
static PyObject *const_str_digest_7357934b5ffd8dec6c70b7f1c8305f5c;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
static PyObject *const_int_pos_4096;
extern PyObject *const_str_plain_MAX_FILESIZE_UPLOAD;
extern PyObject *const_str_plain_MAX_FILESIZE_DOWNLOAD;
extern PyObject *const_str_plain_MAX_MESSAGES_PER_SECOND_PER_CHAT;
static PyObject *const_str_plain_MAX_MESSAGE_ENTITIES;
extern PyObject *const_str_plain_MAX_CAPTION_LENGTH;
static PyObject *const_int_pos_50000000;
extern PyObject *const_int_pos_443;
extern PyObject *const_int_pos_80;
extern PyObject *const_str_plain_MAX_MESSAGES_PER_SECOND;
static PyObject *const_str_plain_MAX_INLINE_QUERY_RESULTS;
static PyObject *const_int_pos_88;
static PyObject *const_int_pos_20000000;
extern PyObject *const_int_pos_200;
extern PyObject *const_int_pos_50;
extern PyObject *const_str_plain_SUPPORTED_WEBHOOK_PORTS;
extern PyObject *const_int_pos_100;
extern PyObject *const_int_pos_30;
static PyObject *const_str_digest_02b358ee868661b0ca1ec95385932d91;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_757f5482acabd13dccfa2687ffe74769;
extern PyObject *const_str_plain_MAX_MESSAGE_LENGTH;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_int_pos_443_int_pos_80_int_pos_88_int_pos_8443_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_int_pos_443_int_pos_80_int_pos_88_int_pos_8443_list, 0, const_int_pos_443 ); Py_INCREF( const_int_pos_443 );
    PyList_SET_ITEM( const_list_int_pos_443_int_pos_80_int_pos_88_int_pos_8443_list, 1, const_int_pos_80 ); Py_INCREF( const_int_pos_80 );
    const_int_pos_88 = PyLong_FromUnsignedLong( 88ul );
    PyList_SET_ITEM( const_list_int_pos_443_int_pos_80_int_pos_88_int_pos_8443_list, 2, const_int_pos_88 ); Py_INCREF( const_int_pos_88 );
    const_int_pos_8443 = PyLong_FromUnsignedLong( 8443ul );
    PyList_SET_ITEM( const_list_int_pos_443_int_pos_80_int_pos_88_int_pos_8443_list, 3, const_int_pos_8443 ); Py_INCREF( const_int_pos_8443 );
    const_str_digest_7357934b5ffd8dec6c70b7f1c8305f5c = UNSTREAM_STRING( &constant_bin[ 1199117 ], 18, 0 );
    const_int_pos_4096 = PyLong_FromUnsignedLong( 4096ul );
    const_str_plain_MAX_MESSAGE_ENTITIES = UNSTREAM_STRING( &constant_bin[ 1252945 ], 20, 1 );
    const_int_pos_50000000 = PyLong_FromUnsignedLong( 50000000ul );
    const_str_plain_MAX_INLINE_QUERY_RESULTS = UNSTREAM_STRING( &constant_bin[ 1252965 ], 24, 1 );
    const_int_pos_20000000 = PyLong_FromUnsignedLong( 20000000ul );
    const_str_digest_02b358ee868661b0ca1ec95385932d91 = UNSTREAM_STRING( &constant_bin[ 1252989 ], 54, 0 );
    const_str_digest_757f5482acabd13dccfa2687ffe74769 = UNSTREAM_STRING( &constant_bin[ 1253043 ], 931, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_telegram$constants( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_telegram$constants =
{
    PyModuleDef_HEAD_INIT,
    "telegram.constants",   /* m_name */
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

MOD_INIT_DECL( telegram$constants )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_telegram$constants );
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
    puts("telegram.constants: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram.constants: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram.constants: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittelegram$constants" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_telegram$constants = Py_InitModule4(
        "telegram.constants",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_telegram$constants = PyModule_Create( &mdef_telegram$constants );
#endif

    moduledict_telegram$constants = MODULE_DICT( module_telegram$constants );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_telegram$constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_telegram$constants );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7357934b5ffd8dec6c70b7f1c8305f5c, module_telegram$constants );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any


    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = const_str_digest_757f5482acabd13dccfa2687ffe74769;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_02b358ee868661b0ca1ec95385932d91;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
    PyObject *tmp_assign_source_4;
    tmp_assign_source_4 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_MAX_MESSAGE_LENGTH, tmp_assign_source_4 );
    }
    {
    PyObject *tmp_assign_source_5;
    tmp_assign_source_5 = const_int_pos_200;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_MAX_CAPTION_LENGTH, tmp_assign_source_5 );
    }
    {
    PyObject *tmp_assign_source_6;
    tmp_assign_source_6 = LIST_COPY( const_list_int_pos_443_int_pos_80_int_pos_88_int_pos_8443_list );
    UPDATE_STRING_DICT1( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_SUPPORTED_WEBHOOK_PORTS, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    tmp_assign_source_7 = const_int_pos_20000000;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_MAX_FILESIZE_DOWNLOAD, tmp_assign_source_7 );
    }
    {
    PyObject *tmp_assign_source_8;
    tmp_assign_source_8 = const_int_pos_50000000;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_MAX_FILESIZE_UPLOAD, tmp_assign_source_8 );
    }
    {
    PyObject *tmp_assign_source_9;
    tmp_assign_source_9 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_MAX_MESSAGES_PER_SECOND_PER_CHAT, tmp_assign_source_9 );
    }
    {
    PyObject *tmp_assign_source_10;
    tmp_assign_source_10 = const_int_pos_30;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_MAX_MESSAGES_PER_SECOND, tmp_assign_source_10 );
    }
    {
    PyObject *tmp_assign_source_11;
    tmp_assign_source_11 = const_int_pos_20;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_MAX_MESSAGES_PER_MINUTE_PER_GROUP, tmp_assign_source_11 );
    }
    {
    PyObject *tmp_assign_source_12;
    tmp_assign_source_12 = const_int_pos_100;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_MAX_MESSAGE_ENTITIES, tmp_assign_source_12 );
    }
    {
    PyObject *tmp_assign_source_13;
    tmp_assign_source_13 = const_int_pos_50;
    UPDATE_STRING_DICT0( moduledict_telegram$constants, (Nuitka_StringObject *)const_str_plain_MAX_INLINE_QUERY_RESULTS, tmp_assign_source_13 );
    }

    return MOD_RETURN_VALUE( module_telegram$constants );
}

/* Generated code for Python source for module 'telegram.keyboardbutton'
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

/* The _module_telegram$keyboardbutton is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_telegram$keyboardbutton;
PyDictObject *moduledict_telegram$keyboardbutton;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_f9b3ed4d068c1e06386b846060fc1462;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_request_location;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_tuple_str_plain_TelegramObject_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_80c2e15d6f9c0713cb745a5377119c3e;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_f1ab8fafd6ecbb265e3f5fd92393ec53;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_KeyboardButton;
extern PyObject *const_str_plain_TelegramObject;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_8c5ce1b542ee19c769d8fb158294d75f_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain_request_contact;
extern PyObject *const_str_plain_telegram;
static PyObject *const_str_digest_d8efc9b7dba35f79cd1101ca70e07f70;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_bb17c91681cc2181bc7977ed9d7c55db;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_5de740734ce0b47479b39d6fa45607ea;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_f9b3ed4d068c1e06386b846060fc1462 = UNSTREAM_STRING( &constant_bin[ 1355447 ], 32, 0 );
    const_str_plain_request_location = UNSTREAM_STRING( &constant_bin[ 1355479 ], 16, 1 );
    const_str_digest_80c2e15d6f9c0713cb745a5377119c3e = UNSTREAM_STRING( &constant_bin[ 1355495 ], 59, 0 );
    const_str_digest_f1ab8fafd6ecbb265e3f5fd92393ec53 = UNSTREAM_STRING( &constant_bin[ 1355455 ], 23, 0 );
    const_tuple_8c5ce1b542ee19c769d8fb158294d75f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8c5ce1b542ee19c769d8fb158294d75f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8c5ce1b542ee19c769d8fb158294d75f_tuple, 1, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    const_str_plain_request_contact = UNSTREAM_STRING( &constant_bin[ 1355554 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_8c5ce1b542ee19c769d8fb158294d75f_tuple, 2, const_str_plain_request_contact ); Py_INCREF( const_str_plain_request_contact );
    PyTuple_SET_ITEM( const_tuple_8c5ce1b542ee19c769d8fb158294d75f_tuple, 3, const_str_plain_request_location ); Py_INCREF( const_str_plain_request_location );
    PyTuple_SET_ITEM( const_tuple_8c5ce1b542ee19c769d8fb158294d75f_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_d8efc9b7dba35f79cd1101ca70e07f70 = UNSTREAM_STRING( &constant_bin[ 1355569 ], 1195, 0 );
    const_str_digest_bb17c91681cc2181bc7977ed9d7c55db = UNSTREAM_STRING( &constant_bin[ 1356764 ], 73, 0 );
    const_str_digest_5de740734ce0b47479b39d6fa45607ea = UNSTREAM_STRING( &constant_bin[ 1294203 ], 23, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_telegram$keyboardbutton( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1332e8f19b242f898326d0f4c057450a;
static PyCodeObject *codeobj_8cd81d37ff0964b59290d1152592f265;
static PyCodeObject *codeobj_eb5ee542be91a968e984fd48ee012ef1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_80c2e15d6f9c0713cb745a5377119c3e;
    codeobj_1332e8f19b242f898326d0f4c057450a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f9b3ed4d068c1e06386b846060fc1462, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_8cd81d37ff0964b59290d1152592f265 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_KeyboardButton, 24, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_eb5ee542be91a968e984fd48ee012ef1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 51, const_tuple_8c5ce1b542ee19c769d8fb158294d75f_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_telegram$keyboardbutton$$$function_1___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_telegram$keyboardbutton$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    PyObject *par_request_contact = python_pars[ 2 ];
    PyObject *par_request_location = python_pars[ 3 ];
    PyObject *par_kwargs = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_eb5ee542be91a968e984fd48ee012ef1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb5ee542be91a968e984fd48ee012ef1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb5ee542be91a968e984fd48ee012ef1, codeobj_eb5ee542be91a968e984fd48ee012ef1, module_telegram$keyboardbutton, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eb5ee542be91a968e984fd48ee012ef1 = cache_frame_eb5ee542be91a968e984fd48ee012ef1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb5ee542be91a968e984fd48ee012ef1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb5ee542be91a968e984fd48ee012ef1 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    CHECK_OBJECT( par_text );
    tmp_assattr_name_1 = par_text;
    CHECK_OBJECT( par_self );
    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_text, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_2;
    if ( par_request_contact == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_contact" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = par_request_contact;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_request_contact, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_3;
    if ( par_request_location == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_3 = par_request_location;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_request_location, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb5ee542be91a968e984fd48ee012ef1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb5ee542be91a968e984fd48ee012ef1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb5ee542be91a968e984fd48ee012ef1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb5ee542be91a968e984fd48ee012ef1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb5ee542be91a968e984fd48ee012ef1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb5ee542be91a968e984fd48ee012ef1,
        type_description_1,
        par_self,
        par_text,
        par_request_contact,
        par_request_location,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_eb5ee542be91a968e984fd48ee012ef1 == cache_frame_eb5ee542be91a968e984fd48ee012ef1 )
    {
        Py_DECREF( frame_eb5ee542be91a968e984fd48ee012ef1 );
    }
    cache_frame_eb5ee542be91a968e984fd48ee012ef1 = NULL;

    assertFrameObject( frame_eb5ee542be91a968e984fd48ee012ef1 );

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
    NUITKA_CANNOT_GET_HERE( telegram$keyboardbutton$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_text );
    par_text = NULL;

    }
    {
    Py_XDECREF( par_request_contact );
    par_request_contact = NULL;

    }
    {
    Py_XDECREF( par_request_location );
    par_request_location = NULL;

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
    Py_XDECREF( par_text );
    par_text = NULL;

    }
    {
    Py_XDECREF( par_request_contact );
    par_request_contact = NULL;

    }
    {
    Py_XDECREF( par_request_location );
    par_request_location = NULL;

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
    NUITKA_CANNOT_GET_HERE( telegram$keyboardbutton$$$function_1___init__ );
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



static PyObject *MAKE_FUNCTION_telegram$keyboardbutton$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_telegram$keyboardbutton$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_5de740734ce0b47479b39d6fa45607ea,
#endif
        codeobj_eb5ee542be91a968e984fd48ee012ef1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_telegram$keyboardbutton,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_telegram$keyboardbutton =
{
    PyModuleDef_HEAD_INIT,
    "telegram.keyboardbutton",   /* m_name */
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

MOD_INIT_DECL( telegram$keyboardbutton )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_telegram$keyboardbutton );
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
    puts("telegram.keyboardbutton: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram.keyboardbutton: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram.keyboardbutton: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittelegram$keyboardbutton" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_telegram$keyboardbutton = Py_InitModule4(
        "telegram.keyboardbutton",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_telegram$keyboardbutton = PyModule_Create( &mdef_telegram$keyboardbutton );
#endif

    moduledict_telegram$keyboardbutton = MODULE_DICT( module_telegram$keyboardbutton );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_telegram$keyboardbutton,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram$keyboardbutton,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram$keyboardbutton,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_telegram$keyboardbutton );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f1ab8fafd6ecbb265e3f5fd92393ec53, module_telegram$keyboardbutton );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    struct Nuitka_FrameObject *frame_1332e8f19b242f898326d0f4c057450a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    bool tmp_result;
    PyObject *locals_telegram$keyboardbutton_24 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_8cd81d37ff0964b59290d1152592f265_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8cd81d37ff0964b59290d1152592f265_2 = NULL;
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
    tmp_assign_source_1 = const_str_digest_bb17c91681cc2181bc7977ed9d7c55db;
    UPDATE_STRING_DICT0( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_80c2e15d6f9c0713cb745a5377119c3e;
    UPDATE_STRING_DICT0( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_1332e8f19b242f898326d0f4c057450a = MAKE_MODULE_FRAME( codeobj_1332e8f19b242f898326d0f4c057450a, module_telegram$keyboardbutton );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1332e8f19b242f898326d0f4c057450a );
    assert( Py_REFCNT( frame_1332e8f19b242f898326d0f4c057450a ) == 2 );

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
    tmp_globals_name_1 = (PyObject *)moduledict_telegram$keyboardbutton;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TelegramObject_tuple;
    tmp_level_name_1 = const_int_0;
    frame_1332e8f19b242f898326d0f4c057450a->m_frame.f_lineno = 21;
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
    UPDATE_STRING_DICT1( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain_TelegramObject, tmp_assign_source_4 );
    }
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_mvar_value_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain_TelegramObject );

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
    tmp_tuple_element_2 = const_str_plain_KeyboardButton;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
    frame_1332e8f19b242f898326d0f4c057450a->m_frame.f_lineno = 24;
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
    locals_telegram$keyboardbutton_24 = tmp_set_locals_1;
    Py_INCREF( tmp_set_locals_1 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_f1ab8fafd6ecbb265e3f5fd92393ec53;
    tmp_res = PyObject_SetItem( locals_telegram$keyboardbutton_24, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    }
    {
    tmp_dictset_value = const_str_digest_d8efc9b7dba35f79cd1101ca70e07f70;
    tmp_res = PyObject_SetItem( locals_telegram$keyboardbutton_24, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    }
    {
    tmp_dictset_value = const_str_plain_KeyboardButton;
    tmp_res = PyObject_SetItem( locals_telegram$keyboardbutton_24, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_8cd81d37ff0964b59290d1152592f265_2, codeobj_8cd81d37ff0964b59290d1152592f265, module_telegram$keyboardbutton, sizeof(void *) );
    frame_8cd81d37ff0964b59290d1152592f265_2 = cache_frame_8cd81d37ff0964b59290d1152592f265_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8cd81d37ff0964b59290d1152592f265_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8cd81d37ff0964b59290d1152592f265_2 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_1;
    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_telegram$keyboardbutton$$$function_1___init__( tmp_defaults_1 );



    tmp_res = PyObject_SetItem( locals_telegram$keyboardbutton_24, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8cd81d37ff0964b59290d1152592f265_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8cd81d37ff0964b59290d1152592f265_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8cd81d37ff0964b59290d1152592f265_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8cd81d37ff0964b59290d1152592f265_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8cd81d37ff0964b59290d1152592f265_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8cd81d37ff0964b59290d1152592f265_2,
        type_description_2,
        outline_0_var___class__
    );


    // Release cached frame.
    if ( frame_8cd81d37ff0964b59290d1152592f265_2 == cache_frame_8cd81d37ff0964b59290d1152592f265_2 )
    {
        Py_DECREF( frame_8cd81d37ff0964b59290d1152592f265_2 );
    }
    cache_frame_8cd81d37ff0964b59290d1152592f265_2 = NULL;

    assertFrameObject( frame_8cd81d37ff0964b59290d1152592f265_2 );

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


        exception_lineno = 24;

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
    tmp_res = PyObject_SetItem( locals_telegram$keyboardbutton_24, const_str_plain___orig_bases__, tmp_dictset_value );
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_kw_name_2;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_called_name_2 = tmp_class_creation_1__metaclass;
    tmp_tuple_element_4 = const_str_plain_KeyboardButton;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_4 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_telegram$keyboardbutton_24;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
    frame_1332e8f19b242f898326d0f4c057450a->m_frame.f_lineno = 24;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
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
    NUITKA_CANNOT_GET_HERE( telegram$keyboardbutton );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    {
    Py_DECREF( locals_telegram$keyboardbutton_24 );
    locals_telegram$keyboardbutton_24 = NULL;
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
    Py_DECREF( locals_telegram$keyboardbutton_24 );
    locals_telegram$keyboardbutton_24 = NULL;
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
    NUITKA_CANNOT_GET_HERE( telegram$keyboardbutton );
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
    NUITKA_CANNOT_GET_HERE( telegram$keyboardbutton );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 24;
    goto try_except_handler_1;
    outline_result_1:;
    UPDATE_STRING_DICT1( moduledict_telegram$keyboardbutton, (Nuitka_StringObject *)const_str_plain_KeyboardButton, tmp_assign_source_11 );
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
    RESTORE_FRAME_EXCEPTION( frame_1332e8f19b242f898326d0f4c057450a );
#endif
    popFrameStack();

    assertFrameObject( frame_1332e8f19b242f898326d0f4c057450a );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1332e8f19b242f898326d0f4c057450a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1332e8f19b242f898326d0f4c057450a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1332e8f19b242f898326d0f4c057450a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1332e8f19b242f898326d0f4c057450a, exception_lineno );
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

    return MOD_RETURN_VALUE( module_telegram$keyboardbutton );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

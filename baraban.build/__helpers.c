// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 1 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 2 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 3 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 4 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 5 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 6 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 7, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 7 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 8, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 8 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 9, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 9 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS10( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 10; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 10 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 10; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 10 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 10 * sizeof(PyObject *) );
            memcpy( python_pars + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 10 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 10 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 10; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 10 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 10 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 10 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 10 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (10 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 10 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (10 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 10 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 10, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 10 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            10
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 10 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS16( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 16; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 16 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 16; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 16 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 16 * sizeof(PyObject *) );
            memcpy( python_pars + 16, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 16 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 16 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 16; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 16 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 16 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 16, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 16 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 16 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (16 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 16 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (16 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 16 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 16, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 16 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            16
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 16 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( asn1crypto );
MOD_INIT_DECL( asn1crypto$_elliptic_curve );
MOD_INIT_DECL( asn1crypto$_errors );
MOD_INIT_DECL( asn1crypto$_ffi );
MOD_INIT_DECL( asn1crypto$_inet );
MOD_INIT_DECL( asn1crypto$_int );
MOD_INIT_DECL( asn1crypto$_iri );
MOD_INIT_DECL( asn1crypto$_ordereddict );
MOD_INIT_DECL( asn1crypto$_perf );
MOD_INIT_DECL( asn1crypto$_perf$_big_num_ctypes );
MOD_INIT_DECL( asn1crypto$_teletex_codec );
MOD_INIT_DECL( asn1crypto$_types );
MOD_INIT_DECL( asn1crypto$algos );
MOD_INIT_DECL( asn1crypto$core );
MOD_INIT_DECL( asn1crypto$keys );
MOD_INIT_DECL( asn1crypto$parser );
MOD_INIT_DECL( asn1crypto$util );
MOD_INIT_DECL( asn1crypto$version );
MOD_INIT_DECL( bs4 );
MOD_INIT_DECL( bs4$builder );
MOD_INIT_DECL( bs4$builder$_html5lib );
MOD_INIT_DECL( bs4$builder$_htmlparser );
MOD_INIT_DECL( bs4$builder$_lxml );
MOD_INIT_DECL( bs4$dammit );
MOD_INIT_DECL( bs4$element );
MOD_INIT_DECL( chardet );
MOD_INIT_DECL( chardet$big5freq );
MOD_INIT_DECL( chardet$big5prober );
MOD_INIT_DECL( chardet$chardistribution );
MOD_INIT_DECL( chardet$charsetgroupprober );
MOD_INIT_DECL( chardet$charsetprober );
MOD_INIT_DECL( chardet$codingstatemachine );
MOD_INIT_DECL( chardet$compat );
MOD_INIT_DECL( chardet$cp949prober );
MOD_INIT_DECL( chardet$enums );
MOD_INIT_DECL( chardet$escprober );
MOD_INIT_DECL( chardet$escsm );
MOD_INIT_DECL( chardet$eucjpprober );
MOD_INIT_DECL( chardet$euckrfreq );
MOD_INIT_DECL( chardet$euckrprober );
MOD_INIT_DECL( chardet$euctwfreq );
MOD_INIT_DECL( chardet$euctwprober );
MOD_INIT_DECL( chardet$gb2312freq );
MOD_INIT_DECL( chardet$gb2312prober );
MOD_INIT_DECL( chardet$hebrewprober );
MOD_INIT_DECL( chardet$jisfreq );
MOD_INIT_DECL( chardet$jpcntx );
MOD_INIT_DECL( chardet$langbulgarianmodel );
MOD_INIT_DECL( chardet$langcyrillicmodel );
MOD_INIT_DECL( chardet$langgreekmodel );
MOD_INIT_DECL( chardet$langhebrewmodel );
MOD_INIT_DECL( chardet$langthaimodel );
MOD_INIT_DECL( chardet$langturkishmodel );
MOD_INIT_DECL( chardet$latin1prober );
MOD_INIT_DECL( chardet$mbcharsetprober );
MOD_INIT_DECL( chardet$mbcsgroupprober );
MOD_INIT_DECL( chardet$mbcssm );
MOD_INIT_DECL( chardet$sbcharsetprober );
MOD_INIT_DECL( chardet$sbcsgroupprober );
MOD_INIT_DECL( chardet$sjisprober );
MOD_INIT_DECL( chardet$universaldetector );
MOD_INIT_DECL( chardet$utf8prober );
MOD_INIT_DECL( chardet$version );
MOD_INIT_DECL( cryptography );
MOD_INIT_DECL( cryptography$__about__ );
MOD_INIT_DECL( cryptography$exceptions );
MOD_INIT_DECL( cryptography$hazmat );
MOD_INIT_DECL( cryptography$hazmat$backends );
MOD_INIT_DECL( cryptography$hazmat$backends$interfaces );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$aead );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$backend );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$ciphers );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$cmac );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$decode_asn1 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$dh );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$dsa );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$ec );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$encode_asn1 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$hashes );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$hmac );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$rsa );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$utils );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$x25519 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$x509 );
MOD_INIT_DECL( cryptography$hazmat$bindings );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$_conditional );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$binding );
MOD_INIT_DECL( cryptography$hazmat$primitives );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$dh );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$dsa );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$ec );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$padding );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$rsa );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$utils );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$x25519 );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$aead );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$algorithms );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$base );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$modes );
MOD_INIT_DECL( cryptography$hazmat$primitives$constant_time );
MOD_INIT_DECL( cryptography$hazmat$primitives$hashes );
MOD_INIT_DECL( cryptography$hazmat$primitives$kdf );
MOD_INIT_DECL( cryptography$hazmat$primitives$kdf$scrypt );
MOD_INIT_DECL( cryptography$hazmat$primitives$mac );
MOD_INIT_DECL( cryptography$hazmat$primitives$serialization );
MOD_INIT_DECL( cryptography$utils );
MOD_INIT_DECL( cryptography$x509 );
MOD_INIT_DECL( cryptography$x509$base );
MOD_INIT_DECL( cryptography$x509$certificate_transparency );
MOD_INIT_DECL( cryptography$x509$extensions );
MOD_INIT_DECL( cryptography$x509$general_name );
MOD_INIT_DECL( cryptography$x509$name );
MOD_INIT_DECL( cryptography$x509$oid );
MOD_INIT_DECL( dryrun );
MOD_INIT_DECL( future );
MOD_INIT_DECL( future$backports );
MOD_INIT_DECL( future$backports$datetime );
MOD_INIT_DECL( future$backports$email );
MOD_INIT_DECL( future$backports$email$_encoded_words );
MOD_INIT_DECL( future$backports$email$_parseaddr );
MOD_INIT_DECL( future$backports$email$_policybase );
MOD_INIT_DECL( future$backports$email$base64mime );
MOD_INIT_DECL( future$backports$email$charset );
MOD_INIT_DECL( future$backports$email$encoders );
MOD_INIT_DECL( future$backports$email$errors );
MOD_INIT_DECL( future$backports$email$feedparser );
MOD_INIT_DECL( future$backports$email$generator );
MOD_INIT_DECL( future$backports$email$header );
MOD_INIT_DECL( future$backports$email$iterators );
MOD_INIT_DECL( future$backports$email$message );
MOD_INIT_DECL( future$backports$email$parser );
MOD_INIT_DECL( future$backports$email$quoprimime );
MOD_INIT_DECL( future$backports$email$utils );
MOD_INIT_DECL( future$backports$http );
MOD_INIT_DECL( future$backports$http$client );
MOD_INIT_DECL( future$backports$http$cookiejar );
MOD_INIT_DECL( future$backports$misc );
MOD_INIT_DECL( future$backports$urllib );
MOD_INIT_DECL( future$backports$urllib$error );
MOD_INIT_DECL( future$backports$urllib$parse );
MOD_INIT_DECL( future$backports$urllib$request );
MOD_INIT_DECL( future$backports$urllib$response );
MOD_INIT_DECL( future$backports$urllib$robotparser );
MOD_INIT_DECL( future$builtins );
MOD_INIT_DECL( future$builtins$iterators );
MOD_INIT_DECL( future$builtins$misc );
MOD_INIT_DECL( future$builtins$newnext );
MOD_INIT_DECL( future$builtins$newround );
MOD_INIT_DECL( future$builtins$newsuper );
MOD_INIT_DECL( future$moves );
MOD_INIT_DECL( future$moves$dbm );
MOD_INIT_DECL( future$moves$dbm$dumb );
MOD_INIT_DECL( future$moves$dbm$gnu );
MOD_INIT_DECL( future$moves$dbm$ndbm );
MOD_INIT_DECL( future$moves$test );
MOD_INIT_DECL( future$moves$test$support );
MOD_INIT_DECL( future$standard_library );
MOD_INIT_DECL( future$types );
MOD_INIT_DECL( future$types$newbytes );
MOD_INIT_DECL( future$types$newdict );
MOD_INIT_DECL( future$types$newint );
MOD_INIT_DECL( future$types$newlist );
MOD_INIT_DECL( future$types$newobject );
MOD_INIT_DECL( future$types$newrange );
MOD_INIT_DECL( future$types$newstr );
MOD_INIT_DECL( future$utils );
MOD_INIT_DECL( future$utils$surrogateescape );
MOD_INIT_DECL( html5lib );
MOD_INIT_DECL( html5lib$_ihatexml );
MOD_INIT_DECL( html5lib$_inputstream );
MOD_INIT_DECL( html5lib$_tokenizer );
MOD_INIT_DECL( html5lib$_trie );
MOD_INIT_DECL( html5lib$_trie$_base );
MOD_INIT_DECL( html5lib$_trie$datrie );
MOD_INIT_DECL( html5lib$_trie$py );
MOD_INIT_DECL( html5lib$_utils );
MOD_INIT_DECL( html5lib$constants );
MOD_INIT_DECL( html5lib$filters );
MOD_INIT_DECL( html5lib$filters$alphabeticalattributes );
MOD_INIT_DECL( html5lib$filters$base );
MOD_INIT_DECL( html5lib$filters$inject_meta_charset );
MOD_INIT_DECL( html5lib$filters$optionaltags );
MOD_INIT_DECL( html5lib$filters$sanitizer );
MOD_INIT_DECL( html5lib$filters$whitespace );
MOD_INIT_DECL( html5lib$html5parser );
MOD_INIT_DECL( html5lib$serializer );
MOD_INIT_DECL( html5lib$treebuilders );
MOD_INIT_DECL( html5lib$treebuilders$base );
MOD_INIT_DECL( html5lib$treebuilders$dom );
MOD_INIT_DECL( html5lib$treebuilders$etree );
MOD_INIT_DECL( html5lib$treebuilders$etree_lxml );
MOD_INIT_DECL( html5lib$treewalkers );
MOD_INIT_DECL( html5lib$treewalkers$base );
MOD_INIT_DECL( html5lib$treewalkers$dom );
MOD_INIT_DECL( html5lib$treewalkers$etree );
MOD_INIT_DECL( html5lib$treewalkers$etree_lxml );
MOD_INIT_DECL( html5lib$treewalkers$genshi );
MOD_INIT_DECL( idna );
MOD_INIT_DECL( idna$core );
MOD_INIT_DECL( idna$idnadata );
MOD_INIT_DECL( idna$intranges );
MOD_INIT_DECL( idna$package_data );
MOD_INIT_DECL( idna$uts46data );
MOD_INIT_DECL( lxml );
MOD_INIT_DECL( main );
MOD_INIT_DECL( requests );
MOD_INIT_DECL( requests$__version__ );
MOD_INIT_DECL( requests$_internal_utils );
MOD_INIT_DECL( requests$adapters );
MOD_INIT_DECL( requests$api );
MOD_INIT_DECL( requests$auth );
MOD_INIT_DECL( requests$certs );
MOD_INIT_DECL( requests$compat );
MOD_INIT_DECL( requests$cookies );
MOD_INIT_DECL( requests$exceptions );
MOD_INIT_DECL( requests$hooks );
MOD_INIT_DECL( requests$models );
MOD_INIT_DECL( requests$packages );
MOD_INIT_DECL( requests$sessions );
MOD_INIT_DECL( requests$status_codes );
MOD_INIT_DECL( requests$structures );
MOD_INIT_DECL( requests$utils );
MOD_INIT_DECL( settings );
MOD_INIT_DECL( six );
MOD_INIT_DECL( telegram );
MOD_INIT_DECL( telegram$base );
MOD_INIT_DECL( telegram$bot );
MOD_INIT_DECL( telegram$callbackquery );
MOD_INIT_DECL( telegram$chat );
MOD_INIT_DECL( telegram$chataction );
MOD_INIT_DECL( telegram$chatmember );
MOD_INIT_DECL( telegram$choseninlineresult );
MOD_INIT_DECL( telegram$constants );
MOD_INIT_DECL( telegram$error );
MOD_INIT_DECL( telegram$files );
MOD_INIT_DECL( telegram$files$animation );
MOD_INIT_DECL( telegram$files$audio );
MOD_INIT_DECL( telegram$files$chatphoto );
MOD_INIT_DECL( telegram$files$contact );
MOD_INIT_DECL( telegram$files$document );
MOD_INIT_DECL( telegram$files$file );
MOD_INIT_DECL( telegram$files$inputfile );
MOD_INIT_DECL( telegram$files$inputmedia );
MOD_INIT_DECL( telegram$files$location );
MOD_INIT_DECL( telegram$files$photosize );
MOD_INIT_DECL( telegram$files$sticker );
MOD_INIT_DECL( telegram$files$venue );
MOD_INIT_DECL( telegram$files$video );
MOD_INIT_DECL( telegram$files$videonote );
MOD_INIT_DECL( telegram$files$voice );
MOD_INIT_DECL( telegram$forcereply );
MOD_INIT_DECL( telegram$games );
MOD_INIT_DECL( telegram$games$callbackgame );
MOD_INIT_DECL( telegram$games$game );
MOD_INIT_DECL( telegram$games$gamehighscore );
MOD_INIT_DECL( telegram$inline );
MOD_INIT_DECL( telegram$inline$inlinekeyboardbutton );
MOD_INIT_DECL( telegram$inline$inlinekeyboardmarkup );
MOD_INIT_DECL( telegram$inline$inlinequery );
MOD_INIT_DECL( telegram$inline$inlinequeryresult );
MOD_INIT_DECL( telegram$inline$inlinequeryresultarticle );
MOD_INIT_DECL( telegram$inline$inlinequeryresultaudio );
MOD_INIT_DECL( telegram$inline$inlinequeryresultcachedaudio );
MOD_INIT_DECL( telegram$inline$inlinequeryresultcacheddocument );
MOD_INIT_DECL( telegram$inline$inlinequeryresultcachedgif );
MOD_INIT_DECL( telegram$inline$inlinequeryresultcachedmpeg4gif );
MOD_INIT_DECL( telegram$inline$inlinequeryresultcachedphoto );
MOD_INIT_DECL( telegram$inline$inlinequeryresultcachedsticker );
MOD_INIT_DECL( telegram$inline$inlinequeryresultcachedvideo );
MOD_INIT_DECL( telegram$inline$inlinequeryresultcachedvoice );
MOD_INIT_DECL( telegram$inline$inlinequeryresultcontact );
MOD_INIT_DECL( telegram$inline$inlinequeryresultdocument );
MOD_INIT_DECL( telegram$inline$inlinequeryresultgame );
MOD_INIT_DECL( telegram$inline$inlinequeryresultgif );
MOD_INIT_DECL( telegram$inline$inlinequeryresultlocation );
MOD_INIT_DECL( telegram$inline$inlinequeryresultmpeg4gif );
MOD_INIT_DECL( telegram$inline$inlinequeryresultphoto );
MOD_INIT_DECL( telegram$inline$inlinequeryresultvenue );
MOD_INIT_DECL( telegram$inline$inlinequeryresultvideo );
MOD_INIT_DECL( telegram$inline$inlinequeryresultvoice );
MOD_INIT_DECL( telegram$inline$inputcontactmessagecontent );
MOD_INIT_DECL( telegram$inline$inputlocationmessagecontent );
MOD_INIT_DECL( telegram$inline$inputmessagecontent );
MOD_INIT_DECL( telegram$inline$inputtextmessagecontent );
MOD_INIT_DECL( telegram$inline$inputvenuemessagecontent );
MOD_INIT_DECL( telegram$keyboardbutton );
MOD_INIT_DECL( telegram$message );
MOD_INIT_DECL( telegram$messageentity );
MOD_INIT_DECL( telegram$parsemode );
MOD_INIT_DECL( telegram$passport );
MOD_INIT_DECL( telegram$passport$credentials );
MOD_INIT_DECL( telegram$passport$data );
MOD_INIT_DECL( telegram$passport$encryptedpassportelement );
MOD_INIT_DECL( telegram$passport$passportdata );
MOD_INIT_DECL( telegram$passport$passportelementerrors );
MOD_INIT_DECL( telegram$passport$passportfile );
MOD_INIT_DECL( telegram$payment );
MOD_INIT_DECL( telegram$payment$invoice );
MOD_INIT_DECL( telegram$payment$labeledprice );
MOD_INIT_DECL( telegram$payment$orderinfo );
MOD_INIT_DECL( telegram$payment$precheckoutquery );
MOD_INIT_DECL( telegram$payment$shippingaddress );
MOD_INIT_DECL( telegram$payment$shippingoption );
MOD_INIT_DECL( telegram$payment$shippingquery );
MOD_INIT_DECL( telegram$payment$successfulpayment );
MOD_INIT_DECL( telegram$replykeyboardmarkup );
MOD_INIT_DECL( telegram$replykeyboardremove );
MOD_INIT_DECL( telegram$replymarkup );
MOD_INIT_DECL( telegram$update );
MOD_INIT_DECL( telegram$user );
MOD_INIT_DECL( telegram$userprofilephotos );
MOD_INIT_DECL( telegram$utils );
MOD_INIT_DECL( telegram$utils$helpers );
MOD_INIT_DECL( telegram$utils$request );
MOD_INIT_DECL( telegram$version );
MOD_INIT_DECL( telegram$webhookinfo );
MOD_INIT_DECL( urllib3 );
MOD_INIT_DECL( urllib3$_collections );
MOD_INIT_DECL( urllib3$connection );
MOD_INIT_DECL( urllib3$connectionpool );
MOD_INIT_DECL( urllib3$contrib );
MOD_INIT_DECL( urllib3$contrib$appengine );
MOD_INIT_DECL( urllib3$contrib$pyopenssl );
MOD_INIT_DECL( urllib3$contrib$socks );
MOD_INIT_DECL( urllib3$exceptions );
MOD_INIT_DECL( urllib3$fields );
MOD_INIT_DECL( urllib3$filepost );
MOD_INIT_DECL( urllib3$packages );
MOD_INIT_DECL( urllib3$packages$backports );
MOD_INIT_DECL( urllib3$packages$backports$makefile );
MOD_INIT_DECL( urllib3$packages$ordered_dict );
MOD_INIT_DECL( urllib3$packages$six );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname$_implementation );
MOD_INIT_DECL( urllib3$poolmanager );
MOD_INIT_DECL( urllib3$request );
MOD_INIT_DECL( urllib3$response );
MOD_INIT_DECL( urllib3$util );
MOD_INIT_DECL( urllib3$util$connection );
MOD_INIT_DECL( urllib3$util$queue );
MOD_INIT_DECL( urllib3$util$request );
MOD_INIT_DECL( urllib3$util$response );
MOD_INIT_DECL( urllib3$util$retry );
MOD_INIT_DECL( urllib3$util$ssl_ );
MOD_INIT_DECL( urllib3$util$timeout );
MOD_INIT_DECL( urllib3$util$url );
MOD_INIT_DECL( urllib3$util$wait );
MOD_INIT_DECL( webencodings );
MOD_INIT_DECL( webencodings$labels );
MOD_INIT_DECL( webencodings$x_user_defined );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { "__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto", MOD_INIT_NAME( asn1crypto ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "asn1crypto._elliptic_curve", MOD_INIT_NAME( asn1crypto$_elliptic_curve ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._errors", MOD_INIT_NAME( asn1crypto$_errors ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._ffi", MOD_INIT_NAME( asn1crypto$_ffi ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._inet", MOD_INIT_NAME( asn1crypto$_inet ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._int", MOD_INIT_NAME( asn1crypto$_int ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._iri", MOD_INIT_NAME( asn1crypto$_iri ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._ordereddict", MOD_INIT_NAME( asn1crypto$_ordereddict ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._perf", MOD_INIT_NAME( asn1crypto$_perf ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "asn1crypto._perf._big_num_ctypes", MOD_INIT_NAME( asn1crypto$_perf$_big_num_ctypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._teletex_codec", MOD_INIT_NAME( asn1crypto$_teletex_codec ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._types", MOD_INIT_NAME( asn1crypto$_types ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.algos", MOD_INIT_NAME( asn1crypto$algos ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.core", MOD_INIT_NAME( asn1crypto$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.keys", MOD_INIT_NAME( asn1crypto$keys ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.parser", MOD_INIT_NAME( asn1crypto$parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.util", MOD_INIT_NAME( asn1crypto$util ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.version", MOD_INIT_NAME( asn1crypto$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "bs4", MOD_INIT_NAME( bs4 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "bs4.builder", MOD_INIT_NAME( bs4$builder ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "bs4.builder._html5lib", MOD_INIT_NAME( bs4$builder$_html5lib ), 0, 0, NUITKA_COMPILED_MODULE },
    { "bs4.builder._htmlparser", MOD_INIT_NAME( bs4$builder$_htmlparser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "bs4.builder._lxml", MOD_INIT_NAME( bs4$builder$_lxml ), 0, 0, NUITKA_COMPILED_MODULE },
    { "bs4.dammit", MOD_INIT_NAME( bs4$dammit ), 0, 0, NUITKA_COMPILED_MODULE },
    { "bs4.element", MOD_INIT_NAME( bs4$element ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet", MOD_INIT_NAME( chardet ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "chardet.big5freq", MOD_INIT_NAME( chardet$big5freq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.big5prober", MOD_INIT_NAME( chardet$big5prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.chardistribution", MOD_INIT_NAME( chardet$chardistribution ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.charsetgroupprober", MOD_INIT_NAME( chardet$charsetgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.charsetprober", MOD_INIT_NAME( chardet$charsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.codingstatemachine", MOD_INIT_NAME( chardet$codingstatemachine ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.compat", MOD_INIT_NAME( chardet$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.cp949prober", MOD_INIT_NAME( chardet$cp949prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.enums", MOD_INIT_NAME( chardet$enums ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.escprober", MOD_INIT_NAME( chardet$escprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.escsm", MOD_INIT_NAME( chardet$escsm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.eucjpprober", MOD_INIT_NAME( chardet$eucjpprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.euckrfreq", MOD_INIT_NAME( chardet$euckrfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.euckrprober", MOD_INIT_NAME( chardet$euckrprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.euctwfreq", MOD_INIT_NAME( chardet$euctwfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.euctwprober", MOD_INIT_NAME( chardet$euctwprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.gb2312freq", MOD_INIT_NAME( chardet$gb2312freq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.gb2312prober", MOD_INIT_NAME( chardet$gb2312prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.hebrewprober", MOD_INIT_NAME( chardet$hebrewprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.jisfreq", MOD_INIT_NAME( chardet$jisfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.jpcntx", MOD_INIT_NAME( chardet$jpcntx ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langbulgarianmodel", MOD_INIT_NAME( chardet$langbulgarianmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langcyrillicmodel", MOD_INIT_NAME( chardet$langcyrillicmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langgreekmodel", MOD_INIT_NAME( chardet$langgreekmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langhebrewmodel", MOD_INIT_NAME( chardet$langhebrewmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langthaimodel", MOD_INIT_NAME( chardet$langthaimodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langturkishmodel", MOD_INIT_NAME( chardet$langturkishmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.latin1prober", MOD_INIT_NAME( chardet$latin1prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.mbcharsetprober", MOD_INIT_NAME( chardet$mbcharsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.mbcsgroupprober", MOD_INIT_NAME( chardet$mbcsgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.mbcssm", MOD_INIT_NAME( chardet$mbcssm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.sbcharsetprober", MOD_INIT_NAME( chardet$sbcharsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.sbcsgroupprober", MOD_INIT_NAME( chardet$sbcsgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.sjisprober", MOD_INIT_NAME( chardet$sjisprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.universaldetector", MOD_INIT_NAME( chardet$universaldetector ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.utf8prober", MOD_INIT_NAME( chardet$utf8prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.version", MOD_INIT_NAME( chardet$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography", MOD_INIT_NAME( cryptography ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.__about__", MOD_INIT_NAME( cryptography$__about__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.exceptions", MOD_INIT_NAME( cryptography$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat", MOD_INIT_NAME( cryptography$hazmat ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.backends", MOD_INIT_NAME( cryptography$hazmat$backends ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.backends.interfaces", MOD_INIT_NAME( cryptography$hazmat$backends$interfaces ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl", MOD_INIT_NAME( cryptography$hazmat$backends$openssl ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.backends.openssl.aead", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$aead ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.backend", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$backend ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.ciphers", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$ciphers ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.cmac", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$cmac ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.decode_asn1", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$decode_asn1 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.dh", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$dh ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.dsa", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$dsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.ec", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$ec ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.encode_asn1", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$encode_asn1 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.hashes", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$hashes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.hmac", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$hmac ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.rsa", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$rsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.utils", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.x25519", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$x25519 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.x509", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$x509 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.bindings", MOD_INIT_NAME( cryptography$hazmat$bindings ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.bindings.openssl", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.bindings.openssl._conditional", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$_conditional ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.bindings.openssl.binding", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$binding ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives", MOD_INIT_NAME( cryptography$hazmat$primitives ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.primitives.asymmetric", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.primitives.asymmetric.dh", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$dh ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.dsa", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$dsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.ec", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$ec ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.padding", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$padding ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.rsa", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$rsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.utils", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.x25519", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$x25519 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.ciphers", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.primitives.ciphers.aead", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$aead ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.ciphers.algorithms", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$algorithms ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.ciphers.base", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.ciphers.modes", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$modes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.constant_time", MOD_INIT_NAME( cryptography$hazmat$primitives$constant_time ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.hashes", MOD_INIT_NAME( cryptography$hazmat$primitives$hashes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.kdf", MOD_INIT_NAME( cryptography$hazmat$primitives$kdf ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.primitives.kdf.scrypt", MOD_INIT_NAME( cryptography$hazmat$primitives$kdf$scrypt ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.mac", MOD_INIT_NAME( cryptography$hazmat$primitives$mac ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.serialization", MOD_INIT_NAME( cryptography$hazmat$primitives$serialization ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.utils", MOD_INIT_NAME( cryptography$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509", MOD_INIT_NAME( cryptography$x509 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.x509.base", MOD_INIT_NAME( cryptography$x509$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.certificate_transparency", MOD_INIT_NAME( cryptography$x509$certificate_transparency ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.extensions", MOD_INIT_NAME( cryptography$x509$extensions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.general_name", MOD_INIT_NAME( cryptography$x509$general_name ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.name", MOD_INIT_NAME( cryptography$x509$name ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.oid", MOD_INIT_NAME( cryptography$x509$oid ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dryrun", MOD_INIT_NAME( dryrun ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future", MOD_INIT_NAME( future ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.backports", MOD_INIT_NAME( future$backports ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.backports.datetime", MOD_INIT_NAME( future$backports$datetime ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email", MOD_INIT_NAME( future$backports$email ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.backports.email._encoded_words", MOD_INIT_NAME( future$backports$email$_encoded_words ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email._parseaddr", MOD_INIT_NAME( future$backports$email$_parseaddr ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email._policybase", MOD_INIT_NAME( future$backports$email$_policybase ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.base64mime", MOD_INIT_NAME( future$backports$email$base64mime ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.charset", MOD_INIT_NAME( future$backports$email$charset ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.encoders", MOD_INIT_NAME( future$backports$email$encoders ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.errors", MOD_INIT_NAME( future$backports$email$errors ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.feedparser", MOD_INIT_NAME( future$backports$email$feedparser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.generator", MOD_INIT_NAME( future$backports$email$generator ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.header", MOD_INIT_NAME( future$backports$email$header ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.iterators", MOD_INIT_NAME( future$backports$email$iterators ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.message", MOD_INIT_NAME( future$backports$email$message ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.parser", MOD_INIT_NAME( future$backports$email$parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.quoprimime", MOD_INIT_NAME( future$backports$email$quoprimime ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.email.utils", MOD_INIT_NAME( future$backports$email$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.http", MOD_INIT_NAME( future$backports$http ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.backports.http.client", MOD_INIT_NAME( future$backports$http$client ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.http.cookiejar", MOD_INIT_NAME( future$backports$http$cookiejar ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.misc", MOD_INIT_NAME( future$backports$misc ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.urllib", MOD_INIT_NAME( future$backports$urllib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.backports.urllib.error", MOD_INIT_NAME( future$backports$urllib$error ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.urllib.parse", MOD_INIT_NAME( future$backports$urllib$parse ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.urllib.request", MOD_INIT_NAME( future$backports$urllib$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.urllib.response", MOD_INIT_NAME( future$backports$urllib$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.backports.urllib.robotparser", MOD_INIT_NAME( future$backports$urllib$robotparser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.builtins", MOD_INIT_NAME( future$builtins ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.builtins.iterators", MOD_INIT_NAME( future$builtins$iterators ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.builtins.misc", MOD_INIT_NAME( future$builtins$misc ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.builtins.newnext", MOD_INIT_NAME( future$builtins$newnext ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.builtins.newround", MOD_INIT_NAME( future$builtins$newround ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.builtins.newsuper", MOD_INIT_NAME( future$builtins$newsuper ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.moves", MOD_INIT_NAME( future$moves ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.moves.dbm", MOD_INIT_NAME( future$moves$dbm ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.moves.dbm.dumb", MOD_INIT_NAME( future$moves$dbm$dumb ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.moves.dbm.gnu", MOD_INIT_NAME( future$moves$dbm$gnu ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.moves.dbm.ndbm", MOD_INIT_NAME( future$moves$dbm$ndbm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.moves.test", MOD_INIT_NAME( future$moves$test ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.moves.test.support", MOD_INIT_NAME( future$moves$test$support ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.standard_library", MOD_INIT_NAME( future$standard_library ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.types", MOD_INIT_NAME( future$types ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.types.newbytes", MOD_INIT_NAME( future$types$newbytes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.types.newdict", MOD_INIT_NAME( future$types$newdict ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.types.newint", MOD_INIT_NAME( future$types$newint ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.types.newlist", MOD_INIT_NAME( future$types$newlist ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.types.newobject", MOD_INIT_NAME( future$types$newobject ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.types.newrange", MOD_INIT_NAME( future$types$newrange ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.types.newstr", MOD_INIT_NAME( future$types$newstr ), 0, 0, NUITKA_COMPILED_MODULE },
    { "future.utils", MOD_INIT_NAME( future$utils ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "future.utils.surrogateescape", MOD_INIT_NAME( future$utils$surrogateescape ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib", MOD_INIT_NAME( html5lib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "html5lib._ihatexml", MOD_INIT_NAME( html5lib$_ihatexml ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib._inputstream", MOD_INIT_NAME( html5lib$_inputstream ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib._tokenizer", MOD_INIT_NAME( html5lib$_tokenizer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib._trie", MOD_INIT_NAME( html5lib$_trie ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "html5lib._trie._base", MOD_INIT_NAME( html5lib$_trie$_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib._trie.datrie", MOD_INIT_NAME( html5lib$_trie$datrie ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib._trie.py", MOD_INIT_NAME( html5lib$_trie$py ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib._utils", MOD_INIT_NAME( html5lib$_utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.constants", MOD_INIT_NAME( html5lib$constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.filters", MOD_INIT_NAME( html5lib$filters ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "html5lib.filters.alphabeticalattributes", MOD_INIT_NAME( html5lib$filters$alphabeticalattributes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.filters.base", MOD_INIT_NAME( html5lib$filters$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.filters.inject_meta_charset", MOD_INIT_NAME( html5lib$filters$inject_meta_charset ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.filters.optionaltags", MOD_INIT_NAME( html5lib$filters$optionaltags ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.filters.sanitizer", MOD_INIT_NAME( html5lib$filters$sanitizer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.filters.whitespace", MOD_INIT_NAME( html5lib$filters$whitespace ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.html5parser", MOD_INIT_NAME( html5lib$html5parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.serializer", MOD_INIT_NAME( html5lib$serializer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.treebuilders", MOD_INIT_NAME( html5lib$treebuilders ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "html5lib.treebuilders.base", MOD_INIT_NAME( html5lib$treebuilders$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.treebuilders.dom", MOD_INIT_NAME( html5lib$treebuilders$dom ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.treebuilders.etree", MOD_INIT_NAME( html5lib$treebuilders$etree ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.treebuilders.etree_lxml", MOD_INIT_NAME( html5lib$treebuilders$etree_lxml ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.treewalkers", MOD_INIT_NAME( html5lib$treewalkers ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "html5lib.treewalkers.base", MOD_INIT_NAME( html5lib$treewalkers$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.treewalkers.dom", MOD_INIT_NAME( html5lib$treewalkers$dom ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.treewalkers.etree", MOD_INIT_NAME( html5lib$treewalkers$etree ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.treewalkers.etree_lxml", MOD_INIT_NAME( html5lib$treewalkers$etree_lxml ), 0, 0, NUITKA_COMPILED_MODULE },
    { "html5lib.treewalkers.genshi", MOD_INIT_NAME( html5lib$treewalkers$genshi ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna", MOD_INIT_NAME( idna ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "idna.core", MOD_INIT_NAME( idna$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.idnadata", MOD_INIT_NAME( idna$idnadata ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.intranges", MOD_INIT_NAME( idna$intranges ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.package_data", MOD_INIT_NAME( idna$package_data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.uts46data", MOD_INIT_NAME( idna$uts46data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "lxml", MOD_INIT_NAME( lxml ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "main", MOD_INIT_NAME( main ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests", MOD_INIT_NAME( requests ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "requests.__version__", MOD_INIT_NAME( requests$__version__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests._internal_utils", MOD_INIT_NAME( requests$_internal_utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.adapters", MOD_INIT_NAME( requests$adapters ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.api", MOD_INIT_NAME( requests$api ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.auth", MOD_INIT_NAME( requests$auth ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.certs", MOD_INIT_NAME( requests$certs ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.compat", MOD_INIT_NAME( requests$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.cookies", MOD_INIT_NAME( requests$cookies ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.exceptions", MOD_INIT_NAME( requests$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.hooks", MOD_INIT_NAME( requests$hooks ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.models", MOD_INIT_NAME( requests$models ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.packages", MOD_INIT_NAME( requests$packages ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.sessions", MOD_INIT_NAME( requests$sessions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.status_codes", MOD_INIT_NAME( requests$status_codes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.structures", MOD_INIT_NAME( requests$structures ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.utils", MOD_INIT_NAME( requests$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "settings", MOD_INIT_NAME( settings ), 0, 0, NUITKA_COMPILED_MODULE },
    { "six", MOD_INIT_NAME( six ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram", MOD_INIT_NAME( telegram ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "telegram.base", MOD_INIT_NAME( telegram$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.bot", MOD_INIT_NAME( telegram$bot ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.callbackquery", MOD_INIT_NAME( telegram$callbackquery ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.chat", MOD_INIT_NAME( telegram$chat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.chataction", MOD_INIT_NAME( telegram$chataction ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.chatmember", MOD_INIT_NAME( telegram$chatmember ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.choseninlineresult", MOD_INIT_NAME( telegram$choseninlineresult ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.constants", MOD_INIT_NAME( telegram$constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.error", MOD_INIT_NAME( telegram$error ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files", MOD_INIT_NAME( telegram$files ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "telegram.files.animation", MOD_INIT_NAME( telegram$files$animation ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.audio", MOD_INIT_NAME( telegram$files$audio ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.chatphoto", MOD_INIT_NAME( telegram$files$chatphoto ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.contact", MOD_INIT_NAME( telegram$files$contact ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.document", MOD_INIT_NAME( telegram$files$document ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.file", MOD_INIT_NAME( telegram$files$file ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.inputfile", MOD_INIT_NAME( telegram$files$inputfile ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.inputmedia", MOD_INIT_NAME( telegram$files$inputmedia ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.location", MOD_INIT_NAME( telegram$files$location ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.photosize", MOD_INIT_NAME( telegram$files$photosize ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.sticker", MOD_INIT_NAME( telegram$files$sticker ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.venue", MOD_INIT_NAME( telegram$files$venue ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.video", MOD_INIT_NAME( telegram$files$video ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.videonote", MOD_INIT_NAME( telegram$files$videonote ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.files.voice", MOD_INIT_NAME( telegram$files$voice ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.forcereply", MOD_INIT_NAME( telegram$forcereply ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.games", MOD_INIT_NAME( telegram$games ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "telegram.games.callbackgame", MOD_INIT_NAME( telegram$games$callbackgame ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.games.game", MOD_INIT_NAME( telegram$games$game ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.games.gamehighscore", MOD_INIT_NAME( telegram$games$gamehighscore ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline", MOD_INIT_NAME( telegram$inline ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "telegram.inline.inlinekeyboardbutton", MOD_INIT_NAME( telegram$inline$inlinekeyboardbutton ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinekeyboardmarkup", MOD_INIT_NAME( telegram$inline$inlinekeyboardmarkup ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequery", MOD_INIT_NAME( telegram$inline$inlinequery ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresult", MOD_INIT_NAME( telegram$inline$inlinequeryresult ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultarticle", MOD_INIT_NAME( telegram$inline$inlinequeryresultarticle ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultaudio", MOD_INIT_NAME( telegram$inline$inlinequeryresultaudio ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultcachedaudio", MOD_INIT_NAME( telegram$inline$inlinequeryresultcachedaudio ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultcacheddocument", MOD_INIT_NAME( telegram$inline$inlinequeryresultcacheddocument ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultcachedgif", MOD_INIT_NAME( telegram$inline$inlinequeryresultcachedgif ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultcachedmpeg4gif", MOD_INIT_NAME( telegram$inline$inlinequeryresultcachedmpeg4gif ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultcachedphoto", MOD_INIT_NAME( telegram$inline$inlinequeryresultcachedphoto ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultcachedsticker", MOD_INIT_NAME( telegram$inline$inlinequeryresultcachedsticker ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultcachedvideo", MOD_INIT_NAME( telegram$inline$inlinequeryresultcachedvideo ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultcachedvoice", MOD_INIT_NAME( telegram$inline$inlinequeryresultcachedvoice ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultcontact", MOD_INIT_NAME( telegram$inline$inlinequeryresultcontact ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultdocument", MOD_INIT_NAME( telegram$inline$inlinequeryresultdocument ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultgame", MOD_INIT_NAME( telegram$inline$inlinequeryresultgame ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultgif", MOD_INIT_NAME( telegram$inline$inlinequeryresultgif ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultlocation", MOD_INIT_NAME( telegram$inline$inlinequeryresultlocation ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultmpeg4gif", MOD_INIT_NAME( telegram$inline$inlinequeryresultmpeg4gif ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultphoto", MOD_INIT_NAME( telegram$inline$inlinequeryresultphoto ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultvenue", MOD_INIT_NAME( telegram$inline$inlinequeryresultvenue ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultvideo", MOD_INIT_NAME( telegram$inline$inlinequeryresultvideo ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inlinequeryresultvoice", MOD_INIT_NAME( telegram$inline$inlinequeryresultvoice ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inputcontactmessagecontent", MOD_INIT_NAME( telegram$inline$inputcontactmessagecontent ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inputlocationmessagecontent", MOD_INIT_NAME( telegram$inline$inputlocationmessagecontent ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inputmessagecontent", MOD_INIT_NAME( telegram$inline$inputmessagecontent ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inputtextmessagecontent", MOD_INIT_NAME( telegram$inline$inputtextmessagecontent ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.inline.inputvenuemessagecontent", MOD_INIT_NAME( telegram$inline$inputvenuemessagecontent ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.keyboardbutton", MOD_INIT_NAME( telegram$keyboardbutton ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.message", MOD_INIT_NAME( telegram$message ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.messageentity", MOD_INIT_NAME( telegram$messageentity ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.parsemode", MOD_INIT_NAME( telegram$parsemode ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.passport", MOD_INIT_NAME( telegram$passport ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "telegram.passport.credentials", MOD_INIT_NAME( telegram$passport$credentials ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.passport.data", MOD_INIT_NAME( telegram$passport$data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.passport.encryptedpassportelement", MOD_INIT_NAME( telegram$passport$encryptedpassportelement ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.passport.passportdata", MOD_INIT_NAME( telegram$passport$passportdata ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.passport.passportelementerrors", MOD_INIT_NAME( telegram$passport$passportelementerrors ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.passport.passportfile", MOD_INIT_NAME( telegram$passport$passportfile ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.payment", MOD_INIT_NAME( telegram$payment ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "telegram.payment.invoice", MOD_INIT_NAME( telegram$payment$invoice ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.payment.labeledprice", MOD_INIT_NAME( telegram$payment$labeledprice ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.payment.orderinfo", MOD_INIT_NAME( telegram$payment$orderinfo ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.payment.precheckoutquery", MOD_INIT_NAME( telegram$payment$precheckoutquery ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.payment.shippingaddress", MOD_INIT_NAME( telegram$payment$shippingaddress ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.payment.shippingoption", MOD_INIT_NAME( telegram$payment$shippingoption ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.payment.shippingquery", MOD_INIT_NAME( telegram$payment$shippingquery ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.payment.successfulpayment", MOD_INIT_NAME( telegram$payment$successfulpayment ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.replykeyboardmarkup", MOD_INIT_NAME( telegram$replykeyboardmarkup ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.replykeyboardremove", MOD_INIT_NAME( telegram$replykeyboardremove ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.replymarkup", MOD_INIT_NAME( telegram$replymarkup ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.update", MOD_INIT_NAME( telegram$update ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.user", MOD_INIT_NAME( telegram$user ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.userprofilephotos", MOD_INIT_NAME( telegram$userprofilephotos ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.utils", MOD_INIT_NAME( telegram$utils ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "telegram.utils.helpers", MOD_INIT_NAME( telegram$utils$helpers ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.utils.request", MOD_INIT_NAME( telegram$utils$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.version", MOD_INIT_NAME( telegram$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telegram.webhookinfo", MOD_INIT_NAME( telegram$webhookinfo ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3", MOD_INIT_NAME( urllib3 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3._collections", MOD_INIT_NAME( urllib3$_collections ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.connection", MOD_INIT_NAME( urllib3$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.connectionpool", MOD_INIT_NAME( urllib3$connectionpool ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.contrib", MOD_INIT_NAME( urllib3$contrib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.contrib.appengine", MOD_INIT_NAME( urllib3$contrib$appengine ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.contrib.pyopenssl", MOD_INIT_NAME( urllib3$contrib$pyopenssl ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.contrib.socks", MOD_INIT_NAME( urllib3$contrib$socks ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.exceptions", MOD_INIT_NAME( urllib3$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.fields", MOD_INIT_NAME( urllib3$fields ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.filepost", MOD_INIT_NAME( urllib3$filepost ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages", MOD_INIT_NAME( urllib3$packages ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.backports", MOD_INIT_NAME( urllib3$packages$backports ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.backports.makefile", MOD_INIT_NAME( urllib3$packages$backports$makefile ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.ordered_dict", MOD_INIT_NAME( urllib3$packages$ordered_dict ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.six", MOD_INIT_NAME( urllib3$packages$six ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.ssl_match_hostname", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.ssl_match_hostname._implementation", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname$_implementation ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.poolmanager", MOD_INIT_NAME( urllib3$poolmanager ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.request", MOD_INIT_NAME( urllib3$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.response", MOD_INIT_NAME( urllib3$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util", MOD_INIT_NAME( urllib3$util ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.util.connection", MOD_INIT_NAME( urllib3$util$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.queue", MOD_INIT_NAME( urllib3$util$queue ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.request", MOD_INIT_NAME( urllib3$util$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.response", MOD_INIT_NAME( urllib3$util$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.retry", MOD_INIT_NAME( urllib3$util$retry ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.ssl_", MOD_INIT_NAME( urllib3$util$ssl_ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.timeout", MOD_INIT_NAME( urllib3$util$timeout ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.url", MOD_INIT_NAME( urllib3$util$url ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.wait", MOD_INIT_NAME( urllib3$util$wait ), 0, 0, NUITKA_COMPILED_MODULE },
    { "webencodings", MOD_INIT_NAME( webencodings ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "webencodings.labels", MOD_INIT_NAME( webencodings$labels ), 0, 0, NUITKA_COMPILED_MODULE },
    { "webencodings.x_user_defined", MOD_INIT_NAME( webencodings$x_user_defined ), 0, 0, NUITKA_COMPILED_MODULE },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}

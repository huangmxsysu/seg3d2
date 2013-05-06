/* -*- C -*- ***********************************************
Copyright (c) 2000, BeOpen.com.
Copyright (c) 1995-2000, Corporation for National Research Initiatives.
Copyright (c) 1990-1995, Stichting Mathematisch Centrum.
All rights reserved.

See the file "Misc/COPYRIGHT" for information on usage and
redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
******************************************************************/

/* Module configuration */

/* !!! !!! !!! This file is edited by the makesetup script !!! !!! !!! */

/* This file contains the table of built-in modules.
   See init_builtin() in import.c. */

#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif

@PY_STATIC_MODULES_INIT_FUNCTIONS@
/* -- ADDMODULE MARKER 1 -- */

extern PyObject* PyMarshal_Init(void);
extern PyObject* PyInit_imp(void);
extern PyObject* PyInit_gc(void);
extern PyObject* PyInit__ast(void);
extern PyObject* _PyWarnings_Init(void);

struct _inittab _PyImport_Inittab[] = {
@PY_STATIC_MODULES_INITTAB@

/* -- ADDMODULE MARKER 2 -- */

	/* This module lives in marshal.c */
	{"marshal", PyMarshal_Init},

	/* This lives in import.c */
	{"imp", PyInit_imp},

	/* This lives in Python/Python-ast.c */
	{"_ast", PyInit__ast},

	/* These entries are here for sys.builtin_module_names */
	{"__main__", NULL},
	{"builtins", NULL},
	{"sys", NULL},

	/* This lives in gcmodule.c */
	{"gc", PyInit_gc},

	/* This lives in _warnings.c */
	{"_warnings", _PyWarnings_Init},

	/* Sentinel */
	{0, 0}
};


#ifdef __cplusplus
}
#endif
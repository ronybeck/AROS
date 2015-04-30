/*
    Copyright � 2015, The AROS Development Team. All rights reserved.
    $Id$
*/

#define DEBUG 0

#include <aros/debug.h>
#include <exec/types.h>
#include <aros/libcall.h>
#include <proto/utility.h>
#include <resources/task.h>

#include <resources/task.h>

#include "taskres_intern.h"

/*****************************************************************************

    NAME */
#include <proto/task.h>

        AROS_LH1(struct TaskList *, LockTaskList,

/*  SYNOPSIS */
        AROS_LHA(ULONG, flags, D1),

/*  LOCATION */
	struct TaskResBase *, TaskResBase, 1, Task)

/*  FUNCTION

    INPUTS
        flags - 

    RESULT
        Handle to the task list. This is not a direct pointer
        to the first list element but to a pseudo element instead.

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
        UnLockTaskList(), NextTaskEntry().

    INTERNALS

*****************************************************************************/
{
    AROS_LIBFUNC_INIT

    D(bug("LockTaskList: flags = $%lx\n", flags));

    return NULL;

    AROS_LIBFUNC_EXIT
} /* LockTaskList */
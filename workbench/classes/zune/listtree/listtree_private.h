#ifndef _LISTTREE_PRIVATE_H_
#define _LISTTREE_PRIVATE_H_

/*
    Copyright � 2012, The AROS Development Team. All rights reserved.
    $Id$
*/

#include <libraries/mui.h>

/*** Instance data **********************************************************/
struct Listtree_DATA
{
    /*- Private ------------------------------------------------------------*/
    APTR pool;
    struct Hook *constrhook;
    struct Hook *destrhook;
    struct Hook *displayhook;

    Object *nlisttree;
    struct Hook notifysimulatehook;
    struct Hook displayhookproxy;
    struct Hook destructhookproxy;

    /*- Protected ----------------------------------------------------------*/

    /*- Public -------------------------------------------------------------*/
};

#endif /* _LISTTREE_PRIVATE_H_ */

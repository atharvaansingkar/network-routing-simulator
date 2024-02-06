// router.h

#ifndef ROUTER_H
#define ROUTER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Router {
    int id;
    // Other router attributes
} Router;

Router* addRouter(int id);

#endif

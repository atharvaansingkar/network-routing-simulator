// router.c

#include "router.h"

Router* addRouter(int id) {
    Router* router = (Router*)malloc(sizeof(Router));
    if (router != NULL) {
        router->id = id;
        // Initialize other router attributes
    }
    return router;
}

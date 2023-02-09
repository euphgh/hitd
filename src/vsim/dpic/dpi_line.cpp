#include "svdpi.h"
#include "Vmycpu_top__Dpi.h"
#include <stdio.h>
void dpic_scope() {
    // Get a scope: 
    svScope scope = svGetScope();
    const char* scopenamep = svGetNameFromScope(scope); 
    printf("dpi scope test:\t%s\n",scopenamep);
}

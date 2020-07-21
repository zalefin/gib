#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "morpheme.h"


int main(int argc, char **argv){
    // fast seed
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t) ts.tv_nsec);

    printf("%d\n", rand());

    return 0;
}

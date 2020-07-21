#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "morpheme.h"


int main(int argc, char **argv){

    // fast seed init
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t) ts.tv_nsec);

    printf("%s%s%s%s%s\n",
	    get_conson(),
	    get_vowel(),
	    get_conson(),
	    get_vowel(),
	    get_conson());

    return 0;
}

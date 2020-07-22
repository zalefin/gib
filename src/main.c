#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <errno.h>
#include "morpheme.h"


int main(int argc, char **argv){

    // fast seed init
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t) ts.tv_nsec);

    int n = 1;
    if(argc > 1){
	char* p;
	errno = 0; // not 'int errno', because the '#include' already defined it
	long arg = strtol(argv[1], &p, 10);
	if (*p != '\0' || errno != 0) {
	    return 1; // In main(), returning non-zero means failure
	}
	n = arg;
    }

    for(int i = 0; i < n; i++){
	printf("%s%s%s%s%s ",
		get_conson(),
		get_vowel(),
		get_conson(),
		get_vowel(),
		get_conson());
    }
    printf("\n");
    return 0;
}

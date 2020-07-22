#include <stdlib.h>
#include "morpheme.h"

const char VOWELS[VOWELS_LEN][MAX_STR_SIZE] = {
    "a",
    "e",
    "ee",
    "i",
    "o",
    "oo",
    "u",
};

const char CONSONS[CONSONS_LEN][MAX_STR_SIZE] = {
    "b",
    "c",
    "d",
    "f",
    "g",
    "h",
    /* "j", */
    "k",
    "l",
    "p",
    /* "q", */
    "s",
    "t",
    "v",
    "w",
    /* "x", */
    /* "y", */
    /* "z", */
};

char *get_vowel(){
    char *v;
    int i = rand() % VOWELS_LEN;
    v = VOWELS[i];
    return v;
}

char *get_conson(){
    char *v;
    int i = rand() % CONSONS_LEN;
    v = CONSONS[i];
    return v;
}

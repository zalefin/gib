#define MAX_STR_SIZE 4
#define VOWELS_LEN 5
#define CONSONS_LEN 18

char VOWELS[VOWELS_LEN][MAX_STR_SIZE] = {
    "a",
    "e",
    "i",
    "o",
    "u",
};

char CONSONS[CONSONS_LEN][MAX_STR_SIZE] = {
    "b",
    "c",
    "d",
    "f",
    "g",
    "h",
    "j",
    "k",
    "l",
    "p",
    "q",
    "s",
    "t",
    "v",
    "w",
    "x",
    "y",
    "z",
};

char *get_vowel();
char *get_conson();

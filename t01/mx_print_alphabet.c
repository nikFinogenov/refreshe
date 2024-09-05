#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (ch % 2 == 0) {
            mx_printchar(ch);
        }
        else {
            mx_printchar(ch - 32);
        }
    }
    mx_printchar('\n');
}

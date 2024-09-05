#include <unistd.h>
#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    if (str == NULL) {
        return NULL;
    }

    int len = mx_strlen(str);

    char *dupStr = mx_strnew(len);
    mx_strcpy(dupStr, str);

    return mx_strcpy(dupStr, str);;
}

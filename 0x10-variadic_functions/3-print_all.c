#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...) {
    const char *p = format;
    va_list args;
    va_start(args, format);

    char c_arg;
    int i_arg;
    float f_arg;
    char *s_arg;

    while (*p) {
        if (*p == 'c') {
            c_arg = (char) va_arg(args, int);
            printf("%c", c_arg);
        } else if (*p == 'i') {
            i_arg = va_arg(args, int);
            printf("%d", i_arg);
        } else if (*p == 'f') {
            f_arg = (float) va_arg(args, double);
            printf("%f", f_arg);
        } else if (*p == 's') {
            s_arg = va_arg(args, char *);
            if (s_arg == NULL) {
                printf("(nil)");
            } else {
                printf("%s", s_arg);
            }
        }
        p++;
    }
    va_end(args);
    printf("\n");
}


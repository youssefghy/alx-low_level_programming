#include <stdio.h>

int main() {
    char letter = 'a';
    do {
        putchar(letter);
        letter++;
    } while (letter <= 'z');
    putchar('\n');
    return 0;
}

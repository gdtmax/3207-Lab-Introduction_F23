#include "random.h"
#include <stdio.h>

int main() {
    int a;

    srand((unsigned)time(NULL));

    printf("Today's random word: ");
    for (a = 0; a < 7; a++)
        putchar(randchar());
    putchar('\n');

    return 0;
}

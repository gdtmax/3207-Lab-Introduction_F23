#include "random.h"
#include <stdlib.h>
#include <time.h>

char randchar() {
    return 'a' + rand() % 26; // Generates a random lowercase letter
}

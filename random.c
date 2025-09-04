#include <stdlib.h>

char randchar() {
    // Generate a random character between 'A' and 'Z'
    // Uses the existing seed from main()
    return 'A' + (rand() % 26);
}
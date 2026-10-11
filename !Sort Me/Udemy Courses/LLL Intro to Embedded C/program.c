#include <stdio.h>
#include "prototypes.h"

int main() {
    for(int i = 0; i < 10; i++) {
        printf("%d\n", addOne(i));
    }
}

int addOne(int value) {
    int result = value + 4;
    return result;
}
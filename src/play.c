#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define NAME_SIZE 64
#define GUARD 0xdeadbeefcafecafe

void f(void) {
    long i;
    char name[NAME_SIZE];
    long guard = GUARD;
    for (i = 0; i < NAME_SIZE; i++) {
        name[i] = getc(stdin);
    }
    if (guard != GUARD) exit(1);
}

int main(int argc, char **argv) {
    f();
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BUFFER_SIZE 16

void repeat(void) {
    char buffer[BUFFER_SIZE] = {0};
    gets(buffer);
    puts(buffer);
}

int main(int argc, char **argv) {
    puts("Hello, tell me something and I will repeat it ! :-)" );
    repeat();
    puts("Goodbye");
}


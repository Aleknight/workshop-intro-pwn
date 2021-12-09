#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BUFFER_SIZE 16

int32_t get_integer(void) {
    char buffer[BUFFER_SIZE];
    puts("Input an integer");
    fgets(buffer, BUFFER_SIZE, stdin);
    return atoi(buffer);
}

int main(int argc, char **argv) {
    int32_t n, m;
    n = get_integer();
    m = get_integer();
    printf("%d + %d = %d\n", n, m, n + m);
    return 0;
}

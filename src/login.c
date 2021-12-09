#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define BUFFER_SIZE 256

char password[BUFFER_SIZE] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

int main() {
    char buffer[BUFFER_SIZE + 1];
    uint8_t fail;

    puts("Please input the password");
    fgets(buffer, BUFFER_SIZE + 1, stdin);

    fail = 0;
    for (uint32_t i = 0; i < BUFFER_SIZE; i++) {
        if (password[i] != buffer[i]) {
            fail += 1;
        }
    }

    if (strlen(buffer) != 256 || fail) {
        printf("Sorry, you can't have access to the following steps, you failed %d times\n", fail);
        return 1;
    }
    puts("Hello admin !");
    return 0;

}

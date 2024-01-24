#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("Gimme a name and a number\n");
        return 1;
    }
    int i = atoi(argv[2]);
    for (int j = 0; j < i; j++) {
        // print the hello message
        printf("Hello, %s\n", argv[1]);
    }
    return 0;
}

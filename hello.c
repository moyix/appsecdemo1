#include <stdio.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Gimme a name\n");
        return 1;
    }
    // print the hllo message
    printf("Hello, %s\n", argv[1]);
    return 0;
}

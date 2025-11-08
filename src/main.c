#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    int nflag = 0;

    while (argc > 1 && strcmp(argv[1], "-n") == 0) {
        nflag = 1;
        argv++; // move pointer
        argc--;
    }

    for (int i = 1; i < argc; i++) {
        printf("%s", argv[i]);
        if (i < argc - 1)
            putchar(' ');
    }

    if (!nflag)
        putchar('\n');

    return 0;
}
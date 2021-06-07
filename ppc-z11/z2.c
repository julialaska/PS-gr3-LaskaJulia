#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Spos�b u�ycia: %s nazwaPliku\n", argv[0]);
        exit(1);
    }

    FILE* fp;

    for(int i=1; i<argc; i++)
    {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            printf("Nie mo�na otworzy� pliku o nazwie %s\n", argv[i]);
            exit(2);
        }
        printf("Plik %s mo�na otworzy�.\n", argv[i]);

        fseek(fp, 0, SEEK_END);

        if (errno != 0) {
            perror("fseek");
            exit(3);
        }

        long len = ftell(fp);

        if (errno != 0) {
            perror("ftell");
            exit(4);
        }

        fclose(fp);
        printf("Wielko�� podanego pliku w bajtach: %ld\n", len);
    }
    return 0;
}

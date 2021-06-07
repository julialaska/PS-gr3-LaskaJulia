#include <stdio.h>

// sta�a MAXWIERSZ powinna mie� warto�� co najmniej 2

#define MAXWIERSZ 64

int main(int argc, char *argv[])
{
    FILE *wp;
    FILE *wp2;

    if (argc != 3) {
        fprintf(stderr, "Spos�b u�ycia: %s nazwa_pliku\n", argv[0]);
        exit(1);
    }

    if ((wp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Nie mo�na otworzy� %s\n", argv[1]);
        exit(2);
    }

    if ((wp2 = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Nie mo�na otworzy� %s\n", argv[1]);
        exit(3);
    }


    char wiersz[MAXWIERSZ];
    while (fgets(wiersz, MAXWIERSZ, wp) != NULL) {
        fputs(wiersz, wp2);
    }


    fclose(wp);
    fclose(wp2);

    printf("Plik skopiowany\n");

    return 0;
}

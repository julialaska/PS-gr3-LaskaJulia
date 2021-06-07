#include <stdio.h>

// sta³a MAXWIERSZ powinna mieæ wartoœæ co najmniej 2

#define MAXWIERSZ 64

int main(int argc, char *argv[])
{
    FILE *wp;
    FILE *wp2;

    if (argc != 3) {
        fprintf(stderr, "Sposób u¿ycia: %s nazwa_pliku\n", argv[0]);
        exit(1);
    }

    if ((wp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Nie mo¿na otworzyæ %s\n", argv[1]);
        exit(2);
    }

    if ((wp2 = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Nie mo¿na otworzyæ %s\n", argv[1]);
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

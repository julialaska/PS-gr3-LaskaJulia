// Sprawdza, czy plik mo¿na otworzyæ do odczytu
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    if (argc < 2) {
        printf("Sposób u¿ycia: %s <nazwa-pliku>\n", argv[0]);
        return 1;
    }

    for(int i=1; i<argc; i++)
    {
        if ((fp = fopen(argv[i], "r")) == NULL)
        {
            printf("Pliku %s nie mo¿na otworzyæ.\n", argv[i]);
            return 2;
        }
        printf("Plik %s mo¿na otworzyæ.\n", argv[i]);
        fclose(fp);
    }

    return 0;
}

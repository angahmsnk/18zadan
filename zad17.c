/*
Napisać funkcję max_znak zwracającą znak najczęściej występujący w pliku f oraz wartość wystąpienia tego znaku.
char max_znak(FILE *f, int *n)
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char max_znak(FILE *f, int *n){
	int freq[256] = {0}; // Tablica do zliczania wystąpień znaków (dla każdego możliwego znaku ASCII)
    char ch;

    // Wczytywanie znaków z pliku i zliczanie ich wystąpień
    while ((ch = fgetc(f)) != EOF) {
        freq[(unsigned char)ch]++;
    }

    // Znalezienie znaku o maksymalnej liczbie wystąpień
    char max_char = 0;
    *n = 0;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > *n) {
            *n = freq[i];
            max_char = (char)i;
        }
    }

    return max_char;
}

void zadanie17(){
	
	system("cls");
	char filename[256];
    printf("Podaj nazwe pliku: ");
    scanf("%255s", filename);

    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Nie mozna otworzyc pliku %s\n", filename);
    }

    int n;
    char maxChar = max_znak(file, &n);

    fclose(file);

    if (n > 0) {
        printf("Najczesciej wystepujacy znak: '%c' (wystapil %d razy)\n", maxChar, n);
    } 
	else {
        printf("Plik jest pusty lub nie zawiera zadnych znakow.\n");
    }
}
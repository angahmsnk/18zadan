/*
Napisać funkcję int strdel(char *s1, char *s2) usuwającą z łańcucha s1, łańcuch s2. 
W przypadku gdy łańcuch s2 nie występuje w łańcuchu s1 funkcja powinna zwracać wartość 0, w przeciwnym przypadku wartość 1.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strdel(char *s1, char *s2){
	char *pos = strstr(s1, s2); // Znajdź pierwsze wystąpienie s2 w s1
	
    if (!pos) {
        return 0; // Jeśli s2 nie występuje w s1, zwróć 0
    }

    // Przesuwamy znaki, aby usunąć s2 z s1
    char *start = pos;
    char *end = pos + strlen(s2);

    while ((*start++ = *end++)); // Przesuwamy znaki aż do końca łańcucha

    return 1; // Usunięcie się powiodło
}

void zadanie16(){
	
	system("cls");
	char s1[256];
    char s2[256];

    printf("Podaj pierwszy lancuch znakow (s1): ");
    scanf(" %[^\n]", s1); // Wczytaj cały wiersz do s1 (do znaku nowej linii)

    printf("Podaj drugi lancuch znakow (s2): ");
    scanf(" %[^\n]", s2); // Wczytaj cały wiersz do s2 (do znaku nowej linii)

    printf("\nPrzed usunieciem: %s\n", s1);

    if (strdel(s1, s2)) {
        printf("Po usunieciu: %s\n", s1);
    }
	else {
        printf("Łancuch '%s' nie wystepuje w '%s'.\n", s2, s1);
    }
}
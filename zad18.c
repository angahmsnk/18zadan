// Wymienić nowe elementy standardu C99 w stosunku do ANSI C89.

#include <stdio.h>
#include <stdlib.h>

void zadanie18() {
	system("cls");
    printf("Nowe elementy standardu C99 w stosunku do ANSI C89:\n\n");

    printf("1. Nowe typy danych:\n");
    printf("   - 'long long int' (typ long long): Liczby calkowite o co najmniej 64-bitowej precyzji.\n");
    printf("   - '_Bool': Typ logiczny reprezentujacy wartosci true i false.\n");
    printf("   - '_Complex': Typ dla liczb zespolonych.\n");
    printf("   - '_Imaginary': Typ dla czesci urojonych liczb zespolonych.\n\n");

    printf("2. Deklaracje zmiennych w dowolnym miejscu kodu:\n");
    printf("   - Zmienne moga byc deklarowane w dowolnym miejscu bloku, np. w petli 'for'.\n\n");

    printf("3. Tablice o zmiennym rozmiarze (VLA - Variable Length Arrays):\n");
    printf("   - Mozliwosc deklarowania tablic, ktorych rozmiar jest okreslany w czasie dzialania programu.\n\n");

    printf("4. Nowe funkcje matematyczne:\n");
    printf("   - Dodano funkcje takie jak: round, trunc, fma, cbrt, hypot oraz rozszerzono obsluge funkcji trygonometrycznych.\n\n");

    printf("5. Zlozone inicjalizatory:\n");
    printf("   - Umozliwiono inicjalizowanie tablic i struktur w sposob bardziej elastyczny, np. {[0] = 1, [3] = 7}.\n\n");

    printf("6. Stale o okreslonych rozmiarach:\n");
    printf("   - Typy z naglowka <stdint.h>, np. int8_t, uint32_t, int64_t.\n\n");

    printf("7. Dyrektywa preprocesora '__STDC_VERSION__':\n");
    printf("   - Umozliwia sprawdzanie wersji standardu podczas kompilacji.\n\n");

    printf("8. Funkcje inline:\n");
    printf("   - Pozwalaja na definiowanie funkcji wewnatrz kodu dla optymalizacji, np. inline int square(int x).\n\n");

    printf("9. Makra o zmiennej liczbie argumentow:\n");
    printf("   - Mozliwosc definiowania makr przyjmujacych zmienna liczbe argumentow, np. #define LOG(fmt, ...) printf(fmt, __VA_ARGS__).\n\n");

    printf("10. Stale w notacji szesnastkowej i dziesietnej:\n");
    printf("    - Obsluga stalych zmiennoprzecinkowych w notacji szesnastkowej, np. 0x1.1p3.\n\n");

    printf("11. Komentarze w stylu C++:\n");
    printf("    - Mozna uzywac jednowierszowych komentarzy: // To jest komentarz.\n\n");

    printf("12. Podwojne '##' w makrach:\n");
    printf("    - Operator laczenia tokenow, np. #define CONCAT(a, b) a##b.\n\n");

    printf("13. Obsluga typu 'restrict':\n");
    printf("    - Kwalifikator wskaznikow, ktory informuje kompilator, ze wskaznik jest jedynym odniesieniem do danych.\n\n");

    printf("14. Elastyczne czlony struktur:\n");
    printf("    - Struktury moga miec tablice elastyczne jako ostatni element, np. struct S { int n; int data[]; }.\n\n");

    printf("15. Funkcje o zmiennej liczbie argumentow:\n");
    printf("    - Lepsza obsluga takich funkcji dzieki naglowkowi <stdarg.h>.\n\n");

    printf("16. Biblioteka <stdbool.h>:\n");
    printf("    - Zdefiniowano 'bool', 'true' i 'false'.\n\n");

    printf("Te zmiany sprawily, ze standard C99 jest bardziej wszechstronny, wydajny i wygodny w uzyciu.\n");
}
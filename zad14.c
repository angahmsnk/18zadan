/*
Zadeklarować strukturę Complex reprezentującą liczby zespolone oraz napisać funkcje dodającą i mnożącą dwie takie liczby. 
Funkcje mają przyjmować jako argumenty liczby zespolone oraz zwracać wynik (również w postaci zespolonej).
struct complex AddComplex(struct complex z1, struct complex z2)
struct complex MulComplex(struct complex z1, struct complex z2)
*/

#include <stdio.h>
#include <stdlib.h>

struct complex {
	int realAxis;
	int imaginaryUnit;
};

struct complex AddComplex(struct complex z1, struct complex z2){
	
	struct complex ComplexNumber;
	
	ComplexNumber.realAxis = z1.realAxis + z2.realAxis;
	ComplexNumber.imaginaryUnit = z1.imaginaryUnit + z2.imaginaryUnit;
	
	return ComplexNumber;
}

struct complex MulComplex(struct complex z1, struct complex z2){
	
	struct complex ComplexNumber;
	
	ComplexNumber.realAxis = (z1.realAxis*z2.realAxis)-(z1.imaginaryUnit*z2.imaginaryUnit);
	ComplexNumber.imaginaryUnit = (z1.realAxis*z2.imaginaryUnit)+(z1.imaginaryUnit*z2.realAxis);
	
	return ComplexNumber;
}

void zadanie14(){
	system("cls");
	
	struct complex ComplexNumber1, ComplexNumber2, SumResult, MultiplyResult;
	
	printf("Podaj czesc rzeczywista liczby 1: ");
	scanf("%d", &ComplexNumber1.realAxis);
	printf("Podaj czesc urojona liczby 1: ");
	scanf("%d", &ComplexNumber1.imaginaryUnit);
	printf("Podaj czesc rzeczywista liczby 2: ");
	scanf("%d", &ComplexNumber2.realAxis);
	printf("Podaj czesc urojona liczby 2: ");
	scanf("%d", &ComplexNumber2.imaginaryUnit);
	
	SumResult = AddComplex(ComplexNumber1, ComplexNumber2);
	MultiplyResult = MulComplex(ComplexNumber1, ComplexNumber2);
	
	printf("\nWynik dodawania obu liczb: %d + %di", SumResult.realAxis, SumResult.imaginaryUnit);
	printf("\nWynik mnozenia obu liczb: %d + %di\n\n", MultiplyResult.realAxis, MultiplyResult.imaginaryUnit);
}
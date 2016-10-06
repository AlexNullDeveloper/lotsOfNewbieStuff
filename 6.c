#include <stdio.h>
#include <locale.h>
#include <math.h>
//#include <conio.h>
//#define _CRT_SECURE_NO_WARNINGS

int main() {
	setlocale(LC_ALL, "RUS");
	
	/*Вычислить площадь кольца (внешний радиус R, внутренний - r).*/

	printf("введите внешний радиус :\n");
	double R;
	scanf("%lf", &R);
	printf("введите внутренний радиус :\n");
	double r;
	scanf("%lf", &r);
	double pi = 3.14;
	double result = (pi * pow(R, 2.00)) - (pi * pow(r ,2.00));
	printf("площать кольца равна %lf", result);

	_getch();


	return 0;
}
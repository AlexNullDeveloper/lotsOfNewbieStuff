#include <stdio.h>
#include <locale.h>
#include <math.h>
//#include <conio.h>
//#define _CRT_SECURE_NO_WARNINGS

int main() {
	setlocale(LC_ALL, "RUS");
	
	/*Вычислить периметр и площадь:*/

	/*1.квадрата со стороной, равной а.*/
	printf("Введите сторону квадрата :");
	float a;
	scanf("%f", &a);
	float area, perimeter;

	area = powf(a, 2.00);
	perimeter = a + a + a + a;
	printf("площадь равна = %f кв. м, периметр равен = %f\n", area, perimeter);
	/*2.прямоугольного треугольника с катетами a и b.*/
	printf("Введите катеты треугольника (через пробел):\n");
	float catetA, catetB, hypotenuse;
	scanf("%f %f", &catetA, &catetB);

	area = catetA * catetB / 2;

	hypotenuse = sqrtf(powf(catetA, 2.00) + powf(catetB, 2.00));
	perimeter = catetA + catetB + hypotenuse;
	
	printf("площадь треугольника равна = %f кв. м, периметр равен = %f\n", area, perimeter);
	//3.равнобедренного треугольника с основанием a и высотой h.
	
	printf("введите основание и высоту равнобедренного треугольника: \n");
	float base, height;
	scanf("%f %f", &base, &height);

	area = base * height / 2;

	perimeter = sqrtf( 4 * pow(height, 2.00) + pow(base, 2.00)) + base;

	printf("площадь равнобедренного треугольника равна = %f кв. м, \nпериметр равен = %f\n", area, perimeter);

	//4.равнобокой трапеции с длинами оснований a и b и высотой h.

	printf("введите основания а и б: ");
	float osnA, osnB;
	scanf("%f %f",&osnA,&osnB);

	printf("введите высоту h: ");
	float heightTrap;
	scanf("%f", &heightTrap);

	area = (osnA + osnB) / 2 * heightTrap;

	float insideCatet;

	//если основание А больше основания Б
	if (osnA > osnB)
	{
		insideCatet = (osnA - osnB) / 2;
	}
	else if (osnA <= osnB)
	{
		insideCatet = (osnB - osnA) / 2;
	}
	else 
	{
		printf("что-то пошло не так");
	}

	float sideOfTrap = sqrtf(powf(insideCatet, 2.00) + powf(heightTrap, 2.00));

	printf("сторона равна %f\n", sideOfTrap);

	perimeter = 2 * sideOfTrap + osnA + osnB;

	printf("площадь равноcторонней трапеции равна = %f кв. м, \nпериметр равен = %f\n", area, perimeter);


	//5.равностороннего треугольника со стороной, равной a.
	printf("введите сторону равностороннего треугольника :");
	float sideOfTriangle;
	scanf("%f", &sideOfTriangle);

	area = sqrtf(3.00) / 4.00 * powf(sideOfTriangle, 2.00);

	perimeter = sideOfTriangle + sideOfTriangle + sideOfTriangle;

	printf("площадь равностороннего треугольника равна = %f кв. м, \nпериметр равен = %f\n", area, perimeter);

	_getch();

	return 0;
}
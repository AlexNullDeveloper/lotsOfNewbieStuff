#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
//#include <conio.h>
//#define _CRT_SECURE_NO_WARNINGS

int main() {
	setlocale(LC_ALL, "RUS");
	
	//Вычислить площадь поверхности и объем :
	//1.цилиндра (радиус r, высота h). S=2 π rh
	printf("введите радиус и высоту цилиндра: ");
	double r, h;
	scanf("%lf %lf",&r,&h);

	double areaPoverh = 2.00 * M_PI * r * h;

	double volume = M_PI * pow(r, 2) * h;

	printf("площадь поверхности цилиндра равна %lf,\n" \
		"а объем равен %lf\n", areaPoverh, volume);

	
	//2.полого цилиндра(радиусы Rи r, высота h).
	printf("введите внешний радиус, внутренний радиус и высоту полого цилиндра (через пробел): ");
	double R_vnesh, r_vnutr;
	//h = 0.0;
	double height;
	scanf("%lf %lf %lf", &R_vnesh, &r_vnutr, &height);
	double fullArea = 2.0 * M_PI * (R_vnesh + r_vnutr) * (R_vnesh - r_vnutr + height);

	volume = M_PI * height  * (pow(R_vnesh, 2.0) - pow(r_vnutr, 2.0));

	printf("площадь поверхности полого цилиндра равна %lf,\n" \
		"а объем равен %lf\n", fullArea, volume);

	//3.шара(S = 4r2, V = (3 / 4) r3).
	printf("введите радиус шара (через пробел): ");
	double rShar;
	scanf("%lf", &rShar);
	areaPoverh = 4 * pow(r, 2.0);
	volume = (3.0 / 4.0) * pow(rShar, 3);


	printf("площадь поверхности шара равна %lf,\n" \
		"а объем равен %lf\n", areaPoverh, volume);

	_getch();

	return 0;
}

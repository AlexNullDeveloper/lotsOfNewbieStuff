#include <stdio.h>

int main() {
	
	//Перевести длину, заданную в дюймах, в сантиметры (10 дюймов = 254 мм).
	printf("введите длину в дюймах: \n");
	double inches, sm;
	scanf("%lf",&inches);
	sm = inches * 25.4;
	printf("количество сантиметров %lf",sm);
	
	return 0;
}

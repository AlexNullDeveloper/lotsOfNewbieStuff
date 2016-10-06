#include <stdio.h>

int main() {
	
	//Перевести длину, заданную в сантиметрах, в дюймы.
	printf("введите длину в сантиметрах");
	double sm, inches;
	scanf("%lf",&sm);
	inches = sm * 10 /25.4;
	printf("\nрезультат: %lf", inches);
	
	return 0;
}

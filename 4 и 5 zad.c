#include <stdio.h>

int main() {
	
	//Перевести температуру из шкалы Фаренгейта в шкалу Цельсия (формула для пересчета c=(5/9)(f-32)).
	
	printf("4. введите температуру в Фаренгейтах\n");
	int faren;
	double celsius;
	scanf("%d",&faren);
	
	celsius = (5.00/9.00) * (faren - 32.00);
	printf("результат %lf\n",celsius);
	
	
	printf("5. Введите температуру в цельсиях\n");
	faren = 0.00; celsius = 0.00;
	scanf("%lf",&celsius);
	printf("celsius %lf\n",celsius);
	
	
	faren = ((celsius / 5.00) * 9.00) + 32.00;
	double temp = celsius / 5.00;
	printf("temp = %lf\n",temp);
	temp = temp * 9.00;
	printf("temp = %lf\n",temp);
	temp = temp  + 32.00;
	printf("temp = %lf\n",temp);
	
	printf("результат в фаренгейтах temp %lf\n", temp);
	printf("результат в фаренгейтах %lf\n", faren);
	
	return 0;
}
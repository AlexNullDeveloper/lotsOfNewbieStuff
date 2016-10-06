#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale(LC_ALL, "RUS");
	
	//1.Введите экзаменационные оценки студента по 3 предметам и вычислите средний балл
	examScores();
	
	//2.Вычислить сумму, разность, произведение и частное двух значений х1 и х2
	sumRazTimesDivideOfTwo();
	
	//3.Вычислить сумму, разность, произведение и частное двух натуральных дробей(a / b) и(c / d).Результаты печатать в виде натуральной дроби.
	sumRazTimesDivideOfTwoNaturalFractions();
	
	//4.Вычислить сумму цифр четырехзначного числа
	sumOfDigits();

	//5.Целое четырехзначное число напечатать вразрядку(с пробелами между цифрами)
	printWithSpacesBetweenDigits();

	//6.Целое четырехзначное число заменить числом, получающимся при записи его цифр в обратном порядке
	printNumberReversed();
	//7.Ввести время в формате чч : мм : сс, перевести в секунды
	convertToSecondsFromHHMMSS();
	//8.Ввести время в секундах, перевести в формат чч : мм : сс
	convertToHHMMSSFromSeconds();
	//9.Напечатать длину интервала между двумя моментами времени в пределах суток(все формате чч : мм : сс)
	invervalBetweenToTimes();
	
	_getch();

	return 0;
}

int examScores(){
	
	printf("Введите оценки по трём предметам: ");
	int score1, score2, score3;
	scanf("%d %d %d", &score1, &score2, &score3);

	int countSubjects = 3;
	double result = (double) (score1 + score2 + score3) / countSubjects;
	printf("средний бал: %lf\n", result);

	return 0;
}

int sumRazTimesDivideOfTwo(){
	
	printf("Введите два значения через пробел (дробная часть после запятой): ");
	double x1, x2;
	scanf("%lf %lf", &x1, &x2);
	printf("ввели %lf %lf\n", x1, x2);
	double sum, difference, composition, attitute;/*сумма разность произведение и отношение(частное)*/
	
	sum = x1 + x2;

	difference = x1 - x2;
	composition = x1 * x2;
	attitute = x1 / x2;
	printf("сумма = %lf,\nразность = %lf,\nпроизведение = %lf\nи частное двух значений = %lf\n", sum, difference, composition, attitute);
}

//операции с натуральными дробями
int sumRazTimesDivideOfTwoNaturalFractions(){
	
	printf("введите первую дробь (в формате a/b): ");
	int aNumerator, bDenominator;
	scanf("%d/%d", &aNumerator, &bDenominator);
	printf("\n");

	printf("введите вторую дробь (в формате c/d): ");
	int cNumerator, dDenominator;
	scanf("%d/%d", &cNumerator, &dDenominator);
	printf("\n");

	sumOfTwoFractions(aNumerator, bDenominator, cNumerator, dDenominator);
	diffOfTwoFractions(aNumerator, bDenominator, cNumerator, dDenominator);
	multOfTwoFractions(aNumerator, bDenominator, cNumerator, dDenominator);
	divideOfTwoFractions(aNumerator, bDenominator, cNumerator, dDenominator);
	


}

int sumOfTwoFractions(int firstNumtor, int firstDenomtor, int secondNumtor, int secondDenomtor){

	int numerator; //числитель
	int denominator; //знаменатель

	if (firstDenomtor == secondDenomtor){
		denominator = firstDenomtor;
		numerator = firstNumtor + secondNumtor;
	}
	else if (firstDenomtor != secondDenomtor){
		denominator = firstDenomtor * secondDenomtor;
		firstNumtor = firstNumtor * secondDenomtor;
		secondNumtor = secondNumtor * firstDenomtor;
		numerator = firstNumtor + secondNumtor;
	}
	else {
		printf("something is wrong");
		return -1;
	}
	
	reduceAndPrint(numerator, denominator, 's');

	return 0;
}

int diffOfTwoFractions(int firstNumtor, int firstDenomtor, int secondNumtor, int secondDenomtor){
	int numerator; //числитель
	int denominator; //знаменатель

	if (firstDenomtor == secondDenomtor){
		denominator = firstDenomtor;
		numerator = firstNumtor - secondNumtor;
	}
	else if (firstDenomtor != secondDenomtor){
		denominator = firstDenomtor * secondDenomtor;
		firstNumtor = firstNumtor * secondDenomtor;
		secondNumtor = secondNumtor * firstDenomtor;
		numerator = firstNumtor - secondNumtor;
	}
	else {
		printf("something is wrong");
		return -1;
	}

	reduceAndPrint(numerator, denominator, 'r');

	return 0;
}

int multOfTwoFractions(int firstNumtor, int firstDenomtor, int secondNumtor, int secondDenomtor){
	int numerator; //числитель
	int denominator; //знаменатель

	numerator = firstNumtor * secondNumtor;
	denominator = firstDenomtor * secondDenomtor;

	reduceAndPrint(numerator, denominator, 'u');
	

	return 0;
}

int divideOfTwoFractions(int firstNumtor, int firstDenomtor, int secondNumtor, int secondDenomtor){
	int numerator; //числитель
	int denominator; //знаменатель

	numerator = firstNumtor * secondDenomtor;
	denominator = secondNumtor * firstDenomtor;
	reduceAndPrint(numerator, denominator, 'd');

	return 0;
}

int sumOfDigits(){
	printf("Нахождение суммы цифр числа \n");
	printf("Введите целое число:");
	int inputNum;
	scanf("%d", &inputNum);

	int result = recursiveSumOfDigits(inputNum);

	printf("сумма цифр равна %d", result);


}

int recursiveSumOfDigits(int numParam){
	
	//if ((numParam / 10) == 0) return numParam % 10;
	int accumulator = 0;

	if (!numParam) return 0;

	accumulator += numParam % 10;
	accumulator += recursiveSumOfDigits(numParam / 10);
	return accumulator;
}

int printWithSpacesBetweenDigits(){
	int n;
	printf("введите число: ");
	scanf("%d", &n);
	printf("\nтвой номер : ");
	//print_spaced(n);
	//int temp = 0;
	int tempN = n;
	int i = 0;
	while (n % 10 != 0){
		n = n / 10;
		i++;
	}

	for (; i > 0;){
		i--;
		//printf("tempN = %d", tempN);
		int divider = (int) pow(10.0, i);
		//printf(" divider = %d\n", divider);
		printf("%d ", (tempN / divider) % 10);
	}

	//printf("i = %d", i);
	
	return 0;
}

int reduceAndPrint(int numerator,int denominator,char flagTypeAction){
	

	int delitel = numerator;
	while (delitel != 0){

		if (denominator % delitel == 0){
			denominator /= delitel;
			numerator /= delitel;
			break;
		}
		delitel = denominator % delitel;
	}


	if (denominator == 0){
		printf("ОШИБКА! деление на 0 запрещено.\n");
	} else {
		if (flagTypeAction == 's'){
			if (numerator == 0){
				printf("сумма двух дробей равна %d\n", numerator);
			}
			else if (numerator % denominator == 0){
				printf("сумма двух дробей равна %d\n", numerator / denominator);
			}
			else {
				printf("сумма двух дробей равна %d/%d\n", numerator, denominator);
			}
		}
		//r - разность
		else if (flagTypeAction == 'r'){
			if (numerator == 0){
				printf("разница двух дробей равна %d\n", numerator);
			}
			else if (numerator % denominator == 0){
				printf("разница двух дробей равна %d\n", numerator / denominator);
			}
			else {
				printf("разница двух дробей равна %d/%d\n", numerator, denominator);
			}
		}
		//умножение
		else if (flagTypeAction == 'u'){
			if (numerator == 0){
				printf("произведение двух дробей равна %d\n", numerator);
			}
			else if (numerator % denominator == 0){
				printf("произведение двух дробей равна %d\n", numerator / denominator);
			}
			else {
				printf("произведение двух дробей равна %d/%d\n", numerator, denominator);
			}
		}
		//деление
		else if (flagTypeAction == 'd'){
			if (numerator == 0){
				printf("частное двух дробей равна %d\n", numerator);
			}
			else if (numerator % denominator == 0){
				printf("частное двух дробей равна %d\n", numerator / denominator);
			}
			else {
				printf("частное двух дробей равна %d/%d\n", numerator, denominator);
			}
		}
	}

	return 0;
}

int printNumberReversed(){
	//ввести число
	printf("\nВведите число которое нужно вывести в обратном порядке:");
	int numberBeforeReverse;
	scanf("%d", &numberBeforeReverse);
	//развернуть его и печатать

	for (; numberBeforeReverse % 10 != 0;){
		printf("%d", numberBeforeReverse % 10);
		numberBeforeReverse /= 10;
	}
	printf("\n");
	return 0;
}

int convertToSecondsFromHHMMSS(){
	//ввести в hh:mm:ss
	printf("Введите время для конвертации в секунды в формате hh:mm:ss");
	int hours, minutes, seconds;
	//dodelat'
	scanf("%d:%d:%d", &hours, &minutes, &seconds);
	//конвертировать
	unsigned long result = hours * 3600 + minutes * 60 + seconds;
	//вывести в секундах
	printf("Итого секунд: %d\n", result);

	return 0;
}

int convertToHHMMSSFromSeconds(){
	//ввести в hh:mm:ss
	printf("Введите время для конвертации в секундах");
	int seconds;
	scanf("%d", &seconds);
	int hours = 0;
	hours = seconds / 3600;
	seconds -= hours * 3600;

	int minutes = 0;
	minutes = seconds / 60;

	seconds -= minutes * 60;

	printf("Результат: %d:%d:%d\n", hours, minutes, seconds);
	
}

int invervalBetweenToTimes(){
	
	printf("Введите первое время (формат hh:mm:ss): ");
	int firstHours, firstMinutes, firstSeconds;
	scanf("%d:%d:%d", &firstHours, &firstMinutes, &firstSeconds);

	printf("Введите второе время (формат hh:mm:ss): ");
	int secondHours, secondMinutes, secondSeconds;
	scanf("%d:%d:%d", &secondHours, &secondMinutes, &secondSeconds);


	unsigned long totalSeconds1 = firstHours * 3600 + firstMinutes * 60 + firstSeconds;

	unsigned long totalSeconds2 = secondHours * 3600 + secondMinutes * 60 + secondSeconds;

	unsigned long totalSecDiff = abs(totalSeconds2 - totalSeconds1);

	printf("totalSecDiff = %d\n", totalSecDiff);

	int hours = 0;
	hours = totalSecDiff / 3600;
	totalSecDiff -= hours * 3600;

	int minutes = 0;
	minutes = totalSecDiff / 60;

	totalSecDiff -= minutes * 60;

	printf("Интервал = %d час(ов) %d минут(ы) %d секунд(а)\n", hours, minutes, totalSecDiff);

	return 0;
}
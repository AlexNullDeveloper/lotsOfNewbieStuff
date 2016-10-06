#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

// косинус угла, лежащий против стороны с длиной c
double cosinus3(double a, double b, double c) {
	return (pow(a, 2.0) + pow(b, 2.0) - pow(c, 2.0)) / (2 * a*b);
}

double maxOfThree(double first, double second, double third){
	double max = 0.00;
	if (first > second && first > third){
		max = first;
	}
	else if (second > first && second > third){
		max = second;
	}
	else if (third > first && third > second){
		max = third;
	}
	else if (third == second && second > first){
		max = third;
	}
	else
	{
		max = first;
	}
	return max;
}

double minOfThree(double first, double second, double third){
	double min = 0.00;
	if (first < second && first < third){
		min = first;
	}
	else if (second < first && second < third){
		min = second;
	}
	else if (third < first && third < second){
		min = third;
	}
	else if (third == second && second < first){
		min = third;
	}
	else
	{
		min = first;
	}
	return min;
}
double AvgOfThree(double first, double second, double third){
	double avg = 0.00;
	if (first > second && first < third){
		avg = first;
	}
	else if (second > first && second < third){
		avg = second;
	}
	else if (third > first && third < second){
		avg = third;
	}
	else if (third == second && second < first){
		avg = third;
	}
	else
	{
		avg = first;
	}
	return avg;
}



int main(){
	setlocale(LC_ALL, "RUS");
		
		/*1.Ввести длину отрезка с указанием шкалы измерения(c – сантиметры, i – дюймы), напечатать результат в обеих шкалах : например,
		при вводе «2i» напечатать «2” = 5.08 cm»
		при вводе «5.08c» напечатать «5.08 cm = 2”»*/
	converterInchesSantimeters();
		
		/*2.Ввести два числа, напечатать знак сравнения между ними*/
	twoNumbersAndSymbolMoreLessOrEqual();
		
		/*3.Ввести три числа, напечатать максимальное из них*/
	findMaxNumOfThree();
		
		/*4.Образуют ли цифры четырехзначного числа арифметическую прогрессию*/
	arifmeticProgressOrNot();
		
		//5.Введите экзаменационные оценки студента по 3 предметам и напечатайте его статус : «отличник», «хорошист», «троечник», «двоечник»
	statusOfStudent();
		//6.Ввести два значения времени в формате чч : мм : сс, проверить корректность ввода и напечатать знак сравнения между ними
	checkFormatOfTwoTimesAndSignOfEqual();
		
		//7.Ввести номер года, напечатать количество дней в этом году(справка : год является високосным, если он делится на 4 и на 400 в том случае, если оканчивается на два нуля, например, 2000)
	daysInYear();
		
		//8.Ввести две даты в формате дд.мм.гггг, напечатать знак сравнения между ними
		
	//аналогичное 6 заданию жалко время.
		
		//9.Ввести дату в формате дд.мм.гггг, проверить корректность ввода и напечатать следующую дату
	checkDateAndGetNext();
		
		//10.К введенному числу(от 0 до 99) приписать слово «копеек» в правильном падеже
	addKopeck();//добавление копеек
		
		//11.К введенному числу(от 0 до 1000) приписать слово «рублей» в правильном падеже
		//такое же как и 10 жалко время
		
		//12.К введенному числу(от 0 до 10…0.99) приписать слова «рублей» и «копеек» в правильном падеже
	addRublesAndKopeck();
		
		//13.Три числа являются длинами трех отрезков.Могут ли эти отрезки быть сторонами треугольника и, 
	//если да, то какой это будет треугольник(остро - прямо - или тупоугольный, равнобедренный, равносторонний и т.д.).
	canBeTriangleAndWhichOne();
		
		//14.Даны две тройки чисел, являющихся длинами отрезков.Образует ли каждая тройка стороны треугольника и будут ли эти треугольники подобными
	similarTriangles();



	getch();
	return 0;
}

int converterInchesSantimeters(){
	/*1.Ввести длину отрезка с указанием шкалы измерения(c – сантиметры, i – дюймы), напечатать результат в обеих шкалах : например,
	при вводе «2i» напечатать «2” = 5.08 cm»
	при вводе «5.08c» напечатать «5.08 cm = 2”»*/

	printf("Конвертирование из дюймов в сантиметры и обратно \xA");
	printf("Введите значение (для функтов окончание i, для см окончание \"с\"\n");
	double value;
	char inchOrSec;
	scanf("%lf%c", &value, &inchOrSec);
	double result = 0;
	if (inchOrSec == 'c'){
		result = value * 0.393701;
		printf("%lf cm = %lf”\n", value, result);
	}
	else if (inchOrSec == 'i'){
		result = value * 2.54;
		printf("%lf” = %lf cm\n", value, result);
	}
	else {
		printf("вы ввели неверный идентификатор для меры длины \n");
	}

	return 0;
}

int twoNumbersAndSymbolMoreLessOrEqual(){

	printf("Вывод двух числа со знаком между ними\xA");
	printf("Введите два числа через пробел\n");
	double first, second;
	scanf("%lf %lf", &first, &second);
	if (first == second){
		printf("%lf == %lf", first, second);
	}
	else if (first > second){
		printf("%lf > %lf", first, second);
	}
	else {
		printf("%lf < %lf", first, second);
	}

	return 0;
}

int findMaxNumOfThree(){

	printf("\nНахождение максимума из трех чисел\xA");
	printf("введите три числа через пробел\n");
	double first, second, third;
	scanf("%lf %lf %lf", &first, &second, &third);
	double max = 0;

	if (first > second && first > third){
		max = first;
	}
	else if (second > first && second > third){
		max = second;
	}
	else if (third > first && third > second){
		max = third;
	}
	else if (third == second && second > first){
		max = third;
	}
	else 
	{
		max = first;
	}

	printf("maximum = %lf\n", max);

	return 0;
}

int arifmeticProgressOrNot(){

	printf("проверка арифметической прогресии\012");
	printf("введите целое число ");
	int number;
	scanf("%i", &number);

	int tempNumber = number;
	int count = 0;
	while (tempNumber % 10 != 0){
	
		tempNumber /= 10;
		count++;
	}
	int *arrayOfDigits = (int*)malloc(count * sizeof(int));
	
	for (int i = 0; i < 4; i++){
		arrayOfDigits[i] = number % 10;
		number /= 10;
	}
	int znacheniePosledovatelnosti = 0;
	int hasPosled = 1;
	for (int j = 3; j > 0; j--){
		int previous = arrayOfDigits[j - 1];
		int current = arrayOfDigits[j];
		if (j == 3){
			znacheniePosledovatelnosti = arrayOfDigits[j - 1] - arrayOfDigits[j];
		}
		else {
			if (previous - current != znacheniePosledovatelnosti){
				hasPosled = 0;
				break;
			}
		}

	}

	if (hasPosled == 0){
		printf("последовательности нет");
	}
	else {
		printf("последовательность есть");
	}
}

int statusOfStudent(){
	printf("\nвведите оценки за три предмета:");
	int firstScore, secondScore, thirdScore;
	scanf("%d %d %d", &firstScore, &secondScore, &thirdScore);
	if (firstScore == 2 || secondScore == 2 || thirdScore == 2){
		printf("Да этот студент двоечник ");
		return;
	}
	else if (firstScore == 3 || secondScore == 3 || thirdScore == 3){
		printf("фу! троечник ");
		return;
	}
	else if (firstScore == 4 || secondScore == 4 || thirdScore == 4){
		printf("молодец, хорошист ");
		return;
	}
	else if (firstScore == 5 || secondScore == 5 || thirdScore == 5){
		printf("неужели отличник ");
		return;
	}
	else {
		printf("что-то не так");
	}
	printf("\n");
	return 0;
}

int checkFormatOfTwoTimesAndSignOfEqual(){
	printf("\nПроверка дат на корректность и вывод знака равенства между ними");
	printf("\n введите первое время в формате hh:mm:ss");
	int firstHours, firstMinutes, firstSeconds;
	scanf("%d:%d:%d", &firstHours, &firstMinutes, &firstSeconds);
	printf("\n введите второе время в формате hh:mm:ss\n");
	int secondHours, secondMinutes, secondSeconds;
	scanf("%d:%d:%d", &secondHours, &secondMinutes, &secondSeconds);
	
	if (checkPositiveInput(firstHours, firstMinutes, firstSeconds) < 0){
		printf("1. неверный формат, числа должны быть положительными\n");
		return -1;
	}

	if (checkPositiveInput(secondHours, secondMinutes, secondSeconds) < 0){
		printf("2. неверный формат, числа должны быть положительными\n");
		return -1;
	}
	if (checkCorrectNumbers(secondHours, secondMinutes, secondSeconds) < 0){
		printf("некорректные числа во втором времени");
		return -1;
	}

	if (checkCorrectNumbers(firstHours, firstMinutes, firstSeconds) < 0){
		printf("некорректные числа в первом времени");
		return -1;
	}

	if (firstHours > secondHours){
		printf("%02d:%02d:%02d > %02d:%02d:%02d", firstHours, firstMinutes, firstSeconds, secondHours, secondMinutes, secondSeconds);
		return 0;
	}
	else if (firstHours < secondHours){
		printf("%02d:%02d:%02d < %02d:%02d:%02d", firstHours, firstMinutes, firstSeconds, secondHours, secondMinutes, secondSeconds);
		return 0;
	}
	//hh равны
	else {
		if (firstMinutes > secondMinutes){
			printf("%d:%d:%d > %d:%d:%d", firstHours, firstMinutes, firstSeconds, secondHours, secondMinutes, secondSeconds);
			return 0;
		}
		else if (firstMinutes < secondMinutes){
			printf("%02d:%02d:%02d < %02d:%02d:%02d", firstHours, firstMinutes, firstSeconds, secondHours, secondMinutes, secondSeconds);
			return 0;
		}
		//мм равны
		else {
			if (firstSeconds > secondSeconds){
				printf("%02d:%02d:%02d > %02d:%02d:%02d", firstHours, firstMinutes, firstSeconds, secondHours, secondMinutes, secondSeconds);
				return 0;
			}
			else if (firstSeconds < secondSeconds){
				printf("%02d:%02d:%02d < %02d:%02d:%02d", firstHours, firstMinutes, firstSeconds, secondHours, secondMinutes, secondSeconds);
				return 0;
			}
			//всё равно
			else {
				printf("%d:%02d:%02d == %d:%02d:%02d", firstHours, firstMinutes, firstSeconds, secondHours, secondMinutes, secondSeconds);
				return 0;
			}
		
		}
	}
	
	printf("\n");
	return 0;
}

int checkPositiveInput(int hh, int mm, int sec){
	if (hh < 0 || mm < 0 || sec < 0){
		return -1;
	}
	return 0;
}

int checkCorrectNumbers(int hh, int mm, int sec){
	if (hh > 24 || mm > 60 || sec > 60){
		return -1;
	}
	return 0;
}

int daysInYear(){
	printf("\n Введите год: ");
	int year;
	scanf("%d", &year);
	if (year % 4 == 0){
		printf("год весокосный");
	}
	else {
		printf("год не весокосный");
	}
	return 0;
}


int checkDateAndGetNext(){
	printf("\n Введите дату в формате dd.mm.yyyy : ");
	int days, month, years;
	scanf("%d.%d.%d", &days, &month, &years);

	if (days < 1 || month < 1 || days > 31 || month > 12){
		printf("ошибка формата");
		return -1;
	}

	days++;
	if (days == 32){
		days = 1;
		month++;
		if (month > 12){
			month = 1;
			years++;
		}
	}

	printf("следующая дата = %02d.%02d.%02d", days, month, years);


}

int addKopeck(){
	printf("\n Введите число от 0 до 99: ");
	int kopeck;
	scanf("%d", &kopeck);
	printf("%d", kopeck);
	if (kopeck <= 20){
		if (kopeck % 20 == 1){
			printf(" копейка");
		}
		else if (kopeck == 2 || kopeck == 3 || kopeck == 4){
			printf(" копейки");
		}
		else{
			printf(" копеек");
		}
	}
	else {
		if (kopeck % 10 == 1){
			printf(" копейка");
		}
		else if (kopeck % 10 == 2 || kopeck % 10 == 3 || kopeck % 10 == 4){
			printf(" копейки");
		} 
		else{
			printf(" копеек");
		}
	}
	
	return 0;
}

int addRublesAndKopeck(){

	printf("\nВведите число, если есть \nдробная часть укажите после запятой: ");
	double num;
	scanf("%lf", &num);
	
	//целое число

	double result = num / (int)num;

	if (result == 1.0){
		printf("%d рублей",(int)num);
	}
	else {
		int rubles = (int)num / 1;
		double kopeck = (num - rubles) * 100;
		int kop = (int)kopeck;
		printf("%d рублей %d копеек", rubles, kop);
	}

	printf("\n");


	return 0;
}

int canBeTriangleAndWhichOne(){
	double a, b, c;
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);

	if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a)){
		printf("Треугольник существует\n");
	}
	else {
		printf("Треугольника не существует\n");
		return -1;
	}

	double alpha = cosinus3(b, c, a);
	double betta = cosinus3(a, c, b);
	double gamma = cosinus3(a, b, c);
	double eps = 1.0e-6;
	if ((fabs(alpha) < eps) || (fabs(betta) < eps) || (fabs(gamma) < eps)) {
		printf("Треугольник прямоугольный\n");
		return 0;
	}
	else if ((alpha < 0) || (betta < 0) || (gamma < 0)) {
		printf("Треугольник тупоугольный\n");
		return 0;
	}
	else {
		printf("Треугольник остроугольный\n");
		return 0;
	}
	 


	return 0;
}

int similarTriangles(){
	double a, b, c;
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);

	if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a)){
		printf("Треугольник 1 существует\n");
	}
	else {
		printf("Треугольника 1 не существует\n");
		return -1;
	}

	double a1, b1, c1;
	printf("a1 = ");
	scanf("%lf", &a1);
	printf("b1 = ");
	scanf("%lf", &b1);
	printf("c1 = ");
	scanf("%lf", &c1);

	if ((a1 > 0) && (b1 > 0) && (c1 > 0) && (a1 + b1 > c1) && (a1 + c1 > b1) && (b1 + c1 > a1)){
		printf("Треугольник 2 существует\n");
	}
	else {
		printf("Треугольника 2 не существует\n");
		return -1;
	}

	double max1 = maxOfThree(a, b, c);
	double max2 = maxOfThree(a1, b1, c1);

	double koeff = max1/max2;

	double min1 = minOfThree(a, b, c);
	double min2 = minOfThree(a1, b1, c1);

	int isOk = 1;
	if (min1 / min2 != koeff){
		printf("треугольники не подобные\n");
		isOk = 0;
		return -1;
	}

	double avg1 = AvgOfThree(a, b, c);
	double avg2 = AvgOfThree(a1, b1, c1);

	if (avg1 / avg2 != koeff){
		printf("треугольники не подобные\n");
		isOk = 0;
		return -1;
	}

	if (isOk = !0){
		printf("треугольники подобные\n");
	}

	return 0;
}
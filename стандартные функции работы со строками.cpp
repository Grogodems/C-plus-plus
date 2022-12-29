//strlen(str) Ц длина строки str;
//strcmp(str1, str2) Ц сравнение строк str1 и str2;
//strcat(str1, str2) Ц конкатенаци€(склеивание) двух строк.  строке str1 в конце приклеиваетс€ строка str2.
//strcpy(str1, str2) Ц копирование строки str2 в строку str1;

#include <stdio.h>
#include <string.h>

int main(void) {
	// объ€вл€ем три строки
	char str1[19] = "Peace! ";

	int l1 = strlen(str1); // вычисл€ем длину первой строки

	// выводим на экран строку str1 и еЄ длину
	printf("%d\n", l1);

	return 0;
}


int main(void) {
	// объ€вл€ем три строки
	char str1[19] = "Peace! ";
	char str2[] = "Labor! ";
	char str3[] = "May!";

	// выводим строки на экран
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n\n", str3);

	// присоедин€ем к первой строке вторую
	strcat(str1, str2);
	// теперь str1 = "Peace! Labor!"

	// присоедин€ем к первой строке третью 
	strcat(str1, str3);
	// теперь str1 = "Peace! Labor! May!"

	// выводим на экран строку str1 и еЄ длину
	printf("str1: %s %d\n", str1, strlen(str1));

	return 0;
}


int main(void) {
	char  str1[] = "hello world",
		str2[] = "hello world",
		str3[] = "hello World";
	// сравниваем строки между собой
	int n12 = strcmp(str1, str2);
	int n13 = strcmp(str1, str3);
	int n31 = strcmp(str3, str1);

	// выводим строки и результат работы strcmp  
	printf(" %s i %s =  %d\n", str1, str2, n12);
	printf(" %s i %s = %d\n", str1, str3, n13);
	printf(" %s i %s = %d\n", str3, str1, n31);

	// выводим седьмой символ в строке и его ASCII-код
	printf("%c / %d\n", str1[6], str1[6]);
	printf("%c / %d\n", str3[6], str3[6]);

	return(0);
}



int main(void) {
	char  str1[] = "Hello World!",
		str2[] = "Hi man!";
	printf("str1: %s \nstr2 %s\n\n", str1, str2);

	strcpy(str1, str2);

	printf("str1: %s \nstr2 %s\n", str1, str2);

	return(0);
}
//strlen(str) � ����� ������ str;
//strcmp(str1, str2) � ��������� ����� str1 � str2;
//strcat(str1, str2) � ������������(����������) ���� �����.� ������ str1 � ����� ������������� ������ str2.
//strcpy(str1, str2) � ����������� ������ str2 � ������ str1;

#include <stdio.h>
#include <string.h>

int main(void) {
	// ��������� ��� ������
	char str1[19] = "Peace! ";

	int l1 = strlen(str1); // ��������� ����� ������ ������

	// ������� �� ����� ������ str1 � � �����
	printf("%d\n", l1);

	return 0;
}


int main(void) {
	// ��������� ��� ������
	char str1[19] = "Peace! ";
	char str2[] = "Labor! ";
	char str3[] = "May!";

	// ������� ������ �� �����
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n\n", str3);

	// ������������ � ������ ������ ������
	strcat(str1, str2);
	// ������ str1 = "Peace! Labor!"

	// ������������ � ������ ������ ������ 
	strcat(str1, str3);
	// ������ str1 = "Peace! Labor! May!"

	// ������� �� ����� ������ str1 � � �����
	printf("str1: %s %d\n", str1, strlen(str1));

	return 0;
}


int main(void) {
	char  str1[] = "hello world",
		str2[] = "hello world",
		str3[] = "hello World";
	// ���������� ������ ����� �����
	int n12 = strcmp(str1, str2);
	int n13 = strcmp(str1, str3);
	int n31 = strcmp(str3, str1);

	// ������� ������ � ��������� ������ strcmp  
	printf(" %s i %s =  %d\n", str1, str2, n12);
	printf(" %s i %s = %d\n", str1, str3, n13);
	printf(" %s i %s = %d\n", str3, str1, n31);

	// ������� ������� ������ � ������ � ��� ASCII-���
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
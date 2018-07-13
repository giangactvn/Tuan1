/*
Viết chương trình đảo xâu. Đầu vào là 1 xâu kí tự bất kì (nhập từ bàn phím), in ra
màn hình xâu đã đảo.
*/
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

char *daoxau(char *s)
{
	char *temp, i;
	i = 0;
	temp = (char *)malloc(strlen(s) + 1);
	while (i<strlen(s))
		*(temp + i) = *(s + strlen(s) - i++ - 1);
	*(temp + i) = 0;
	return temp;
}
int main() 
{
	printf("\n\t\t\t**** Chuong trinh dao xau ****\n\n");
	char s1[100];
	printf("Nhap xau: ");
	gets(s1);
	printf("\nXau sau khi dao nguoc la: ");
	printf("\"%s\"", daoxau(s1));
	getchar();
}

/*
Nhập 1 xâu từ bàn phím, in ra màn hình số kí tự là chữ cái hoa, số kí tự là chữ cái
thường.
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>


int demkthoa(char s[])
{
	int i, dem = 0;
	for (i = 0; i<strlen(s); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			dem++;
	}
	return dem;
}
int demktthuong(char s[])
{
	int i, dem = 0;
	for (i = 0; i<strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			dem++;
	}
	return dem;
}
int main()
{
	printf("\n\t\t**** In ra man hinh so ky tu la chu cai hoa, so ky tu la chu cai thuong tu mot xau ****\n\n");
	char s[100];
	printf("Moi ban nhap vao 1 xau: ");
	gets(s);
	printf("So ki tu hoa la  :  %d\n", demkthoa(s));
	printf("So ki tu thuong la  :  %d", demktthuong(s));
	getchar();
}
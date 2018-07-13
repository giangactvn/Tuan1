/*
Viết chương trình nhập vào 1 số nguyên n có 3 chữ số (từ bàn phím). In ra màn
hình các chữ số theo thứ tự giảm dần.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	printf("\t\t\t\t\t*** In ra cac so theo thu tu giam dan ***\n\n\n");
	int n;
	do
	{
		printf("Nhap so nguyen n co 3 chu so: ");
		scanf("%d", &n);
		if (n<100 || n>999)
		{
			printf("So ban vua nhap khong dung, moi nhap lai...\n");
		}
	} while (n < 100 || n>999);

	printf("so vua nhap la: %d\n", n);
	int  a, b, c, temp;
	a = n / 100;
	b = ((n % 100) / 10);
	c = n % 10;

	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b<c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	printf("so theo thu tu giam dan la: %d%d%d", a, b, c);
	getchar();
	getchar();
	return 0;
}
/*
Viết 2 hàm tìm UCLN và BCNN của 2 số nguyên dương.
*/
#include <stdio.h>
#include <stdlib.h>

int UCLN(int m, int n)
{
	while (m != 0 && n != 0)
	{
		if (n>m)
			n = n - m;
		else m = m - n;
	}
	if (n == 0)
		return m;
	else return n;
}

int BSCNN(int a, int b)
{
	int c;
	c = a*b / UCLN(a, b);
	return c;
}
int main()
{
	printf("\n\t\t\t**** Chuong trinh tim UCLN va BCNN ****\n\n");
	int m, n;
	printf("Nhap so thu nhat: ");
	scanf("%d", &n);
	printf("\nNhap so thu hai: ");
	scanf("%d", &m);
	printf("\nUCLN(%d,%d)= %d", m, n, UCLN(m, n));
	printf("\nBSCNN(%d,%d)= %d", m, n, BSCNN(m, n));
	getchar();
	getchar();
	return 0;
}

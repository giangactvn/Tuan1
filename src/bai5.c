/*
Viết chương trình nhập vào: ngày, tháng, năm (từ bàn phím). Kiểm tra xem ngày
tháng năm đó có hợp lệ hay không, nếu không – in ra màn hình “Không hợp lệ”, nếu có –
cho biết năm đó có phải năm nhuận hay không?
*/
#include <stdio.h>
#include <stdlib.h>

int Date(int d1, int m1, int y1)
{
	int d;
	switch (m1)
	{
	case 1: d = 31; break;
	case 3: d = 31; break;
	case 5: d = 31; break;
	case 7: d = 31; break;
	case 9: d = 31; break;
	case 11: d = 31; break;
	case 2:
	{
		if (y1 % 4 == 0) d = 29;
		else d = 28;
		break;
	}
	default:d = 30; break;
	}
	getchar();
	return d;
}
int main()
{
	printf("\n\t\t\t**** Chuong trinh kiem tra ngay thang nam ****\n\n");
	int d, m, y;
	printf("nhap vao ngay: ");
	scanf("%d", &d);
	printf("\nnhap vao thang: ");
	scanf("%d", &m);
	printf("\nnhap vao nam: ");
	scanf("%d", &y);
	if (m>12)
	{
		printf("\nKhong hop le!");
		getchar();
		return 0;
	}
	if (d>Date(d, m, y))
	{
		printf("\nKhong hop le!");
		getchar();
		return 0;
	}
	if (y % 4 == 0)
		printf("\nHop le: %d/%d/%d la nam nhuan", d, m, y);
	else         
		printf("\nHop le: %d/%d/%d ", d, m, y);
	getchar();
	return 0;
}

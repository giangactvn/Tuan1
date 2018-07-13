/*
Viết chương trình tính tiền cước taxi, biết rằng:
- Giá mở cửa + km đầu tiên: 10.000 VNĐ.
- Mỗi 200m tiếp theo: 1.500 VNĐ.
- Nếu lớn hơn 30km thì mỗi km thêm tính giá: 8.000 VNĐ.
Nhập vào số m đã đi từ bàn phím, in ra màn hình số tiền phải trả?
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\n\t\t\t**** Chuong trinh tinh tien taxi ****\n\n");
	int n, m;
	int t1, t2, t3;
	printf(" Nhap vao so met da di: ");
	scanf("%d", &n);
	if (n <= 1000)
	{
		t1 = 10000;
		printf(" Tong tien phai tra la: %d VND", t1);
	}
	if (n>1000 && n <= 30000)
	{
		m = n - 1000;
		t2 = 10000 + m * 1500 / 200;
		printf(" Tong tien phai tra la: %d VND", t2);
	}
	if (n>30000) 
	{
		t3 = 10000 + 1500 * 29000 / 200 + (n - 30000) * 8000 / 1000;
		printf(" Tong tien phai tra la: %d VND", t3);
	}
	getchar();
	getchar();
	return 0;
}

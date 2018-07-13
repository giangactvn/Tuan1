/*
Viết chương trình chuẩn hóa xâu: đầu vào là 1 xâu kí tự (nhập từ bàn phím), in ra
màn hình xâu đã chuẩn hóa (đầu và cuối xâu không tồn tại dấu cách, trong xâu không có
2 dấu cách đặt cạnh nhau, trước dấu phẩy hoặc dấu chấm không có dấu cách, sau dấu
chấm, dấu phẩy phải có 1 dấu cách, không được phép tồn tại hai dấu phẩy, dấu chấm liền
nhau).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	printf("\n\t\t\t**** Chuong trinh chuan hoa xau ****\n\n");
	int i; char s[255];
	printf("nhap xau:"); gets(s);
	fflush(stdin);
	// xóa kí tự trắng ở đầu câu
	while (s[0] == ' ')
		strcpy(&s[0], &s[1]);
	// xóa kí tự trắng ở cuối câu
	while (s[strlen(s) - 1] == ' ')
		strcpy(&s[strlen(s) - 1], &s[strlen(s)]);
	//xoá kí tự trắng thừa
	for (i = 0; i<strlen(s); i++)
		if ((s[i] == ' ') && (s[i + 1] == ' '))
		{
			strcpy(&s[i], &s[i + 1]);
			i--;
		}
	//không tồn tại hai dấu chấm,hai dấu phẩy
	for (i = 0; i < strlen(s); i++)
	{
		if ((s[i] == ',') && (s[i + 1] == ','))
		{
			strcpy(&s[i], &s[i + 1]);
			i--;
		}
		if ((s[i] == '.') && (s[i + 1] == '.'))
		{
			strcpy(&s[i], &s[i + 1]);
			i--;
		}

	}
	//trước dấu phẩy hoặc chấm không có dấu cách
	for (i = 0; i < strlen(s); i++)
	{
		if ((s[i] == ' '))

		{
			if (s[i + 1] == '.' || (s[i + 1] == ','))
			{
				strcpy(&s[i], &s[i + 1]);
				i--;
			}
		}

	}

	printf("xau da chuan hoa : \"%s\"", s);
	getchar();
}


# include <stdio.h>
int main()
{
	int n, sum;
	printf("����һ������");    //����һ����λ��
	scanf_s("%d", &n);

	int a = n / 1 % 10;
	int b = n / 10 % 10;
	int c = n / 100 % 10;
	int d = n / 1000 % 10;

	printf("��λ��%d\n", a);
	printf("ʮλ��%d\n", b);
	printf("��λ��%d\n", c);
	printf("ǧλ��%d\n", d);

	sum = a + b + c + d;
	printf("sum = %d\n", sum);

	return 0;
}
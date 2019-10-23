# include <stdio.h>
int main()
{
	int n, sum;
	printf("输入一个数：");    //任意一个四位数
	scanf_s("%d", &n);

	int a = n / 1 % 10;
	int b = n / 10 % 10;
	int c = n / 100 % 10;
	int d = n / 1000 % 10;

	printf("个位：%d\n", a);
	printf("十位：%d\n", b);
	printf("百位：%d\n", c);
	printf("千位：%d\n", d);

	sum = a + b + c + d;
	printf("sum = %d\n", sum);

	return 0;
}
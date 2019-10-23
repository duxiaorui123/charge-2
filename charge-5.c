///*
//	将数字的倒着排序
//*/
//# include <stdio.h>
//int main()
//{
//	int a[7] = { 1,2,3,4,5,6,7 };
//	int i, j, t;
//
//	i = 0;
//	j = 6;
//	while (i < j)			//while循环
//	{
//		t = a[i];			//交换数组中的数值	
//		a[i] = a[j];
//		a[j] = t;
//		++i;				//避免死循环
//		--j;
//	}
//
//	for (i = 0; i < 7; ++i)				//for循环
//		printf("%d\n",a[i]);			//将数字从一到七倒着排序
//
//	return 0;
//}
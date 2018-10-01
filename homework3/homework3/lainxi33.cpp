//1.将数组A中的内容和数组B中的内容进行交换
//#include <stdio.h>
//#include <stdlib.h>
//int exchange(int *a, int *b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//	return 0;
//}
//int main() 
//{
//	int a[5] = {12,45,8,46,7};
//	int b[5] = {96,64,31,13,21};
//	int i = 0;
//	//printf("请输入两组数，每一组5个\n");
//	//for (i = 0; i < 5; i++) {
//	//	scanf_s("%d", &a[i]);   
//	//}
//	//for (i = 0; i < 5; i++) {
//	//	scanf_s("%d", &b[i]);
//	//}
//	printf("arraya:\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	printf("arrayb:\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		exchange(&a[i], &b[i]);
//	}
//	printf("\n");
//	printf("arraya:\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	printf("arrayb:\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	system("pause");
//	return 0;
//}
//2.计算1/1-1/2+1/3-1/4+......+1/99-1/100的值
//方法1：
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{  
//	int i ;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;
//先对奇数项即全部是正数的项进行求和
//	for (i = 1; i <= 99; i += 2)
//	{
//		sum1 += 1.0 / i;
//		}
//	printf("sum1 = %1f\n", sum1);
//再对偶数项即全部是负数的项进行求和
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 -= 1.0 / i;
//	}
//	printf("sum2 = %1f\n", sum2);
//最后将奇数项和偶数项再进行相加
//	sum = sum1 + sum2;
//		printf("这个算式求和为：sum=%lf", sum);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double i = 1, t = 0, sum = 0, sign = -1;
//	do {
//		sign = -sign;
//		t = sign / i;
//		sum = sum + t;
//		i++;
//	}
//	while (i <= 100);
//	printf("sum = %1f\n", sum);
//	system("pause");
//	return 0;
//}
////方法2：
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int sign = 1;
//	int i = 1;
//	double sum = 0;
//	for (i = 1; i < 101; i++)
//	{
//		sum += 1.0 / (i*sign);
//	//这个地方就是处理符号位的
//	//因为每一次的正副正好是相反的那么就用相反数来达到需求
//		sign = -sign;
//	}
//	printf("算式求和为：%lf", sum);
//
//	system("pause");
//	return 0;
//}
////3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//	int i = 1;
//	int unit = 0;//个位数字
//	int decade = 0;//十位数字
//	int sum = 0;
//	for (i = 1; i < 100; i++)
//	{
//		unit = i % 10;//求得一个数的个位数字
//		decade = (i - (i % 10)) / 10;//求得一个数的十位数字
//		//分别对个位数字和十位数字是否有9进行判断，如果有则计数加1
//		//最后得到1——100出现9的次数
//		if (unit == 9)
//		{
//			sum += 1;
//		}
//		if (decade == 9)
//		{
//			sum += 1;
//		}
//	}
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}


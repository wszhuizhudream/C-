//1.1.在屏幕上输出以下图案： 
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//图形1：
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i <= 6; i += 2)
//	{
//		for (j = 0; j <= 5 - i; j++)
//			printf(" ");
//		for (k = 0; k <= 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 1; i <= 5; i += 2)
//	{
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (k = 0; k <= 10 - 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
////图形2：
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i <= 6; i ++)
//	{
//		for (j = 0; j <= 5 - i; j++)
//			printf(" ");
//		for (k = 0; k <= 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 1; i <= 5; i ++)
//	{
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (k = 0; k <= 10 - 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
////2.求出0～999之间的所有“水仙花数”并输出。 
////“水仙花数”是指一个三位数，其各位数字的立方和恰好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
////在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
////例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
////153 = 1^3 + 5^3 + 3^3。
////370 = 3^3 + 7^3 + 0^3。 
////371 = 3^3 + 7^3 + 1^3。
////407 = 4^3 + 0^3 + 7^3。
////分析：
////首先我们需要知道对于一个整数它的个位数字、十位数字、百位数字应该怎么计算
////然后对三位数进行讨论，再设定一个计数器，当遇到水仙花数的时候就加1
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int n = 100;
//	int sum = 0;
//	int unit = 0;
//	int decade = 0;
//	int hundreds = 0;
//	printf("水仙花数：\n");
//	for (n = 100; n < 1000; n++)
//	{
//		
//		hundreds = n / 100; 
//		decade = n / 10 % 10; 
//		unit= n % 10;
//		if ((hundreds * hundreds * hundreds + decade * decade * decade + unit * unit * unit) == n)
//		{
//			sum += 1;
//			//输出的时候有两种模式
//			//(1)
//			printf("%d%d%d\n", hundreds, decade, unit);
//			//(2)
//			//printf("%d\n", n);
//		}
//	}
//	printf("1—999共有水仙花数：%d\n", sum);
//	system("pause");
//	return 0;
//}
////3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
////例如：2 + 22 + 222 + 2222 + 22222
////对于这个题先分别定义个、十、百、千、万变量
////然后从键盘输入一个数分别得到它的前五项
////最后进行求和输出即可
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//	{
//	int ag = 0;//个位
//	int as = 0;//十位
//	int ab = 0;//百位
//	int aq = 0;//千位
//	int aw = 0;//万位
//	int sn = 0;//前五项和
//	int i = 0;//输入的数字
//	printf("请输入一个1—9之间的数：\n");
//	scanf_s("%d", &i);
//	ag = i;
//	as = 10 * i;
//	ab = 100 * i;
//	aq = 1000 * i;
//	aw = 10000 * i;
//	sn = ag + (ag + as) + (ag + as + ab) + (ag + as + ab + aq) + (ag + as + ab + aq + aw);
//	printf("前五项之和为：%d\n", sn);
//	system("pause");
//	return 0;
//	}

//1.1.����Ļ���������ͼ���� 
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
//ͼ��1��
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
////ͼ��2��
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
////2.���0��999֮������С�ˮ�ɻ������������ 
////��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ǡ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
////�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
////����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
////153 = 1^3 + 5^3 + 3^3��
////370 = 3^3 + 7^3 + 0^3�� 
////371 = 3^3 + 7^3 + 1^3��
////407 = 4^3 + 0^3 + 7^3��
////������
////����������Ҫ֪������һ���������ĸ�λ���֡�ʮλ���֡���λ����Ӧ����ô����
////Ȼ�����λ���������ۣ����趨һ����������������ˮ�ɻ�����ʱ��ͼ�1
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
//	printf("ˮ�ɻ�����\n");
//	for (n = 100; n < 1000; n++)
//	{
//		
//		hundreds = n / 100; 
//		decade = n / 10 % 10; 
//		unit= n % 10;
//		if ((hundreds * hundreds * hundreds + decade * decade * decade + unit * unit * unit) == n)
//		{
//			sum += 1;
//			//�����ʱ��������ģʽ
//			//(1)
//			printf("%d%d%d\n", hundreds, decade, unit);
//			//(2)
//			//printf("%d\n", n);
//		}
//	}
//	printf("1��999����ˮ�ɻ�����%d\n", sum);
//	system("pause");
//	return 0;
//}
////3.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
////���磺2 + 22 + 222 + 2222 + 22222
////����������ȷֱ������ʮ���١�ǧ�������
////Ȼ��Ӽ�������һ�����ֱ�õ�����ǰ����
////����������������
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//	{
//	int ag = 0;//��λ
//	int as = 0;//ʮλ
//	int ab = 0;//��λ
//	int aq = 0;//ǧλ
//	int aw = 0;//��λ
//	int sn = 0;//ǰ�����
//	int i = 0;//���������
//	printf("������һ��1��9֮�������\n");
//	scanf_s("%d", &i);
//	ag = i;
//	as = 10 * i;
//	ab = 100 * i;
//	aq = 1000 * i;
//	aw = 10000 * i;
//	sn = ag + (ag + as) + (ag + as + ab) + (ag + as + ab + aq) + (ag + as + ab + aq + aw);
//	printf("ǰ����֮��Ϊ��%d\n", sn);
//	system("pause");
//	return 0;
//	}

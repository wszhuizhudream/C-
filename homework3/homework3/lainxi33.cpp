//1.������A�е����ݺ�����B�е����ݽ��н���
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
//	//printf("��������������ÿһ��5��\n");
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
//2.����1/1-1/2+1/3-1/4+......+1/99-1/100��ֵ
//����1��
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{  
//	int i ;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;
//�ȶ������ȫ������������������
//	for (i = 1; i <= 99; i += 2)
//	{
//		sum1 += 1.0 / i;
//		}
//	printf("sum1 = %1f\n", sum1);
//�ٶ�ż���ȫ���Ǹ�������������
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 -= 1.0 / i;
//	}
//	printf("sum2 = %1f\n", sum2);
//����������ż�����ٽ������
//	sum = sum1 + sum2;
//		printf("�����ʽ���Ϊ��sum=%lf", sum);
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
////����2��
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
//	//����ط����Ǵ������λ��
//	//��Ϊÿһ�ε������������෴����ô�����෴�����ﵽ����
//		sign = -sign;
//	}
//	printf("��ʽ���Ϊ��%lf", sum);
//
//	system("pause");
//	return 0;
//}
////3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//	int i = 1;
//	int unit = 0;//��λ����
//	int decade = 0;//ʮλ����
//	int sum = 0;
//	for (i = 1; i < 100; i++)
//	{
//		unit = i % 10;//���һ�����ĸ�λ����
//		decade = (i - (i % 10)) / 10;//���һ������ʮλ����
//		//�ֱ�Ը�λ���ֺ�ʮλ�����Ƿ���9�����жϣ�������������1
//		//���õ�1����100����9�Ĵ���
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


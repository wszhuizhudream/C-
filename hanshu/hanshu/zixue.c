//����
//����Ϊ��1.�⺯����ע����ʹ�ÿ⺯����ʱ����Ҫ������Ӧ��ͷ�ļ�
//        2.�Զ��庯��������Ҫ��Ԫ���У��������͡�����������������
////example1:
////дһ�����������ҳ����������е����ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int MAX(int a, int b)
//{
//	return (a > b) ? (a) : (b);
//}
//int main()
//	{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("����������������\n");
//	//scanf()������ʹ�ã��������ʱ�򣬲�����ʾ�Ǹ�ʽ�ַ�����Ҳ������ʾ��ʾ�ַ�����
//	//��scanf("%d,%d",&a,&b);�Ǵ���ģ�%d�м�ļ���ǷǸ�ʽ�ַ���
//	//scanf("%d %d",&a,&b);Ҳ�Ǵ���ģ��м�Ŀո�Ҳ�ǷǸ�ʽ�ַ���
//	//���������н����У�Ϊ���ܹ���������ֵ�����Բ��ÿո�����ֵ�ֿ�
//	scanf("%d%d", &a,&b);
//	max=MAX(a, b);
//	printf("�����Ϊ��%d\n", max);
//	system("pause");
//	return 0;
//	}

//example2:
//дһ�����������������α���������
////��1����ֵ����
//#include<stdio.h>
//#include<stdlib.h>
//void swap1(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int num1 = 5;
//	int num2 = 12;
//	swap1(num1, num2);
//	printf("num1=%d num2=%d\n", num1, num2);
//	system("pause");
//	return 0;
//}
////��2����ַ����
//#include<stdio.h>
//#include<stdlib.h>
//void swap2(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	swap2(&num1, &num2);
//	printf("num1=%d,num2=%d", num1, num2);
//	system("pause");
//	return 0;
//}

//�����Ĳ���
//ʵ�ʲ�����ʵ�Σ�����ʵ���������Ĳ����������ǣ����������������ʽ�������ȡ�����ʵ���Ǻ������͵������ڽ��к�������ʱ����������
//ȷ����ֵ���Ա㴫���βΡ�
//��ʽ�������βΣ���ֻ���ں��������õĹ����в���ʵ�����������ڴ浥Ԫ������ʽ�����ں���������ɺ�ͻ��Զ����٣������ʽ����ֻ��
//��������Ч��
//�����溯����ʵ�κ��βν��з�����
//��1����ֵ��
//ʵ�Ρ�����num1   10
//            num2   20
//			&num1  0x00431
//			&num2  0x00432
//�βΡ�����	x      20
//			y      10
//			&x     0x00431
//			&y     0x00432
//��swap1�����ڵ���ʱ��x��yӵ���Լ��Ŀռ䣬ͬʱӵ���˺�ʵ��һģһ�������ݡ��������ǿ��Լ򵥵���Ϊ���β�ʵ��������ʵ�൱��ʵ�ε�
//һ����ʱ��������swap1���ú��²ε�ֵ�����˸ı䣬����ʵ�����ֵ��û�иı䣬�������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸�
//����Ӱ��ʵ�Ρ�����swap1���ܴﵽ������������Ч����
//��2����ַ��
//ʵ�Ρ�����num1     10
//          num2     20
//          & num1   0x00431
//          & num2   0x00432
//�βΡ�����	x      0x00431�������ı��ַ��Ӧ��ֵ
//            y      0x00432
//            & x    0x00431
//            & y    0x00432
//��swap2���õ�ʱ�򣬴����βε�ʱ��ַ���������ǵ�ַ��Ӧ�����ݣ���swap2�����������num1��num2�ĵ�ַû�иı䣬��������ָ�������
//�����˸ı䡣���еı�������ͨ����ַȥ����������Ӧ��ֵ�ģ�����swap2���Դﵽ�������ݵ�Ч����
//��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ�����ִ��η�ʽ�����ú����ͺ�����ߵı�����������������
//ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����

//��ϰ
//1.дһ�����������ж�һ�����ǲ�������
//˼·��
//���ȵ�֪���ж�һ�����Ƿ�Ϊ������������
//��2��ʼ��ģ��ֱ��������������������м���һ�����ܱ���������ô˵���������������������Ϊ����(ע�������ж��Ƿ�Ϊ�����������һ��
//������)

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//void sushu(int a)
//{
//	int i = 2;
//	int num = (int)sqrt(a);
//	for (i = 2; i <= num; i++)
//	{
//		if (a%i == 0)
//		{
//			break;
//		}//���if��������ֹѭ��������
//	}
//	//���������ѭ�������������
//	       //��1����һ��i���Ա�����
//	       //��2����������������i�����ܱ�����������ѭ��
//	//������Ҫ����������������ж������Ƿ�Ϊ����
//	if (i <= num)
//	{
//		printf("�������������\n");
//	}
//	else
//	{
//		printf("�����������\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("������һ�����ж��Ƿ�Ϊ������\n");
//	scanf("%d", &x);
//	sushu(x);
//	system("pause");
//	return 0;
//}

//2.дһ�������ж�һ���Ƿ�Ϊ����
//˼·��
//�����ж�һ���Ƿ�Ϊ�������������
     //��1����������������꣺�ܱ�4�������ܱ�100����
     //��2��������������꣺�ܱ�400����

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void runnian(int year)
//{
//	if ((year % 4 == 0  &&  year % 100!=0) || (year % 400 == 0))
//		printf("������\n");
//	else
//		printf("��������\n");
//}
//int main()
//{
//	int year = 0;
//	printf("��������ݣ�\n");
//	scanf("%d", &year);
//	runnian(year);
//	system("pause");
//	return 0;

////3.дһ��������ʵ��һ��������������Ķ��ֲ���
////˼·��
////���ȶ���һ���������飬Ȼ����ͨ�����ַ����в���
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void found(int x)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (x < mid)
//		{
//			right = mid - 1;
//		}
//		if (x > mid)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}//����ʲô�����󶼻����ѭ�����ܹ����������������x=mid������ѭ������
//	//����������Ҫ����������������ж�
//	if (left <= right)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û���ҵ�\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("������һ����:\n");
//	scanf("%d", &x);
//	found(x);
//	system("pause");
//	return 0;
//}

////4.дһ��������ÿ����һ����������ͻὫnum��ֵ��1
////˼·��
////����һ��������num�������������������õĴ�����ÿ����һ���÷��ص�num�ͻ�����������ͨ�����ε�ʱ��ÿ�ζ���ʱ���£�
//#include<stdio.h>
//#include<stdlib.h>
//int number(num)
//{
//	num += 1;
//	return num;
//}
//int main()
//{
//	int num = 0;
//	num = number(num);//ÿ�ε��õ�ʱ��num��ֵ��Ҫ��ʱ�ĸ���
//	num = number(num);
//	num = number(num);//���������Σ����Ϊ3
//	printf("num=%d\n", num);
//	system("pause");
//	return 0;
//}

////����������Ƕ�׶��壬���ǿ���Ƕ�׵���
//#include< stdio.h>
//#include<stdlib.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//	{
//		three_line();
//		system("pause");
//		return 0;
//	}

//��ϰ��
////*1.����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�����1 2 3 4.
//#include<stdio.h>
//#include<stdlib.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//�����ĵݹ���ã�ÿ�γ���10�����Եõ����ұߣ������λ������ֵ��Ȼ������10����Ϳ������
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	system("pause");
//	return 0;
//}

////2.��д����������������ʱ���������ַ����ĳ��ȡ�
////��������ʱ��������Ҫʹ��ָ�����
//#include<stdio.h>
//#include<stdlib.h>
//int strlen(const char* str)
//{
//	if (*str == '\0')
//	return 0;
//	else
//		return 1 + strlen(str +1 );//str+1?
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = strlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

////3.��n�Ľ׳ˣ������������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int fab(int n)
//{
//	int i = 1;
//	int result = 1;
//	for (i=1; i <= n; i++)
//	{
//		result *= i;
//	}
//	return (result);
//}
//int main()
//{
//	int n = 1;
//	printf("������һ������\n");
//	scanf("%d", &n);//һ��Ҫע�⣬�����ʱ����ȡ��ַ��
//	int a=fab(n);
//	printf("n!=%d", a);
//	system("pause");
//	return 0;
//}

////4.���n��쳲��������������������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int fab(int n)
//{
//	//֪��쳲��������Ķ���
//	if (n <= 2)
//		return 1;
//	else
//		return fab(n - 1) + fab(n - 2);
//}
//int main()
//{
//	int n = 1;
//	printf("������һ������\n");
//	scanf("%d", &n);//һ��Ҫע�⣬�����ʱ����ȡ��ַ��
//	int a=fab(n);
//	printf("n!=%d", a); 
//	system("pause");
//	return 0;
//}

//��ŵ������

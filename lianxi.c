////�ڶ��£�ѭ����֧

////1.�ж�һ�����Ƿ�Ϊ����
////˼·��
////����һ���������Ƿ��ܱ�2��������������Ϊ�������
////������Ϊż�����
//#include<stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int number=0;
//	printf("������һ�������жϸ����Ƿ�Ϊ������\n");
//	scanf_s("%d", &number);
//	if (number % 2 != 0)
//	{
//		printf("%d������\n",number);
//	}
//	else {
//		printf("������������");
//	}
//	system("pause");
//	return 0;
//}

////2.���1����100֮�������
////˼·��1����100��ÿ����ģ2�ж��Ƿ�Ϊ��������Ϊ���������
////����������
//#include<stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int number=1;
//	printf("���1����100֮���������\n");
//	for(;number<101;number++)
//	{
//		if (number % 2 != 0)
//			printf("%5d", number);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

////3.switch���
////1-7�����ִ�ӡ����Ӧ�����ڼ�

//default�Ӿ䣺
//        �������ֵ�����е�case��ǩ��ֵ����ƥ����ô�죿��ʵҲûʲô�������е�����������ѡ�
//���򲢲�����ֹ��Ҳ���ᱨ����Ϊ���������C�в�����Ϊ�ʺϴ��󡣵��ǣ�����㲢������Բ�ƥ�����б�ǩ�ı��ʽ��ֵʱ����ô�죿
//����������б�������һ��default�Ӿ䣬������ı�ǩdefault��д���κ�һ��case��ǩ���Գ��ֵ�λ�á���switch���ʽ��ֵ����ƥ����
//��case��ǩ��ֵʱ�����default�Ӿ��������ͻ�ִ�С�����ÿ��switch���ֻ����һ��default�Ӿ䣬���������Գ������Ӿ��б��0
//����λ�á�


//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int day = 0;
//	printf("������һ������\n");
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("��������һ\n");
//		break;
//	case 2:
//		printf("�������ڶ�\n");
//		break;
//	case 3:
//		printf("����������\n");
//		break;
//	case 4:
//		printf("����������\n");
//		break;
//	case 5:
//		printf("����������\n");
//		break;
//	case 6:
//		printf("����������\n");
//		break;
//	case 7:
//		printf("����������\n");
//		break;
//    default:
//        break;
//	}
//	system("pause");
//	return 0;
//}

////�������ı䣺
////����1����5���"werkday",���6����7���"weekend"��
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int day = 0;
//	printf("������һ������\n");
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("werkday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//    default:
//        break;
//	}
//	system("pause");
//	return 0;
//}


////4.ѭ������е�break��contuine
////break����ֹѭ����ֱ������ѭ��
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i = i + 1;
//	}
//	system("pause");
//	return 0;
//}
////continue:������ǰѭ��������ִ����һ��ѭ��
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i = i + 1;//��continue��Ӧ�ý���1��������continueǰ�棬��������������continue�󽫲�����м�1����������ʼ����continue������
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		//i=i+1;����1����д������Ǵ����
//	}
//	system("pause");
//	return 0;
//}

////5.forѭ��
////��1��������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
////��2������for����ѭ�����Ʊ�����ȡֵ���á��뿪������䡱д����
////һ�������⣺
////����ѭ�����ٴΣ�
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
////ѭ��0�Σ���forѭ����ִ��˳��Ϊ���ʽ1�������ʽ2����������������ѭ������䡪�����ʽ3
////�ڱ��ʽ2ʱ��Ϊ�棨����0����Ϊ����������Ϊ0��Ϊ�ٲ����������������ڱ��ʽ2ʱʼ��Ϊ0��Ϊ�٣����Բ�����ѭ���壬һ��Ҳû��ִ��

////6.��д����,��ʾ����ַ��������ƶ������м���
////˼·��
////��1�����ȶ��������ַ�����һ������ֵ��һ���Ƿ���
////��2��Ȼ����������ֵ���ַ����ĳ��ȣ��õ��ַ��������䳤��
////��3��ͨ���ַ���������±꣬���ַ���1��ߵ�ֵ�����ַ���2��ߣ��ַ���1�ұߵ�ֵ�����ַ���2�ұ�
//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include <Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;//strlen()��������Ǽ���ַ���ʵ�ʳ��ȣ���1����Ϊ�ַ���������±��Ǵ�0��ʼ����
//								//������Ҫ�õ�����������±���ж�Ӧ�ĸ�ֵ��������Ҫ��1��
//	printf("%s\n", arr2);
//	////ͨ��whileѭ��ʵ��
//	//while (left <= right)
//	//{
//	//	Sleep(1000);//����,��λ�Ǻ���.��VS��ʹ��ʱ��һ����ĸsʱ��д��������ͷ�ļ���Ӧ�ü���#include <Windows.h>ͷ�ļ�
//	//	           //�ſɽ�����ȷ�ı��룬�����޷�������
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
//	//}
//	//ͨ��forѭ��
//	for (left=0,right=strlen(arr1)-1; left <= right; left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];//ע��ʱ����֪�ĸ�ֵ��δ֪��
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}

////***(����ϰ)7.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���
////������ξ�����������˳�����
////˼·��
////��ѭ������ֻ���������Σ���0��ʼ��������ô��ѭ�������Ժ�͵���3����ʱ���������жϣ��������3�򣬴�ӡ�˳�����
////������������������������ʼ��������һ�£����ӡ��½�ɹ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	//?(�ַ�����ĸ�ֵ)
//	//1.char chushi[] = "123456";//Ҳ����ֱ���ڱȽϵ�ʱ�򽫳�ʼ�������strcmp()�����С��ַ����ĸ�ֵ�������˫���ţ���Ϊ����˫���ŲŽ��ַ���
//	//2.
//		char chushi[] ={ "123456"};
//	char password[10] = { 0 };//����һ���ַ�����
//	printf("���������루��ֻ������������ᣬ�����ξ������������˳����򣩣�\n");
//	scanf("%s", password);//��Ϊ��������ַ��ʹ����ַ�����Բ���Ҫȡ��ַ��
//	for (i = 0; i < 3; i++)
//	{
//		if (strcmp(password,chushi) == 0)//strcmp()�������ǽ��бȽ������ַ�����Ӧ��ÿ��Ԫ�أ�
//										 //ֻ�е����е�Ԫ�ض���ͬʱ�ַ�������ȡ��ַ���Ҳ��ͨ��strcmp()�������бȽϴ�С��
//										 //�Ƚ϶�Ӧ�ַ���ASCII��ֵ�����Ĺ����ǣ����ֵ��򡱡�
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3)//�������������˵������������������
//	{
//		printf("�˳�����\n");
//		exit(1);//��ֹ����
//	}
//	system("pause");
//	return 0;
//}

////8.����n�Ľ׳�
////˼·��
////�Ӽ�������һ����Ϊn��Ȼ��ÿ��ˢ�³˻����Ǹ�ֵ���ﵽ�׳˵�Ч��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 1;//ע�������ʼ����ʱ��Ҫ����0����Ϊ0�����κ���������0
//	int i = 1;
//	int s = 1;
//	printf("������һ������������Ľ׳ˣ�\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)//�����۳�
//	{
//		s *= i;//n�Ǹ�ȷ����ֵ��һ������Ͳ����ҸĶ���
//	}
//	printf("�����Ľ׳�Ϊ��%d\n", s);
//	system("pause");
//	return 0;
//}

////9.����1��+2��+3��+......+10��
////˼·��
////������ѭ�������ѭ�����Ƽӷ����ڲ�ѭ�����ƽ׳�
////���ȶ���һ���������ڶ�ÿ�εĽ׳˽��и���
////Ȼ����һ���������ۼӽ��и���
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	int n = 1;
//	int sum = 0;
//	int multip = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			multip *= n;
//		}
//		sum += multip;
//	}
//	printf("����ʽ��Ϊ��%d\n", sum);
//	system("pause");
//	return 0;
//}

//10.***�۰����
////��1��
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//    //sizeof()���������������ĳ���,sizeof(arr[0])���������һ��Ԫ�صĳ���,����ÿ��Ԫ�صĳ��ȣ��������ܳ�����һ��Ԫ�ص�
//    //���ȵõ�����Ԫ�ظ���������left��right��ʾ���䣬���������Ԫ���±꣬������Ҫ��1��
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;//����������м�ֵ��ôҪ�ҵ�ֵ�϶��ų���mid��������Ҫ��1����
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//	else
//		printf("�Ҳ���");
//	system("pause");
//	return 0;
//}

////(2)ʵ��һ�����ֲ��Һ���
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = arr[mid] - 1;
//		}
//		else
//			return mid;//�ҵ��˲��ҷ����±�
//	}
//	return -1;//û���ҵ�
//}

////***��3����������Ϸʵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************************\n");
//	printf("*********1.��ʼ     ************\n");
//	printf("*********0.����     ************\n");
//	printf("********************************\n");
//}
////TDD-������������
////RAND_MAX--rand�����ܷ�������������ֵ
//void game()
//{
//  int random_num = rand() % 100 + 1;//rand()�ǲ���������ĺ�����ģ��100�õ�����Ϊ[0,99],�ټ�1�õ�[1,100]
//  int input = 0;
//  while (1)
//{
//	printf("������µ�����>:");
//	scanf("%d", &input);
//	if (input > random_num)
//	{
//		printf("�´���\n");
//	}
//	else if(input<random_num)
//	{
//		printf("��С��\n");
//	}
//	else
//	{
//		printf("��ϲ�㣬�����\n");
//		break;
//	}
//  }
//}
//int main()
//{
//	int input = 0;
//	//srand((unsigned)time(NULL))�ǳ�ʼ������������ӣ�
//	//1.���õ�ǰϵͳʱ����Ϊ���ӣ�����ʱ���Ǳ仯�ģ������Ǳ仯�ģ����Բſ��Բ�����ͬ���������
//	//������е������ʵ���϶������������������������θ���������һ���ģ��ǻ�����ͬ����������еġ����ԣ�һ��
//	//�����Ե�ǰ��ʱ����Ϊ������������������������Ӳ�������������ӵ����;
//	//2.ʹ��ʱ������������unsigned�͵��������ݣ�����srand(10);
//	//3.�����ʹ��srand,��rand()��������������ڶ�������£����������һ���ġ���rand( )ֻ������������ġ�
//	srand((unsigned)time(NULL));
//	do 
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ��������������룺\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
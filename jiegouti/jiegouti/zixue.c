 //1.�ṹ�������
//struct tag
//{
//	member - list;
//}; variable - list;
//eg:
//struct student
//{
//	char name[100];
//	int age;
//	char sex[20]
//};

////2.�ṹ������Ķ���ͳ�ʼ��
//struct point
//{
//	int x;
//	int y;
//}p1;//������ʱ����ṹ�����1
//struct point p2;//����ṹ�����2

////3.�ṹ���Ա�ķ���
//(1)ͨ��( .)���ʵ�
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main() {
//	struct stu s1;
//	s1.age = 20;
//	strcpy(s1.name, "zhangsan");
//}

////(2)�ṹ��ָ�����ָ������ĳ�Ա
////��ʱ�����ǵõ��Ĳ���һ���ṹ�����������ָ��һ���ṹ���ָ�롣��ô����η��ʳ�Ա��
//#include<stdio.h>
//#include<stdlib.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//void print(struct stu* ps)
//{
//	printf("name=%s  age=%d\n", (*ps).name, (*ps).age);
//	//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
//	printf("name=%s  age=%d", ps->name, ps->age);
//}
//int main()
//{
//	struct stu s = { "zhangsan",20 };
//	print(&s);//�ṹ���ַ����
//	system("pause");
//	return 0;
//}

////4.�ṹ�崫��
////eg��
//#include<stdio.h>
//#include<stdlib.h>
//struct s
//{
//	int data[1000];
//	int num;
//};
//struct s s1 = { {1,2,3,4},1000 };
////�ṹ�崫��
//void print1(struct s s1)
//{
//	printf("%d\n", s1.num);
//}
////�ṹ���ַ����
//void print2(struct s* s1)
//{
//	printf("%d\n", s1->num);
//}
//int main()
//{
//	print1(s1);
//	print2(&s1);
//	system("pause");
//	return 0;
//}
////�����print1��print2�����ĸ����ã�
////�𰸣�print2���á���Ϊ���ں���ջ֡�������ڴ��ε�ʱ�򣬲�������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��
////ϵͳ�����Ƚϴ󣬻ᵼ�������½���
////*���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��

#define M 10
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	n = M * 12;
	printf("M");
	printf("%d\n", n);
	system("pause");
	return 0;
}
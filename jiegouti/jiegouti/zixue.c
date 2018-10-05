 //1.结构体的声明
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

////2.结构体变量的定义和初始化
//struct point
//{
//	int x;
//	int y;
//}p1;//声明的时候定义结构体变量1
//struct point p2;//定义结构体变量2

////3.结构体成员的访问
//(1)通过( .)访问的
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

////(2)结构体指针访问指向变量的成员
////有时候我们得到的不是一个结构体变量，而是指向一个结构体的指针。那么该如何访问成员：
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
//	//使用结构体指针访问指向对象的成员
//	printf("name=%s  age=%d", ps->name, ps->age);
//}
//int main()
//{
//	struct stu s = { "zhangsan",20 };
//	print(&s);//结构体地址传参
//	system("pause");
//	return 0;
//}

////4.结构体传参
////eg：
//#include<stdio.h>
//#include<stdlib.h>
//struct s
//{
//	int data[1000];
//	int num;
//};
//struct s s1 = { {1,2,3,4},1000 };
////结构体传参
//void print1(struct s s1)
//{
//	printf("%d\n", s1.num);
//}
////结构体地址传参
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
////上面的print1和print2函数哪个更好？
////答案：print2更好。因为存在函数栈帧，函数在传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的
////系统开销比较大，会导致性能下降。
////*结论：结构体传参的时候，要传结构体的地址。

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
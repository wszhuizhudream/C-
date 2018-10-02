//函数
//分类为：1.库函数：注意再使用库函数的时候需要加上相应的头文件
//        2.自定义函数：它需要的元素有：返回类型、函数名、函数参数
////example1:
////写一个函数可以找出两个整数中的最大值
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
//	printf("请输入两个整数：\n");
//	//scanf()函数的使用，在输入的时候，不能显示非格式字符串，也不能显示提示字符串。
//	//如scanf("%d,%d",&a,&b);是错误的，%d中间的间隔是非格式字符串
//	//scanf("%d %d",&a,&b);也是错误的，中间的空格也是非格式字符串
//	//但是在运行界面中，为了能够区分两个值，所以采用空格将两个值分开
//	scanf("%d%d", &a,&b);
//	max=MAX(a, b);
//	printf("最大数为：%d\n", max);
//	system("pause");
//	return 0;
//	}

//example2:
//写一个函数交换两个整形变量的内容
////（1）传值调用
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
////（2）传址调用
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

//函数的参数
//实际参数（实参）：真实传给函数的参数，可以是：常量、变量、表达式、函数等。无论实参是何种类型的量，在进行函数调用时，都必须是
//确定的值，以便传给形参。
//形式参数（形参）：只有在函数被调用的过程中才能实例化（分配内存单元）。形式参数在函数调用完成后就会自动销毁，因此形式参数只在
//函数中有效。
//对上面函数的实参和形参进行分析：
//（1）传值：
//实参——》num1   10
//            num2   20
//			&num1  0x00431
//			&num2  0x00432
//形参——》	x      20
//			y      10
//			&x     0x00431
//			&y     0x00432
//在swap1函数在调用时，x、y拥有自己的空间，同时拥有了和实参一模一样的内容。所以我们可以简单的认为：形参实例化后其实相当于实参的
//一份临时拷贝。在swap1调用后，新参的值发生了改变，但是实参里的值并没有改变，函数的形参和实参分别占有不同的内存块，对形参的修改
//不会影响实参。所以swap1不能达到交换两个数的效果。
//（2）传址：
//实参——》num1     10
//          num2     20
//          & num1   0x00431
//          & num2   0x00432
//形参——》	x      0x00431——》改变地址对应的值
//            y      0x00432
//            & x    0x00431
//            & y    0x00432
//在swap2调用的时候，传给形参的时地址，交换的是地址对应的内容，当swap2函数调用完后，num1、num2的地址没有改变，但它们所指向的内容
//发生了改变。所有的变量都是通过地址去访问其所对应的值的，所以swap2可以达到交换内容的效果。
//传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。这种传参方式可以让函数和函数外边的变量建立起真正的联
//系，也就是函数内部可以直接操作函数外部的变量。

//练习
//1.写一个函数可以判断一个数是不是素数
//思路：
//首先得知道判断一个数是否为素数的条件：
//从2开始求模，直到等于这个数，若在这中间有一个数能被整除，那么说明这个数不是素数，否则为素数(注意用来判断是否为素数的这个数一定
//是整数)

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
//		}//这个if条件是终止循环的条件
//	}
//	//结束上面的循环有两种情况：
//	       //（1）有一个i可以被整除
//	       //（2）所有满足条件的i都不能被整出，结束循环
//	//所以需要对这两种情况进行判定，看是否为素数
//	if (i <= num)
//	{
//		printf("这个数不是素数\n");
//	}
//	else
//	{
//		printf("这个数是素数\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("请输入一个数判断是否为素数：\n");
//	scanf("%d", &x);
//	sushu(x);
//	system("pause");
//	return 0;
//}

//2.写一个函数判断一年是否为闰年
//思路：
//首先判断一年是否为闰年有两种情况
     //（1）不是世纪年的闰年：能被4整除不能被100整除
     //（2）是世纪年的闰年：能被400整除

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void runnian(int year)
//{
//	if ((year % 4 == 0  &&  year % 100!=0) || (year % 400 == 0))
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//}
//int main()
//{
//	int year = 0;
//	printf("请输入年份：\n");
//	scanf("%d", &year);
//	runnian(year);
//	system("pause");
//	return 0;

////3.写一个函数，实现一个整形有序数组的二分查找
////思路：
////首先定义一个有序数组，然后再通过二分法进行查找
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
//	}//不管什么情况最后都会结束循环，总共有两种情况：满足x=mid或不满足循环条件
//	//所以下面需要对这两种情况进行判断
//	if (left <= right)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没有找到\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("请输入一个数:\n");
//	scanf("%d", &x);
//	found(x);
//	system("pause");
//	return 0;
//}

////4.写一个函数，每调用一次这个函数就会将num的值加1
////思路：
////定义一个计数器num，用来计数函数被调用的次数，每调用一次让返回的num就会自增，必须通过传参的时候每次都及时更新；
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
//	num = number(num);//每次调用的时候num的值需要及时的更新
//	num = number(num);
//	num = number(num);//调用了三次，最后为3
//	printf("num=%d\n", num);
//	system("pause");
//	return 0;
//}

////函数不可以嵌套定义，但是可以嵌套调用
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

//练习：
////*1.接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出1 2 3 4.
//#include<stdio.h>
//#include<stdlib.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//函数的递归调用，每次除以10都可以得到最右边（即最低位）的数值，然后再与10求余就可以输出
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

////2.编写函数，不允许创建临时变量，求字符串的长度。
////不许创建临时变量就需要使用指针变量
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

////3.求n的阶乘（不考虑溢出）
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
//	printf("请输入一个数：\n");
//	scanf("%d", &n);//一定要注意，输入的时候有取地址符
//	int a=fab(n);
//	printf("n!=%d", a);
//	system("pause");
//	return 0;
//}

////4.求第n个斐波那契数（不考虑溢出）
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int fab(int n)
//{
//	//知道斐波那契数的定义
//	if (n <= 2)
//		return 1;
//	else
//		return fab(n - 1) + fab(n - 2);
//}
//int main()
//{
//	int n = 1;
//	printf("请输入一个数：\n");
//	scanf("%d", &n);//一定要注意，输入的时候有取地址符
//	int a=fab(n);
//	printf("n!=%d", a); 
//	system("pause");
//	return 0;
//}

//汉诺塔问题

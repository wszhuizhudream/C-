////第二章：循环分支

////1.判断一个数是否为奇数
////思路：
////输入一个数看它是否能被2整除，若不能则为奇数输出
////若能则为偶数输出
//#include<stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int number=0;
//	printf("请输入一个数。判断该数是否为奇数：\n");
//	scanf_s("%d", &number);
//	if (number % 2 != 0)
//	{
//		printf("%d是奇数\n",number);
//	}
//	else {
//		printf("该数不是奇数");
//	}
//	system("pause");
//	return 0;
//}

////2.输出1——100之间的奇数
////思路：1——100的每个数模2判断是否为奇数，若为奇数则输出
////否则不做处理
//#include<stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int number=1;
//	printf("输出1——100之间的奇数：\n");
//	for(;number<101;number++)
//	{
//		if (number % 2 != 0)
//			printf("%5d", number);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

////3.switch语句
////1-7的数字打印出对应的星期几

//default子句：
//        如果表达的值域所有的case标签的值都不匹配怎么办？其实也没什么——所有的语句跳过而已。
//程序并不会终止，也不会报错，因为这种情况下C中并不认为适合错误。但是，如果你并不想忽略不匹配所有标签的表达式的值时该怎么办？
//可以在语句列表中增加一条default子句，把下面的标签default：写在任何一个case标签可以出现的位置。当switch表达式的值并不匹配所
//有case标签的值时，这个default子句后面的语句就会执行。所以每个switch语句只能有一个default子句，但是它可以出现在子句列表的0
//任意位置。


//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int day = 0;
//	printf("请输入一个数：\n");
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("今天星期一\n");
//		break;
//	case 2:
//		printf("今天星期二\n");
//		break;
//	case 3:
//		printf("今天星期三\n");
//		break;
//	case 4:
//		printf("今天星期四\n");
//		break;
//	case 5:
//		printf("今天星期五\n");
//		break;
//	case 6:
//		printf("今天星期六\n");
//		break;
//	case 7:
//		printf("今天星期天\n");
//		break;
//    default:
//        break;
//	}
//	system("pause");
//	return 0;
//}

////需求发生改变：
////输入1——5输出"werkday",输出6——7输出"weekend"。
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int day = 0;
//	printf("请输入一个数：\n");
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


////4.循环语句中的break和contuine
////break：终止循环，直接跳出循环
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
////continue:跳出当前循环，接着执行下一次循环
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i = i + 1;//在continue中应该将加1条件放在continue前面，否则在满足条件continue后将不会进行加1操作，这样始终是continue的条件
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		//i=i+1;将加1条件写在这就是错误的
//	}
//	system("pause");
//	return 0;
//}

////5.for循环
////（1）不可在for循环体内修改循环变量，防止for循环失去控制。
////（2）建议for语句的循环控制变量的取值采用“半开半闭区间”写法。
////一道笔试题：
////请问循环多少次：
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
////循环0次：在for循环中执行顺序为表达式1—》表达式2（满足条件）—》循环体语句—》表达式3
////在表达式2时，为真（即非0）则为满足条件，为0则为假不满足条件，所以在表达式2时始终为0即为假，所以不进入循环体，一次也没有执行

////6.编写代码,演示多个字符从两端移动，向中间汇聚
////思路：
////（1）首先定义两个字符串，一个是有值的一个是符号
////（2）然后求得这个有值的字符串的长度，得到字符串的区间长度
////（3）通过字符串数组的下标，将字符串1左边的值符合字符串2左边，字符串1右边的值符合字符串2右边
//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include <Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;//strlen()这个函数是检测字符串实际长度，减1是因为字符串数组的下标是从0开始计数
//								//而这需要得到的是数组的下标进行对应的赋值，所以需要减1；
//	printf("%s\n", arr2);
//	////通过while循环实现
//	//while (left <= right)
//	//{
//	//	Sleep(1000);//休眠,单位是毫秒.在VS中使用时第一个字母s时大写，并且在头文件中应该加入#include <Windows.h>头文件
//	//	           //才可进行正确的编译，否则无法解析。
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
//	//}
//	//通过for循环
//	for (left=0,right=strlen(arr1)-1; left <= right; left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];//注意时将已知的赋值给未知的
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}

////***(多练习)7.编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，
////如果三次均输入错误，则退出程序）
////思路：
////用循环控制只能输入三次，从0开始计数，那么当循环三次以后就等于3，此时进行条件判断，如果等于3则，打印退出程序
////如果在三次以内输入密码与初始设置密码一致，则打印登陆成功
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	//?(字符数组的赋值)
//	//1.char chushi[] = "123456";//也可以直接在比较的时候将初始密码放在strcmp()函数中。字符串的赋值必须加上双引号，因为加上双引号才叫字符串
//	//2.
//		char chushi[] ={ "123456"};
//	char password[10] = { 0 };//定义一个字符数组
//	printf("请输入密码（你只有三次输入机会，若三次均输入错误则会退出程序）：\n");
//	scanf("%s", password);//因为数组的首字符就代表地址，所以不需要取地址符
//	for (i = 0; i < 3; i++)
//	{
//		if (strcmp(password,chushi) == 0)//strcmp()函数：是进行比较两个字符串对应的每个元素，
//										 //只有当所有的元素都相同时字符串才相等。字符串也能通过strcmp()函数进行比较大小，
//										 //比较对应字符的ASCII码值，它的规则是：“字典序”。
//		{
//			printf("登陆成功\n");
//			break;
//		}
//	}
//	if (i == 3)//如果条件成立则说明三次密码均输入错误
//	{
//		printf("退出程序\n");
//		exit(1);//终止程序
//	}
//	system("pause");
//	return 0;
//}

////8.计算n的阶乘
////思路：
////从键盘输入一个数为n，然后每次刷新乘积的那个值，达到阶乘的效果
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 1;//注意这儿初始化的时候不要等于0，因为0乘以任何数都等于0
//	int i = 1;
//	int s = 1;
//	printf("请输入一个数计算该数的阶乘：\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)//进行累乘
//	{
//		s *= i;//n是个确定的值，一旦输入就不能乱改动了
//	}
//	printf("该数的阶乘为：%d\n", s);
//	system("pause");
//	return 0;
//}

////9.计算1！+2！+3！+......+10！
////思路：
////用两重循环，外层循环控制加法，内层循环控制阶乘
////首先定义一个变量用于对每次的阶乘进行更新
////然后定义一个变量对累加进行更新
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
//	printf("该算式和为：%d\n", sum);
//	system("pause");
//	return 0;
//}

//10.***折半查找
////（1）
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//    //sizeof()这个函数是求数组的长度,sizeof(arr[0])是求数组第一个元素的长度,即是每个元素的长度，用数组总长除以一个元素的
//    //长度得到数组元素个数，由于left、right表示区间，即是数组的元素下标，所以需要减1；
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;//如果不等于中间值那么要找的值肯定排除了mid，所以需要减1操作
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了，下标为：%d\n", mid);
//	else
//		printf("找不到");
//	system("pause");
//	return 0;
//}

////(2)实现一个二分查找函数
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
//			return mid;//找到了并且返回下标
//	}
//	return -1;//没有找到
//}

////***（3）猜数字游戏实现
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************************\n");
//	printf("*********1.开始     ************\n");
//	printf("*********0.结束     ************\n");
//	printf("********************************\n");
//}
////TDD-测试驱动开发
////RAND_MAX--rand函数能返回随机数的最大值
//void game()
//{
//  int random_num = rand() % 100 + 1;//rand()是产生随机数的函数，模上100得到区间为[0,99],再加1得到[1,100]
//  int input = 0;
//  while (1)
//{
//	printf("请输入猜的数字>:");
//	scanf("%d", &input);
//	if (input > random_num)
//	{
//		printf("猜大了\n");
//	}
//	else if(input<random_num)
//	{
//		printf("猜小了\n");
//	}
//	else
//	{
//		printf("恭喜你，答对了\n");
//		break;
//	}
//  }
//}
//int main()
//{
//	int input = 0;
//	//srand((unsigned)time(NULL))是初始化随机函数种子：
//	//1.是拿当前系统时间作为种子，由于时间是变化的，种子是变化的，所以才可以产生不同的随机数。
//	//计算机中的随机数实际上都不是真正的随机数，如果两次给的种子是一样的，是会生成同样的随机序列的。所以，一般
//	//都会以当前的时间作为种子来生成随机数，这样更加残生的随机数更加的随机;
//	//2.使用时，参数可以是unsigned型的任意数据，比如srand(10);
//	//3.如果不使用srand,用rand()产生的随机数，在多次运行下，结果都会是一样的。而rand( )只是用来求区间的。
//	srand((unsigned)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新输入：\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
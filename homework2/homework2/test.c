////1.给定两个整形变量的值，将两个值的内容进行交换
////定义一个中间变量，进行值的传递
//#include <stdlib.h>
//#include <stdio.h>
//int main() {
//	int a = 30;
//	int b = 45;
//	int t = 0;
//	t = a;
//	a = b;
//	b = t;
//	printf("a=%d,b=%d", a, b);
//	system("pause");
//	return 0;
//
//}
//2.不允许创建临时变量，交换两个数的内容
//运用指针改变地址，通过地址的改变使得访问的内容改变
//#include <stdlib.h>
//#include <stdio.h>
//int main() {
//	int* a = 30;
//	int* b = 45;
//	int* t;
//	t = a;
//	a = b;
//	b = t;
//	printf("a=%d,b=%d", a, b);
//	system("pause");
//	return 0;
//}
////3.求10个整数中最大值
////先假定一个最大数，然后再将这个最大数和10个数比较如果小于则将最大数
////更新，最后得到最大数输出。
//#include <stdlib.h>
//#include <stdio.h>
//int main() {
//	int a[10] = { 1,4,7,4,3,9,11,26,38,30 };
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (max < a[i]) {
//			max = a[i];
//		}
//	}
//	printf("max=%d",max);
//	system("pause");
//	return 0;
//}
////4.将三个数按从小到大输出
////将两个数两两比较
//#include <stdlib.h>
//#include <stdio.h>
//int main() {
//	int a = 2;
//	int b = 24;
//	int c = 13;
//	int t = 0;
//	if (a > b) {
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (b > c) {
//		t = b;
//		b = c;
//		c = t;
//	}
//	if (a > c) {
//		t = a;
//		a = c;
//		c = t;
//	}
//	printf("%d,%d,%d", a, b, c);
//	system("pause");
//	return 0;
//}
////5.求两个数的最大公约数
#include <stdlib.h>
#include <stdio.h>
int gongyue(int a, int b) {
	int t=0;
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	if (b == 0)return a;
	else {
		t = a % b;
		while (t != 0) {
			a = b;
			b = t;
			t = a % b;
		}
		return b;
	}
}
int main(){
	int a = 0;
	int b = 0;
	int i = 0;
	printf("请输入两个数：");
	scanf_s("%d,%d", &a, &b);
	printf("最大公约数为：%d\n", gongyue(a,b));
	system("pause");
	return 0;
}


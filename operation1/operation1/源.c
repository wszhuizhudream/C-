////1.打印100到200之间的素数
////首先需要知道判断素数的条件是：小于等于该数开方的所有数中有一个数能被整除就不是素数
//#include <stdio.h>
//#include <math.h>
//int main(){
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	for (n = 101; n <= 200; n+=2) {//偶数肯定不是素数所以直接加2
//		m = sqrt(n);
//		for (i = 2; i <= m; i++) {
//			if (n%i == 0)break;//不管是不是素数的终止条件都是它
//			}
//        if (i >= m + 1) {
//					m++;
//					printf("100到200之间的素数有：\n%d\n", n);
//		}
//	}
//	system("pause");
//	return 0;
//}
////2.输出乘法口诀表
////首先分析乘法口诀表的特性，是由两个变量控制，循环嵌套分别从1到9做乘法然后按照行打印
//#include <stdio.h>
//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d\t", i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//3.判断1000年到2000年之间的闰年
#include <stdio.h>
int; main() {
	int year = 1000;
	int count = 0;
	printf("1000年到2000年之间的闰年有：\n");
	for (year = 1000; year <= 2000; year++) {
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
			count++;
			printf("%5d", year);
		}
	}
	printf("1000年到2000年之间的闰年共有：%d\n", count);
	system("pause");
	return 0;
}
////1.��ӡ100��200֮�������
////������Ҫ֪���ж������������ǣ�С�ڵ��ڸ�������������������һ�����ܱ������Ͳ�������
//#include <stdio.h>
//#include <math.h>
//int main(){
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	for (n = 101; n <= 200; n+=2) {//ż���϶�������������ֱ�Ӽ�2
//		m = sqrt(n);
//		for (i = 2; i <= m; i++) {
//			if (n%i == 0)break;//�����ǲ�����������ֹ����������
//			}
//        if (i >= m + 1) {
//					m++;
//					printf("100��200֮��������У�\n%d\n", n);
//		}
//	}
//	system("pause");
//	return 0;
//}
////2.����˷��ھ���
////���ȷ����˷��ھ�������ԣ����������������ƣ�ѭ��Ƕ�׷ֱ��1��9���˷�Ȼ�����д�ӡ
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
//3.�ж�1000�굽2000��֮�������
#include <stdio.h>
int; main() {
	int year = 1000;
	int count = 0;
	printf("1000�굽2000��֮��������У�\n");
	for (year = 1000; year <= 2000; year++) {
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
			count++;
			printf("%5d", year);
		}
	}
	printf("1000�굽2000��֮������깲�У�%d\n", count);
	system("pause");
	return 0;
}
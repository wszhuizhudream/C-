////1.�����������α�����ֵ��������ֵ�����ݽ��н���
////����һ���м����������ֵ�Ĵ���
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
//2.����������ʱ����������������������
//����ָ��ı��ַ��ͨ����ַ�ĸı�ʹ�÷��ʵ����ݸı�
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
////3.��10�����������ֵ
////�ȼٶ�һ���������Ȼ���ٽ�����������10�����Ƚ����С���������
////���£����õ�����������
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
////4.������������С�������
////�������������Ƚ�
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
////5.�������������Լ��
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
	printf("��������������");
	scanf_s("%d,%d", &a, &b);
	printf("���Լ��Ϊ��%d\n", gongyue(a,b));
	system("pause");
	return 0;
}


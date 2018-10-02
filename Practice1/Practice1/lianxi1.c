#include <stdlib.h>
#include <stdio.h>
enum Sex {
	male,
	famale
};
struct student {
	char name[1024];
	int age;
	enum Sex sex;
	int number;
};
int main() {
	struct student stu1 = { "ÕÅÈı",18,male,10 };
	printf("%s,%d,%d,%d", stu1.name, stu1.age,stu1.sex, stu1.number);
	system("pause");
	return 0;
}
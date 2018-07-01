#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int integer1;
	int integer2;
	int integer3;
	int sum;
	printf("請輸入第一個數字");
	scanf("%d",&integer1);
	printf("請輸入第二個數字");
	scanf("%d",&integer2);
	printf("請輸入第三個數字");
	scanf("%d",&integer3);
	sum=integer1+integer2+integer3;
	printf("答案是%d",sum); 
	return 0;
}

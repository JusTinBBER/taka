#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int integer1;
	int end;
	printf("請輸入攝氏溫度");
	scanf("%d",&integer1);
	end= integer1 *9/5 + 32;
	printf("華氏溫度為 %d(不含小數點)",end);
	return 0;
}

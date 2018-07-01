#include <iostream>
#include <stdio.h>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
    char id1[80];
	char id2[80];
	char name[80];
	cout<<"請輸入你的名子";
	cin>>name;
	cout<<"請輸入你帳號";
	cin>>id1;
	cout<<"請輸入你的密碼";
	cin>>id2;
	printf("按enter之後繼續\n");
	system("pause");

    int integer1;
	int integer2;
	int integer3;
	printf("請在一到四之間選一個數\n");
	scanf("%d",&integer1);
	if(integer1==1) {printf("你輸了\n");}
    else {printf("進入下一關\n");
	      printf("請在一到四之間選一個數");}
	scanf("%d",&integer2);
	if (integer2==3) {printf("你輸了\n");}
     else {printf("進入下一關\n");
           printf("請在一到四之間選一個數");}
	scanf("%d",&integer3);
	if (integer3==2) {printf("你輸了\n");}
     else{printf("恭喜過關\n");}	
	system("pause");
	return 0;
}


#include <iostream>
#include <stdio.h>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
    char id1[80];
	char id2[80];
	char name[80];
	cout<<"�п�J�A���W�l";
	cin>>name;
	cout<<"�п�J�A�b��";
	cin>>id1;
	cout<<"�п�J�A���K�X";
	cin>>id2;
	printf("��enter�����~��\n");
	system("pause");

    int integer1;
	int integer2;
	int integer3;
	printf("�Цb�@��|������@�Ӽ�\n");
	scanf("%d",&integer1);
	if(integer1==1) {printf("�A��F\n");}
    else {printf("�i�J�U�@��\n");
	      printf("�Цb�@��|������@�Ӽ�");}
	scanf("%d",&integer2);
	if (integer2==3) {printf("�A��F\n");}
     else {printf("�i�J�U�@��\n");
           printf("�Цb�@��|������@�Ӽ�");}
	scanf("%d",&integer3);
	if (integer3==2) {printf("�A��F\n");}
     else{printf("���߹L��\n");}	
	system("pause");
	return 0;
}


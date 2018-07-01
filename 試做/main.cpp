#include <iostream>
#include<stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

   main( ) {
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
	{
	printf("請在一到四之間選一個數\n");
	scanf("%d",&integer1);
	}//end loop

	
	if((4>=integer1)&&(integer1==1)&&(integer1!=0))
	{	
	printf("進入下一關\n");
	printf("請在一到四之間選一個數\n");}
    else {
	      printf("你輸了\n");
	      }//endloop
	scanf("%d",&integer2);
	
	
	if ((4<integer2)&&(integer2==3)&&(integer2==0))
	{
	printf("進入下一關\n");
    printf("請在一到四之間選一個數\n");}
	else{
	     printf("你輸了\n");	   
		 }//endloop
	scanf("%d",&integer3);
	
	
	if ((4<integer3)&&(integer3==2)&&(integer3==0)) {
	printf("恭喜過關\n");}
     else{printf("差一點 加油!!\n");}	
	system("pause");
	return 0;
}

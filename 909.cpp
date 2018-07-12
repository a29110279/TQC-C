#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n;
	char a[100],b[100],c[100];
	
	printf("請輸入字串A:");
	gets(a);
	
	printf("\n字串A的長度:%d",strlen(a));
	strcpy(b,a);
	
	printf("\n字串B:%s\n\n",b);
	
	printf("請輸入字串C:");
	gets(c);
	n=strcmp(c,a);
	
	if(n>0)
		printf("字串A小於字串C\n");
	else if(n==0)
		printf("字串A等於字串C\n");
	else if(n<0)
		printf("字串A大於字串C\n");	
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n;
	char a[100],b[100],c[100];
	
	printf("�п�J�r��A:");
	gets(a);
	
	printf("\n�r��A������:%d",strlen(a));
	strcpy(b,a);
	
	printf("\n�r��B:%s\n\n",b);
	
	printf("�п�J�r��C:");
	gets(c);
	n=strcmp(c,a);
	
	if(n>0)
		printf("�r��A�p��r��C\n");
	else if(n==0)
		printf("�r��A����r��C\n");
	else if(n<0)
		printf("�r��A�j��r��C\n");	
}

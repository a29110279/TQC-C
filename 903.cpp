#include <stdio.h>
#include <stdlib.h>
int i;
 
int greater60(int []);

int main(){
	int a[6];
	
	for(i=0;i<6;i++){
		printf("�п�J��%d�Ӥ���:",i+1);
		scanf("%d",&a[i]);
		}
	printf("\n�z��J����Ʀp�U:");
	for(i=0;i<6;i++)
		printf("data[%d]:%d\n",i,a[i]);
	
	printf("�j��60���o��:%d��",greater60(a));
	
	
}

int greater60(int a[6]){
	int ch;
	for(i=0;i<6;i++)
		if(a[i]>=60) ch++;
		return ch;
}

#include <stdio.h>
#include <stdlib.h>

void multiply(int a){
	int i,j;
	
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++)
			printf("%4d",i*j);
		printf("\n");
	}
	
}

void printstar(int b){
	int i;
	for(i=0;i<b;i++)
		printf("*");
		printf("\n");
}

int main(){
	int s,m;
	
	printf("�п�J�z�n�X���v�����k��(�̦h10):");
	scanf("%d",&m);
	printf("�п�J�z�n�X�ӬP�P(*):");
	scanf("%d",&s);
	printstar(s);
	if(m<=10) multiply(m);
	printstar(s);
	
}








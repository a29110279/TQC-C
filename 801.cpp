#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0,j=0,a=0;
	
	while(1){
	printf("��J�T���ΧΪ��N��:");
	scanf("%d",&a);
	
	switch(a){
		
		case 1:
			for(i=1;i<=5;i++){
				for(j=0;j<i;j++)
					printf("*");
				printf("\n");
			}
			break;
		case 2:
			for(i=5;i>0;i--){
				for(j=0;j<i;j++)
					printf("*");
				printf("\n");	
			}
			break;
		case 3:
			for(i=1;i<=5;i++){
				for(j=0;j<5-i;j++)
					printf(" ");
				for(j=0;j<i;j++)
					printf("*");
				printf("\n");
			}
			break;
		case 4:
			for(i=1;i<=5;i++){
				for(j=0;j<=5-i;j++)
					printf("*");
				for(j=0;j<=i;j++)
					printf(" ");
				printf("\n");
			}
			break;
			
			
			 
	}
	
}
}

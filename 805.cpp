#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[3][4],b[5][2],i,j,g,hh;
	while(1){
		
		printf("�п�ܰ}�C1 or �}�C2:");
		scanf("%d",&g);
		 
		switch(g){
			
			case 1:
				for(i=0;i<3;i++){
					printf("�п�J�|�Ӽ�(�Ʀr���H�ťն��j):");
					for(j=0;j<4;j++){
						scanf("%d",&a[i][j]);
						hh+=a[i][j];
				} 
					printf("\n");
				}
				for(i=0;i<3;i++){
					for(j=0;j<4;j++){
						printf("%d ",a[i][j]);		
				}
					printf("\n");
				}
				printf("sum:%d\n",hh);
				break;
			case 2:
				for(i=0;i<5;i++){
					printf("�п�J��Ӽ�(�Ʀr���H�ťն��j):");
					for(j=0;j<2;j++){
						scanf("%d",&b[i][j]);
						hh+=b[i][j];
				} 
					printf("\n");
				}
				for(i=0;i<5;i++){
					for(j=0;j<2;j++){
						printf("%d ",b[i][j]);		
				}
					printf("\n");
				}
				printf("sum:%d\n",hh);
				break;
		}
	}
	
	
	
}

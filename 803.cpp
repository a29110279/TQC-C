#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,a=0,b,c,g;
	
	while(i<10){
			
		printf("(1)�p��\n(2)�p��\n(3)�p�v\n�ЧA�벼:");
		scanf("%d",&g);
		if(g==1) a++;
		else if(g==2) b++;
		else if(g==3) c++;
		else printf("�A�몺�O�o�� �o��");
		
		printf("\n(1)�p���o����%d\n(2)�p���o����%d\n(3)�p�v�o����%d\n\n",a,b,c);
		i++;
	}	
}

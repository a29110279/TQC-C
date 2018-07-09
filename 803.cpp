#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,a=0,b,c,g;
	
	while(i<10){
			
		printf("(1)讲\n(2)\n(3)\n叫щ布:");
		scanf("%d",&g);
		if(g==1) a++;
		else if(g==2) b++;
		else if(g==3) c++;
		else printf("щ琌紀布 紀");
		
		printf("\n(1)讲眔布计%d\n(2)眔布计%d\n(3)眔布计%d\n\n",a,b,c);
		i++;
	}	
}

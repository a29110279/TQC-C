#include <stdio.h>
#include <stdlib.h>

void gg(int data[15],int n){
	int i,j,min,temp;
	
	for(i=0;i<n;i++){
		min=i;
		for(j=i;j<n;j++){
			if(data[j]<data[min])
				min=j;
	}
	
	if(min!=i){
		temp=data[i];
		data[i]=data[min];
		data[min]=temp;
	}
	}
}

int main(){
	int arr[15],arr2[5][3],i,j,n=15;
	
	printf("½Ð¿é¤J...\n");
	for(i=0;i<15;i++){
			printf("arr[%d]: ",i);
			scanf("%d",&arr[i]);
	}
	
	gg(arr,n);
	
	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
			arr2[i][j]=arr[i*3+j];
			
	printf("\n¦L¥X°}¦C...\n");
	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
			printf("arr2[%d][%d]=%d\n",i,j,arr2[i][j]);
}

#include <stdio.h>
#include <stdlib.h>

int exc(int *,int *);

int main(){
	int a,b;
	
	printf("�п�J��ӼƦr(�Ʀr��Ʀr�����ХH�ťն��j)");
	scanf("%d %d",&a,&b);
	printf("a:%d b:%d\n",a,b);
	exc(&a,&b);
	printf("a:%d b:%d\n",a,b);
}

int exc(int *a,int *b){
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
}

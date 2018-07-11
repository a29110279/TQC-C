#include <stdio.h>
#include <stdlib.h>
int i;
 
int greater60(int []);

int main(){
	int a[6];
	
	for(i=0;i<6;i++){
		printf("請輸入第%d個分數:",i+1);
		scanf("%d",&a[i]);
		}
	printf("\n您輸入的資料如下:");
	for(i=0;i<6;i++)
		printf("data[%d]:%d\n",i,a[i]);
	
	printf("大於60分得有:%d個",greater60(a));
	
	
}

int greater60(int a[6]){
	int ch;
	for(i=0;i<6;i++)
		if(a[i]>=60) ch++;
		return ch;
}

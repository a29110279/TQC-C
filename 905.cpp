#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	double a;
	
	f=fopen("dnumber.dat","w");
	
	while(1){
		printf("�п�J�B�I��(��J-99.99���}):");
		scanf("%lf",&a);
		if(a==-99.99) break;
		fprintf(f,"%lf ",a);
	}
	
	fclose(f);
	
	f=fopen("dnumber.dat","r");
	
	while(fscanf(f," %lf ",&a)!=EOF){
		printf("%.2lf\n",a);
	}
	fclose(f);
	
}

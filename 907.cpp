#include <stdio.h>
#include <stdlib.h>

struct student {
	char a[20];
	int score;
};
struct student s[3];

int main(){
	int i;
	
	for(i=0;i<3;i++){
		printf("�п�J��%d��ǥͩm�W: ",i+1);
		scanf("%s",&s[i].a);
		printf("�п�J��%d��ǥͦ��Z: ",i+1);
		scanf("%d",&s[i].score);
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		printf("��%d��ǥ�: %s\n",i+1,s[i].a);
		printf("����: %d\n",s[i].score);
		if(s[i].score>=90)
			printf("GPA: A");
		else if(s[i].score>=80 && s[i].score<90)
			printf("GPA: B");
		else if(s[i].score>=70 && s[i].score<80)
			printf("GPA: C");
		else
			printf("GPA: D");
	}
}

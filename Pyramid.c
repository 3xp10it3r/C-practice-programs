#include<stdio.h>
int main(){
	int num ,j,i,k ;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(k=0;k<num-i;k++){
				printf(" ");
			}
		for(j=0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

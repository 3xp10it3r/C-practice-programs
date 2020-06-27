#include<stdio.h>
int main(){
	int number , q, r,result =0 ;
	printf("ENter the number : ");
	scanf("%d",&number);
	
	q = number;
	while(q!=0){
		r = q%10;
		result = result*10 + r;
		q = q/10;
	}
	if(number == result)
		printf("Yes!!!");
	else
		printf("NO!!!");
	return 0;
}

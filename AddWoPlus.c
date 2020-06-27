#include<stdio.h>
int main(){
	int x,y;
	printf("Enter Two Number to add without + operator : " );
	scanf("%d %d",&x,&y);
	
	while(y!=0){
		x++;
		y--;
	}
	printf("%d" , x);
	return 0;
}

//Only for +ve Integers this will work...

#include<stdio.h>
#include<math.h>
int main() {
	int number,i ,count = 0;
	printf("ENter A number : ");
	scanf("%d",&number);
	for(i=2;i<=ceil(sqrt(number));i++)
	{
		if(number % i == 0)
			count =1;
	}
	if((count == 0 && number !=1) || number == 2 || number ==3)
		printf("TRUE");
	else
		printf("FALSE");
	return 0;
}

#include<stdio.h>
int main() {
	int number, q, r,result = 0,cnt,t,mul =1,count = 0;
	printf("Enter a number to check : ");
	scanf("%d",&number);
	q = number; 
	t =q;
	while(t!=0){
		t = t/10;
		count++;
	}
	cnt = count;
	while(q!=0){
		r = q%10;
		while(cnt!=0){
			mul = mul*r;
			cnt--;
		}
		result = result + mul;
		cnt = count;
		q = q/10;
		mul = 1;
	}
	if(number == result)
		printf("YES!!!");
	else
		printf("NO!!!");
	return 0;
}

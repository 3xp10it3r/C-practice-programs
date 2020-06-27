#include<stdio.h>
#include<limits.h>

int main(){
	int min = INT_MIN;
	int max = INT_MAX;
	
	unsigned int umin =0;
	unsigned int umax = UINT_MAX;
	
	short int minn = SHRT_MIN;
	short int maxx = SHRT_MAX;
	
	unsigned short int mi = 0;
	unsigned short int ma = USHRT_MAX;
	
	long int lmin = LONG_MIN;
	long int lmax = LONG_MAX;
	
	unsigned long int lmi = 0;
	unsigned long int lma = ULONG_MAX;
	
	printf("%d %d\n", min ,max);
	printf("%u %u\n",umin , umax);
	printf("%d %d\n", minn ,maxx);
	printf("%u %u\n",mi,ma);
	printf("%ld %ld\n", lmin ,lmax);
	printf("%lu %lu\n",lmi,lma);
	
	return 0;
}

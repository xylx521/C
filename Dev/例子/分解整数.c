#include <stdio.h>

int main()
{
	int x;
    scanf("%d",&x);
//	x =12345;
	int digit;
	int ret = 0;
	while ( x>0 ){
		digit = x%10;
		// printf("%d\n",dight);
		ret = ret*10 + digit;
		printf(" x=%d , dight=%d , ret=%d \n",x, digit ,ret);
		x /=10;
	}
	printf("%d",ret);
	 
	return 0;
}

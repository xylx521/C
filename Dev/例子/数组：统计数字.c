#include<stdio.h>

int main()
{
	const int number = 10;//数组的大小 
	int x;
	int count[number];//定义数组 
	int i;
	
//	初始化数组 
	for ( i=0; i<number; i++ ){
		count[i]=0;
	}
	printf("请输入不超过10个0-9之间的整数，然后输入-1结束\n"); 
	scanf("%d", &x);
	while(x!=-1){
		if( x>=0 && x<=9 ){
			count[x]++;     //数组参与运算 
		}
		scanf("%d", &x);
	}
	//遍历数组输出 
	for ( i=0; i<number; i++ ){
		printf("%d的个数是:%d\n", i, count[i]);
	}
	// 
	return 0; 
}

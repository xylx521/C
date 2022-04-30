#include<stdio.h>

//定义一个和函数 
void sum(int begin, int end) //函数头 ：返回类型 函数名（参数表） 
{
	int i;
	int sum =0;
	for( i=begin; i<=end; i++) {
		sum +=i;
	}
	printf("从%d到%d的数的和是%d\n", begin, end, sum);
 } 
 
 //使用 
 int main()
 {
 	int a;
	int b;
	printf("请输入求和范围a到b\n");
	scanf("%d%d",&a,&b);
 	sum(a,b);
	sum(20,50); 
 	return 0;
 }

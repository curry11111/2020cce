#include <stdio.h>
int main()
{
	int a,b,big=1;
	scanf("%d%d" ,&a,&b);
	int max=a;
	if(b>max)
	max=b;
	for(int i=1;i<=max;i++){
		if(a%i==0 && b%i==0)
		if(i>big)
		big=i;
	}
	printf("%d %d\n" ,a/big,b/big);
}

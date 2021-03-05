#include<stdio.h>
int main()
{
 int n=0,ans=0;
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
    if(n%i==0) ans++;
}
printf("%d" ,ans);
}

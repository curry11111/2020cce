# 2020cce
程式設計
## 第一題程式碼
```C
#include<stdio.h>
int main()
{
 int n;
 scanf("%d" ,&n);
 printf("%d=50*%d+5*%d+1*%d\n" ,n,n/50,(n%50)/5,(n%5)/1);
} 
```
## 第二題程式碼
```C
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
```

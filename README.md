# 2020cce
程式設計
## 第一題程式碼
```C


```
![找零錢](https://github.com/curry11111/2020cce/blob/gh-pages/111.png?raw=true)
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
## 第三題程式碼
```C
#include<stdio.h>
int main()
{
   int a[10],ans=0;
   for(int i=0;i<10;i++){
    scanf("%d" ,&a[i]);
   }
   for(int i=0;i<10;i++){
   if(a[i]%3==0) ans++;
  }
  printf("%d"\n ,ans);
 }
```
## 第四題程式碼
```C
#include<stdio.h>
int main()
{
int n;
    scanf("%d",&n);
    if(n>=90) printf("A\n");
    else if(n<90 && n>=80) printf("B\n");
    else if(n<80 && n>=60) printf("C\n");
    else printf("F\n");
}
```
## 第五題程式碼
```C
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
```

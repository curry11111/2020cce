## 2020cce
程式設計
## 20210226
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
![因數個數](https://github.com/curry11111/2020cce/blob/gh-pages/222.png)
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
![找倍數](https://github.com/curry11111/2020cce/blob/gh-pages/333.png)
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
![整數轉換成等級](https://github.com/curry11111/2020cce/blob/gh-pages/444.png)
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
![分式簡化](https://github.com/curry11111/2020cce/blob/gh-pages/555.png)
## 20210305
## 第一題程式碼
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p = &n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/111%20(1).png)
## 第二題程式碼
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p = &n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p2 =&n2;
    *p=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/222%20(1).png)
## 第三題程式碼
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    int *p = &n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    int *p2 =&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/333%20(1).png)
## 20210312
## 第一題程式碼
```C
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;
    p=p+2;
    *p=666;
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week03-1.png)
## 第二題程式碼
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(iint i=0;i<5;i++)   printf("%d",a[i]);
    printf("\n");
}
int main()
{
    printAll();
    int *p=&a[2];
    *p=222;
    printAll();
    p=p+2;
    *p=666;
    printAll();
    p--;
    *p=555;
    printAll();
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week03-2.png)
## 第三題程式碼
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(iint i=0;i<5;i++)   printf("%d",a[i]);
    printf("\n");
}
int main()
{
    printAll();
    int *p=&a[2];
    *p=222;
    printAll();
    printf("p心裡小紙條記的值是:%d\n",p);
    p=p+2;
    *p=666;
    printAll();
    printf("p心裡小紙條記的值是:%d\n",p);
    p--;
    *p=555;
    printAll();
    printf("p心裡小紙條記的值是:%d\n",p);
}
```
![圖]
## 第四題程式碼
```C
#include <stdio.h>
#include <stdlib.h>
int a[10];
int maim()
{
    int b[10];
    int*p=(int*) malloc(sizeof(int)*10);
    return 0;
}
```
![圖]

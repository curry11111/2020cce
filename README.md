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
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week03-3.png)
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
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week03-4.png)
## 20210312
## 實習課程設
## 第一題程式碼
```C
#include <stdio.h>
int main()
{
	int N;
	int a[100];
	scanf("%d" ,&N);
	for(int i=0;i<N;i++){
		scanf("%d" ,&a[i]);
		printf("%d," ,a[i]*a[i]);
	}
	printf("\n");
}
```
## 第二題程式碼
```C
#include <stdio.h>
int main()
{
	char c[10];
	

	scanf("%s" ,&c);
	int i=0;
	while( c[i]!='\0')
	{
	if('A'<=c[i]&&c[i]<='Z')
		printf("%c" ,c[i]-'A'+'a');
	else if('a'<=c[i]&&c[i]<='z')
		printf("%c" ,c[i]-'a'+'A');
	else printf("%c" ,c[i]);
	i++;
	}
	printf("\n");
}
```
## 第三題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	printf("%d %d\n" ,(n/7),(n%7));
}
```
## 第四題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	printf("%d\n",100+((n-2000)/500)*5+5);
}
```
## 第五題程式碼
```C
#include <stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d" ,&a,&b);
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(i%5==0) printf("%d\n" ,i);
	}
}
```
## 第六題程式碼
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d" ,&a,&b,&c);
	if(a>b&&b>c) printf("%d" ,a-c);
	else if(a>c&&c>b) printf("%d" ,a-b);
	else if(b>a&&a>c) printf("%d" ,b-c);
	else if(b>c&&c>a) printf("%d" ,b-a);
	else if(c>a&&a>b) printf("%d" ,c-b);
	else if(c>b&&b>a) printf("%d" ,c-a);
	printf("\n");
}
```
## 20210319
## 第一題程式碼
```C
#include <stdio.h>
struct POINT{
    float x,y;
} ;
int main()
{
    struct POINT a;
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week04-1.png)
## 第二題程式碼
```C
#include <stdio.h>
struct POINT{
    float x,y;
} ;
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week04-2.png)
## 第三題程式碼
```C

```
![圖]()

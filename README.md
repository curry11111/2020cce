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
## 第一題程式碼  計算陣列的平方值
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
## 第二題程式碼  大小寫轉換
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
## 第三題程式碼  計算幾週與幾天
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	printf("%d %d\n" ,(n/7),(n%7));
}
```
## 第四題程式碼  計程車資計算
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	printf("%d\n",100+((n-2000)/500)*5+5);
}
```
## 第五題程式碼  兩數間可被5整除的整數
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
## 第六題程式碼  整數間最大距離
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
#include <stdio.h>
struct POINT{
    int  x,y;
} a[3];
struct DATA b={100,200};
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
    a.x=1;
    a.y=2;
    peintf("%f %f\n" ,a.x,a.y);
    return 0;
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week04-3.png)
## 第四題程式碼
```C
#include <stdio.h>
struct DATA{
    int  x,y;
} a[3];
struct DATA b={100,200};
int main()
{
    for(int i=0;i<3;i++){
        printf("a[%d}:%d %d\n",i,a[i].x,a[i].y);
    }
    printf("b: %d %d\n",b.x,b.y);
    struct DATA c;
    printf("c: %d %d 像亂碼\n",c.x,c.y);
    c=b;
    printf("c: %d %d\n",c.x,c.y);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week04-4.png)
## 20210319
## 實習課程式碼
## 第一題程式碼 除惡務盡
```C
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);//將字串讀入依序放入陣列最後加上'\0'
	int i=0;
	while(a[i]!='\0')
{
	if(a[i]!='2')
		printf("%c",a[i]);
		i++;
}
	printf("\n");
}
```
## 第二題程式碼  擲骰統計
```C
#include <stdio.h>
int main()
{
	char a[100];
	char count[7]={0};
	scanf("%s" ,&a);
	int i=0;
	while (a[i]!='\0')
	{
	count[a[i]-'0']++;
	i++;
	}
	for(int i=1;i<=6;i++){
	printf("%d:%d\n",i,count[i]);
	}      //點數 次數
}
```
## 第三題程式碼  函數找整數的最大數字
```C
#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max;
	max=n%10;
	while(n>0)
{
	if((n%10)>max) max=n%10;
	n/=10;
}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
```
## 第四題程式碼  星星等腰三角
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
		printf(" ");
		}
		for(int j=0;j<(2*i-1);j++){
		printf("*");
		}
		printf("\n");
	}
}
```
## 第五題程式碼  分開整數的每個數字
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	printf("%d   ",n/10000);
	printf("%d   ",(n%10000)/1000);
	printf("%d   ",((n%10000)%1000)/100);
	printf("%d   ",(((n%10000)%1000)%100)/10);
	printf("%d",(((n%10000)%1000)%100)%10);
}
```
## 第六題程式碼  字元判別
```C
#include <stdio.h>
int main()
{
	char a;
	scanf("%c" ,&a);
	if(a>='A' && a<='Z') printf("U");
	else if(a>='a' && a<='z') printf("L");
	else if(a>='0' && a<='9') printf("D");
	else printf("O");
}
```
## 第七題程式碼  數字之首
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	printf("%d" ,n/1000);
}
```
## 第八題程式碼  輸出從0到N的偶數
```C
#include <stdio.h>
int main()
{
	int N;
	scanf("%d%d" ,&N);
	for(int i=1;i<=N;i++){
		if(i%2==0) printf("%d " ,i);
	}
}
```
## 20210326
## 第一題程式碼
```C
#include <stdio.h>
int main()
{
	char line[10]="decline";
	char line2[10]={'p','r','o','p','e','r','\0'};
	printf("%s\n",line);
	printf("%s\n",line2);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week05-1.png)
## 第二題程式碼
```C
{
	char line[10]="decline";
	char line2[10]={'p','r','o','p','e','r','\0'};
	printf("%s\n",line);
	printf("%s\n",line2);
	char line3[]="majority";
	printf("%s\n",line3);
	char line4[]={'p','r','o','p','e','r','\0'};
	printf("你看看你看看，現在印出來的line4: ==%s==\n",line4);
}
```
![圖]()
## 第三題程式碼
```C
#include <stdio.h>
int main()
{
	char line [5][10]={"decline","proper","majority","bullet","shop");
	for( int i=0;i<5;i++){
		printf("%s\n",line[i]);
	}
}
```
![圖]()
## 第四題程式碼
```C
#include <stdio.h>
int main()
{
	printf("請看看值是多少: %d",'\0');
}
```
![圖]()
## 第五題程式碼
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char line[10]="majority";
	char line2[10]="ask";
	if( strcmp( line,line2)>0){
		printf("左邊大\n");
	}else{
		printf("右邊大\n");
	}
}
```
![圖]()
## 第六題程式碼
```C
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d" ,&N);
	for(int i=0;i<N;i++){
		scanf("%s" ,line[i]);
	}
	char temp[10];
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(strcmp(line[i],line[j])>0){
			   strcpy(temp,line[i]);
			   strcpy(line[i],line[j]);
			   strcpy(line[j],temp);
			  }
			 }
			}
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}
}
```
![圖]()
## 實習課程式碼
## 第一題程式碼
```C
```
## 第二題程式碼
```C
```
## 第三題程式碼
```C
```
## 第四題程式碼
```C
```
## 第五題程式碼
```C
```
## 第六題程式碼
```C
```

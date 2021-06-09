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
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week05-2.png)
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
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week05-3.png)
## 第四題程式碼
```C
#include <stdio.h>
int main()
{
	printf("請看看值是多少: %d",'\0');
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week05-4.png)
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
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week05-5.png)
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
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week05-6.png)
## 實習課程式碼
## 第一題程式碼
```C
#include <stdio.h>
int f(int n)
{
	int c;
	int a=0;
	while (n>0)
	{
		c=n%10;
		n=n/10;
		a=c+a*10;
	}
	return a;
}
int main()
{
	int n,a;
	scanf("%d" ,&n);
	printf("%d+%d=%d\n",n,f(a),n+f(a));
}
```
## 第二題程式碼
```C
#include <stdio.h>
int f(int a)
{
	if(a>0) return a;
	else return a*(-1);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
## 第三題程式碼
```C
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int a[100];
	int ans=0;
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		ans=ans+a[i];
	}
	
	printf("%d\n",ans);




}
```
## 第四題程式碼
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c) printf("%d\n",a);
	else if(b>a&&b>c) printf("%d\n",b);
	else printf("%d\n",c);







}
```
## 第五題程式碼
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);



}
```
##20210409
## 第一題程式碼
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
chsr temp[10];
int compare ( const void * p1, const void * p2 ){
	char * s1 =(char*) p1;
	char * s2 =(char*) p2;
	return strcmp( s1,s2);
}
int main()
{
	int n;
	scanf("%d" ,&n);
	for(int i=0;i<n;i++){
		scanf("%s" ,line[i]);
	}
	qsort(line,n,10,compare);
	for(int i=0;i<n;i++){
		printf("%s\n" ,line[i]);
	}
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week07-3.png)
## 實習課程式碼
## 第一題程式碼
```C
#include <stdio.h>
#include <string.h>
char a[10000];
int main()
{
	scanf("%s" ,&a);
	int i;
	int len;
	len=strlen(a);
	for(i=0;i<(len/2);i++){
		if(a[i]!=a[len-1-i])break;
	}
	if(i==(len/2)) printf("YES\n");
	else printf("NO\n");
}
```
## 第二題程式碼
```C
#include <stdio.h>
int f(int n)
{
	int p;
	int ans=0;
	
	while(n>0)
	{
		p=n%10;
		n=n/10;
		ans=ans*10+p;
	}
	return ans;
}
int main()
{
	int n;
	scanf("%d" ,&n);
	printf("%d\n" ,f(n));
}
```
## 第三題程式碼
```C
#include <stdio.h>
int main()
{
	int a[100];
	int r=0;
	for(int i=0;i<100;i++){
		scanf("%d" ,&a[i]);
		if(a[i]==0) break;
		r++;
	}
	int n;
	scanf("%d" ,&n);
	int ans=0;
	for(int i=0;i<r;i++){
		if(a[i]==n) ans++;
		}
		printf("%d\n",ans);
	}
```
## 第四題程式碼
```C
#include <stdio.h>
int f(int a,int b){
	if(a<b) return -1;
	else if(a==b) return 0;
	else return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```
## 第五題程式碼
```C
#include <stdio.h>
int main()
{
	printf("Enter an integer ( 999 to end ): \n");
	
	int n;
	scanf("%d" ,&n);
	int ans=0;
	while(n!=999)
	{
		ans=ans+n;
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d" ,&n);
	}
	printf("The total is: %d",ans);
}
```
## 第六題程式碼
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d" ,&a,&b);
	printf("%d" ,a%b);
}
```
## 第七題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	if(n>=90) printf("A");
	else if(n<90 && n>=80) printf("B");
	else if(n<80 && n>=70) printf("C");
	else if(n<70 && n>=60) printf("D");
	else printf("F");
}
```
## 第八題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	printf("%d" ,100+((n-1500)/250)*5+5);
}
```
## 第九題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,(n%50)/10,(n%50%10)/5,(n%50%10%5)/1);
}
```
## 20210416
## 第一題程式碼
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][80];
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
char trash[80];
int main()
{
	int n;
	scanf("%d" ,&n);
	for(int i=0;i<n;i++){
		scanf("%s" ,name[i]);
		gets(trash);
	}
	qsort( name,n,80,compare);
	int ans=1;
	printf("%s" ,name[0]);
	for(int i=0;i<n-1;i++){
		if (strcmp (name[i],name[i+1]) !=0){
		printf(" %d\n" ,ans);
		printf("%s" ,name[i+1]);
		ans=1;
		}else ans++;
	}
	printf(" %d\n" ,ans);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week08.png)
## 20210430
## 第一題程式碼
```C
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare ( const void *p1,const void *p2){
 return strcmp( (char*) p1,(char*) p2);
}
int main()
{
 int T;
 scanf("%d\n\n", &T);
 for(int t=0;t<T;t++){
  int N=0;
  while(gets(line)!=NULL){
   if( strcmp(line,"") == 0 )break;
   strcpy( tree[N],line);
   N++;
  }
  
  qsort( tree,N,32,compare);
  
  
  if(t>0) printf("\n");
  int ans=1;
  printf("%s ",tree[0]); 
  for(int i=0;i<N-1;i++){
   if( strcmp(tree[i],tree[i+1]) == 0){
    ans++;
   }else{
    printf("%.4f\n" ,100*ans/(float)N );
    ans=1;
    printf("%s " ,tree[i+1]);
   }
  }
  printf("%.4f\n",100*ans/(float)N);
 }
}
```
## 20210514
## 第一題程式碼
```C
#include <stdio.h>
char line[1000];
int main()
{
		for(int t=0;gets(line);t++){
			int ans[256]={};
			for(int i=0;line[i]!=0;i++){
				char c=line[i];
				ans[c]++;
			}
			if(t>0) printf("\n");
			for(int i=0;i<256;i++){
				if(ans[i]>0) printf("%d %d\n" ,i,ans[i]);
			}
		}
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week12-1.png)
## 第二題程式碼
```C
#include <stdio.h>
char line[2000];
int main()
{
		for(int t=0 ; gets(line ); t++ ){
			int ans[256]={};
			char  c[256]={};
			for(int i=0 ; i<256 ; i++ ) c[i]=i;
			for(int i=0 ; line[i]!=0 ; i++ ){
				char c=line[i];
				ans[c]++;
			}
		for(int i=0 ; i<256; i++ ){
				for(int j=i+1 ; j<256 ; j++ ){
				if( ans[i] > ans[j] ){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
				if( ans[i] == ans[j] && c[i]<c[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0 ; i<256 ; i++){
			if(ans[i]>0) printf("%d %d\n" ,c[i],ans[i]);
			}
		}
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week12-3.png)
## 第三題程式碼
```C
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for( int t=0;t<T;t++){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		int ans=0;
		
		for(int k=0;k<N-1;k++){
			for(int i=0;i<N-1;i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week12-5.png)
## 第四題程式碼
```C
#include <stdio.h>
int a[10000];
int main()
{
	int N,M;
	while ( scanf("%d %d" ,&N,&M) == 2){
		for(int i=0;i<N;i++){
			scanf("%d" ,&a[i]);
		}
		
		
		printf("%d %d\n" ,N,M);
		for(int i=0;i<N;i++){
			printf("%d\n" ,a[i]);
		}
	}
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week12-6.png)
## 20210521
## 第一步倒數計時器
```C
size(1024, 400)
background( 160，215，300 
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week13-1.png)
## 第二步倒數計時器
```C
void setup(){
size(1024, 400);
}
void draw(){
if(mousePressed)background( 255,0,255 );
else background( 15,162,249);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week13-1.png)
## 第三步倒數計時器
```C
void setup(){//只做一次設定
 size(1024, 400);
}
void draw(){//每秒狂做60次
  if(mousePressed)background( 255,0,255 );
  else background( 15,162,249);
  textSize(50);//字的大小 設50號字
  text(a,100,100);//將a在 100，100畫出來
}
int a=0;//外部變數
void mousePressed(){
  a++;
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week13-3.png)
## 第四步倒數計時器
```C
void setup(){
  size( 1024, 400);
}
void draw(){
  background( 15, 162, 249 );
  textSize(50);
  int h = hour();
  int m = minute();
  int s = second();
  text( "Now:" + h + ":" + m + ":" + s ,100 ,100);
}//      字串   數  字串  數   字串 數字
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week13-4.png)
## 第五步倒數計時器
```C
void setup(){
  size( 1024, 400);
  textFont(  createFont ("標楷體",50) );
}
void draw(){
  background( 15, 162, 249 );
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  fill(255,0,0);//填充墨水的色彩
  text( "Now:" + h + ":" + m + ":" + s ,100 ,100);//現在時間
  int total = h*60*60 + m*60 + s;//總秒數
  text( "總秒數:" + total, 100, 200);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week13-5.png)
## 第六步倒數計時器
```C
void setup(){
  size( 1024, 400);
  textFont(  createFont ("標楷體",50) );
}
void draw(){
  background( 15, 162, 249 );
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  fill(255,0,0);//填充墨水的色彩
  text( "Now:" + h + ":" + m + ":" + s ,100 ,100);//現在時間
  int total = h*60*60 + m*60 + s;//現在時間的總秒數
  int total2=12*60*60 + 0*60 + 0;//目標時間的總秒數
  text( "總秒數:" + total, 100, 200);
  int ans = total2-total;
  int hh = ans/60/60%60, mm = ans/60%60, ss = ans%60;
  text( "還剩下:" + hh + ":" +mm + ":" + ss ,100,300);
}  
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week13-6.png)
## 20210508
## 第一步好玩的抽籤
```C
void setup(){//設定 只做一次
  size(300,200);
  float ans = random(60);//亂數取<60的數
  textSize(30);
  text( ans,0,30);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week14-1.png)
## 第二步好玩的抽籤
```C
//Q1:數字有小數點，不好!!! A:整數無條件捨去
//Q2:沒有互動 A:用mousePressed互動!
void setup(){//設定 只做一次
  size(300,200);
  textSize(30);
}
int ans=0;
void draw(){//畫圖，每秒60次 60fps
  background(#2C9CF0);
    //int ans = random(60);//強制轉型
    text( ans, 30, 30);//跳太快了...
}
void mousePressed(){
  ans = (int)random(60);
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week14-2.png)
## 第三步洗牌
```C
//int a[]={1,2,3,4,5,6,7,8,9,10};//C,C++
int []a = {1,2,3,4,5,6,7,8,9,10};//Java
void setup(){
    size(400,200);
    textSize(30);
}
void draw(){
    background(#2C9CF0);
    for(int i=0 ;i<10;i++){
        text(a[i],i*40,100);
    }
}
void mousePressed(){
    int i1 = (int) random(10);
    int i2 = (int) random(10);
    int temp=a[i1];
    a[i1]=a[i2];
    a[i2]=temp;
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week14-3.png)
## 第四步大樂透
```C
//int []a{1,2,3,4,5,6,7,8,9,10....寫49很累
int []a = new int[49];//Java的陣列宣告好
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i] = i+1;//人類:1
}                     //電腦:0
void draw(){
  background(#2C9CF0);
  for(int i=0;i<6;i++){//49指秀6個數
    text( a[i] , i*50 , 100 );
  }//大樂透 抽獎時，會掉下球， 47球，挑6球
}
void mousePressed(){
  for( int i=0;i<10000;i++ ){
    int i1 = (int)random(49), i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week14-4.png)
## 第五步大樂透
```C
//int []a{1,2,3,4,5,6,7,8,9,10....寫49很累
int []a = new int[49];//Java的陣列宣告好
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i] = i+1;//人類:1 丟入號碼球
  for( int i=0;i<10000;i++ ){//大作弊，抽獎前排好
    int i1 = (int)random(49), i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}   
int N=0;//電腦:0
void draw(){
  background(#2C9CF0);
  for(int i=0;i<N;i++){//49指秀6個數
    fill(255); ellipse(50+i*50,100,40,40);
    textAlign(CENTER,CENTER);//文字對齊:中，中
    fill(0);text( a[i] , 50+i*50 , 100 );
  }//大樂透 抽獎時，會掉下球， 47球，挑6球
}
void mousePressed(){
  N++;//其實數字早就決定了!!!!!我們只是慢慢印出來，讓人以為你是慢慢抽
}
```
![圖](https://github.com/curry11111/2020cce/blob/gh-pages/week14-5.png)
## 20210604
## 第一步倒數計時發出聲音
```C
void setup(){//設定 只做一次
  size(400,200);
  textSize(40);//字型大小
}
void draw(){//畫圖， 每秒60次
  background(41,109,207);
  int s = second();//秒鐘
  text( s, 100, 100);
}
```

## 第二步倒數計時發出聲音
```C
//秒數: 0,1,2,3....59
//      59,58,57....0(幫手) 59-s
//=========================
//倒數: 9,8,7.....0
void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(41,109,207);//隨便猜的色
  int s = second();//秒鐘
  text( 9-s%10 ,100 , 100);
}
//  原: 0,1,2,3,4,5,6,7,8,9
//倒數: 9,8,7,6,5,4,3,2,1,0
```

## 第三步倒數計時發出聲音
```C
import processing.sound.*;
SoundFile player;
//tada.mp3檔，也可拉進來
void setup(){
  size(400,200);
  player = new SoundFile( this,"tada.mp3");
}
void draw(){
  background(51,114,191);
}
void mousePressed(){
  player.play();
}
```

## 第四步倒數計時發出聲音
```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);
  player = new SoundFile( this,"tada.mp3");
}//記得放tada.mp3
void draw(){
  background(41,109,207);
  int s = second();//秒鐘
  text( 9-s%10,100,100);
  if( 9-s%10 == 0) player.play();
}//0秒的時候，if會進去60次，
```

## 第五步倒數計時發出聲音
```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);
  player = new SoundFile( this,"bell.mp3");
}//記得放tada.mp3
void draw(){
  background(51,114,191);
}
void mousePressed(){
  if( player.isPlaying() ){
    player.stop();
  }else{
    player.play();
  }
}
```

## 第六步網頁模式
```C
function setup(){//設定 只做一次
  createCanvas(400,200);
  textSize(40);//字型大小
}
function draw(){//畫圖， 每秒60次
  background(41,109,207);
  let s = second();//秒鐘
  text( s, 100, 100);
}
```

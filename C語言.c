#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
//繪製實心三角形
int main(){
        int N;
        printf("N=");
        scanf("%d",&N);
        int i,j;
        for (i=1;i<=N;++i){
            for (j=1;j<=i;++j){
                printf("*");
            }
             printf("\n");
        }
    return 0 ;
}
*/
/*
//繪製空心三角形

int main(){
    int N ;
    printf("N=");
    scanf("%d",&N);
    int i,j;
    printf("*\n");
    for(i=0;i<=N-3;++i){
        printf("*");
        for(j=1;j<=i;++j){
            printf(" ");
        }
        printf("*\n");
    }
    for(j=1;j<N;++j){
        printf("*");
    }
    printf("*\n");
    return 0 ;
}
*/
/*
//使用函式求兩數最大值
int max2(int,int);

int main(){
    int a,b;
    printf("Enter the first integer:");
    scanf("%d",&a);
    printf("Enter the second integer:");
    scanf("%d",&b);
    printf("maxinum is %d.\n",max2(a,b));
    return 0 ;
}
int max2(int a,int b){
    int max;
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    return max;
}
*/
/*
//輸入三個數字求最大值（函式）
int max2(int,int,int);
int main(){
    int a,b,c,max;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("maxinum=%d\n",max2(a,b,c));
    return 0 ;
}
int max2(int a,int b,int c){
    int max;
    if (a>b&&a>c){
        max=a;
    }
    if(b>a&&b>c){
        max=b;
    }
    else{
        max=c;
    }
    return max;
}
*/
/*
#include <stdio.h>

int main(void) {
  int N;
  printf("N=");
  scanf("%d",&N);
  printf("%d\n",S(N));
  return 0;
}

int S(int N){
  if(N<=2){
    return N;
  }
  return S(N-1)+S(N-2);
}
*/

/*
//骰子骰6000次 1~6出現的次數
int main(){
  srand(time(0));
  int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
  int i ;
  
  for(i=1;i<=6000;++i){
    int dice=rand()%6+1;
    switch(dice){
      case 1:c1++;break;
      case 2:c2++;break;
      case 3:c3++;break;
      case 4:c4++;break;
      case 5:c5++;break;
      case 6:c6++;break;
    }
  }
  printf("1:%d\n",c1);
  printf("2:%d\n",c2);
  printf("3:%d\n",c3);
  printf("4:%d\n",c4);
  printf("5:%d\n",c5);
  printf("6:%d\n",c6);
  return 0;
}
*/
/*
//陣列骰子骰6000次
int main(){
  srand(time(0));
  int i , j;
  int counter[6]={0};
  for(i=1;i<=6000;++i){
    int dice=rand()%6+1;
    for(j=1;j<=6;j++){
      if(dice==j){
        counter[j-1]++;
      }
    }
  }
  for(j=1;j<=6;j++){
    printf("%d:%d\n",j,counter[j-1]);
  }
  return 0 ;
 }
*/
/*
//骰100000次一次兩顆 各點數和的次數
int main(){
  srand(time(0));
  int counter[11]={0};
  int i;
  for(i=1;i<=100000;i++){
    int dice1=rand()%6+1;
    int dice2=rand()%6+1;
    int sum=dice1+dice2;
    counter[sum-2]++;
  }
  for(i=2;i<=12;i++){
    printf("%d:%d\n",i,counter[i-2]);
  }
  return 0 ;
}*/
/*
int main(){
  int i,n[10],q;
  for(i=1;i<=10;i++){
    scanf("%d",&n[i-1]);
  }
  while(1){
    int max_i=-1;
    printf("Q: ");
    scanf("%d",&q);
    if(q==0){
      break;
    }
    for (i=0;i<10;i++){
      if(n[i]<=q&&(max_i==-1||n[i]>n[max_i])){
        max_i=i;
      }
    }
    if(max_i!=-1){
      printf("%d\n",n[max_i]);
    }
  }
  
  return 0 ;
}
*/
/*
//查詢最接近數字的練習 (使用陣列)
int main(){
  int i,q,n[10];
  for(i=1;i<=10;i++){
    scanf("%d",&n[i-1]);
  }
  printf("Q: ");
  scanf("%d",&q);
  int nearest_n=n[0];
  for(i=1;i<10;i++){
    if(abs(q-n[i])<abs(q-nearest_n)||
      abs(q-n[i])==abs(q-nearest_n)&&
      (n[i]<nearest_n)){
      nearest_n=n[i];
      }
  }
  printf("%d\n",nearest_n);
  return 0 ;
}
*/
/*
 //畫數字統計長條圖的練習 (使用陣列)
int main(){
  int i,j,n,b[10]={0};
  for(i=1;i<=10;i++){
    scanf("%d",&n);
    b[(n-1)/10]++;
  }
  for(i=1;i<=10;i++){
    printf("%3d: ",i*10);
    for(j=1;j<=b[i-1];j++){
      printf("*");
    }
    printf("\n");
  }
  return 0 ;
}
*/
/*
//數字統計的練習 (使用陣列)
int main(){
  int i,n[10],avg;
  printf("enter ten numbers:");
  for(i=1;i<=10;i++){
    scanf("%d",&n[i-1]);
  }
  int max=n[0];
  for(i=1;i<10;i++){
    if(n[i]>max){
      max=n[i];
    }
  }
  int sum=n[0];
  for(i=1;i<10;i++){
    sum+=n[i];
  }
  avg=sum/10;
  printf("max:%d\n",max);
  printf("avg:%d\n",avg);
  return 0 ;
}
*/
/*
//產生不重複亂數的練習
int main(){
  srand(time(0));
  int i,j , n[9] ;
  for(i=1;i<=9;i++){
    do{
      n[i-1]=rand()%9+1;
      for(j=1;j<i;j++){
        if(n[i-1]==n[j-1]){
          break;
        }
      }
    }while(j!=i);
    printf("%d\t",n[i-1]);
  }
  printf("\n");
  return 0 ;
}
*/
/*
//用交換法產生不重複的亂數 (使用陣列)
int main(){
  srand(time(0));
  int i,n[10];
  for(i=1;i<=10;i++){
    n[i-1]=i;
  }
  for(i=1;i<=10;i++){
    int j=rand()%(11-i)+1;
    int t =n[i-1];
    n[i-1]=n[j-1];
    n[j-1]=t;
    printf("%d\t",n[i-1]);
  }
  printf("\n");
  return 0;
}
*/
/*
//用建表法產生不重複的亂數 (使用陣列)
int main(){
  srand(time(0));
  int i,n,counter[10]={0};
  for(i=1;i<=10;i++){
    do{
      n=rand()%10+1;
    }while(counter[n-1]!=0);
    printf("%d\t",n);
    counter[n-1]++;
  }
  printf("\n");
  return 0 ;
}
*/
/*
//除2函式
 double div2(double x){
          return x/2;
 }
 int main(){
    int N;
    printf("enter N:");
    scanf("%d",&N);
    printf("%f\n",div2(N));
    return 0 ;
  }
*/
/*
//乘2函式
int db2(int x){
  return x*2;
}

int main(){
  int N;
  printf("enter N:");
  scanf("%d",&N);
  printf("乘2=%d",db2(N));
  return 0 ;
}
*/
/*
//對兩個整數求最大值
int max2(int a,int b){
  int max;
  max=a;
  if(b>a){
    max=b;
  }
  return max;
}

int main(){
  int a,b;
  printf("Enter two number:\n");
  scanf("%d%d",&a,&b);
  printf("max=%d",max2(a,b));
  return 0 ;
}
*/
/*
//對三個變數求最大值(函式)
int max3(int a,int b,int c){
  int max;
  max=a;
  if (b>max){
    max=b;
  }
  if (c>max){
    max=c;
  }
  return max;
}

int main(){
  int a,b,c;
  printf("Enter three number:\n");
  scanf("%d%d%d",&a,&b,&c);
  printf("max=%d",max3(a,b,c));
  return 0 ;
}
*/
/*
//用文字繪製實心三角形(函式)
void print_star(int);

int main(){
  int N,i,j;
  printf("Enter N:");
  scanf("%d",&N);
  for(i=1;i<=N;i++){
    print_star(i);
    printf("\n");
    }
  return 0 ;
}

void print_star(int i){
  int j ;
  for(j=1;j<=i;j++){
    printf("*");
  }
  }
*/
/*
//骰子
void dice();

int main(){
  srand(time(0));
  dice();
  return 0 ;
}

void dice(){
  int i ;
  for(i=1;i<=5;i++){
    printf("%d\n",rand()%6+1);
  }
  return;
}
*/

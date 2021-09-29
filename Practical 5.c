************************************************
Program for computing binomial coefficient C(n,k)
************************************************
#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
int n,k,result;

int Binomial(int n, int k);
clrscr();
printf("\n Enter the value of n and k"):
scanf("%d%d",&n,&k);
result= Binomial(n,k);
printf("\n The Binomial Coefficient ");
         printf("C(%d %d)= %d",n,k,result);
getch();
}
int Binomial(int n,int k)
{
int ij;
int C[MAX][MAX];
for(i=0;i<MAX;i++)
for(i=0;j<MAXj++)
          C[i][j]=0;

 
for(i=0;i<=n;i++)
{
       for(j=0;j<=k;j++)
       {
       if((==0)||(i==;))
             C[i][j]=1;
       else
             C[i][j]=C[i-1][i-1]+C[i-1][j];
       }
}
return C[n][k];
}


int min(int a,int b)
{
     if(a<b)
         return a;
     else
         return b;
}



Output:
Enter the value of n and k = 4,2
The Binomial Coefficient? C(4,2)
6

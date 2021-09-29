# include<stdio.h>
# include<conio.h>

void knapsack(int n, float weight[], float profit[], float capacity)
{
 float x[20], tp= 0;
 int i, j, u;
 u=capacity;

 for (i=0;i<n;i++)
     x[i]=0.0;

 for (i=0;i<n;i++)
 {
 if(weight[i]>u)
      break;
 else
     {
     x[i]=1.0;
     tp= tp+profit[i];
     u=u-weight[i];
     }
 }

 if(i<n)
       x[i]=u/weight[i];

 tp= tp + (x[i]*profit[i]);

 printf("\n The result vector is:- ");
 for(i=0;i<n;i++)
        printf("%ft",x[i]);

 printf("m Maximum profit is:- %f", tp);

}

void main()
{
 float weight[20], profit[20], capacity;
 int n, i ,j;
 float ratio[20], temp;
 clrscr();

 printf ("n Enter the no. of objects:- ");
 scanf ("%d", &num);

 printf ("n Enter the wts and profits of each object:- ");
 for (i=0; i<n; i++)
 {
 scanf("%f %f", &weight[i], &profit[i]);
 }

 printf ("n enter the capacityacity of knapsack:- ");
 scanf ("%f", &capacity);

 for (i=0; i<n; i++)
 {
 ratio[i]=profit[i]/weight[i];
 }

 for(i=0; i<n; i++)
 {
    for(j=i+1;j< n; j++)
    {
      if(ratio[i]<ratio[j])
      {
      temp= ratio[j];
      ratio[j]= ratio[i];
      ratio[i]= temp;

     temp= weight[j];
     weight[j]= weight[i];
     weight[i]= temp;

     temp= profit[j];
     profit[j]= profit[i];
     profit[i]= temp;
     }
   }
 }

 knapsack(n, weight, profit, capacity);
 getch();
}







Output :
Enter the no. of objects:- 7

Enter the wts and profits of each object:-
2 10
3 5
5 15
7 7
1 6
4 18
1 3

Enter the capacity of knapsack:- 15

The result vector is:- 1.000000        1.000000        1.000000        1.000000
    1.000000        0.666667        0.000000

Maximum profit is:- 55.333332
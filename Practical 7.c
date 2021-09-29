#include <stdio.h>
int coins( int S[], int m, int n ) {
   int i, j, x, y;
   int table[n+1][m];
   for (i=0; i<m; i++)
      table[0][i] = 1;
   for (i = 1; i < n+1; i++) {
      for (j = 0; j < m; j++) {
         x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
         y = (j >= 1)? table[i][j-1]: 0;
         table[i][j] = x + y;
      }
   }
   return table[n][m-1];
}
int main() {
   int arr[] = {1, 2, 3};
   int m = sizeof(arr)/sizeof(arr[0]);
   int n = 4;
   printf("The total number of combinations of coins that sum up to %d",n);
   printf(" is %d ", coins(arr, m, n));
   return 0;
}



Input : N = 6 ; coins = {1,2,4}.
Output : 6
Explanation : The total combination that make the sum of 6
is :
{1,1,1,1,1,1} ; {1,1,1,1,2}; {1,1,2,2}; {1,1,4}; {2,2,2} ; {2,4}.
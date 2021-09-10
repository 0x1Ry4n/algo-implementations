#include <stdio.h>
#include <malloc.h>
#define MAX 12
 
typedef struct Matrices {
	 int first[MAX][MAX];
	 int second[MAX][MAX];
	 int multiply[MAX][MAX];
} _Matrices;
 
 
int main()
{
  _Matrices* matrices = (_Matrices*) malloc(sizeof(_Matrices));
  int m, n, p, q, c, d, k, sum = 0;
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)    
      scanf("%d", &matrices->first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &matrices->second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + matrices->first[c][k] * matrices->second[k][d];
        }
		
        matrices->multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", matrices->multiply[c][d]);
		printf("\n");
    }
  }
 
  return 0;
}
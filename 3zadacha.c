#include <stdio.h> 
#define N 6
  int mat[N][N] ={{1, 1, 1, 1, 1, 1}, 
                  {2, 2, 2, 2, 2, 2}, 
                  {3, 3, 3, 3, 3, 3}, 
                  {4, 4, 4, 4, 4, 4}, 
                  {5, 5, 5, 5, 5, 5},
                  {6, 6, 6, 6, 6, 6}}; 
                       
void sumOfSquares(int k) 
{ 
	int i, j, p, sum=0, prevSum=0;
	int max=N, min=0;
	for (i=0;i<k;i++){	
		prevSum=sum;
		sum=0;
		for(j=min;j<max;j++){
			for(p=min;p<max;p++){
				if(p!=j && ((j==max || p==max) || (j==min || p==min))) {
					 sum=sum + mat[j][p] + mat[p][j];
					 printf("%d ",mat[j][p]);
					 printf("%d ",mat[p][j]);
				}
			}
		}
		min++;
		max--;
		printf("\nSum=%d ", sum);
	}
} 
  
int main() { 
    int n=N-2; //number of sub squares
    sumOfSquares(n);
    return 0; 
} 


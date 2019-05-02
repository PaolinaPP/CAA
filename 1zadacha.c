#include <stdio.h> 
#define N 3
#define M 3
 int array[N][M] = { { 2, 2, 2 }, 
				     { 2, 2, 2 }, 
				     { 2, 2, 2 } };
                       
int checkForMagicMatrix() { 
	//sums of colomns, rows and both diagonals
	int i, j, cols=0, rows=0, diags=0;
	
	//sum of all rows and cols and both diagonals
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N; ++j) {
			rows = rows + array[i][j];
			cols = cols + array[j][i];
			if ((i == j) || ((i + j + 1) == N))
                diags = diags + array[i][j];
		}
	}
    if((cols==rows) && (cols==diags)) return 1;
    else return 0;
} 
  
int main() { 
    if(M==N)  
		printf(checkForMagicMatrix() ? "Magical cub\n" : "Not a magical cub\n");
	else printf("Matrix is not a cub => cant be a magical cub"); 	
    return 0; 
} 

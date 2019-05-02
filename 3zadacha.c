#include <stdio.h> 
#define N 6
int mat[N][N] ={{1, 1, 1, 1, 1, 1}, 
                {2, 2, 2, 2, 2, 2}, 
                {3, 3, 3, 3, 3, 3}, 
                {4, 4, 4, 4, 4, 4}, 
                {5, 5, 5, 5, 5, 5},
                {2, 2, 2, 2, 2, 0}}; 
int monotonous=0;
                       
void sumOfSquares(int k) 
{ 
	int i, j, p, end=N-1, start=0, sum=0, prevSum=0, check=0, ft=0;
	for (p=0;p<k;p++){
		prevSum=sum;
		sum=0;
		for(i=0;i<N;i++){
			for(j=start;j<N;j++){
				if(i==0 && j>=start){
					sum+=mat[i][j];
					//printf("first=%d\n", mat[i][j]);
				}
				else if(j==N-1 && i<=end){
					 sum+=mat[i][j];
					 //printf("second=%d\n", mat[i][j]);
				}
				else if(i==end && j>=start){
					 sum+=mat[i][j];
				     //printf("third=%d\n", mat[i][j]);
				}
				else if(j==start && i<=end){
					 sum+=mat[i][j];
				     //printf("fourth=%d\n", mat[i][j]);
				}
			}
		}
		end--;
		start++;
		if(prevSum>sum && prevSum!=0 && ft==0) {
			check=1;
			ft=1;
		}else if(prevSum<sum && prevSum!=0 && ft==0) {
			check=2;
			ft=1;
		}		
		
		if(check==1){
			if(prevSum>sum) monotonous=1;
			else monotonous=0;
		}else if(check==2){
			if(prevSum<sum) monotonous=1;
			else monotonous=0;
		}
		printf("Sum=%d \n", sum);
	}
} 
  
int main() { 
    int n=N-1; //num of indexes of a start points
    sumOfSquares(n);
    printf(monotonous==1 ? "Monotonna\n" : "Ne e monotonna\n");
    return 0; 
} 

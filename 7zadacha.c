#include <stdio.h> 

#define N 6

int printSpiral(int arr[N][N], int odd)
{
    int i,j,k;
    for(i=N-1, j=0; i>0; i--, j++)
    {
        //print top row
        for(k=j; k<i; k++){
			// printf("%d ", arr[j][k]);
			 if(odd==1){
				if(!(arr[j][k]>arr[j][k++])) return 0;
			 }else {
				if(!(arr[j][k]<arr[j][k++])) return 0;
			 }
        }
        //print last column
        for(k=j; k<i; k++){
			 //printf("%d ", arr[k][i]);
			 if(odd==1){
				if(!(arr[k][i]>arr[k++][i])) return 0;
			 }else {
				if(!(arr[k][i]<arr[k++][i])) return 0;
			 }
        }
        //print last row
        for(k=i; k>j; k--){
			// printf("%d ", arr[i][k]);
			 if(odd==1){
				if(!(arr[i][k]>arr[i][k++])) return 0;
			 }else {
				if(!(arr[i][k]<arr[i][k++])) return 0;
			 }
        }
        //print first column
        for(k=i; k>j; k--){
			//printf("%d ", arr[k][j]);
			if(odd==1){
				if(!(arr[j][k]>arr[j][k++])) return 0;
			 }else {
				if(!(arr[j][k]<arr[j][k++])) return 0;
			 }
		}
		return 1;
    }
    
}

int main() 
{ 
    int a[N][N] = { {1,  2,  3,  4,  5,  6}, 
					{7,  8,  9,  10, 11, 12}, 
					{13, 14, 15, 16, 17, 18},
					{19, 20, 21, 22, 23, 24},
					{25, 26, 27, 28, 29, 30},
					{31, 32, 33, 34, 35, 36}}; 
	int odd=0;
	if(a[0][0]>a[0][1]) odd=1;
	else odd=0;
  
    printf(printSpiral(a, odd) ? "trionoobrazna\n" : "ne e trionoobrazna\n");
    
    return 0; 
} 

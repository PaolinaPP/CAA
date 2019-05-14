#include <stdio.h> 
int arr[] ={1, 2, 0, 0, 5, 6,0 ,20 ,1}; //an initialized array

//a func to swap zeroes with the last non zero elements
void swapZeroes() {
	int i, k=(sizeof(arr)/4)-1, c;
	for(i=0;i<k;i++){
		if(arr[i]==0){
			 arr[i] = arr[k];
		     arr[k] = 0;
		     k--;
		}
	}
	//print the new array
	for(i=0;i<(sizeof(arr)/4);i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main() { 
    swapZeroes();
    return 0; 
}

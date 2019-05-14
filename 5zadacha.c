#include <stdio.h> 
int arr[] ={1, 2, 0, 0, 5, 6,0 ,20 ,1}; //an initialized array


void pushZerosToEnd() 
{ 
    int count = 0;   
    for (int i = 0; i < (sizeof(arr)/4); i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i];
    while (count < (sizeof(arr)/4)) 
        arr[count++] = 0; 
} 
int main() { 
    pushZerosToEnd();
    for (int i = 0; i < (sizeof(arr)/4); i++) 
        printf("%d ", arr[i]); 
    return 0; 
} 

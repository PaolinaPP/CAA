#include <stdio.h> 
int arr[] ={1, 2, 0, 0, 5, 6,0 ,20 ,1}; //an initialized array


void pushZerosToEnd() 
{ 
    int count = 0;  // Count of non-zero elements 
  
    // Traverse the array. If element encountered is non- 
    // zero, then replace the element at index 'count'  
    // with this element 
    for (int i = 0; i < (sizeof(arr)/4); i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i]; // here count is  
                                   // incremented 
  
    // Now all non-zero elements have been shifted to  
    // front and  'count' is set as index of first 0.  
    // Make all elements 0 from count to end. 
    while (count < (sizeof(arr)/4)) 
        arr[count++] = 0; 
} 
int main() { 
    pushZerosToEnd();
    for (int i = 0; i < (sizeof(arr)/4); i++) 
        printf("%d ", arr[i]); 
    return 0; 
} 

#include <stdio.h> 

int sum(int num){
    if (num != 0){
        return (num % 10 + sum (num / 10));
    }
    else
       return 0;
}

int main(){
	int number;
    int result=0;
     
    printf("Enter a positive integer number between 10 and 10000: ");
    scanf("%d",&number);
    if(number>=10 && number<=10000) result=sum(number);
    else {
		printf("Yor number is not between 10 and 10000\n");
		return 0;
	}
    printf("The sum of the digits is: %d\n",result);
    return 0;
}

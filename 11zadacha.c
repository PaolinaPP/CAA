#include <stdio.h> 

//a function to sum numbers between a and b
int sum(int a, int b){
	if(b >= a)
        return b + sum(a,b-1);
    else
        return b;	
}

int main(){
	int a,b, result=0;
	
	printf("Enter 2 numbers A and B between 1 and 10001:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<1 || a>10001 || b<a || b>10001) {
		printf("not correct numbers\n");
		return 0;
	}
	printf("The result is : %d\n", sum(a,b));
	return 0;
}

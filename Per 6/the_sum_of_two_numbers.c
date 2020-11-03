#include <stdio.h>

int funcSum(int number1, int number2) {
	return number1+number2;
}

int main(){
    int number1,number2,sum;
    printf("Enter an Number 1: ");
    scanf("%d", &number1);  
    
    printf("Enter an Number 2: ");
    scanf("%d", &number2);  
    
    while(number1 > -1 && number2 > -1){	
    
	    sum = funcSum(number1,number2);
	    
	    printf("Number 1 = %d\n",number1);
	    printf("Number 2 = %d\n",number2);
	    printf("Sum  = %d\n",sum);
	    printf("copyright@hajik\n\n");
	    
	    printf("Enter an Number 1: ");
	    scanf("%d", &number1);  
	    
	    printf("Enter an Number 2: ");
	    scanf("%d", &number2); 
	    printf("\n");
	}
	
	printf("\nExit, number there is negarif!");
    return 0;
}

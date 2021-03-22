#include <stdio.h>

int main(){ 
	int average;
    printf("Input the teacher's average score :");
    scanf("%d", &average); 
    
    if(average < 2){
    	
    	printf("You cant be a teacher!");
		printf("\n");
    	
	}else if(average < 4) {
		
		printf("You need help.");
		printf("\n");
		
	}else if(average < 5) {
		
		printf("Greet Job!");
		printf("\n");
		
	}else if (average < 6) {
		
		printf("YOU GET A RAISE!");
		printf("\n");
		
	}else{
		
		printf("Whoopss something wrong!");
		printf("\n");
		
	}
 	
	return 0;
}

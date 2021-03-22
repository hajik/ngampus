#include <stdio.h>

int input() {
	int N;
    printf("Enter Number N :");
    scanf("%d", &N); 

    return N;
    
}

int proses(int N, int CTRL, int FACT) {
	
	while(CTRL <= N) {
    	
	    FACT = FACT*CTRL;
		++CTRL;
	  	
	}
	
	return FACT;
}

int output(int FACT){
	printf("PRINT FACT : %d ", FACT);
	printf("\n");
}

int main(){ 
	int N, P;
	int FACT =1, CTRL=1;
	
 	N = input();
 	P = proses(N, CTRL, FACT);
 	output(P);
 	
	return 0;
}

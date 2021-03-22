#include <stdio.h>

int funcArea(int S, int A, int B, int C){
	return sqrt(S*(S-A) * (S-B) * (S-C));
}

int funcPerimeter(int A, int B, int C){
	return A + B + C;
}

int main(){
    int A,B,C,S,area,perimeter;
    
    printf("Enter First Side : ");
    scanf("%d", &A);
    
    printf("Enter Second Side : ");
    scanf("%d", &B);
    
    printf("Enter Thrid Side : ");
    scanf("%d", &C);
    
    while(A > -1 && B > -1 && C > -1){
	    S = (A+B+C)/2.0;
	    
	    area = funcArea(S, A, B, C); 
	    perimeter = funcPerimeter(A, B, C);
	    
	    printf("Area = %d\n",area);
	    printf("Perimeter  = %d\n",perimeter);
	    printf("*copyright@hajik\n\n");
	    
	    printf("Enter First Side : ");
	    scanf("%d", &A);
	    
	    printf("Enter Second Side : ");
	    scanf("%d", &B);
	    
	    printf("Enter Thrid Side : ");
	    scanf("%d", &C);
	    printf("\n");

	}
    
    printf("\nExit, number there is negarif!");
    return 0;
}

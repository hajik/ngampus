#include <stdio.h>

int funcArea(int L, int B){
	return L*B;
}

int funcPerimeter(int L, int B){
	return 2*(L+B);
}

int main(){
    int L,B,area,perimeter;
    
    printf("Enter Length : ");
    scanf("%d", &L);  
    
    printf("Enter Breadth : ");
    scanf("%d", &B);
    
    while(L > -1 && B > -1){	
	    area = funcArea(L,B); 
	    perimeter = funcPerimeter(L,B);
	    
	    printf("L = %d\n",L);
	    printf("B = %d\n",B);
	    printf("Area = %d\n",area);
	    printf("Perimeter  = %d\n",perimeter);
	    printf("*copyright@hajik\n\n");
	    
		printf("Enter Length : ");
	    scanf("%d", &L);  
	    
	    printf("Enter Breadth : ");
	    scanf("%d", &B);
  	    printf("\n");

	}
    
    printf("\nExit number there is negarif!");
    return 0;
}

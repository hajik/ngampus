#include <stdio.h>

int funcArea(int L) {
	return L*L;
}

int funcPerimeter(int L) {
	return 4*L;
}

int main(){
    int L,area,perimeter;
    printf("Input Side Length of Square : ");
    scanf("%d", &L);  
    
    while(L > -1) {
    	
	    area = funcArea(L);
	    perimeter = funcPerimeter(L);
	    
	    printf("L = %d\n",L);
	    printf("Area = %d\n",area);
	    printf("Perimeter  = %d\n",perimeter);
	    printf("*copyright@hajik\n\n");
	    
        printf("Input Side Length of Square : ");
		scanf("%d", &L);  
	    printf("\n");
	}
    
    printf("\nExit number there is negarif!");
    return 0;
}

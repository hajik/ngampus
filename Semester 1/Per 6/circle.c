#include <stdio.h>

int funcArea(int R){
	return 22.0/7.0*R*R;
}

int funcPerimeter(int R){
	return 2*22.0/7*R;
}

int main(){
    int R,area,perimeter;
    
    printf("Enter Radius : ");
    scanf("%d", &R);
    
	while(R > -1){
	    area = funcArea(R); 
	    perimeter = funcPerimeter(R);
	    
	    printf("R = %d\n",R);
	    printf("Area = %d\n",area);
	    printf("Perimeter  = %d\n",perimeter);
	    printf("*copyright@hajik\n\n");
	    
        printf("Enter Radius : ");
		scanf("%d", &R);
		printf("\n");
	}
    
    printf("\nExit, number there is negarif!");
    return 0;
}

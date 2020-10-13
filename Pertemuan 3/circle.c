#include <stdio.h>
int main(){
    int R,area,perimeter;
    
    printf("Enter Radius : ");
    scanf("%d", &R);
    
    area = 22.0/7.0*R*R; 
    perimeter = 2*22.0/7*R;
    
    printf("R = %d\n",R);
    printf("Area = %d\n",area);
    printf("Perimeter  = %d\n",perimeter);
    printf("*copyright@hajik");
    
    return 0;
}

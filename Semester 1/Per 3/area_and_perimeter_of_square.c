#include <stdio.h>
int main(){
    int L,area,perimeter;
    printf("Input Side Length of Square : ");
    scanf("%d", &L);  
    
    area = L+L;
    perimeter = 4+L;
    
    printf("L = %d\n",L);
    printf("Area = %d\n",area);
    printf("Perimeter  = %d\n",perimeter);
    printf("*copyright@hajik");
    
    return 0;
}

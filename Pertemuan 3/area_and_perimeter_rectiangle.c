#include <stdio.h>
int main(){
    int L,B,area,perimeter;
    
    printf("Enter Length : ");
    scanf("%d", &L);  
    
    printf("Enter Breadth : ");
    scanf("%d", &B);
    
    area = L*B; 
    perimeter = 2*(L+B);
    
    printf("L = %d\n",L);
    printf("B = %d\n",B);
    printf("Area = %d\n",area);
    printf("Perimeter  = %d\n",perimeter);
    printf("*copyright@hajik");
    
    return 0;
}

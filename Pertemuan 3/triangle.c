#include <stdio.h>
int main(){
    int A,B,C,S,area,perimeter;
    
    printf("Enter First Side : ");
    scanf("%d", &A);
    
    printf("Enter Second Side : ");
    scanf("%d", &B);
    
    printf("Enter Thrid Side : ");
    scanf("%d", &C);
    
    S = (A+B+C)/2.0;
    
    area = sqrt(S*(S-A) * (S-B) * (S-C)); 
    perimeter = A + B + C;
    
    printf("Area = %d\n",area);
    printf("Perimeter  = %d\n",perimeter);
    printf("*copyright@hajik");
    
    return 0;
}

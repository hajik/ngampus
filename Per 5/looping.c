#include <stdio.h>
int main(){
    int N,i,SUM;
    printf("Enter an Number : ");
    scanf("%d", &N); 
    
	for (i = 1; i <= N; ++i){
	    printf("%d", i);
	    
	    if(i<N){
			printf("+");
		}
		
		SUM = SUM+i;
	}
	
    printf("\nSUM = %d", SUM);
    
    printf("\n\ncopyright@hajik");
    return 0;
}

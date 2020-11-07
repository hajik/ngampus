#include <stdio.h>

int displaySum(int data[5]) {
	
	int i, total = 0;
	
	for(i = 0; i < 5; ++i) {
     
     printf("Values ages : %d\n", data[i]);
     total += data[i];
     
 	}
     
    printf("TOT : %d\n", total);
	return total;
	
}

int main(){
    int ages[5] = {5, 5, 5, 5, 5};
    
	int total;
	
	total = displaySum(ages);
    
    printf("\nTotal : %d", total);
    
    return 0;
}

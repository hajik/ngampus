#include <stdio.h>

int sum(int ages[5]) {
	
	int i, total = 0;
	
	for(i = 0; i < 5; ++i) {
     
     printf("Value : %d\n", ages[i]);
     total += ages[i];
     
 	}
     
	return total;
	
}

int main(){
    int ages[5] = {49, 48, 26, 19, 16};
    
	int total;
	
	total = sum(ages);
    
    printf("\nTotal : %d", total);
    
    return 0;
}

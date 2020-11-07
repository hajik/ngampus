#include <stdio.h>

int displaySum(int data[5]) {
	
	int i, total;
	
	for(i = 0; i < 5; ++i) {
     
     printf("Values ages : %d\n", data[i]);
     total += data[i];
     
 	}
     
	return total;
	
}

int main(){
    int ages[5] = {49, 48, 26, 19, 16};
    
	int total;
	
	total = displaySum(ages);
    
    printf("\nTotal : %d", total);
    
    return 0;
}

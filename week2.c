// sample code
// by: LLA
// 14 july 2015

#include <stdio.h>

#define COST_PER_ATM_CHARGE 8
int main (int argc, char* argv[]) {
    int dollars;
    int cents;
    int output;
    
    printf("How many dollars do you have?\n");
    scanf("%d", &dollars);
    dollars = dollars / 2;
	printf("You now have $%d, happy to be of service\n", dollars);
    
    printf("How about cents?\n");
    scanf("%d", &cents);

    output = (dollars + cents) * COST_PER_ATM_CHARGE;
    printf("dollars=%d, cents=%d, output=%d\n", 
    	  dollars,cents, output);

	return 0;
}





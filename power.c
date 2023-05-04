#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int findpwr(int num, int pwr, int amt, int ct);

int main(){
	int ret, num, pwr, amt = 0;
	printf("Please enter a number:\n");
	ret = scanf("%d", &num);
	printf("Please enter a power:\n");
	ret = scanf("%d", &pwr);
	amt = num;
	ret = findpwr(num, pwr, amt, 0);

	printf("%d to the %d power is %d\n", num, pwr, ret);

	exit(exit_success);
}

int findpwr(int num, int pwr, int amt, int ct){
	
	while(ct!=pwr-1){
		amt=amt*num;		
		printf("the 'if'num is %d\n", amt);
		return findpwr(num, pwr, amt, ++ct);
	}
	return amt;
}

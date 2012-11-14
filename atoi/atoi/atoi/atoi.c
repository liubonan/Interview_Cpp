#include <stdio.h>

double f(double, double);

int main(void){
	int c;
	long result=0;
	
	while((c = getchar()) <= '9' && c>='0'){
		result =result*10 + (c-'0');
	}
	printf("%d\n",result+1);
	return 0;
}

double f(double a, double b){}
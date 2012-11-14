#include <iostream>

using namespace std;

int count2s(int n);
int digits(int n);

int main(void){
	cout << count2s(7000) << endl;
	return 0;
}

int count2s(int n){
	int count = 0;
	int digit = digits(n);
	
	int r = n / pow(10,digit);
	if(r == 1){

	}
	else if(r == 2){
		digit = digit - 1;
	}
	else{

	}

	count += (n / 10) * digit;

}

int digits(int n){
	int count = 0;

	while(n >= 0){
		count += 1;
		n = n / 10;
	}
}
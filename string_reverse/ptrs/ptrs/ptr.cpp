#include<iostream>

using namespace std;

int main(){
	int a[10];
	int i = 0;
	while(i<10)
		a[i++] = i;

	int * p;
	p = &a[9];
	
	
	while(i >0){
		cout << *p << " ";
		p--;
		i--;
	}
	return 0;
}
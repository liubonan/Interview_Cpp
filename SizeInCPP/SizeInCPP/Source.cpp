#include <iostream>

using namespace std;

namespace std{
	int f(int a, int b){
		return a>b?a:b;
	}
}

struct testa{
	char a;
	short b;
};

int main(void){
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of bool: " << sizeof(bool) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of short: " << sizeof(short) << endl;
	cout << "Size of long: " << sizeof(long) << endl;
	cout << "Size of struct: " << sizeof(testa) << endl;
	getchar();
	return 0;
}
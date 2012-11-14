#include <iostream>

using namespace std;

string decimal_to_binary(double n);

int main(void){
	
	string c = decimal_to_binary(0.25);
	cout << c.data() << endl;
	return 0;
}

string decimal_to_binary(double n){
	if(n - int(n) <= 0)
		return "";
	if(n >= 1)
		return "";
	string result;
	while(result.length() <=16 && n != 0){
		int temp = (int) (n * 2);
		n = (n*2) - temp;
		temp == 0?result.append("0"):result.append("1");
	}

	string r = "0.";
	return r.append(result);
}
#include<iostream>
#include<vector>

using namespace std;

int main(void){
	double d = 98.25;
	vector<int> result;
	vector<int> result_d;

	int a = floor(d);
    double b = d - a;

	int op;

	while(a){
		op = a % 2;
		a = a / 2;
		result.push_back(op);
	}

	
	while(b){
		op = floor(b * 2);
		b = b*2 - op;
		result_d.push_back(op);
	}



	if(result[result.size()-1]) cout << result[result.size()-1];
	for(int i=result.size()-2;i>=0;i--)
		cout << result[i];
	cout << ".";
	for(int i=0;i<result_d.size();i++)
		cout<<result[i];
	return 0;
}
	
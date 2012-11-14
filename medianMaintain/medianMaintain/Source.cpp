#include <iostream>
#include <queue>

using namespace std;

class Solution{
private:
	priority_queue<int> left, right; 
	int median;

public:
	void add(int n);
	int get_median(void);
	Solution(){this->median = INT_MIN;}
};

void Solution::add(int n){
	if(median == INT_MIN){
		median = n;
		left.push(n);
	}
	else{
		if(n < median){
			left.push(n);
		}
		else{
			right.push(n);
		}
		
		if(left.size() > right.size()+1){
			median = left.top();
			right.push(median);
			//median = left.;
			//left.pop();
		}
		else if(left.size() < right.size() + 1){
			left.push(median);
			median = right.top();
			//left.pop();
		}
	}
}

int Solution::get_median(void){
	return this->median;
}

int main(void){
	int a[] = {5,6,7,8,4,3,2,1};
	Solution sol;
	for(int i = 0; i < 8; i++){
		sol.add(a[i]);
		cout << sol.get_median() << endl;
		getchar();
	}
}

#include <iostream>

using namespace std;

int hanoi(int n);
int solve(int n, int cur, int temp, int goal);

int main(){
	cout << hanoi(3) << endl;
	return 0;
}

int solve(int n, int cur, int temp, int goal){
	if (n == 1){
		cout << "move from " << cur << " to " << goal << endl;
		return 1;
	}
	else{
		int count = 0;
		count += solve(n-1,cur,goal,temp);
		cout << "move from " << cur << " to " << goal << endl;
		count += 1;
		count += solve(n-1, temp, cur, goal);
		return count;
	}

}

int hanoi(int n){
	return solve(n,1,2,3);
}


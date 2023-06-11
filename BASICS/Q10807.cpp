#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int N; cin >> N;
	vector<int> vec;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	int check; cin >> check;

	cout << count(vec.begin(),vec.end(), check);
}
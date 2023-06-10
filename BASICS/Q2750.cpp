#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	list<int> array;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		array.push_back(num);
	}

	array.sort();
	for (int i = 0; i < N; i++) {
		cout << array.front() << endl;
		array.pop_front();
	}
	
}
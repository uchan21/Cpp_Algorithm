#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

void setup(queue<int>& que,int N);
void commend(queue<int>& que);

int main() {
	int N; cin >> N; queue<int> que;
	setup(que, N);
	commend(que);
}

void setup(queue<int>& que, int N) {
	for (int i = 1; i <= N; i++) {
		que.push(i);
	}
}

void commend(queue<int>& que) {
	int plag = 0;
	while(que.size()!=1){
		if (plag == 0) {
			que.pop(); plag = 1;
		}
		else if (plag == 1) {
			que.push(que.front()); que.pop(); plag = 0;
		}
	}
	cout << que.front() << endl;
}
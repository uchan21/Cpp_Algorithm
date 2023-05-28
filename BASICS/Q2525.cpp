#include <iostream>
using namespace std;

int main() {
	int H, M;
	cin >> H >> M;

	int plus_M;
	cin >> plus_M;

	M += plus_M;
	
	while (M >= 60) {
		if (M >= 60) {
			H++;
			if (H >=24) {
				H -= 24;
			}

			M -= 60;
		}
	}

	cout << H << " " << M;
}

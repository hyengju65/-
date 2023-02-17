#include <iostream>
using namespace std;

int main() {

	string H;
	string Z;
	int arr[sizeof(H)][sizeof(Z)], n;
	cout << "홀수를 입력하여 마방진을 생성하세요 : ";
	cin >> n;
	
	int x = 0, y = n / 2;
	
	for (int i = 0; i < n * n; i++) {

		if (x < 0) x += n;
		if (y >= n) y -= n;
		arr[x][y] = i+1;
		if ((i+1) % n == 0) {
			x++;
			continue;
		}
		x--;
		y++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;

}

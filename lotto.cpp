#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));

	int lotto[6];
	int myLotto[6];

	for (int i = 0; i < 6; i++) {
		lotto[i] = rand() % 25 + 1;
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--;
			}
		}
	}
	cout << "6가지의 숫자를 1~25까지의 숫자 중 입력하세요\n";

	for (int i = 0; i < 6; i++) {

		cout << i + 1 << "번째 숫자를 입력하세요";

		cin >> myLotto[i];
		if (myLotto[i] > 25 || myLotto[i] < 1) {
			cout << "범위를 벗어난 숫자입니다.\n";
			i--;
		}
		for (int j = 0; j < i; j++) {
			if (myLotto[i] == myLotto[j]) {
				cout << "중복된 숫자입니다\n";
				i--;
			}
		}
	}
	cout << "-----------------당첨번호 공개!!-----------------\n";
	int game = 7;
	for (int i = 0; i < 6; i++) {
		cout << lotto[i] << " ";
		for (int j = 0; j < 6; j++) {
			if (lotto[i] == myLotto[j]) {
				game -= 1;
			}
		}
	}
	cout << "결과 : " << game << "등 입니다. 축하합니다!!!!" << endl;

}

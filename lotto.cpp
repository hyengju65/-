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
	cout << "6������ ���ڸ� 1~25������ ���� �� �Է��ϼ���\n";

	for (int i = 0; i < 6; i++) {

		cout << i + 1 << "��° ���ڸ� �Է��ϼ���";

		cin >> myLotto[i];
		if (myLotto[i] > 25 || myLotto[i] < 1) {
			cout << "������ ��� �����Դϴ�.\n";
			i--;
		}
		for (int j = 0; j < i; j++) {
			if (myLotto[i] == myLotto[j]) {
				cout << "�ߺ��� �����Դϴ�\n";
				i--;
			}
		}
	}
	cout << "-----------------��÷��ȣ ����!!-----------------\n";
	int game = 7;
	for (int i = 0; i < 6; i++) {
		cout << lotto[i] << " ";
		for (int j = 0; j < 6; j++) {
			if (lotto[i] == myLotto[j]) {
				game -= 1;
			}
		}
	}
	cout << "��� : " << game << "�� �Դϴ�. �����մϴ�!!!!" << endl;

}

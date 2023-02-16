#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	int num;
	int num_c;
	int game = 1;
	bool turn = true;



	while (game < 32) {

		if (turn) {
			cout << "개수를 입력하세요 (1~3) : ";
			cin >> num;
			if (num > 3 || num < 1) {
				cout << "잘못입력하셨습니다. \n";
				break;
			}

			cout << "사용자가 부른 숫자 :" << num << endl;
			turn = false;
		}
		else {

			cout << "개수를 입력하세요 (1~3) : ";
			cin >> num;
			if (num > 3 || num < 1) {
				cout << "잘못입력하셨습니다.\n";
				break;
			}
			cout << "컴퓨터가 부른 숫자 : " << num << endl;
			turn = true;
		}

		for (int i = 0; i < num; i++) {
			cout << game << endl;
			game++;
			if (game == 32) break;
		}
	}

	cout << "------------게임 종료------------\n";
	turn ? cout << "사용자의 승리!!" : cout << "컴퓨터의 승리!!";


}
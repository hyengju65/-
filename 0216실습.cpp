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
			cout << "������ �Է��ϼ��� (1~3) : ";
			cin >> num;
			if (num > 3 || num < 1) {
				cout << "�߸��Է��ϼ̽��ϴ�. \n";
				break;
			}

			cout << "����ڰ� �θ� ���� :" << num << endl;
			turn = false;
		}
		else {

			cout << "������ �Է��ϼ��� (1~3) : ";
			cin >> num;
			if (num > 3 || num < 1) {
				cout << "�߸��Է��ϼ̽��ϴ�.\n";
				break;
			}
			cout << "��ǻ�Ͱ� �θ� ���� : " << num << endl;
			turn = true;
		}

		for (int i = 0; i < num; i++) {
			cout << game << endl;
			game++;
			if (game == 32) break;
		}
	}

	cout << "------------���� ����------------\n";
	turn ? cout << "������� �¸�!!" : cout << "��ǻ���� �¸�!!";


}
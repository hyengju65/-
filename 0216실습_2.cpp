#include <iostream>
#include <time.h>
#include<ctime>

using namespace std;

int time_sec(double S) {
	double T = time(NULL);
	double sec;
	if (sec = (double)(T - S) > 7)
		return 0;
	else
		return 1;
}

int main() {
	time_t start, finish;

	string pre = "apple";
	string next;
	string answer = pre;
	int voca = 0;
	cout << pre << endl;

	start = time(NULL);
	while(true) {
		cout << "���� �ܾ��? : \n";
		cin >> next;
		cout << endl;
		if (pre.at(pre.size() - 1) == next.at(0)) {
			if (time_sec(start)) {
				answer = answer + "->" + next;
				pre = next;
				cout << answer << endl;
				voca++;
			}
			else {
				cout << "-------------Ÿ�ӿ���---------------\n" << "-------------��������---------------\n";
				cout << "�� �Է��� �ܾ� ��:" << voca << endl;
				return -1;
			}
		}
		else {
			cout << "�߸����Է��Դϴ�\n";
		}
	}


}
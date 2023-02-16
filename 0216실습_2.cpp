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
		cout << "다음 단어는? : \n";
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
				cout << "-------------타임오버---------------\n" << "-------------게임종료---------------\n";
				cout << "총 입력한 단어 수:" << voca << endl;
				return -1;
			}
		}
		else {
			cout << "잘못된입력입니다\n";
		}
	}


}
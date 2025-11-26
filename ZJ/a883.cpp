#include <iostream>
using namespace std;

int main() {
	int times[3][2];
	bool hisHappyDay[24] = {}, sameTime = false;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			cin >> times[i][j];
	for (int i = 0; i < 3; i++) 
		for (int j = times[i][0] + 1; j <= times[i][1]; j++) {
			if (hisHappyDay[j])
				sameTime = true;
			hisHappyDay[j] = true;
		}
	if (!sameTime)
		cout << "Happy\n";
	else
		cout << "QQ\n";

  return 0 ;
}

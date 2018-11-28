//Напишите программу, находящие все простые числа Чэня, не превосходящие n.

#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	
	bool* used = new bool[n + 1];

	for (int i = 2; i <= n; i++){
		*(used + i) = true;
	}
	for (int i = 2; i <= n; i++){
		if (*(used + i) != false){
			for (int j = i + i; j <= n; j += i){
				*(used + j) = false;
			}
		}
	}

	for (int p = 2; p <= n; p++){
		for (int j = 2; j <= p / 2; j++){
			if (*(used + p) == true && ((*(used + p + 2) == true) || ((p + 2) % j == 0 && *(used + ((p + 2)/j)) == true && j == true))) cout << p << endl;
		}
	}

	return 0;
}

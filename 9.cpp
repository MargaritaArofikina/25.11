//Напишите программу, находящую все простые числа Софи Жермен, не превосходящие n.

#include <iostream>
using namespace std;



int main(){

	int n;
	cin >> n;

	bool* used = new bool[n + 1];

	for (int i = 2; i <= n * 2 + 1; i++){
		*(used + i) = true;
	}
	for (int i = 2; i <= n * 2 + 1; i++){
		if (*(used + i) != false){
			for (int j = i + i; j <= n; j += i){
				*(used + j) = false;
			}
		}
		if (*(used + i) == true) {
			if (*(used + 2 * i + 1) == true) cout << i << " " << 2 * i + 1 << endl;
		}
	}

	return 0;
}

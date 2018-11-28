//Напишите переборную программу, вычисляющую значение функции Эйлера для числа n;

#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int m = 1;

	if (n == 1) {
		m = 1;
	}
	else {

		bool* used = new bool[n + 1];

		for (int i = 1; i <= n; i++){
			*(used + i) = true;
		}
		for (int i = 2; i <= n; i++){
			if (*(used + i) != false){
				for (int j = i + i; j <= n; j += i){
					*(used + j) = false;
				}
			}
		}

		for (int i = 2; i < n; i++){
			if (*(used + i) == true && (n % i) != 0) m++;
		}
	}

	cout << m;

	return 0;
}

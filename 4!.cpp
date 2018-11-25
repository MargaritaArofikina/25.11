//Напишите программу, находящую первые n составных чисел.

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




	for (int i = 2; i <= n; i++){

		if (*(used + i) == false) cout << i << endl;

	}

	return 0;
}

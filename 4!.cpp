//Напишите программу, находящую первые n составных чисел.

#include <iostream>
using namespace std;

int n;

bool* used = new bool[n + 1];

	for (int i = 0; i <= n; i++){
		*(used + i) = i;
	}

	*used[0] = *used[1] = false;

	for (int i = 2; i <= n; i++){
		*used[i] = true;
	}
	for (int i = 2; i <= n; i++){
		if (*used[i] != false){
			for (int j = i + i; j <= n; j += i){
				*used[j] = false;
			}
		}
	}


int main(){

	int n;
	cin >> n;

	for (int i = 0; i <= n; i++){

		if (*(used + i) == false) cout << *(used + i) << endl;

	}

	return 0;
}

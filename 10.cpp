//Напишите функцию, вычисляющую праймориал числа.

#include <iostream>
using namespace std;



int primorial(int n){

	int pr = 1;

	bool* used = new bool[n + 1];    //решето Эратосфена

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
		if (*(used + i) == true) pr *= i;
	}

	return pr;
}



int main(){

	int n;
	cin >> n;

	cout << primorial(n);


	return 0;
}

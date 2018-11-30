//Напишите эффективную программу, находящую все числа длины n, являющиеся палиндромами.

#include <iostream>
using namespace std;

int main(){

	int n, min, max, a, b,p;
	cin >> n;
	cout << endl;

	min = 1;
	max = 9;
	b = 0;

	
		for (int i = 1; i <= (n / 2 - 1); i++){
			min *= 10;
			max += 9 * min;
		}
		for (int j = min; j <= max; j++){
			a = j;
			p = a;
			for (int k = 1; p >= 1; k *= 10){
				b += (p % 10)*min / k;
				p /= 10;
			}
			if (n % 2 == 0){
				cout << a << b << endl;
			}
			else{
				for (int i = 0; i <= 9; i++){
					cout << a << i << b << endl;
				}
			}
		}

		

		

	return 0;
}

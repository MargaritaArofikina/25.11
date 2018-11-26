//Напишите эффективную программу, находящую все числа длины n, являющиеся палиндромами.

#include <iostream>
using namespace std;

int main(){

	int n,max,min,k,p;
	cin >> n;

	max = 0;
	
	k = 1;

	for (int i = 1; i <= n - 1; i++){
		for (int j = 1; j <= n - i; j++){
			k *= 10;
		}
		max += 9 * k;
	}

	p = 1;

	for (int i = 1; i <= n - 1; i++){
			p *= 10;
		}
	min = p + 1;
		
	for (int i = min; i <= max; i++){
		for (int j = 1; j <= n / 2; j++){
			int d = (n - j) * 10;
			int s = 1;

			if ((i / d) % s != (i%j) / (j / 10)) {
				break;
			}
			if (j == n / 2) cout << i<< endl;
		}
	}

	return 0;
}

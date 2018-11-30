//Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k.

#include <iostream>
using namespace std;


void massive(int* arr, int n, int k){   //программа эффективная, потому что работает за O(n).

	int m = 1;

	for (int i = 0; i < n; i++){
		for (int j = 1; *(arr + i) >= 1; j++){
			if (*(arr + i) % 10 != 0) m *= (*(arr + i) % 10);

			if (m > k) {
				cout << *(arr + i) << endl;
				break;
			}
			*(arr + i) /= 10;
		}
		
	}

}

int main(){

	int n, k;
	cin >> n >> k;

	int* arr = new int[n];

	for (int i = 0; i < n; i++){
		cin >> *(arr + i);
	}

	cout << endl;
	massive(arr,n,k);

	return 0;
}

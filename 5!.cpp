//Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k.

#include <iostream>
using namespace std;


int amount(int n, int k, int* arr){

	int m = 1;
	int s = 0;
	for (int i = 0; i < n; i++){
		if (*(arr + i) != 0) {
			for (int j = 1; j < *(arr + i); j *= 10){
				if ((*(arr + i) % (10 * j)) / j != 0) m *= (*(arr + i) % (10 * j));
			}
			if (m > k) s++;
		}
	}
	return s;
}

void massive (int n, int k, int* arr){

	int m = 1;
	int l = amount(n, k, arr);
	int *arr1 = new int[l];


	for (int i = 0; i < n; i++){
		if (*(arr + i) != 0) {
			for (int j = 1; j < *(arr + i); j *= 10){
				if ((*(arr + i) % (10 * j)) / j != 0) m *= *(arr + i);
			}
			if (m > k) {
				for (int p = 0; p < l; p++){
					*(arr1 + p) = *(arr + i);
				}
			}
		}
	}

	arr = arr1;

}


int main(){

	int n, k, l;
	cin >> n >> k;
	
	int* arr = new int[n];

	for (int i = 0; i < n; i++){
		cin >> *(arr + i);
	}

	massive(n, k, arr);

	l = amount(n, k, arr);

	for (int i = 0; i < l; i++){
		cout << *(arr + i) << endl;
	}

	return 0;
}

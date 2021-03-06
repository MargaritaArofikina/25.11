//Напишите программу, находящую корни уравнения 2018Х + 2019Y = 78487894 эффективным перебором.

#include <iostream>
using namespace std;

int main(){    //программа, находящая 1 из корней.

	int x = 0;
	int y = 0;
	int c = 78487894;
	int a = 2018;
	int b = 2019;

	for (int i = 1; i <= c / b; i++){
		for (int j = 1; j <= c / a; j++){
			if ( a*i + b*j == c ) {
				x = i;
				y = j;
			}
		}
	}

	cout << x << ' ' << y;

	return 0;
}


//корни получились 37073 и 1820.


#include <iostream>
using namespace std;

int main(){                    //программа, находящая все натуральные корни.
	int x = 37073;
	int y = 1820;

	for (int c = 1; x <= (78487894 - 2019) / 2018; c++){
		if ((37073 + 2019 * c) * 2018 + (1820 - 2018 * c) * 2019 == 78487894){
			x = 37073 + 2019 * c;
			y = 1820 - 2018 * c;
			if (x > 0 && y > 0) cout << x << " " << y << endl;
		}
	}

	for (int c = 1; y <= (78487894 - 2018) / 2019; c++){
		if ((37073 - 2019 * c) * 2018 + (1820 + 2018 * c) * 2019 == 78487894){
			x = 37073 - 2019 * c;
			y = 1820 + 2018 * c;
			if (x > 0 && y > 0) cout << x << " " << y << endl;
		}
	}

	return 0;
}


//программа эффективная, так как работает за О(1).

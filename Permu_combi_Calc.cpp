#include<iostream>
using namespace std;
int main() {
	int n, r,x;
	cout << "\033[96mPlease Select any option: \033[0m\n";
	cout << "\033[92m1.  Factorial of a Number.\n";
	cout << "2.  Calculation of nPr.\n";
	cout << "3.  Calculation of nCr by formula.\n";
	cout << "4.  Calculation of nCr by function.\n";
	cout << "5.  Exit the Program.\033[0m\n";
	cout << "\033[96mEnter the number of the option: \033[0m";
	cin >> x;
	if (x == 1) {
			int n = 0, i = 0, fac = 1;
			cout << "\n\033[93m<<--<>-<>-<>-<>-<>-<>-<>-Factorial CALCULATOR -<>-<>-<>-<>-<>-<>-->>\033[0m\n\n";

			cout << "\n\nEnter The Number to Calculate Factorial: ";
			cin >> n;
			if (n < 0) {
				cout << "\nSORRY, Factorial of Negative numbers is not possible !\n";
				return(0);
			}

			for (i = n;i > 0;i--) {
				fac = fac * i;
			}
			cout << "\nFactorial of " << n << " is: " << fac << endl;
	}

	if (x == 2) {

	cout << "\n\033[93m<<--<>-<>-<>-<>-<>-<>-<>-PERMUTATION CALCULATOR -<>-<>-<>-<>-<>-<>-->>\033[0m\n\n";
		int n = 0, r = 0, nFac = 1, nrFac=1, result=0;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << "Enter the value of r: ";
	cin >> r;
	if (n < r) {
		cout << "\nNOT POSSIBLE, r can never be greater than n ! \n";
		return(0);
	}
	if (n < 0 || r<0) {
		cout << "\nSORRY, Permutation of Negative numbers is not possible !\n";
		return(0);
	}

	for (int i = n;i > 0;i--) {
		nFac = nFac * i;
	}
	for (int i = (n - r);i > 0;i--) {
		nrFac = nrFac * i;
	}
	result = nFac / nrFac;
	cout << "\n\nThe value of " << n << "P" << r << " is " << result << endl << endl;;

	}

	if (x == 3) {
		cout << "\n\033[93m<<--<>-<>-<>-<>-<>-<>-<>-COMBINATION CALCULATOR by Formula -<>-<>-<>-<>-<>-<>-->>\033[0m\n\n";
		int n = 0, nFac = 1, r = 0, nrFac = 1, result = 0, rFac = 1;
		cout << "Enter the value of n: ";
		cin >> n;
		cout << "Enter the value of r: ";
		cin >> r;
		if (n < r) {
			cout << "\nNOT POSSIBLE, r can never be greater than n ! \n";
			return(0);
		}
		if (n < 0 || r < 0) {
			cout << "\nSORRY, Combination of Negative numbers is not possible !\n";
			return(0);
		}

		for (int i = n;i > 0;i--) {
			nFac = nFac * i;
		}
		for (int j = (n - r);j > 0;j--) {
			nrFac = nrFac * j;
		}
		for (int k = r;k > 0;k--) {
			rFac = rFac * k;
		}
		result = nFac / (nrFac * rFac);
		cout << "\n\nThe value of " << n << "C" << r << " is " << result << endl << endl;
	}

	if (x == 4) {
		cout << "\n\033[93m<<--<>-<>-<>-<>-<>-<>-<>-COMBINATION CALCULATOR by Function -<>-<>-<>-<>-<>-<>-->>\033[0m\n\n";
		int n = 0, n_Fac = 1, r = 0, nr_Fac = 1, nCr = 0, r_Fac = 1, nPr;
		cout << "Enter the value of n: ";
		cin >> n;
		cout << "Enter the value of r: ";
		cin >> r;
		if (n < r) {
			cout << "\nNOT POSSIBLE, r can never be greater than n ! \n";
			return(0);
		}
		if (n < 0 || r < 0) {
			cout << "\nSORRY, Combination of Negative numbers is not possible !\n";
			return(0);
		}

		for (int i = n;i > 0;i--) {
			n_Fac = n_Fac * i;
		}
		for (int j = (n - r);j > 0;j--) {
			nr_Fac = nr_Fac * j;
		}
		for (int k = r;k > 0;k--) {
			r_Fac = r_Fac * k;
		}
		nPr = n_Fac / nr_Fac;
		nCr = nPr / r_Fac;
		cout << "\n\nThe value of " << n << "C" << r << " by using Function is " << nCr << endl << endl;
	}

	if (x == 5) {
		cout << "\n\033[93m<<--<>-<>-<>-<>-<>-<>-<>- Program has been Terminated -<>-<>-<>-<>-<>-<>-->>\033[0m\n\n";
		return(0);
	}
}

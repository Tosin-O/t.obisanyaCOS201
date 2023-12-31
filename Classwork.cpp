#include <iostream>
using namespace std;

int a;
int b;
int c;
int main() {
	cout << "Program to find the largest among three numbers" << endl;
	cout << "Please input the values of a, b and c" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a>= b) {
		if (b> c) {
			cout << " " << a << " is the largest number" << endl;
		}
	}
	if (b >= a ) {
		if ( a > c) {
			cout << " " << b << " is the largest number" << endl;
		}
	}
	if ( c >= b) {
		if ( b > a){
			cout << " " << c << " is the largest number" << endl;
		} 
	}
	return 0;
	}
	


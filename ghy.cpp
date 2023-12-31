#include <iostream>
using namespace std;

char a;
int main() {
	cout << " This is a program to do something" << endl;
	cout << "Type a letter below" << endl;
	cin >> a;
if((a>='a'&&a<='z')	||(a>='A'&&a<='Z')){
	if ( a>= 'B' && a<= 'Z' && a!= 'A' && a!= 'E' && a!= 'I' && a!= 'O' && a!= 'U' ) {
		cout << "This is a consonant" << endl;
	}
	else {
		cout << "it's a vowel" << endl;
	}
}
else{
cout << "It's a special character" << endl;
}

	return 1;
}

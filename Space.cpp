#include <iostream>
using namespace std;

char a;
int main() {
	cout << " This is a program to do something" << endl;
	cout << "Type a letter below" << endl;
	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	cin >> a;
	
	for ( int i = 0; i<5; i++){
		if (vowels[i] == a) {
			cout << "This is a vowel" << endl;
			break;
		}
		if ( a>= 'b' && a<= 'z' && a!= 'a' && a!= 'e' && a!= 'i' && a!= 'o' && a!= 'u' ) {
		cout << "This is a consonant" << endl;
	}
		else{
		cout << " error" << endl;
		break;
	}
	}
	
	return 1;
}

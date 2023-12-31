#include <iostream>
using namespace std;
 char a;
 
int main () {
	cout << "This is a program to check if a character is a vowel or consonant" << endl;
	
	char vowels [5] = {'a', 'e', 'i', 'o', 'u'};
	cin >> a;
	
	for ( int i = 0; i<5; i++){
	if (vowels[i] == a){
		cout << " " << " is a vowel" << endl;
	}
}
	
	
}

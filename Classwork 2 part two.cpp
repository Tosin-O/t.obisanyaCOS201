#include <iostream>
using namespace std;
 char a;
 
int main () {
	cout << "This is a program to check if a character is a vowel or consonant" << endl;
	
	char vowels [10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	cin >> a;
	
	for ( int i = 0; i<5; i++){
	if (vowels[i] == a){
		cout << " " << " is a vowel" << endl;
	}
}
return 2;	
	
}

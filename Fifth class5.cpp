#include <iostream>
using namespace std;

int main() {
	char grade = 'A';
	
	switch (grade) {
		case 'A' :
			cout << "Excellent!" << endl;
			//break;
		case 'B' :
			cout << "Very Good!" << endl;
			break;
		case 'c' :
			cout << "Well Done!" << endl;
			break;
		case 'D' :
			cout << "You passed!" << endl;
			break;
		case 'F' :
			cout << "Better try again!" << endl;
			break;
		default :
			cout << "Invalid grade" << endl;
	}
	return 0;
}

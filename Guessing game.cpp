#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
	int guess;
	
    srand(time(0));
    int number = rand() % 10 + 1;
    
    cout << "Guess a number from 1 to 10: ";
    cin >> guess;

    
    if (guess == number) {
        cout << "You guessed it right!" << endl;
    }
    if (guess > number){
        cout << "You were higher than the number. The secret number was " << number << endl;
    }
    if (guess < number){
    	cout << "You were lower than the number. The secret number was " << number << endl;
	}

    return 0;
}


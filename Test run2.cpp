#include <iostream>
using namespace std;

int score = 0;

int main() {

    string questions[10] = {"1) What is the name of Sheldon Cooper's favorite TV show?",
                            "2) What instrument does Howard Wolowitz play?",
                            "3) Which character is lactose intolerant?",
                            "4) What is the name of Sheldon and Leonard's apartment neighbor?",
                            "5) What is Penny's last name?",
                            "6) Which character has a phobia of germs and most social interactions?",
                            "7) What is Rajesh Koothrappali's job?",
                            "8) What is the name of the university where the main characters work?",
                            "9) Which character is known for her/his high-pitched, squeaky voice?",
                            "10) What is Sheldon's favorite spot to sit in the apartment?"};

    // declare a two-dimensional array of strings to store the options
    string options[10][4] = {{"a) Star Trek", "b) Doctor Who", "c) Firefly", "d) Battlestar Galactica"},
                             {"a) Guitar", "b) Violin", "c) Keyboard", "d) Cello"},
                             {"a) Leonard Hofstadter", "b) Penny", "c) Rajesh Koothrappali", "d) Howard Wolowitz"},
                             {"a) Bernadette Rostenkowski", "b) Amy Farrah Fowler", "c) Emily Sweeney", "d) Penny"},
                             {"a) Johnson", "b) Cooper", "c) Hofstadter", "d) None of the above"},
                             {"a) Leonard Hofstadter", "b) Sheldon Cooper", "c) Rajesh Koothrappali", "d) Howard Wolowitz"},
                             {"a) Astrophysicist", "b) Microbiologist", "c) Aerospace engineer", "d) Experimental physicist"},
                             {"a) California Institute of Technology (Caltech)", "b) Massachusetts Institute of Technology (MIT)", "c) Stanford University", "d) Princeton University"},
                             {"a) Bernadette Rostenkowski", "b) Amy Farrah Fowler", "c) Emily Sweeney", "d) Leslie Winkle"},
                             {"a) The left side of the couch", "b) His spot is not fixed", "c) The right side of the couch", "d) The middle of the couch"}};

    // declare an array of characters to store the correct answers
    char answers[10] = {'a', 'c', 'a', 'd', 'd', 'b', 'a', 'a', 'a', 'a'};

    // declare an array of characters to store the user's choices for each question
    char user_choice[10];

    // initialize the user's choice array with '-'
    for (int i = 0; i < 10; i++) {
        user_choice[i] = '-';
    }

    // declare a variable to store the user's input
    char input;

    // use a for loop to iterate over the questions array
    for (int i = 0; i < 10; i++) {
        // display the current question and its options
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        // prompt the user to enter their choice for each question or skip it
        cout << "Enter your choice for question " << i + 1 << " or enter 'S' to skip: ";
        cin >> input;

        // if the user enters 'S', leave the user's choice unchanged
        if (input == 'S') {
            user_choice[i] = '-';
        } else {
            // otherwise, store the user's choice in the corresponding index of the user's choice array
            user_choice[i] = input;
        }
    }

    // use another loop to iterate over the user's choice array
    for (int i = 0; i < 10; i++) {
        // if the user's choice is '-', display the question and options again
        if (user_choice[i] == '-') {
            cout << questions[i] << endl; // print the question
            for (int j = 0; j < 4; j++) {
                cout << options[i][j] << endl; // print the option
            }
            cout << endl << endl; // print a new line

            // prompt the user to enter their choice for the skipped question
            cout << "Enter your choice for question " << i + 1 << ": ";
            cin >> user_choice[i];
        }
    }

    // compare the user's choice array with the answer array
    for (int i = 0; i < 10; i++) {
        // if the user's choice matches the correct answer, increment the score by 1
        if (user_choice[i] == answers[i] || user_choice[i] == toupper(answers[i])) {
            score += 1;
        }
    }

    // display the total score at the end of the quiz
    cout << "Congratulations! Your final score is: " << score << endl;

    return 0;
}


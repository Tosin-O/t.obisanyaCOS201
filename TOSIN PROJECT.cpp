#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct User {
		string email;
		string username;
		string password;
	};

void store_in_csv(const User& user);

void sign_up();

void sign_up() {
    // Create a User object
    User user;
    
    cout << "Please enter your username: ";
    getline(cin, user.username);
    cout << "Please enter your email: ";
    getline(cin, user.email);
    cout << "Please enter your password: ";
    getline(cin, user.password);
    
    store_in_csv(user);
        cout << "Sign up successful.\n";
    } 
    
    	void store_in_csv(const User& user) {
    ofstream csv_file;
    csv_file.open("Login_details.csv", ios::app);
    csv_file << user.username << "," << user.email << "," << user.password << "\n";
    csv_file.close();
}

vector<User> read_from_csv(const string& Login_details) {
    // Create a vector of User objects
    vector<User> users;
    // Open the csv file in input mode
    ifstream csv_file;
    csv_file.open("Login_details.csv", ios::in);
    // Check if the file is open
    if (csv_file.is_open()) {
        // Read the data from the file line by line
        string line;
        while (getline(csv_file, line)) {
            // Create a stringstream object to split the line by commas
            stringstream ss(line);
            // Create a User object to store the data
            User user;
            // Read the name, email and password from the line
            getline(ss, user.username, ',');
            getline(ss, user.email, ',');
            getline(ss, user.password, ',');
            // Add the User object to the vector
            users.push_back(user);
        }
        // Close the file
        csv_file.close();
    } else {
        // Display an error message if the file cannot be opened
        cout << "Error: Cannot open file " << Login_details << "\n";
    }
    
    return users;
}

// A function to check if a user exists in the csv file
bool check_user(const vector<User>& users, const string& email, const string& password) {
    for (vector<User>::const_iterator it = users.begin(); it != users.end(); ++it) {
        if (it->email == email && it->password == password) {
            return true;
        }
    }
    return false;
}

int score=0;
int signup;
int main () {
	cout << "Good day. This is a computer based test on questions about the big bang theory." << endl;
	
	cout<< "Sign up(1)" << "\n" << "OR" << "\n" << "Login in(2)" << endl;
	cin >> signup;
	
	if (signup == 1) {
	 sign_up();	
	 
	}
	
	if (signup == 2) {
		
	vector<User> users = read_from_csv("Login details.csv");
    string email, password;
    cout << "Please enter your email: ";
    cin >> email;
    cout << "Please enter your password: ";
    cin >> password;
    bool result = check_user(users, email, password);
    if (result) {
        cout << "Login successful.\n";
    } else {
        cout << "Login failed.\n Invalid email or password.\n";
    }
	}
	if (signup != 1 && signup != 2) {
		cout << "Please input the correct option" << endl;
	}
	
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
   




  



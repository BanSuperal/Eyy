#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string birthday;
    ofstream outputFile("survey_answers.txt", ios::app); // Open the file in append mode

    cout << "Welcome to the survey!" << endl;
    cout << "Please enter your birthday in MMDDYY format: ";
    cin >> birthday;

    // Check if the entered birthday matches the special date (e.g., 102503)
    if (birthday == "102503") {
        cout << "Welcome to the special survey!" << endl;
        // Special survey logic goes here
        string answer1, answer2;
        cout << "Question 1: What is your favorite color? ";
        cin >> answer1;
        outputFile << "Favorite Color: " << answer1 << endl;
        cout << "Question 2: How many siblings do you have? ";
        cin >> answer2;
        outputFile << "Number of Siblings: " << answer2 << endl;
        // Display the answers or further process them
        cout << "Thank you for completing the special survey!" << endl;
    } else {
        cout << "Welcome to the regular survey!" << endl;
        // Regular survey logic goes here
        string answer1, answer2;
        cout << "Question 1: What is your favorite food? ";
        cin >> answer1;
        outputFile << "Favorite Food: " << answer1 << endl;
        cout << "Question 2: What is your favorite hobby? ";
        cin >> answer2;
        outputFile << "Favorite Hobby: " << answer2 << endl;
        // Display the answers or further process them
        cout << "Thank you for completing the regular survey!" << endl;
    }

    outputFile.close(); // Close the file

    cout << "Thank you for participating in the survey!" << endl;

    return 0;
}
    
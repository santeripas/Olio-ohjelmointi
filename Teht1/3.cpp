#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {
    int num, guess, attempts = 0;

    srand(time(0));
    num = rand() % maxnum + 1;

    do {
        cout << "Guess the number between 1-" << maxnum << ": ";
        cin >> guess;
        attempts++;

        if (guess < num) {
            cout << "The number is higher!" << endl;
        } else if (guess > num) {
            cout << "The number is lower!" << endl;
        } else {
            cout << "Correct! You won the game!" << endl;
            break;
        }

        if (guess > maxnum) {
            cout << "Loser! Guess numbers between 1-" << maxnum << "!" << endl;
            attempts--;  // Don't count invalid guesses
        }
    } while (true);

    return attempts;
}

int main() {
    int maxNumber;
    cout << "Enter the maximum number for the game: ";
    cin >> maxNumber;

    int attempts = game(maxNumber);

    cout << "It took you " << attempts << " guesses to find the correct number." << endl;

    return 0;
}

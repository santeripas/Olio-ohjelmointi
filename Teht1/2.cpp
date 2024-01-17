#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Numeronarvauspeli() {
int num, guess;

srand(time(0));
num = rand() % 20 + 1;

do {
    cout << "Guess the number between 1-20: ";
    cin >> guess;

    if (guess < num) {
        cout << "The number is higher!" << endl;
    } else if (guess > num) {
        cout << "The number is lower!" << endl;
    } else {
        cout << "Correct! You won the game!" << endl;
        break;
    }
    if (guess > 20) {
        cout << "Loser! Guess numbers between 1-20!" << endl;

    }
} while (true);
}

int main() {
    Numeronarvauspeli();

    return 0;
}

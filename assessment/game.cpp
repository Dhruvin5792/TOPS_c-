#include <iostream>
#include <cstdlib>  
#include <ctime>     
using namespace std;

class RockPaperScissorsGame {
    string playerName;
    int totalRounds;
    int playerScore;
    int computerScore;

public:
        RockPaperScissorsGame() {
        playerScore = 0;
        computerScore = 0;
    }

    void displayMenu() {
        cout << "\nSelect your choice:\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice (1-3): ";
    }

    void playGame() {
        cout << "Enter your name: ";
        cin >> playerName;

        cout << "Enter number of rounds to play: ";
        cin >> totalRounds;

        srand(time(0));

        for (int round = 1; round <= totalRounds; round++) {
            cout << "\n--- This is Round " << round << " ---\n";
            displayMenu();

            int playerChoice;
            cin >> playerChoice;

            int computerChoice = (rand() % 3) + 1;

            cout << playerName << " chose: " << convertChoice(playerChoice) << endl;
            cout << "Computer chose: " << convertChoice(computerChoice) << endl;

            if (playerChoice == computerChoice) {
                cout << "It's a draw!\n";
            } else if ((playerChoice == 1 && computerChoice == 3) ||
                       (playerChoice == 2 && computerChoice == 1) ||
                       (playerChoice == 3 && computerChoice == 2)) {
                cout << playerName << " wins this round!\n";
                playerScore++;
            } else {
                cout << "Computer wins this round!\n";
                computerScore++;
            }
        }

        displayFinalResult();
    }

    string convertChoice(int choice) {
        switch (choice) {
            case 1: return "Rock";
            case 2: return "Paper";
            case 3: return "Scissors";
            default: return "Invalid";
        }
    }

    void displayFinalResult() {
        cout << "\n--- Final Result ---\n";
        cout << playerName << "'s Score: " << playerScore << endl;
        cout << "Computer's Score: " << computerScore << endl;

        if (playerScore > computerScore) {
            cout << playerName << " wins the game!\n";
        } else if (playerScore < computerScore) {
            cout << "Computer wins the game!\n";
        } else {
            cout << "The game is a draw!\n";
        }
    }
};

int main() {
    RockPaperScissorsGame game;
    game.playGame();
}


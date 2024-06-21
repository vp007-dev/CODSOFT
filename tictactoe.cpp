#include <iostream>

using namespace std;


void printGrid(char grid[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << grid[i][j];
            if (j < 2) {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < 2) {
            cout << "---------" << endl;
        }
    }
}

char checkWinner(char grid[3][3]) {
    
    for (int i = 0; i < 3; ++i) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
            return grid[i][0];
        }
    }

    
    for (int j = 0; j < 3; ++j) {
        if (grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j]) {
            return grid[0][j];
        }
    }

   
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
        return grid[0][0];
    }
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
        return grid[0][2];
    }

    
    return ' ';
}

int main() {
    char grid[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    int currentPlayer = 1; 
    int moves = 0; 

    cout << "Tic-Tac-Toe Game:" << endl;

    while (true) {
        
        printGrid(grid);

        
        int cell;
        cout << "Player " << currentPlayer << ", enter a number (1-9): ";
        cin >> cell;

        
        if (cell < 1 || cell > 9) {
            cout << "Invalid move. Please enter a number between 1 and 9." << endl;
            continue;
        }

        
        int row = (cell - 1) / 3;
        int col = (cell - 1) % 3;

        
        if (grid[row][col] == 'X' || grid[row][col] == 'O') {
            cout << "That cell is already taken. Please choose another one." << endl;
            continue;
        }

        
        grid[row][col] = (currentPlayer == 1) ? 'X' : 'O';

       
        ++moves;

        
        char winner = checkWinner(grid);
        if (winner != ' ') {
            
            printGrid(grid);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        } else if (moves == 9) {
            
            printGrid(grid);
            cout << "It's a draw!" << endl;
            break;
        }

        
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}
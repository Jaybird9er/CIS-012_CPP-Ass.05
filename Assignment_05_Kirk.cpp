#include <iostream>
using namespace std;

int main ()
{
    // variables
    char player1, player2;

    // inputs
    cout << "Enter " << '[' << "R" << ']' << "ock, " << '[' << "P" << ']' << "aper, or " << '[' << "S" << ']' << "cissor" << endl;
    cout << "Player 1: ";
    cin >> player1;
    cout << "Enter " << '[' << "R" << ']' << "ock, " << '[' << "P" << ']' << "aper, or " << '[' << "S" << ']' << "cissor" << endl;
    cout << "Player 2: ";
    cin >> player2;
    // outputs
    switch (player1)
    {
    case 'R':
    case 'r':
        {
            switch (player2)
            {
            case 'R':
            case 'r':
                cout << "Noboby wins." << endl;
            break;
            case 'P':
            case 'p':
                cout << "Paper covers rock." << endl;
                cout <<  "Player 2 WINS!" << endl;
                break;
            default:
                cout << "Rock crushes scissors." << endl;
                cout <<  "Player 1 WINS!" << endl;
            }
        }
    break;
    case 'P':
    case 'p':
        {
            switch (player2)
            {
            case 'P':
            case 'p':
                cout << "Noboby wins." << endl;
            break;
            case 'S':
            case 's':
                cout << "Scissors cut paper." << endl;
                cout <<  "Player 2 WINS!" << endl;
                break;
            default:
                cout << "Paper covers rock." << endl;
                cout <<  "Player 1 WINS!" << endl;
            }
        }
    break;
    default:
        {
            switch (player2)
            {
            case 'S':
            case 's':
                cout << "Noboby wins." << endl;
            break;
            case 'R':
            case 'r':
                cout << "Rock crushes scissors." << endl;
                cout <<  "Player 2 WINS!" << endl;
                break;
            default:
                cout << "Scissors cut paper." << endl;
                cout <<  "Player 1 WINS!" << endl;
            }
        }
    }

    return 0;
}

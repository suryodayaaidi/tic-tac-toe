/* Start Tic Tac Toi in c++ */

#include <iostream>
using namespace std;

char square[10] = {'O','1','2','3','4','5','6','7','8','9'};
int toe_board();
int check_hero();

int main(){

    int player = 1, i, choise;
    char mark;
    do{
        toe_board();
        player = (player%2)? 1 : 2;

        cout << "\t Player " << player << " Enter a number:";
        cin >> choise;
        mark=(player%2)? 'X' : 'O';

        if(choise == 1 && square[1] == '1')
            square[1] = mark;

        else if(choise == 2 && square[2] == '2')
            square[2] = mark;

        else if(choise == 3 && square[3] == '3')
            square[3] = mark;

        else if(choise == 4 && square[4] == '4')
            square[4] = mark;

        else if(choise == 5 && square[5] == '5')
            square[5] = mark;

        else if(choise == 6 && square[6] == '6')
            square[6] = mark;

        else if(choise == 7 && square[7] == '7')
            square[7] = mark;

        else if(choise == 8 && square[8] == '8')
            square[8] = mark;

        else if(choise == 9 && square[9] == '9')
            square[9] = mark;
        else{
            cout << "\t Invalid choice:";
            player--;
        }
        i = check_hero();
        player++;
    }while(i == -1);

    toe_board();
    if(i == 1){
        cout << "\t Congratulations, Player " << --player << " You are the Winer";
    }
    else
        cout << "\t Game Draw! Do you want play again.\n \tPress Enter!";
    return 0;
}

/* This is the type of function which gives result of the
if return is equal to 1 game end with RESULT
if return is equal to 0 game end with no RESULT
if return is -1 game is in process */

int check_hero(){

    if(square[1] == square[2] && square[2] == square[3])
        return 1;

    else if(square[1] == square[4] && square[4] == square[7])
        return 1;

    else if(square[1] == square[5] && square[5] == square[9])
        return 1;

    else if(square[2] == square[5] && square[5] == square[8])
        return 1;

    else if(square[4] == square[5] && square[5] == square[6])
        return 1;

    else if(square[7] == square[8] && square[8] == square[9])
        return 1;

    else if(square[3] == square[5] && square[5] == square[7])
        return 1;

    else if(square[3] == square[6] && square[6] == square[9])
        return 1;

    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' &&
            square[4] != '4' && square[5] != '5' && square[6] != '6' &&
            square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;

}
/* This function is for the Tic Tac Toc board on the screen */

int toe_board()
{
	cout << "\n\n\t\tTic Tac Toe\n\n";

	cout << "\tPlayer 1 ->_(X)  -  Player 2 ->_(O)" << endl << endl;
	cout << endl;

	cout << "\t           |      |     " << endl;
	cout << "\t       " << square[1] << "   |  " << square[2] << "   |  " << square[3] << endl;

	cout << "\t     ______|______|_____" << endl;
	cout << "\t           |      |     " << endl;

	cout << "\t       " << square[4] << "   |  " << square[5] << "   |  " << square[6] << endl;

	cout << "\t     ______|______|_____" << endl;
	cout << "\t           |      |     " << endl;

	cout << "\t       " << square[7] << "   |  " << square[8] << "   |  " << square[9] << endl;

	cout << "\t           |      |     " << endl << endl;
}

/* End */

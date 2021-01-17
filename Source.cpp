#include <iostream>
using namespace std;

char stvorec[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int checkwin();
void board();

int main()
{
    int Hrac = 1, i, choice;
    string charName = "Hrac1";
    string charName2 = "Hrac2";



    cout << "Hrac 1 meno :\n";
    cin >> charName;
    cout << "Hrac 2 meno :\n";
    cin >> charName2;

    cout << "Hrac 1 meno je " << charName;
    cout << "Hrac 2 meno je " << charName2;
    char mark;
    do
    {
        board();
        cout << charName;
        cout << "(X) - ";
        cout << charName2;
        cout << "(O)";
        cout << endl << endl;
        Hrac = (Hrac % 2) ? 1 : 2;

        if (Hrac == 1) {
            cout << charName << " zadaj cislo:  ";
        }
        else if (Hrac == 2) {
            cout << charName2 << " zadaj cislo:  ";
        }
        cin >> choice;

        mark = (Hrac == 1) ? 'X' : 'O';

        if (choice == 1 && stvorec[1] == '1')

            stvorec[1] = mark;
        else if (choice == 2 && stvorec[2] == '2')

            stvorec[2] = mark;
        else if (choice == 3 && stvorec[3] == '3')

            stvorec[3] = mark;
        else if (choice == 4 && stvorec[4] == '4')

            stvorec[4] = mark;
        else if (choice == 5 && stvorec[5] == '5')

            stvorec[5] = mark;
        else if (choice == 6 && stvorec[6] == '6')

            stvorec[6] = mark;
        else if (choice == 7 && stvorec[7] == '7')

            stvorec[7] = mark;
        else if (choice == 8 && stvorec[8] == '8')

            stvorec[8] = mark;
        else if (choice == 9 && stvorec[9] == '9')

            stvorec[9] = mark;
        else
        {
            cout << "Neplatny tah";

            Hrac--;
            cin.ignore();
            cin.get();
        }
        i = checkwin();
        

        Hrac++;
    } while (i == -1);
    board();
    if (i == 1)


        if (Hrac == 2) {
            cout << charName << " vyhral!";
        }
        else if (Hrac == 3) {
            cout << charName2 << " vyhral!";
        }
    if (stvorec[1] != '1') {
        if (stvorec[2] != '2') {
            if (stvorec[3] != '3') {
                if (stvorec[4] != '4') {
                    if (stvorec[5] != '5') {
                        if (stvorec[6] != '6') {
                            if (stvorec[7] != '7') {
                                if (stvorec[8] != '8') {
                                    if (stvorec[9] != '9') {
                                        cout << "==>\aRemiza";
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cin.ignore();
    cin.get();
    return 0;
}



int checkwin()
{
    if (stvorec[1] == stvorec[2] && stvorec[2] == stvorec[3])

        return 1;
    else if (stvorec[4] == stvorec[5] && stvorec[5] == stvorec[6])

        return 1;
    else if (stvorec[7] == stvorec[8] && stvorec[8] == stvorec[9])

        return 1;
    else if (stvorec[1] == stvorec[4] && stvorec[4] == stvorec[7])

        return 1;
    else if (stvorec[2] == stvorec[5] && stvorec[5] == stvorec[8])

        return 1;
    else if (stvorec[3] == stvorec[6] && stvorec[6] == stvorec[9])

        return 1;
    else if (stvorec[1] == stvorec[5] && stvorec[5] == stvorec[9])

        return 1;
    else if (stvorec[3] == stvorec[5] && stvorec[5] == stvorec[7])

        return 1;
    else if (stvorec[1] != '1' && stvorec[2] != '2' && stvorec[3] != '3'
        && stvorec[4] != '4' && stvorec[5] != '5' && stvorec[6] != '6'
        && stvorec[7] != '7' && stvorec[8] != '8' && stvorec[9] != '9')

        return 0;
    else
        return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";


    cout << "     |     |     " << endl;
    cout << "  " << stvorec[1] << "  |  " << stvorec[2] << "  |  " << stvorec[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << stvorec[4] << "  |  " << stvorec[5] << "  |  " << stvorec[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << stvorec[7] << "  |  " << stvorec[8] << "  |  " << stvorec[9] << endl;

    cout << "     |     |     " << endl << endl;
}

/**
 * * Guessing Game
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

void playing_instructions();
int main()
{
    srand(time(0));
    char player_choice;
    int my_guess = rand() % 1001;
    int min_x = 0;
    int max_x = 1000;

    playing_instructions();
    cout << "My guess is " << my_guess << endl;
    do
    {
        cin >> player_choice;

        if (toupper(player_choice) == 'Y')
            break;
        else if (toupper(player_choice) == 'U')
            min_x = my_guess + 1;
        else if (toupper(player_choice) == 'D')
            max_x = my_guess - 1;

        my_guess = min_x + rand() % (max_x - min_x + 1);
        cout << "My guess is " << my_guess << endl;

    } while (true);

    return 0;
}

void playing_instructions()
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Let's play a simple game" << endl;
    cout << "You think of a number between 0 and 1000 and I will guess it" << endl;
    cout << "If I'm right just press y" << endl;
    cout << "Press u or U if your guess is higher" << endl;
    cout << "Press d or D if your guess is lower" << endl;
    cout << "You ready,Press Enter to continue..." << endl;
    cout << "-------------------------------------------------------------" << endl;
    getchar();
}

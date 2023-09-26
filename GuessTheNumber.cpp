#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << endl << "          Welcome to guess the number game ... " << endl;
    cout << "          Guess the number belonging between 1 - 100" << endl;
    cout << "          You will be having limited choises" << endl;

    while (true)
    {
        int difficulty;
        cout << "\nEnter the difficulty level of the game : " << endl;
        cout << "1 for Easy level \t" << endl;
        cout << "2 for medium level \t" << endl;
        cout << "3 for hard level \t" << endl;
        cout << "0 for ending the game\t" << endl;

        cin >> difficulty;

        // generating the random number
        srand(time(0));
        int randomNumber = 1 + (rand() % 100);
        int pChoice;

        // Easy level

        if (difficulty == 1)
        {
            cout << "You are having 10 choices \n";
            cout << "Enter any number between 1 to 100:";
            int turns = 10;
            for (int i = 1; i <= 10; i++)
            {
                cout << "\n\nEnter the number: ";
                cin >> pChoice;
                if (pChoice == randomNumber)
                {
                    cout << "Well played, you won ," << pChoice << " is the number\n";
                    cout << "Thank you for playing Guess The number\n";
                    break;
                }
                else
                {
                    cout << "No , not the right number \n";
                    if (pChoice > randomNumber)
                    {
                        cout << "Entered number is Smaller than the random number\n";
                    }
                    else
                    {
                        cout << "Entered number is Greater than the random number\n";
                    }
                    turns--;
                    cout << turns << " choices are left now \n";
                    if (turns == 0)
                    {
                        cout << "Sorry , you lost the game\n";
                        cout << "The random number was " << randomNumber;
                    }
                }
            }
        }

        // Medium level

        else if (difficulty == 2)
        {
            cout << "You are having 6 choices \n";
            cout << "Enter any number between 1 to 100:";
            int turns = 6;
            for (int i = 1; i <= 6; i++)
            {
                cout << "\n\nEnter the number: ";
                cin >> pChoice;
                if (pChoice == randomNumber)
                {
                    cout << "Well played ,you won, " << pChoice << "is the number\n";
                    cout << "Thank you for playing Guess The number\n";
                    break;
                }
                else
                {
                    cout << "No , not the right number \n";
                    if (pChoice > randomNumber)
                    {
                        cout << "Entered number is Smaller than the random number\n";
                    }
                    else
                    {
                        cout << "Entered number is Greater than the random number\n";
                    }
                    turns--;
                    cout << turns << " choices are left now \n";
                    if (turns == 0)
                    {
                        cout << "Sorry , you lost the game\n";
                        cout << "The random number was " << randomNumber;
                    }
                }
            }
        }

        // Difficult level

        else if (difficulty == 3)
        {
            cout << "You are having 3 choices \n";
            cout << "Enter any number between 1 to 100:";
            int turns = 3;
            for (int i = 1; i <= 3; i++)
            {
                cout << "\n\nEnter the number: ";
                cin >> pChoice;
                if (pChoice == randomNumber)
                {
                    cout << "Well played ,you won," << pChoice << "is the number\n";
                    cout << "Thank you for playing Guess The number\n";
                    break;
                }
                else
                {
                    cout << "No , not the right number \n";
                    if (pChoice > randomNumber)
                    {
                        cout << "Entered number is Smaller than the random number\n";
                    }
                    else
                    {
                        cout << "Entered number is Greater than the random number\n";
                    }
                    turns--;
                    cout << turns << " turns are left now \n";
                    if (turns == 0)
                    {
                        cout << "Sorry , you lost the game\n";
                        cout << "The random number was " << randomNumber;
                    }
                }
            }
        }
        else if (difficulty == 0)
        {
            return 0;  // exits the program
        }
        else
        {
            cout << "Wrong value is entered ... Enter correct Value !!";
        }
    }
    return 0;
}
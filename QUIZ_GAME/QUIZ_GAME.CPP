#include <bits/stdc++.h>
#include <conio.h>
#include <Windows.h>
using namespace std;

void GameDisplay();
void round1();
void round2();
void Final_round();
void correct_answer(int round_no, int level);
void wrong_answer(int round_no, int level);
char withdrawing(int round_no, int level);
char Timer(int round_no, int level);

int main()
{

    GameDisplay();
}

void GameDisplay()
{
    system("cls");

    cout << "Welcome to the game \n";
    cout << " S to start the game \n";
    cout << " Q for doing what you want to do -- Quit \n";

    char choice = toupper(getch());

    if (choice == 'Q')
    {
        exit(1);
    }

    else if (choice == 'S')
    {
        system("cls");

        cout << "Ready to start the game \n";
        cout << "Regisyter your name \n";

        string username;

        getline(cin, username);

        system("cls");

        cout << "Hello " << username << " ,welcome \n";
        cout << "You have 3 level to earn million \n GOOD LUCK\n\n";
        cout << "press Y to start anything else to go back to the main menu \n";

        char yn = toupper(getch());

        if (yn == 'Y')
        {
            system("cls");
            round1();
        }
        else
        {
            GameDisplay();
        }
    }
}

void round1()
{
    system("cls");

    char opt;

    for (int i = 1; i <= 5; i++)
    {

        system("cls");
        int r1 = i;

        switch (r1)
        {
        case 1: // question 1 of round 1
        {
            cout << "1. Which one of the following is a keyword?\n";
            cout << "(A) Size \n(B) Key \n(C) Jump \n(D) Switch\n";

            opt = toupper(Timer(1, 0));

            if (opt == 'D')
            {
                correct_answer(1, 1);
            }
            else
            {
                wrong_answer(1, 1);
            }
        }
        break;

        case 2: // question 2 of round 1
        {
            cout << "The modulus operator uses ___ character.\n";
            cout << "(A) + \n(B) * \n(C) / \n(D) % \n";

            opt = toupper(Timer(1, 0));

            if (opt == 'D')
            {
                correct_answer(1, 2);
            }
            else
            {
                wrong_answer(1, 1);
            }
        }
        break;
        case 3: // question 3 of round 1
        {
            cout << "What is a constant that contains a single character enclosed within single quotes?\n";

            cout << "(A) Character \n(B) Numeric \n(C) Fixed \n(D) Floating point\n";

            opt = toupper(Timer(1, 0));

            if (opt == 'A')
            {
                correct_answer(1, 3);
            }
            else
            {
                wrong_answer(1, 1);
            }
        }
        break;
        case 4: // question 4 of round 1
        {
            cout << "Every variable should be separated by ___ separator.\n";
            cout << "(A) Dot \n(B) Colon \n(C) Comma \n(D) Semicolon \n";

            opt = toupper(Timer(1, 0));

            if (opt == 'C')
            {
                correct_answer(1, 4);
            }
            else
            {
                wrong_answer(1, 1);
            }
        }
        break;
        case 5: // question 5 of round 1
        {
            cout << "C++ was developed by ___ \n";
            cout << "(A) Thomas Kushz \n(B) John Kemney \n(C) Bjarne Stroutstrup \n(D) James Goling \n";

            opt = toupper(Timer(1, 0));

            if (opt == 'C')
            {
                correct_answer(1, 5);
            }
            else
            {
                wrong_answer(1, 1);
            }
        }
        break;
        }
    }
}

void round2()
{
    system("cls");

    int count = 0;
    char opt;

    for (int i = 1; i <= 5; i++)
    {

        system("cls");
        int r1 = i;

        switch (r1)
        {
        case 1: // question 1 of round 1
        {
            cout << "Logical AND (&&) and Logical OR (||) are ___ operators. \n";
            cout << "(A) Logical \n(B) Equality \n(C) Class member \n(D) Comma \n";

            opt = toupper(withdrawing(2, 1));

            if (opt == 'A')
            {
                correct_answer(2, 2);
            }
            else
            {
                wrong_answer(2, 1);
            }
        }
        break;

        case 2: // question 2 of round 1
        {
            cout << "____ operators have lower precedence to relational and arithmetic operators.\n";
            cout << "(A) Conditional \n(B) Boolean \n(C) Logical \n(D) Relational \n";

            opt = toupper(withdrawing(2, 2));

            if (opt == 'D')
            {
                correct_answer(2, 4);
            }
            else
            {
                wrong_answer(2, 1);
            }
        }
        break;
        case 3: // question 3 of round 1
        {
            cout << "Float and double are related to ____ data type.\n";
            cout << "(A) Void\n(B) Floating\n(C) Fixed\n(D) Integral\n";

            opt = toupper(withdrawing(2, 4));

            if (opt == 'B')
            {
                correct_answer(2, 8);
            }
            else
            {
                wrong_answer(2, 1);
            }
        }
        break;
        case 4: // question 4 of round 1
        {
            cout << "Variable names must begin with ___\n";
            cout << "(A) #\n(B) $\n(C) Number\n(D) Letter\n";

            opt = toupper(withdrawing(2, 8));

            if (opt == 'D')
            {
                correct_answer(2, 16);
            }
            else
            {
                wrong_answer(2, 1);
            }
        }
        break;
        case 5: // question 5 of round 1
        {
            cout << "Integer values are stored in ___ bit format in binary form.\n";
            cout << "(A) 8\n(B) 16\n(C) 32\n(D) 64\n";

            opt = toupper(withdrawing(2, 16));

            if (opt == 'B')
            {
                correct_answer(2, 5);
            }
            else
            {
                wrong_answer(2, 1);
            }
        }
        break;
        }
    }
}

void Final_round()
{
    system("cls");

    int count = 0;
    char opt;

    for (int i = 1; i <= 5; i++)
    {

        system("cls");
        int r1 = i;

        switch (r1)
        {
        case 1: // question 1 of round 1
        {
            cout << "Which one of the following is a membership operator?\n";
            cout << "(A) !\n(B) &\n(C) ::\n(D) .\n";

            opt = toupper(withdrawing(3, 32));

            if (opt == 'C')
            {
                correct_answer(3, 64);
            }
            else
            {
                wrong_answer(3, 1);
            }
        }
        break;

        case 2: // question 2 of round 1
        {
            cout << "____ Operator requires two operands.\n";
            cout << "(A) Logical\n(B) Binary\n(C) Unary\n(D) Ternary\n";

            opt = toupper(withdrawing(3, 64));

            if (opt == 'B')
            {
                correct_answer(3, 125);
            }
            else
            {
                wrong_answer(3, 1);
            }
        }
        break;
        case 3: // question 3 of round 1
        {
            cout << "____ Type is used to declare a generic pointer in C++.\n";
            cout << "(A) Int\n(B) Void\n(C) Static\n(D) Float\n";

            opt = toupper(withdrawing(3, 125));

            if (opt == 'B')
            {
                correct_answer(3, 250);
            }
            else
            {
                wrong_answer(3, 1);
            }
        }
        break;
        case 4: // question 4 of round 1
        {
            cout << "Built in Data type is also called as ___ data type.\n";
            cout << "(A) Fundamental\n(B) Secondary\n(C) Void\n(D) Integer\n";

            opt = toupper(withdrawing(3, 250));

            if (opt == 'A')
            {
                correct_answer(3, 500);
            }
            else
            {
                wrong_answer(3, 1);
            }
        }
        break;
        case 5: // question 5 of round 1
        {
            cout << "What is a file?\n";
            cout << "(A) A file is a selection of main storage used to store data.\n"
                 << "(B) A file is another name for floppy disk.\n"
                 << "(C) A file is a part of a program that is used to describe what the program should do.\n"
                 << "(D) A file is a collection of information that has been given a name and is stored in secondary memory.\n";

            opt = toupper(withdrawing(3, 500));

            if (opt == 'D')
            {
                correct_answer(3, 1000);
            }
            else
            {
                wrong_answer(3, 1);
            }
        }
        break;
        }
    }
}

void correct_answer(int round_no, int level)
{

    if (round_no == 1)
    {
        if (level != 5)
        {
            system("cls");
            cout << "correct";
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou have $ " << level * 100 << "\n";
            getch();
        }
    }
    else if (round_no == 2 || round_no == 3)
    {
        if (level != 5)
        {
            system("cls");
            cout << "correct";
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou have $ " << level * 1000 << "\n";
            getch();
        }
    }

    if (level == 5)
    {
        if (round_no == 1)
        {
            system("cls");
            cout << "correct";
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou have $1000 ";
            getch();
            system("cls");
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou reach round 2 \n";
            getch();
            round2();
        }

        else if (round_no == 2)
        {
            system("cls");
            cout << "correct";
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou have $32000 ";
            getch();
            system("cls");
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou reach Final round \n";
            getch();
            Final_round();
        }

        else
        {
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou become Millioner \n";
            char op;
            cout << "If you play again press Y\nIf no press any thing\n";
            cin >> op;
            if (toupper(op) == 'Y')
            {
                GameDisplay();
            }
            else
            {
                exit(1);
            }
        }
    }
}

void wrong_answer(int round_no, int level)
{

    char op;

    if (round_no == 1)
    {
        system("cls");
        if (level == 0)
        {
            cout << "Time Finished\n";
        }
        else
        {
            cout << "wrong\n";
        }
        cout << "You Have $ 0\n\n";
    }

    if (round_no == 2)
    {
        system("cls");
        if (level == 0)
        {
            cout << "Time Finished\n";
        }
        else
        {
            cout << "wrong\n";
        }
        cout << "You Have $1000 \n\n";
    }

    if (round_no == 3)
    {
        system("cls");
        if (level == 0)
        {
            cout << "Time Finished\n";
        }
        else
        {
            cout << "wrong\n";
        }
        cout << "You Have $32000 \n\n";
    }

    cout << "If you play again press Y\nIf no press any thing\n";
    cin >> op;
    if (toupper(op) == 'Y')
    {
        GameDisplay();
    }
    else
    {
        exit(1);
    }
}

char withdrawing(int round_no, int level)
{
    char op;
    cout << "IF you want to withdrawing and take money of level you reach press y"
         << "\n\nIF you want not to contune press any thing\n\n";

    cin >> op;
    if (toupper(op) == 'Y')
    {
        cout << "\nTimer Starts\n\n";
        return Timer(round_no, 0);
    }
    else
    {
        system("cls");
        cout << "\n\nI Hope you select good choose\n\n";
        cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
        cout << "\t\tyou have $ " << level * 1000;

        cout << "\n\nIf you play again press Y\nIf no press any thing\n";
        cin >> op;
        if (toupper(op) == 'Y')
        {
            GameDisplay();
        }
        else
        {
            exit(1);
        }
    }
}

char Timer(int round_no, int level)
{
    int i = 0;
    for (size_t i = 1; i <= 20; i++)
    {
        Sleep(1000);
        cout << "\r" << setw(50)
             << "|" << i << "|";
        if (i == 20)
        {
            wrong_answer(round_no, level);
        }
        if (kbhit())
            break;
    }
    // else return the value stored in keyboard buffer.
    return getch();
}

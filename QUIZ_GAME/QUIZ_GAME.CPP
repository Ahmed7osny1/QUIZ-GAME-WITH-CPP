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
            cout << "where is IIRS?" << endl;
            cout << "A.Delhi"
                 << " "
                 << " B.dehradun "
                 << "C.jaipur "
                 << "D.pilani" << endl;

            opt = toupper(Timer(1, 0));

            if (opt == 'B')
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
            cout << "opposite of good?" << endl;
            cout << "A.bad"
                 << " "
                 << " B.excellent "
                 << "C.outstanding "
                 << "D.rubbish" << endl;

            opt = toupper(Timer(1, 0));

            if (opt == 'A')
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
            cout << "palindrome?" << endl;
            cout << "A.tht"
                 << " "
                 << " B.deh "
                 << "C.jaipur "
                 << "D.pi" << endl;

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
            cout << "what rocks?" << endl;
            cout << "A.rock"
                 << " "
                 << " B.IIRS "
                 << "C.BITS "
                 << "D.me" << endl;

            opt = toupper(Timer(1, 0));

            if (opt == 'A')
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
            cout << "how many domestic campuses does bits have?" << endl;
            cout << "A.2"
                 << " "
                 << " B.none of my business "
                 << "C.4 "
                 << "D.3" << endl;

            opt = toupper(Timer(1, 0));

            if (opt == 'D')
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
            cout << "where is IIRS?" << endl;
            cout << "A.Delhi"
                 << " "
                 << " B.dehradun "
                 << "C.jaipur "
                 << "D.pilani" << endl;

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
            cout << "opposite of good?" << endl;
            cout << "A.bad"
                 << " "
                 << " B.excellent "
                 << "C.outstanding "
                 << "D.rubbish" << endl;

            opt = toupper(withdrawing(2, 2));

            if (opt == 'A')
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
            cout << "palindrome?" << endl;
            cout << "A.tht"
                 << " "
                 << " B.deh "
                 << "C.jaipur "
                 << "D.pi" << endl;

            opt = toupper(withdrawing(2, 4));

            if (opt == 'A')
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
            cout << "what rocks?" << endl;
            cout << "A.rock"
                 << " "
                 << " B.IIRS "
                 << "C.BITS "
                 << "D.me" << endl;

            opt = toupper(withdrawing(2, 8));

            if (opt == 'A')
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
            cout << "how many domestic campuses does bits have?" << endl;
            cout << "A.2"
                 << " "
                 << " B.none of my business "
                 << "C.4 "
                 << "D.3" << endl;

            opt = toupper(withdrawing(2, 16));

            if (opt == 'A')
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
            cout << "where is IIRS?" << endl;
            cout << "A.Delhi"
                 << " "
                 << " B.dehradun "
                 << "C.jaipur "
                 << "D.pilani" << endl;

            opt = withdrawing(3, 32);

            if (opt == 'A')
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
            cout << "opposite of good?" << endl;
            cout << "A.bad"
                 << " "
                 << " B.excellent "
                 << "C.outstanding "
                 << "D.rubbish" << endl;

            opt = withdrawing(3, 64);

            if (opt == 'A')
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
            cout << "palindrome?" << endl;
            cout << "A.tht"
                 << " "
                 << " B.deh "
                 << "C.jaipur "
                 << "D.pi" << endl;

            opt = withdrawing(3, 125);

            if (opt == 'A')
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
            cout << "what rocks?" << endl;
            cout << "A.rock"
                 << " "
                 << " B.IIRS "
                 << "C.BITS "
                 << "D.me" << endl;

            opt = withdrawing(3, 250);

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
            cout << "how many domestic campuses does bits have?" << endl;
            cout << "A.2"
                 << " "
                 << " B.none of my business "
                 << "C.4 "
                 << "D.3" << endl;

            opt = withdrawing(3, 500);

            if (opt == 'A')
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
            cout << "\t\tyou have $ " << level * 100;
            getch();
        }
    }
    else
    {
        system("cls");
        cout << "correct";
        cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
        cout << "\t\tyou have $ " << level * 1000 << "\n";
        getch();
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

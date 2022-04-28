#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

void GameDisplay();
void round1();
void round2();
void Final_round();
void correct_answer(int round_no, int level);

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

            opt = toupper(getch());

            if (opt == 'B')
            {
                correct_answer(1, 1);
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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

            opt = toupper(getch());
            
            if (opt == 'A')
            {
                correct_answer(1, 2);
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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

            opt = toupper(getch());

            if (opt == 'A')
            {
                correct_answer(1, 3);
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'A')
            {
                correct_answer(1, 4);
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'D')
            {
                correct_answer(1,5);
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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

            opt = toupper(getch());
            if (opt == 'B')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'A')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'A')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'A')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'D')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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

            opt = toupper(getch());
            if (opt == 'B')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'A')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'A')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'A')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
            opt = toupper(getch());
            if (opt == 'D')
            {
                cout << "correct";
                count++;
                getch();
                break;
            }
            else
            {
                cout << "wrong";
                getch();
                break;
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
        if (level <= 3)
        {
            cout << "correct";
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou have $ " << level * 100;
            getch();
        }
        else if (level == 4)
        {
            cout << "correct";
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou have $400 ";
            getch();
        }
    }
    if (level == 5)
    {
        if (round_no == 1)
        {
            cout << "correct";
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou have $1000 ";
            getch();
            system("cls");
            cout << "\n\n\n \t\t********* CONGRATULATION ********\n\n";
            cout << "\t\tyou reach round 2 \n";
            getch();
            // round2();
        }
    }
}


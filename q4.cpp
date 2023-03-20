// Husnain Ashfaq (22i-2536)
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

// function protype
int random();
bool science();
bool history();
bool sport();
bool popCul();

// Global Variables
int prize = 0, total_q = 0, correct = 0;

int main()
{
    int randomNo, sci = 60, spo = 80, pop = 70, hist = 90;

    while (total_q < 15 && sci > 20 && spo > 20 && pop > 20 && hist > 20)
    {
        randomNo = random();
        if (randomNo == 0)
        {
            cout << "Section: Science Question" << endl;
            bool x = science();
            if (x == 1)
            {
                sci -= 10;
                correct += 1;
            }
        }
        else if (randomNo == 1)
        {
            cout << "Section: Sport Question" << endl;
            bool y = sport();
            if (y == 1)
            {
                spo -= 10;
                correct += 1;
            }
        }
        else if (randomNo == 2)
        {

            cout << "Section: History Question" << endl;
            bool z = history();
            if (z == 1)
            {
                spo -= 10;
                correct += 1;
            }
        }
        else if (randomNo == 3)
        {
            cout << "Section: Pop culture Question" << endl;
            bool a = popCul();
            if (a == 1)
            {
                pop -= 10;
                correct += 1;
            }
        }
    }
    if (correct >= 1 && correct <= 3)
    {
        cout << "Your answer the total " << total_q << " questions" << endl;
        cout << "Your correct answers are " << correct << endl;
        prize = correct * 100;
        cout << "Your prize is " << prize << endl;
    }
    else if (correct >= 4 && correct <= 6)
    {
        cout << "Your answer the total " << total_q << " questions" << endl;
        cout << "Your correct answers are " << correct << endl;
        prize = correct * 1000;
        cout << "Your prize is " << prize << endl;
    }
    else if (correct >= 7 && correct <= 10)
    {
        cout << "Your answer the total " << total_q << " questions" << endl;
        cout << "Your correct answers are " << correct << endl;
        prize = correct * 10000;
        cout << "Your prize is " << prize << endl;
    }
    else if (correct >= 11)
    {
        cout << "Your answer the total " << total_q << " questions" << endl;
        cout << "Your correct answers are " << correct << endl;
        prize = total_q * 15000;
        cout << "Your prize is " << prize << endl;
    }
    else
    {
        cout << "You have not answered any question" << endl;
        cout << "Your correct answers are " << correct << endl;
        prize = total_q * 0;
        cout << "Your prize is " << prize << endl;
    }

    return 0;
}

// function to geneate the random numbers
int random()
{

    srand(time(NULL));

    int random = rand() % 4;

    return random;
}

// function to ask questions about science
bool science()
{
    int anyNo = random();
    bool ans;
    total_q += 1;
    if (anyNo == 0)
    {
        cout << "Question no 1\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (anyNo == 1)
    {
        cout << "Question no 2\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (anyNo == 2)
    {
        cout << "Question no 3\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (anyNo == 3)
    {
        cout << "Question no 4\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }

    return ans;
}

// function to ask questions about History
bool history()
{
    total_q += 1;
    int randomNo = random();
    bool ans;
    if (randomNo == 0)
    {
        cout << "Question no 1\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (randomNo == 1)
    {
        cout << "Question no 2\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (randomNo == 2)
    {
        cout << "Question no 3\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (randomNo == 3)
    {
        cout << "Question no 4\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }

    return ans;
}
// function to ask questions about Pop Culture
bool popCul()
{
    total_q += 1;
    int randomNo = random();
    bool ans;
    if (randomNo == 0)
    {
        cout << "Question no 1\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (randomNo == 1)
    {
        cout << "Question no 2\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (randomNo == 2)
    {
        cout << "Question no 3\nAnswer: 1-True,0-false" << endl;
        cin >> ans;
    }
    else if (randomNo == 3)
    {
        cout << "Question no 4\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }

    return ans;
}

// function to ask questions about Sport
bool sport()
{
    total_q += 1;
    int randomNo = random();
    bool ans;
    if (randomNo == 0)
    {
        cout << "Question no 1\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (randomNo == 1)
    {
        cout << "Question no 2\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (randomNo == 2)
    {
        cout << "Question no 3\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    else if (randomNo == 3)
    {
        cout << "Question no 4\nAnswer: 1-True,0-False" << endl;
        cin >> ans;
    }
    return ans;
}


#include <iostream>
#include <stdlib.h>

using namespace std;
//(rock beats scissors, scissors beat paper, paper beats rock).
int main()
{
    int userChoice;
    cout << "Choose Rock(0), Paper (1), or Scissors (2): ";
    int Rock = 0;
    int Paper = 1;
    int Scissors = 2;
    int computerChoice;
    cin >> userChoice;
    srand(time(NULL));
    computerChoice = rand() % 3; //randomnly generates num from 0-2
    //cout<<userChoice<<endl;
    cout << computerChoice << endl;
    //rock
    if (userChoice == Rock && computerChoice == Scissors)
    {
        cout << "Computer chooses Scissors" << endl;
        cout << "You won" << endl;
    }
    else if (computerChoice == Rock && userChoice == Scissors)
    {
        cout << "Computer chooses Rock" << endl;
        cout << "You lost" << endl;
    }
    //scissors
    else if (userChoice == Scissors && computerChoice == Paper)
    {
        cout << "Computer chooses Paper" << endl;
        cout << "You won" << endl;
    }
    else if (computerChoice == Scissors && userChoice == Paper)
    {
        cout << "Computer chooses Scissors" << endl;
        cout << "You lost" << endl;
    }
    //paper
    else if (userChoice == Paper && computerChoice == Rock)
    {
        cout << "Computer chooses Rock" << endl;
        cout << "You won" << endl;
    }
    else if (computerChoice == Paper && userChoice == Rock)
    {
        cout << "Computer chooses Paper" << endl;
        cout << "You lost" << endl;
    }
    //goes through each scenario whther user or computer chooses rock/scissors/paper and ouputs result
    else
    {
        cout << "It's a tie, go again!" << endl;
    }
}

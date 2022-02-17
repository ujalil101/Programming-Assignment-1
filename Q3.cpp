#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int num1;
    int num2;
    cout << "Enter a number" << endl;
    cin >> num1; //stores user input into num1
    cout << "Enter another number" << endl;
    cin >> num2; //stores second user input into num2
    stringstream strHexN1;
    strHexN1 << hex << num1;
    string hexnum1 = strHexN1.str(); //turns num1 into hex and stores it as string in hexnum1
    
    stringstream strHexN2;
    strHexN2 << hex << num2;
    string hexnum2 = strHexN2.str(); //turns num1 into hex and stores it as string in hexnum2
    
    int size = 0;
    int counter = 0;
    int lenNum1 = hexnum1.length(); //length of num1 in hex format
    int lenNum2 = hexnum2.length(); //length of num2 in hex format
    if (lenNum1 >= lenNum2)
    {
        size = lenNum1;
    }
    else
    {
        size = lenNum2;
    }
    
    //checks which length is the biggest and stores that value into size
    if (lenNum1 > lenNum2) {
        for (int i = 0; i <= size - 1; i++)
        {
            if (hexnum1[i] == hexnum2[i+1])
            {
                counter += 1;
            }
            //checks which hex value is equal and stores that into counter
        }
    }
    else if (lenNum2 > lenNum1){
        for (int i = 0; i <= size - 1; i++)
        {
            if (hexnum2[i] == hexnum1[i+1])
            {
                counter += 1;
            }
            //checks which hex value is equal and stores that into counter
        }
    }
    //the two if statements make sure to account for trailing 0s. 
    else {
    
    for (int i = 0; i <= size - 1; i++)
    {
        if (hexnum1[i] == hexnum2[i])
        {
            counter += 1;
        }
        //checks which hex value is equal and stores that into counter
    }
    }
    
    int ham = size - counter; //basically subtracts the length of largest hex string by the counter
    cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in hex format is " << ham << "." << endl;
}

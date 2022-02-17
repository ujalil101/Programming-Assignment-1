#include <iostream>

using namespace std;


int main()
{
    long userNum;
    cout<<"Enter a number: "<<endl;
    cin>>userNum;
    long copyNum = userNum; //copied the userNum into a different variable
    long backwardsNum = 0; //turn the userNum backwards ex. 123 turns to 321
    
    
    do {
        long lastDigit = userNum % 10; 
        backwardsNum = backwardsNum  * 10  + lastDigit;//puts last digit of userNum first and goes backwards
        userNum/=10; //Gets the next place value 
        //esentially this loop starts from the last digit and makes its way to the first digit.  
    }while (userNum > 0);
    if (copyNum == backwardsNum) //if the copyNum--which is the users inputted number-- equals the backwards number that we got, then the user's input is a palindrome. else not.
        cout<<"The number " <<copyNum<<" is a palindrome."<<endl;
    else
        cout<<"The number " <<copyNum<<" is not a palindrome."<<endl;
    //had to use long instead of int error
}


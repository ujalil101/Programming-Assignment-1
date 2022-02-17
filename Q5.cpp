#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char user_char; //stores the character
    int user_num;   //stores the offset number
    cout << "Enter character: " << endl;
    cin >> user_char;
    cout << "Offset (enter 0 to convert case): " << endl;
    cin >> user_num;
    int asciiValue = int(user_char); //stores the ascii value for user_char
    if (user_num == 0)               //checks if offset value is 0
    {
        if (isupper(user_char)) //checks if user_char is uppercase
        {
            char lowCase = tolower(user_char);            //stores lowercase value of user_char
            cout << "New character: " << lowCase << endl; //prints lowercase user_char
        }
        else //user_char is lowercase
        {
            char upCase = toupper(user_char);            //stores uppercase value of user_char
            cout << "New character: " << upCase << endl; //prints uppercase user_char
        }
    }
    else //offset value is not 0
    {
        int newChar = asciiValue + user_num; //adds ascii value + offset value (that's not 0)
        if (newChar > 127) {
            cout<<"Error! Offset is to high!"<<endl;
        } //checks if offset value is beyond ascii value! 
        else {
        char result = char(newChar);         //turns ascii value to new character
        cout << "New character: " << result << endl; //prints new character
        }
    }
}

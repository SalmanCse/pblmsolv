#include <iostream>
#include<conio.h>
#include <string>
using namespace std;
int main()
{
    string input;
    //int n;
    int count = 0, length;
    //cin << n;
    //scanf ("%d", &n);

    cout << "Enter your phrase: \n";
    getline (cin, input);
    length = (int)input.length();
    for (count = 0; count < length; count++)
    {
      if (isalpha (input [count]))
      {
        input[count]=tolower(input[count]);
        for (int i=0; i<3; i++)
        {
            if (input [count] == 'z')
                input [count] = 'a';
            else
                input [count]++;
        }
    }
 }
 cout << "Results :\n" <<input <<endl;
}

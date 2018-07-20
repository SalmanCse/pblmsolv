#define _WIN32_WINNT 0x0500 //RIGHT
//#include <WProgram.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int input();
    string s;
    cin >> n;
    cin >> s;
    int k;
    cin >> k;

    k %= 26;
    for (int i = 0;i < n; i++) {
        int c = s[i];
        if (c >= 'a' && c <= 'z') { // Lowercase characters
            c += k;
            if (c > 'z') { // C exceeds the ascii range of lowercase characters.
               c = 96 + (c % 122); // wrapping from z to a
            }
        } else if(c >= 'A' && c <= 'Z') { // Uppercase characters
            c += k;
            if(c > 'Z') { // C exceeds the ascii range of uppercase characters.
                c = 64 + (c % 90); //wrapping from Z to A
            }
        }
        cout << (char)c;
    }
    cout << endl;
    return 0;
}
n = input();
s = list(raw_input());
k=ninput % 26
temp = map(lambda x: ord(x), s)
for (i in range(len(s))):
    if 65 <= temp[i] <= 90:
        temp[i] = 65 + ((temp[i] - 65) + k) % 26
    elif 97 <= temp[i] <= 122:
        temp[i] = 97 + ((temp[i] - 97) + k) % 26
print "".join(map(chr, temp))

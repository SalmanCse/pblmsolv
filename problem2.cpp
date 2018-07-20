#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int res=0;
    string S, m = "SOS";

    cin >> S;
    for (int i=0; i<S.size(); i=i+3){

        string s = S.substr(i,3);
        cout << s << endl;
        if (s != m )
            res+= 1;
    }
    cout << res;
    return 0;
}

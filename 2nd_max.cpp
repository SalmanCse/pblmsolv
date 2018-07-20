#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin>> num;
    int a[num];
    for(int i=0;i<num; i++)
            cin>>a[i];
    sort(a, a+num);
    cout<<a[num-2];

}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b,c;
    cin >> a >> b>>c;
    int minimum = min(a , min(b,c));
    int maximum = max(a,max(b,c));


    cout<<minimum<<maximum<<endl;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n ;
    long long a,b;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int t = 0;
        cin>>a>>b;
        while (a%b!=0){
            a++;
            t++;
        }
        cout<<t<<endl;
    }

    return 0;
}
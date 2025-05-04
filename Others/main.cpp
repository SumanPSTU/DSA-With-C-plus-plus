#include <iostream>
using namespace std;

int main(){
    int n;
    int sum =0;
    int pow = 1;
    cin>>n;
    while (n>0){
        int i = n%2;
        sum+=(pow*i);
        pow*=10;
        n/=2;
    }
    cout<<sum<<endl;


    return 0;
}
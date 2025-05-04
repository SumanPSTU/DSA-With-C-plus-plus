#include <iostream>
#include <vector>

using namespace std;
void print(int v){
    cout<<v<<" ";
}
void print(string v){
    cout<<v<<" ";
}
int main(){
    vector<int> vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i+1);
    }
    for(auto v:vec){
        print(v);
    }
    print(vec[5]);
    vec[5] = 30;
    print(vec[5]);
    print(vec.size());
    print(vec.at(3));
    print(vec.empty());


    return 0;
}
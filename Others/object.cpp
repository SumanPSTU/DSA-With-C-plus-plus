#include <iostream>
using  namespace std;
class myclass{
private:
    int id ;
    string  name;
public:
    myclass(){

    }
    myclass(int id,string name){
        this->id = id;
        this->name = name;
    }
    int getId(){
        return this->id;
    }
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
    void setId(int id){
        this->id = id;
    }
};
class Studet:myclass{
private:
    string name;
public:
    Studet(int id,string name){

    }
};

void print(int id);
void print(string name){
    cout<<name<<endl;
}
int main(){
    myclass myclass(2202014,"suman");
    print(myclass.getId());



    return 0;
}

void print(int id){
    cout<<id<<endl;
}
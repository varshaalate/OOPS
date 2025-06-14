#include<iostream>
using namespace std;
class Account{
    public: 
        string name;
        string accountid;
    private:
        string password;
        string balance;
};

int main(){
    Account a1;
    a1.name="varsha";
    cout<<a1.name;
}
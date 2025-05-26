
#include<iostream>
using namespace std;

class Atm {
    private:
    float balance=5000;
     bool verifyPin(int pin) {
        return  pin ==1234;
     }
public:
        void withdraw(int pin,float w_amount){
            if(verifyPin(pin)){
                if(balance>=w_amount){
                    balance-=w_amount;
                    cout<<"Withdraw  Sucessful, Remaining Balance : "<<balance<<endl;
                }
                else{
                    cout<<"Insufficent Balance !!!"<<endl;
                }
        }
            else{
                cout<<"Access Denied.....Incorrect PIN "<<endl;
            }
        }
};

int main(){
    Atm a1;
    a1.withdraw(1234,1000);
    a1.withdraw(1234,7000);
    a1.withdraw(2345,1000);
    a1.withdraw(2345,6000);
    return 0;
}

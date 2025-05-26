
#include<iostream>
using namespace std;

class Item{
private:
    string i_name;
    float i_price;
    float i_quantity;
    public:

    void setItemDetails(string s_name,float s_price,float s_quantity){
         i_name=s_name;
         i_price=s_price;
         i_quantity= s_quantity;

    }

    void getItemDetails(){
        cout<<" Item Name: "<<i_name<<endl;
        cout<<" Item Price: "<<i_price<<endl;
        cout<<" Item Quantity: "<<i_quantity<<endl;
    }


    float totalPrice(){
        return i_price*i_quantity;
    }

};


class Billing{
    private:
    Item item;


    float getBillAmount(){
        return item.totalPrice();
    }
    public:
    void createBill(string name ,float price,float quantity){
        item.setItemDetails(name,price,quantity);
        item.getItemDetails();
        cout<<"---------------------------------------------"<<endl;
        cout<<" Total Price: "<<getBillAmount()<<endl;
    }
};


int main(){
    Billing b1;
    b1.createBill("Apple", 10.0, 5.0);
    b1.createBill(" Pineapple ", 20.0, 3.0);
    return 0;
}

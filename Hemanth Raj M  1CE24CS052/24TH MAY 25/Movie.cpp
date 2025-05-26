// Ticket booking platform
// 1 Movie Ticket price : 1200
// Get the Details like: name, gender Age and phone no
// The Result should actual price after applying discount 
// if gender is Female apply 5% discount, if lessthan or equal to 12 Age 
//    if not 3% discount
// if it is male you need to add GST 18%

#include <iostream>
using namespace std;
class TICKETBOOKING
{
    private:
    float ticketprice=1000;
    float calculatePrice(string gender,int age){  
    float finalprice;
        if(gender=="female" ){
            if(age<=12){
            finalprice=ticketprice-(ticketprice*0.05);
            }
            else
            {
                finalprice=ticketprice-(ticketprice*0.03);
            }
        }
        else 
        {
            finalprice=ticketprice+(ticketprice*0.18);
        }
        return finalprice;
    }
    public:
        string s_name;
        string s_gender;
        int s_age ;
        int s_phoneno;
        void setcustomerdetails(string name,string gender,int age,int phoneno) {
            s_name=name;
            s_gender=gender;
            s_age=age;
            s_phoneno=phoneno;
        }
        void getcustomerdetails(){
            
        cout<<"Name: "<<s_name<<endl;
        cout<<"Gender: "<<s_gender<<endl;
        cout<<"Age: "<<s_age<<endl;
        cout<<"Phone No. : "<<s_phoneno<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<" Final Ticket Price  = "<<calculatePrice(s_gender,s_age)<<endl;
        }
};
    

int main() {
   
    TICKETBOOKING a1;
    a1.setcustomerdetails("alice","male",1,12345); // 1200+216 = 1416 // 1000 + 180 = 1180
    a1.getcustomerdetails();
    a1.setcustomerdetails("maggie","female",15,12345); // 1200 - 36 = 1164 // 1000 - 30 = 970
    a1.getcustomerdetails();
    a1.setcustomerdetails("clara","female",11,12345); // 1200 - 60 = 1140   //1000 -50 = 950
    a1.getcustomerdetails();
    return 0;
}
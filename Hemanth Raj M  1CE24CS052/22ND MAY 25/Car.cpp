
#include <iostream>
using namespace std;
class Car{
    
    public :
    int wheels=0; // e.g 4
    int seats; // e.g 5 or 6
    int doors; // e.g 4 or 5
    string engineType; // v8
    string modelNo;
    float fuelCap;
    
    Car(){
        doors=4;
    }
    Car(int swheels,float sfuelCap){
        wheels=swheels;
        fuelCap = sfuelCap;
    }
    Car(int swheels,float sfuelCap,int sseats,int sdoors,string sengineType,string smodelNo){
        wheels=swheels;
        fuelCap = sfuelCap;
        seats =sseats;
        doors = sdoors;
        engineType=sengineType;
        modelNo = smodelNo;
    }

    void setCarDetails(int swheels,float sfuelCap,int sseats,int sdoors,string sengineType,string smodelNo){
        wheels=swheels;
        fuelCap = sfuelCap;
        seats =sseats;
        doors = sdoors;
        engineType=sengineType;
        modelNo = smodelNo;
    }
    void getCarDetails(){
        cout<<" ---------- Start Car Details -----------"<<endl;
        cout<<" No of Wheels = "<<wheels<<endl;
        cout<<" Fuel Capacity = "<<fuelCap<<endl;
        cout<<" No of Seats = "<<seats<<endl;
        cout<<" No of Doors = "<<doors<<endl;
        cout<<" No of Engine Type = "<<engineType<<endl;
        cout<<" No of Model No = "<<modelNo<<endl;
        cout<<" ---------- End Car Details -----------"<<endl;
    }
    void getFuelCost(float fprice){
        cout<<" Fuel cost  = "<<(fuelCap*fprice)<<endl;
    }
    
    void setDoors(int sseats){
         doors =sseats;
    }
    int getDoors(){
         return doors;
    }
};```cpp
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int wheels;
    int seats;
    int doors;
    string engineType;
    string modelNo;
    float fuelCap;

public:
    // Constructor with default values
    Car(int swheels = 4, float sfuelCap = 0.0, int sseats = 0, int sdoors = 0, string sengineType = "", string smodelNo = "")
        : wheels(swheels), fuelCap(sfuelCap), seats(sseats), doors(sdoors), engineType(sengineType), modelNo(smodelNo) {}

    // Setter for car details
    void setCarDetails(int swheels, float sfuelCap, int sseats, int sdoors, string sengineType, string smodelNo) {
        wheels = swheels;
        fuelCap = sfuelCap;
        seats = sseats;
        doors = sdoors;
        engineType = sengineType;
        modelNo = smodelNo;
    }

    // Getter for car details
    void getCarDetails() const {
        cout << "---------- Start Car Details -----------" << endl;
        cout << "No of Wheels = " << wheels << endl;
        cout << "Fuel Capacity = " << fuelCap << endl;
        cout << "No of Seats = " << seats << endl;
        cout << "No of Doors = " << doors << endl;
        cout << "Engine Type = " << engineType << endl;
        cout << "Model No = " << modelNo << endl;
        cout << "---------- End Car Details -----------" << endl;
    }

    // Method to calculate fuel cost
    void getFuelCost(float fprice) const {
        cout << "Fuel cost = " << (fuelCap * fprice) << endl;
    }

    // Setter for doors
    void setDoors(int sdoors) {
        doors = sdoors;
    }

    // Getter for doors
    int getDoors() const {
        return doors;
    }
};

int main() {
    Car c1, c2, c5;
    Car c3(4, 18, 5, 4, "A7", "C4U289");
    Car c4;

    cout << "\n---------- Before set, get the specific seat number -----------" << endl;
    cout << "The no of seats present in = " << c3.getDoors() << endl;

    c3.setDoors(10);
    c1.setCarDetails(4, 18, 5, 4, "A8", "C4U234");
    c2.setCarDetails(4, 12, 5, 4, "A9", "A4I234");
    c4.setCarDetails(4, 16, 5, 4, "A10", "C4J234");
    c5.setCarDetails(4, 14, 6, 5, "A11", "A4K234");

    cout << "\n---------- C1 Car Details -----------" << endl;
    c1.getCarDetails();

    cout << "\n---------- C2 Car Details -----------" << endl;
    c2.getCarDetails();

    cout << "\n---------- C3 Car Details -----------" << endl;
    c3.getCarDetails();

    cout << "\n---------- C4 Car Details -----------" << endl;
    c4.getCarDetails();

    cout << "\n---------- C5 Car Details -----------" << endl;
    c5.getCarDetails();

    c1.getFuelCost(84);
    c2.getFuelCost(100);

    cout << "\n---------- After set, get the specific doors number -----------" << endl;
    cout << "The no of doors present in = " << c3.getDoors() << endl;

    return 0;
}
``````cpp
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int wheels;
    int seats;
    int doors;
    string engineType;
    string modelNo;
    float fuelCap;

public:
    // Constructor with default values
    Car(int swheels = 4, float sfuelCap = 0.0, int sseats = 0, int sdoors = 0, string sengineType = "", string smodelNo = "")
        : wheels(swheels), fuelCap(sfuelCap), seats(sseats), doors(sdoors), engineType(sengineType), modelNo(smodelNo) {}

    // Setter for car details
    void setCarDetails(int swheels, float sfuelCap, int sseats, int sdoors, string sengineType, string smodelNo) {
        wheels = swheels;
        fuelCap = sfuelCap;
        seats = sseats;
        doors = sdoors;
        engineType = sengineType;
        modelNo = smodelNo;
    }

    // Getter for car details
    void getCarDetails() const {
        cout << " ---------- Start Car Details -----------" << endl;
        cout << " No of Wheels = " << wheels << endl;
        cout << " Fuel Capacity = " << fuelCap << endl;
        cout << " No of Seats = " << seats << endl;
        cout << " No of Doors = " << doors << endl;
        cout << " No of Engine Type = " << engineType << endl;
        cout << " No of Model No = " << modelNo << endl;
        cout << " ---------- End Car Details -----------" << endl;
    }

    // Method to calculate fuel cost
    void getFuelCost(float fprice) const {
        cout << " Fuel cost  = " << (fuelCap * fprice) << endl;
    }

    // Setter for doors
    void setDoors(int sseats) {
        doors = sseats;
    }

    // Getter for doors
    int getDoors() const {
        return doors;
    }
};

int main() {
    Car c1, c2, c5;
    Car c3(4, 18, 5, 4, "A7", "C4U289");
    Car c4;

    cout << "\n---------- before set  get the Specific seat number -----------" << endl;
    cout << "the no of seats present in  = " << c3.getDoors() << endl;

    c3.setDoors(10);
    c1.setCarDetails(4, 18, 5, 4, "A8", "C4U234");
    c2.setCarDetails(4, 12, 5, 4, "A9", "A4I234");
    c4.setCarDetails(4, 16, 5, 4, "A10", "C4J234");
    c5.setCarDetails(4, 14, 6, 5, "A11", "A4K234");

    cout << "\n---------- C1 Car Details -----------" << endl;
    c1.getCarDetails();

    cout << "\n---------- C2 Car Details -----------" << endl;
    c2.getCarDetails();

    cout << "\n---------- C3 Car Details -----------" << endl;
    c3.getCarDetails();

    cout << "\n---------- C4 Car Details -----------" << endl;
    c4.getCarDetails();

    cout << "\n---------- C5 Car Details -----------" << endl;
    c5.getCarDetails();

    c1.getFuelCost(84);
    c2.getFuelCost(100);

    cout << "\n---------- after set get the Specific doors number -----------" << endl;
    cout << "the no of doors present in  = " << c3.getDoors() * 4 << endl;

    return 0;
}
``````cpp
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int wheels;
    int seats;
    int doors;
    string engineType;
    string modelNo;
    float fuelCap;

public:
    // Constructor with default values
    Car(int swheels = 4, float sfuelCap = 0.0, int sseats = 0, int sdoors = 0, string sengineType = "", string smodelNo = "")
        : wheels(swheels), fuelCap(sfuelCap), seats(sseats), doors(sdoors), engineType(sengineType), modelNo(smodelNo) {}

    // Setter for car details
    void setCarDetails(int swheels, float sfuelCap, int sseats, int sdoors, string sengineType, string smodelNo) {
        wheels = swheels;
        fuelCap = sfuelCap;
        seats = sseats;
        doors = sdoors;
        engineType = sengineType;
        modelNo = smodelNo;
    }

    // Getter for car details
    void getCarDetails() const {
        cout << " ---------- Start Car Details -----------" << endl;
        cout << " No of Wheels = " << wheels << endl;
        cout << " Fuel Capacity = " << fuelCap << endl;
        cout << " No of Seats = " << seats << endl;
        cout << " No of Doors = " << doors << endl;
        cout << " No of Engine Type = " << engineType << endl;
        cout << " No of Model No = " << modelNo << endl;
        cout << " ---------- End Car Details -----------" << endl;
    }

    // Method to calculate fuel cost
    void getFuelCost(float fprice) const {
        cout << " Fuel cost  = " << (fuelCap * fprice) << endl;
    }

    // Setter for doors
    void setDoors(int sseats) {
        doors = sseats;
    }

    // Getter for doors
    int getDoors() const {
        return doors;
    }
};

int main() {
    Car c1, c2, c5;
    Car c3(4, 18, 5, 4, "A7", "C4U289");
    Car c4;

    cout << "\n---------- before set  get the Specific seat number -----------" << endl;
    cout << "the no of seats present in  = " << c3.getDoors() << endl;

    c3.setDoors(10);
    c1.setCarDetails(4, 18, 5, 4, "A8", "C4U234");
    c2.setCarDetails(4, 12, 5, 4, "A9", "A4I234");
    c4.setCarDetails(4, 16, 5, 4, "A10", "C4J234");
    c5.setCarDetails(4, 14, 6, 5, "A11", "A4K234");

    cout << "\n---------- C1 Car Details -----------" << endl;
    c1.getCarDetails();

    cout << "\n---------- C2 Car Details -----------" << endl;
    c2.getCarDetails();

    cout << "\n---------- C3 Car Details -----------" << endl;
    c3.getCarDetails();

    cout << "\n---------- C4 Car Details -----------" << endl;
    c4.getCarDetails();

    cout << "\n---------- C5 Car Details -----------" << endl;
    c5.getCarDetails();

    c1.getFuelCost(84);
    c2.getFuelCost(100);

    cout << "\n---------- after set get the Specific doors number -----------" << endl;
    cout << "the no of doors present in  = " << c3.getDoors() * 4 << endl;

    return 0;
}
```

int main(){
    Car c1,c2,c5;
    Car c3(4,18,5,4,"A7","C4U289");
    Car c4; 
   
    cout<<"\n---------- before set  get the Specific seat number -----------"<<endl;
    cout<<"the no of seats present in  = "<<c3.getDoors()<<endl;
    
    c3.setDoors(10);
    c1.setCarDetails(4,18,5,4,"A8","C4U234");
    c2.setCarDetails(4,12,5,4,"A9","A4I234");
    c4.setCarDetails(4,16,5,4,"A10","C4J234");
    c5.setCarDetails(4,14,6,5,"A11","A4K234");
    cout<<"\n---------- C1 Car Details -----------"<<endl;
    c1.getCarDetails();
    cout<<"\n---------- C2 Car Details -----------"<<endl;
    c2.getCarDetails();
     cout<<"\n---------- C3 Car Details -----------"<<endl;
    c3.getCarDetails();
    cout<<"\n---------- C4 Car Details -----------"<<endl;
    c4.getCarDetails();
    cout<<"\n---------- C5 Car Details -----------"<<endl;
    c5.getCarDetails();
    c1.getFuelCost(84);
    c2.getFuelCost(100);
    
    cout<<"\n---------- after set get the Specific doors number -----------"<<endl;
    cout<<"the no of doors present in  = "<<c3.getDoors()*4<<endl;
}

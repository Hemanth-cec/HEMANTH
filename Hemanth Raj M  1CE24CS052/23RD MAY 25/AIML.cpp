
#include<iostream>
using namespace std;
class Teacher{
    public:
    string tname;
    string tdob;
    string tempid;
    string tdept;
    float texp;
    float tsalary;


    Teacher(){
        tempid="un assigned";
        tdept="un assigned";
        texp=0;
}

    Teacher( string s_tname, string s_tdob, float s_tsalary){
    tname=s_tname;
    tdob=s_tdob;
    tsalary=s_tsalary;
}
    Teacher( string s_tname, string s_tdob, float s_tsalary, string s_tempid,string s_tdept,float s_texp){
    tname=s_tname;
    tdob=s_tdob;
    tsalary=s_tsalary;
    tempid=s_tempid;
    tdept=s_tdept;
    texp= s_texp;
    
}
 
    void getTeacherDetails(){
        cout<<"----------start teacher details----------"<<endl;
        cout<<"Name : "<<tname<<endl;
        cout<<" DOB : "<<tdob<<endl;
        cout<<" Employee ID : "<<tempid<<endl;
        cout<<" Department : "<<tdept<<endl;
        cout<<" Experince : "<<texp<<endl;
        cout<<" Salary : "<<tsalary<<endl;
        cout<<"----------end teacher details----------"<<endl;
    }
    void setSalary(float s_salary){
        tsalary=s_salary;
    }
    void getSalary(){
    cout<<" salary  : "<<tsalary<<endl;
    }




    void setName(string s_name){
        tname=s_name;
}
    void getname(){ 
     cout<<" Name   : "<<tname<<endl;
    }





    void setDepartment(string s_dept){  
            tdept=s_dept;
             }
     void getDepartment(){ 
    cout<<" DEPT  : "<<tdept<<endl;
    }
         




    int main(){
        Teacher t1("John", "1990-01-01", 50000.0,"CEC1234","CSE",5);
        Teacher t2("John wick", "1990-05-17", 40000.0,"CEC1235","CSE",6);
        Teacher t3("Manish", "1990-05-17", 10000.0,"CEC1236","CSE",3);
        Teacher t4("Mohan", "1990-05-17", 8000.0,"CEC1237","CSE",2);
        Teacher t5("Manoj", "1990-05-17", 7000.0,"CEC1238","CSE",1);
        cout<<"---------T1 teacher deatails ---------"<<endl;
        t1.getTeacherDetails();
         cout<<"---------T2 teacher deatails ---------"<<endl;
        t2.getTeacherDetails();
         cout<<"---------T3 teacher deatails ---------"<<endl;
        t3.getTeacherDetails();
         cout<<"---------T4 teacher deatails ---------"<<endl;
        t4.getTeacherDetails();
         cout<<"---------T5 teacher deatails ---------"<<endl;
        t5.getTeacherDetails();


        cout<<"-------------before salary update--------"<<endl;
        t1.getSalary();
        t2.getSalary();
        t3.getSalary();
        t4.getSalary();
        t5.getSalary();

         cout<<"-------------after salary update--------"<<endl;
           if(t1.tsalary<=15000){
            cout<<"t1 salary = "<<t1.tsalary*2<<endl;
           }
           else{t1.tsalary>15000;
           cout<<"t1 salary = "<<t1.tsalary-5000<<endl;
           }


             if(t2.tsalary<=15000){
            cout<<"t2 salary = "<<t2.tsalary*2<<endl;
           }
           else{t2.tsalary>15000;
           cout<<"t2 salary = "<<t2.tsalary-5000<<endl;
           }


            if(t3.tsalary<=15000){
            cout<<"t3 salary = "<<t3.tsalary*2<<endl;
           }
           else{t3.tsalary>15000;
           cout<<"t3 salary = "<<t3.tsalary-5000<<endl;
           }


            if(t4.tsalary<=15000){
            cout<<"t4 salary = "<<t4.tsalary*2<<endl;
           }
           else{t4.tsalary>15000;
           cout<<"t4 salary = "<<t4.tsalary-5000<<endl;
           }

            if(t5.tsalary<=15000){
            cout<<"t5 salary = "<<t5.tsalary*2<<endl;
           }
           else{t5.tsalary>15000;
           cout<<"t5 salary = "<<t5.tsalary-5000<<endl;
           }



           if("t1.getDepartment()"=="ISE"){
            t1.setDepartment("AIML");
           }

           if("t2.getDepartment()"=="ISE"){
            t2.setDepartment("AIML");
           }


            if("t3.getDepartment()"=="ISE"){
            t3.setDepartment("AIML");
           }


            if("t4.getDepartment()"=="ISE"){
            t4.setDepartment("AIML");
           }
            if("t5.getDepartment()"=="ISE"){
            t5.setDepartment("AIML");
           }
}
};

#include <bits/stdc++.h>

using namespace std;

//Abstraction :- hiding complex things behind the procedure, that makes those things look simple 

class Abstract_Student{
    
    virtual void get_referral()=0;
    
};

class Student:Abstract_Student{
    
    string Name;    
    float Gpa;        
    string College;
    
    public:
    
    void setName(string name){
        Name=name;
    }
    
    string getName(){  //getter
        return Name;
    }
    
    
    void setGpa(int gpa){  //setter
        Gpa=gpa;
    }
    
    float getGpa(){
        return Gpa;
    }
    
    void setCollege(string college){
        College=college;
    }
    
    string getCollege(){
        return College;
    }
    
    void About_Student(){
        
        cout<<"My name is "<<Name<<endl;
        cout<<"My GPA is "<<Gpa<<endl;
        cout<<"And I am currenty pursuing my B.Tech degree from "<<College<<endl;
    }
    
    void get_referral(){
        
        if(Gpa>8.5){
            cout<<Name<<" I can give you referral"<<endl;
        }
        else{
            cout<<"Sorry, "<<Name<<" I can't give you referral"<<endl;
        }
        
        
    }
    
    Student(string name, float gpa, string college){
        
        Name=name;
        Gpa=gpa;
        College=college;
    }
    
    
    
};

int main(){
    
    Student s1=Student("Alice",8.6,"IIT Bombay");
    
    //s1.About_Student();
    
    Student s2=Student("Siya",8.41,"IIT Madras");
    
    //s2.About_Student();
    s1.get_referral();
    s2.get_referral();
    
    
    return 0;
}

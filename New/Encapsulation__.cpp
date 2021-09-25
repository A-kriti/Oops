#include<bits/stdc++.h>

using namespace std;


class Student{
    
    string Name;    //Encapsulation : used to prevent the direct access of the components by another class.
    int Age;        
    string College;
    
    public:
    
    void setName(string name){
        Name=name;
    }
    
    string getName(){  //getter
        return Name;
    }
    
    
    void setAge(int age){  //setter
        Age=age;
    }
    
    int getAge(){
        return Age;
    }
    
    void setCollege(string college){
        College=college;
    }
    
    string getCollege(){
        return College;
    }
    
    void About_Student(){
        
        cout<<"My name is "<<Name<<endl;
        cout<<"I am "<<Age<<" years old!"<<endl;
        cout<<"And I am currenty pursuing my B.Tech degree from "<<College<<endl;
    }
    
    Student(string name, int age, string college){
        
        Name=name;
        Age=age;
        College=college;
    }
    
    
};

int main(){
    
    Student s1=Student("Roma",20,"IIT Bombay");
    
    s1.About_Student();
    
    Student s2=Student("Sam",21,"IIT Madras");
    
    s2.About_Student();
    
    
    cout<<"Name: "<<s1.getName()<<endl;
    cout<<"Age: "<<s1.getAge()<<endl;
    cout<<"College: "<<s1.getCollege()<<endl;
    
    return 0;
}


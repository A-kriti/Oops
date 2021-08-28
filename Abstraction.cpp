
/*Data abstraction is one of the most essential and important feature of object oriented programming in C++. Abstraction means displaying only essential information and hiding 
the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.*/

#include<bits/stdc++.h>
using namespace std;

class Abstractstudent{
    
    virtual void Semesterexchange()=0;
};


class Student:Abstractstudent{
    
    string Name;
    int Age;
    float Gpa;
    
    public:
    
    
    Student(string name, int age, float gpa){
        Name=name;
        Age=age;
        Gpa=gpa;
    }
    
    void Semesterexchange(){
        
        if(Gpa>8){
            cout<<Name<<" you are eligible for semester exchange program"<<endl;
        }
        else{
            
            cout<<"Sorry, "<<Name<<" you are not eligible for semester exchange program"<<endl;
            
        }
    }
    
    
};


int main(){
    
    Student s1=Student("Fizzo",21,8.1);
    Student s2=Student("hella",20,7.5);
    
    s1.Semesterexchange();
    s2.Semesterexchange();
    
    return 0;
}

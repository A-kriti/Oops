/*The capability of a class to derive properties and characteristics from another class is called Inheritance. 
Inheritance is one of the most important features of Object-Oriented Programming.*/

#include<bits/stdc++.h>

using namespace std;

class Student{
    
    string College;
    int Age;
    float Gpa;
    
    protected:
    
    string Name;
    
    
    public:
    
    Student(string name, string college, int age, float gpa){
        Name=name;
        College=college;
        Age=age;
        Gpa=gpa;
    }
    
    void setgpa(int gpa){
        Gpa=gpa;
    }
    
    float getgpa(){
        return Gpa;
    }
    
};


class Student_Branch:Student{
    
    public:
    string Branch;
    
    Student_Branch(string name, string college, int age, float gpa, string branch)
        :Student(name,college,age,gpa)
    {
        Branch=branch;
    }
    
    
    void show_branch(){
        
        cout<<Name<<" is in "<<Branch<<" department with gpa "<<getgpa()<<endl;
    }
};

int main(){
    
    Student_Branch s1=Student_Branch("Addy","IIT Mandi",20,8.5,"Computer Science");
    s1.show_branch();
    return 0;
}

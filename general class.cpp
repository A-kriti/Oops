#include<bits/stdc++.h>

using namespace std;

class Student{
    
    public:
    string Name;
    string College;
    int Age;
    
    void student_intro(){
        
        cout<<"Hello my name is "<<Name<<endl;
        cout<<"I study in "<<College<<endl;
        cout<<"And I am "<<Age<<" years old"<<endl;
        cout<<"\n";
        
    }
    
    
    Student(string name, string college, int age){
        Name = name;
        College = college;
        Age = age;
    }
};



int main(){
    
    Student student1=Student("Esha","IIT BOMBAY",21);
    
    student1.student_intro();
    
    
    Student student2=Student("Geeta","IIT BHU",20);
    
    
    student2.student_intro();
    
    
    
    return 0;
}

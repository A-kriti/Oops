//The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.

#include<bits/stdc++.h>

using namespace std;


class Human{
    
    public:
    string Name;
    int Age;
    
    Human(string name, int age){
       
       Name=name; 
       Age=age;
    }
    
    virtual void work(){
        
        std::cout <<Name <<" is " << Age<<" years old"<<std::endl;
    }
    
};

class Student: public Human{
    public:
    
    string Language;
    
    Student(string name, int age, string language)
        :Human(name,age)
    {
        Language=language;
    }
    
    
    void work(){
        
        std::cout <<Name <<" is coding in " << Language<<std::endl;
    }
    
};

class Professor: public Human{
    public:
    string Subject;
    
    Professor(string name, int age, string subject)
        :Human(name,age)
    {
        Subject=subject;
    }
    
    void work(){
        
        std::cout <<Name <<" is teaching " << Subject<<std::endl;
    }
    
};

class Director: public Human{
    public:
    string College;
    
    Director(string name, int age, string college)
        :Human(name,age)
    {
        College=college;
    }
    
    /*void work(){
        
        std::cout <<Name <<" is teaching " << Subject<<std::endl;
    }*/
    
};

int main(){
    
    Student s1=Student("Olivya",22,"C++");
    //s1.work();
    
    Professor p1=Professor("Tia",52,"Data Science");
    //p1.work();
    
    Director d1=Director("Bob",61,"IIT Mandi");
    
    Human* h1= &s1;
    Human* h2= &p1;
    Human* h3= &d1;
    
    h1->work();
    h2->work();
    h3->work();
    
    return 0;
}

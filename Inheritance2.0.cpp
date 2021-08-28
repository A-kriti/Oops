
#include<bits/stdc++.h>

using namespace std;


class Abstractstudent{
    
    virtual void Semesterexchange()=0;
};

class Student:Abstractstudent{
    
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


class Student_Branch: public Student{
    
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
    
    
    void Semesterexchange(){
        
        if(getgpa()>8 && Branch=="Computer Science"){
            cout<<Name<<" you are eligible because you have gpa "<<getgpa()<<" and branch "<<Branch<<endl;
        }
        else{
            cout<<"Sorry, "<<Name<<" you are not eligible because you have gpa "<<getgpa()<<" and branch "<<Branch<<endl;
        }
    }
};

int main(){
    
    Student_Branch s1=Student_Branch("Addy","IIT Mandi",20,8.5,"Computer Science");
    s1.show_branch();
    s1.Semesterexchange();
    
    cout<<"\n";
    Student_Branch s2=Student_Branch("Maddy","IIT Mandi",20,7.95,"Data Science");
    s2.show_branch();
    s2.Semesterexchange();
    return 0;
}

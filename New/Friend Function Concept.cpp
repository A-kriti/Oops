//In object-oriented programming, a friend function, that is a "friend" of a given class, is a function that is given the same access as methods to private and protected data.


#include <bits/stdc++.h>

using namespace std;

class Student_Gpa{
    
    float Gpa;
    string Name;
    int Semester;
    
    public:
    
    void Print_Student_Gpa(){
        
        cout<<Name<<" has gpa "<<Gpa<<" till "<<Semester<<" Semester!"<<endl;
    }
    
    friend void Add_Student_Sgpa(float curr_sgpa,Student_Gpa &S);
    
    Student_Gpa(float gpa,string name,int semester){
        
        Gpa=gpa;
        Name=name;
        Semester=semester;
    }
};

void Add_Student_Sgpa(float curr_sgpa,Student_Gpa &S){
    
    //cout<<S.Name<<" has gpa "<<S.Gpa+8<<endl;
    S.Semester=S.Semester+1;
    S.Gpa=(S.Gpa+curr_sgpa)/2;
    
}


int main()
{
    Student_Gpa s1=Student_Gpa(8.4,"Alita",4);
    
    s1.Print_Student_Gpa();
    
    float curr_sgpa;
    
    cout<<"Enter Current Sgpa here: ";
    cin>>curr_sgpa;
    
    Add_Student_Sgpa(curr_sgpa,s1);
    
    s1.Print_Student_Gpa();

    return 0;
}

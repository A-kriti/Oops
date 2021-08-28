/*In object-oriented programming,encapsulation refers to the bundling of data with the methods that operate on that data, 
or the restricting of direct access to some of an object's components.*/

#include<bits/stdc++.h>
using namespace std;



class Student{
    
    string Name;
    string College;
    int Age;
    
    public:
    
    void setname(string name){
        Name=name;
    }
    
    string getname(){
        return Name;
    }
    
    void setcollege(string college){
        College=college;
    }
    
    string getcollege(){
        return College;
    }
    
    
    void setage(int age){
        if(age>=18){
            Age=age;
        }
        
    }
    
    int getage(){
        return Age;
    }
    
    
    void introduction(){
        
        cout<<"Hello everyone my name is "<<Name<<endl;
        cout<<"I study in "<<College<<endl;
        cout<<"And my age is "<<Age<<endl;
    }
    
    
    Student(string name, string college, int age){
        
        Name=name;
        College=college;
        Age=age;
    }
    
    
    
    
};


int main(){
    
    Student s1=Student("Ritu","IIT KANPUR",20);
    s1.introduction();
    
    
    cout<<s1.getname()<<endl;
    cout<<s1.getcollege()<<endl;
    
    s1.setage(19);
    cout<<s1.getage()<<endl;
    return 0;
}

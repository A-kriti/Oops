//Function Overriding (achieved at run time) 
//It is the redefinition of base class function in its derived class with same signature i.e return type and parameters. 

#include <bits/stdc++.h>

using namespace std;


class Human{
    
    public:
    
    
    
    void print(){
        cout<<"I am a Human "<<endl;
    }
    
};


class Man: public Human{
    
    
    public:
    
    
    void print(){
        cout<<"I am a man "<<endl;
    }
    
    
    
};


class Woman: public Human{
    
    public:
    
    
    
    void print(){
        cout<<"I am a woman "<<endl;
    }
    
    
    
};


int main()
{
    
    Human h1;
    h1.print();
    
    
    Man h2;
    h2.print();
    
    Woman h3;
    h3.print();

    return 0;
}

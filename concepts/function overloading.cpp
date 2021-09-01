

// fuction overloading
#include <bits/stdc++.h>

using namespace std;


int print(int a){
    
    cout<<"value- " <<a<<endl;
}


int print(int a,int b){
    
    cout<<"value1- "<<a<<"-"<<"value2- "<<b<<endl;
}



string print(string s){
    
    cout<<"string- " <<s<<endl;
}


int main()
{
    //cout<<"Hello World";
    int a=5;
    int b=4;
    string s="hey,hello!";
    print(a);
    print(a,b);
    print(s);

    return 0;
}


// fuction parameter is important not the return type

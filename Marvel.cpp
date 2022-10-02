#include <bits/stdc++.h>

using namespace std;

class Consider_Avengers{
    virtual void Considerin_Nextmovie()=0;  //abstraction
};

class Avengers:Consider_Avengers{
    
    public:
    string Name;
    int Power;   //on scale of 100;
    string Category;
    int Count;
    int Movie_Profit; //in Crore
    
    void setName(string name){  //encapsulation
        Name=name;
    }
    
    void getname(){
        cout<<"Avergers name is "<<Name<<endl;
    }
    
    void About_the_Avenger(){
        cout<<"Avergers name is "<<Name<<endl;
        cout<<Name<<" has a power of "<<Power<<endl;
        cout<<"And comes under "<<Category<<" category"<<endl;
        cout<<"Has "<<Count<<" movie coming this year"<<endl;
        cout<<"And last movie profit was "<<Movie_Profit<<endl;
    }
    
    void Considerin_Nextmovie(){
        if(Movie_Profit>=500)
            cout<<"Congrats "<<Name<<", you had been approved for the 'INFINITY WAR 2' project."<<endl;
        else 
            cout<<"Sorry! "<<Name<<", no project this year."<<endl;
    }
    
    void has_superpower(){  //ploymorphism
        if(Power>=55)
            cout<<Name<<" has super power and is a powerfull avenger!"<<endl;
        else 
            cout<<Name<<" don't have any super power but consider as a good avenger."<<endl;
    }
    
    
    Avengers(string name,int power,string category,int count,int movie_profit){
        Name=name;
        Power=power;
        Category=category;
        Count=count;
        Movie_Profit=movie_profit;
    }
    
};

class Villan: public Avengers{  //inheritence
    
    public:
    int Negative_Power; //on scale of 100;
    
    void Can_be_Villan(){
        
        if(80<=Negative_Power and Movie_Profit>=500 && Count>=5){
            cout<<Name<<", you can be a super powerfull villan!"<<endl;
        }
        
        else if(Negative_Power>=40 && Movie_Profit>=300){
            cout<<Name<<", you can be a villan!"<<endl;
        }
        
        else{
            cout<<"Sorry,"<<Name<<" you can't be a villan 'tu avengner hi thik hai :X'"<<endl;
        }
    }
    
    void has_superpower(){  //ploymorphism
        if(Negative_Power>=75)
            cout<<Name<<" has super power and is very powerfull villan!"<<endl;
        else 
            cout<<Name<<" don't have much super power and not very powerfull villan."<<endl;
    }
    
    Villan(string name,int power,string category,int count,int movie_profit,int negative_power)
        :Avengers(name,power,category,count,movie_profit)
    {
        Negative_Power=negative_power;
    }
    
};


int main()
{
    Avengers a1=Avengers("Iron Man",70,"1st",7,700);
    //a1.About_the_Avenger();
    
    // a1.setName("Lali");
    // //a1.getname();
    // a1.About_the_Avenger();
    
    //a1.Considerin_Nextmovie();
    
    Avengers a2=Avengers("Star Lord",40,"2nd",5,400);
    a2.Considerin_Nextmovie();
    a2.has_superpower();
    
    cout<<endl;
    
    // Villan a3=Villan("Iron Man",70,"1st",7,700,53);
    // a3.Can_be_Villan();
    // Villan a4=Villan("Wanda",85,"1st",5,800,92);
    // a4.Can_be_Villan();
    // Villan a5=Villan("Groot",30,"2nd",4,500,20);
    // a5.Can_be_Villan();
    Villan a6=Villan("Thanos",100,"1st",7,1000,99);
    a6.Can_be_Villan();
    a6.Considerin_Nextmovie();
    a6.has_superpower();
    

    return 0;
}

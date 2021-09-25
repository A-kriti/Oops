#include <bits/stdc++.h>

using namespace std;

//Ploymorphism :- the most common use of Ploymorphism is when a parent class reference is used to refer a child class object  

class Abstract_Student
{

  virtual void get_referral () = 0;

};

class Student:Abstract_Student
{

  float Gpa;
  string College;


protected:
    string Name;


public:

  void setName (string name)
  {
    Name = name;
  }

  string getName ()
  {				//getter
    return Name;
  }


  void setGpa (int gpa)
  {				//setter
    Gpa = gpa;
  }

  float getGpa ()
  {
    return Gpa;
  }

  void setCollege (string college)
  {
    College = college;
  }

  string getCollege ()
  {
    return College;
  }

  void About_Student ()
  {

    cout << "My name is " << Name << endl;
    cout << "My GPA is " << Gpa << endl;
    cout << "And I am currenty pursuing my B.Tech degree from " << College <<
      endl;
  }

  void get_referral ()
  {

    if (Gpa > 8.5)
      {
	cout << Name << " I can give you referral" << endl;
      }
    else
      {
	cout << "Sorry, " << Name << " I can't give you referral" << endl;
      }


  }
  
  virtual void work(){
        
        cout << Name << " is trying to short things! "<< endl;
    }

  Student (string name, float gpa, string college)
  {

    Name = name;
    Gpa = gpa;
    College = college;
  }



};

class Branch:public Student
{

public:

  string Branch_name;


  void returnBranch ()
  {

    cout << Name << " is in " << Branch_name << " branch." << endl;
  }

    void work(){
        
        cout << Name << " is in currently doing her major in " << Branch_name << endl;
    }

  Branch (string name, float gpa, string college,
	  string branch_name):Student (name, gpa, college)
  {

    Branch_name = branch_name;

  }

};


class Programming:public Student
{

public:

  string Programming_language;


  void returnProgramming ()
  {

    cout << Name << " knows " <<Programming_language<< endl;
  }
  
  void work(){
        
        cout << Name << " code in " << Programming_language << endl;
    }


  Programming(string name, float gpa, string college,
	  string programming_language):Student (name, gpa, college)
  {

    Programming_language = programming_language;

  }

};


int main ()
{
    
  //here class (Branch) and (Programming) are inherited from student class

  Branch b1 = Branch ("Alice", 8.6, "IIT Bombay", " CSE");
  
  Programming p1=Programming("Siya", 8.41, "IIT Madras", "Python");
  
    
  Student* s1=&b1;
  Student* s2=&p1;
  
  s1->work();
  s2->work();
  
  return 0;
}

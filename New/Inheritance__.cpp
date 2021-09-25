#include <bits/stdc++.h>

using namespace std;

//Inheritance :- the procedure in which one class inherits the attributes and methods of another class.  

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


  Programming(string name, float gpa, string college,
	  string programming_language):Student (name, gpa, college)
  {

    Programming_language = programming_language;

  }

};


int
main ()
{
    
  //here class (Branch) and (Programming) are inherited from student class

  Branch b1 = Branch ("Alice", 8.6, "IIT Bombay", " CSE");
  Branch b2 = Branch ("Siya", 8.41, "IIT Madras", " DSE");

  b1.returnBranch ();
  b2.returnBranch ();

  b1.get_referral ();
  b2.get_referral ();
  
  Programming p1=Programming("Alice", 8.6, "IIT Bombay", "C++");
  Programming p2=Programming("Siya", 8.41, "IIT Madras", "Python");
  
  p1.returnProgramming();
  p2.returnProgramming();
    
  p1.get_referral ();
  p2.get_referral ();
    
  return 0;
}

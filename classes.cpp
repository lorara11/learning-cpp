#include <iostream>
#include <string>

using namespace std;


// ABSTRACTION: hide complex processes, make a simple "interface".
// If another person wants to use Employee class, they'll see this abstract class,
// and they'll know that it's got a method AskForPromotion(), which can be used
// without worrying about the complexity of that method (about how it's implemented)
class AbstractEmployee
{   
    // Make implementation of this method compulsory for child classes.
    virtual void AskForPromotion() = 0;
};


class Employee:AbstractEmployee
{
  // ENCAPSULATION. Interaction with data will only be possible through public methods (e.g. setName, getName, setAge, getAge).
  private:
    string Name;
    string Company;
    int Age;
  
  public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setAge(int age){
        // validation rule. Only apply changes if they fulfill condition.
        if (age>=18){
            Age = age;
        }
    }
    int getAge(){
        return Age;
    }
    
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    
    void IntroduceYourself(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
    
    void AskForPromotion(){
        if (Age > 30){
            cout << Name << " got promoted!" << endl;
        } else {
            cout << "Sorry, no promotion for you." << endl;
        }
    }
    
};


int main()
{
    // Using constructor:
    Employee bob = Employee("Bob", "IBM", 22);
    
    // Without constructor:
        // Employee bob;
        // bob.Name = "Bob";
        // bob.Company = "IBM";
        // bob.Age = 22;
    
    bob.IntroduceYourself();
    
    bob.setAge(27);
    cout << bob.getName() << " is " << bob.getAge() << " years old." << endl;
    
    // Check validation rule
    bob.setAge(17);
    cout << bob.getName() << " is " << bob.getAge() << " years old." << endl;
    
    bob.AskForPromotion();
    
    bob.setAge(35);
    cout << bob.getName() << " is " << bob.getAge() << " years old." << endl;
    
    bob.AskForPromotion();
    
}

#include <iostream>
#include<limits.h>
using namespace std;
//encapsulation
class animal {
    private:
    int age;
    int weight;
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
    int getage(){
        return this->age;
    }
    void setage(int age){
        this->age=age;
    }
};

//inheritance
class dog:public animal{

};

//abstraction
class implementAbstraction {
private:
    int a, b;
 
public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
 
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};




//function overloading
void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}

//operator overloading
class parameter{
    public:
    int val;
    void operator+(parameter &obj2){
        int value1=val;
        int value2=obj2.val;
        cout<<(value1-value2)<<endl;
    }
};

// runtime poly
// function overriding, 
class human {
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class cat:public human{
 public:
    void speak(){  //override becuse parent also have speak function
        cout<<"meow"<<endl;
    }
};

int main(){


animal lion;
lion.setage(10);
cout<<"lion age "<<lion.getage()<<endl;


dog d1;
d1.eat();




    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();


//polymorphism 
//two types 1.compile time 2.run time
// compile time type , 1.operator overloading and 2.function overloading



//function overloading
  add(10, 2);
    add(5.3, 6.2);

    //operator overloading
    parameter object1,object2;
    object1.val=7;
    object2.val=2;
    object1+object2;// this will not add print the differce






    // function overriding

    cat billa;
    billa.speak(); //it will print cat speak function not human speak

}
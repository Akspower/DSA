#include <iostream>
#include<limits.h>
using namespace std;


class  animal{
    private:
    int weight;
    public:
    int age;
    string name;

void eat(){
    cout<<"Please do not disturb me i am eatting now"<<endl;

}

void sleep(){
    cout<<"stupid humans again you come we are sleeping now"<<endl;
}
int getweight(){
return weight;
}
int setweight(int w){
    weight=w;
}


//constructor default
animal(){
    cout<<"default constructor called"<<endl;
    this->weight=0;
    this->age=8;
    this->name="ramesh";
    
}
//constructor parameterised
animal(int age){
    cout<<" parameterised constructor called"<<endl;
    this->age=age;

//copy constructor


}
//destructor free the memory ,no input and return type
~animal(){
    cout<<"inside destructor"<<endl;
}

};


int main(){


animal lion;
lion.age=3;
lion.name="sundri";

cout<<"lion name "<<lion.name<<endl;
cout<<"lion age "<<lion.age<<endl;

lion.eat();
lion.sleep();

lion.setweight(165);
cout<<"lion weight "<<lion.getweight()<<endl;



//dynamic allocation
 animal *suresh=new animal; //new is keyword for dynamic alloc

 //both way able to assign
(*suresh).age=15;
// (*suresh).name=dog;
(suresh)->name="kutta";


suresh->eat();
suresh->sleep();

cout<< "suresh age" <<suresh->age<<endl;



//constructor parameterised
animal a(27);



}




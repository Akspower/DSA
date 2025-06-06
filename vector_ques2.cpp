#include<iostream>
using namespace std;

class Time
{
    int h,m,s;
    public:
    Time()
    {
        cout<<"input total second"<<endl;
        cin>>s;
    }
    void getData()
    {
        cout<< h << "hr:" << m << "min:" << s <<"sec"<< endl;
    }
    ~Time()
    {

    }

    void totalSec_prime()
    {
        cout<<"Total Sec :"<<s<<endl;
        int i;
        for(i=2 ; i<s ; i++)
            if(s%i==0)
                break;
        if(i==s)
            cout<<"Total sec is prime num"<<endl;
        else
            cout<<"Total sec not a prime num"<<endl;
    }

    friend void sec_into_time(Time&);
};

void sec_into_time(Time& t)
{
    t.h = t.s/3600;
    t.s = t.s%3600;
    t.m = t.s/60;
    t.s = t.s%60;
}

int main()
{
    Time obj1;

    obj1.totalSec_prime();
    sec_into_time(obj1);
    obj1.getData();
}
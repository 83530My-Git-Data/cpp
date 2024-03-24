#include<iostream>
using namespace std;
class Time{

    int hr;
    int min;
    int sec;

    public:
    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }

    Time(int hr,int min,int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    void setHr(int hr)
    {
        this->hr =hr;
    }
    void setMin(int min){
        this->min = min;
    }
    void setSec(int sec)
    {
        this->sec = sec;
    }
    int getHr()
    {
        return hr;
    }
    int getMin()
    {
        return min;
    }
    int getSec()
    {
        return sec;
    }

    void display()
    {
        cout<<"Time : "<<hr<<":"<<min<<":"<<sec<<endl;
    }
    
};

int main()
{
    Time *ptr1 = new Time;
    Time *ptr2 = new Time(12,12,12);
    ptr1->display();
    ptr2->display();

    cout<<"================================================================"<<endl;
    ptr1->setHr(1);
    ptr1->setMin(25);
    ptr1->setSec(30);

    cout<<"Time : "<<ptr1->getHr()<<":"<<ptr1->getMin()<<":"<<ptr1->getSec()<<endl;

    delete ptr1;
    delete ptr2;
    ptr1 = NULL;
    ptr2 = NULL;
    return 0;
}
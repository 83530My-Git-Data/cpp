#include<iostream>
using namespace std;
class Cylinder{
    private :
    double radius;
    double height;
    static double PI;

    public:
    Cylinder() : radius(1),height(1)
    {
        // radius = 1;
        // height = 1;
    }
    Cylinder(double radius,double height):radius(radius),height(height)
    {
        // this->radius = radius;
        // this->height = height;
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }

    void setHeight(double height)
    {
        this->height = height;
    }

    static double getRadius()
    {
        return radius;
    }
    static double getHeight()
    {
        return height;
    }

    void volumeOfCylinder()
    {
        double volume = PI*radius*radius*height;
        cout<<"Volume of Cylinder : "<<volume<<endl;
    }
};
double Cylinder ::PI = 3.142;

int main()
{
    Cylinder c;
    c.volumeOfCylinder();
    cout<<"================================================================================"<<endl;
    Cylinder c1(6,5);
    c1.volumeOfCylinder();
    cout<<"================================================================================"<<endl;
    Cylinder c2;
    c2.setRadius(10);
    c2.setHeight(20);
    // cout<<"Rdius : "<<Cylinder::getRadius()<<"Height :"<<Cylinder::getHeight()<<endl;
    // c2.volumeOfCylinder();
    // cout<<"================================================================================"<<endl;
    return 0;
}
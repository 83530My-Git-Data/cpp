/*Q3. Write a menu driven program for student in CPP language. 
Create a class student with data members roll no, name and marks. implement following functions
void initstudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/


#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    int rollno;
    float marks;
    string name;

    public:

    void initStudent()
    {
        rollno=21;
        marks=88;
        name="sumit";
    }

    void printStudentOnConsole()
    {
        cout<<"roll no:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
        cout<<"name:"<<name<<endl;
    }

    void acceptStudentFromConsole()

    {
        cout<<"enter the student rol no:";
        cin>>rollno;
        cout<<"enter the student marks:";
        cin>>marks;
        cout<<"Enter the student name:";
        cin>>name;
    }
};

    int main()
    {
        Student s;
        int choice;

        do
        {
            cout<<"\nMenu\n"<<endl;
            cout<<"1.Initialize Student"<<endl;
            cout<<"2.Print Student Details"<<endl;
            cout<<"3. Accept Enter your choice"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"Please Enter your choice"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1:
                s.initStudent();
                cout<<"Student has been initialized successfully:";
                break;

                case 2:
                s.printStudentOnConsole();
                break;

                case 3:
                s.acceptStudentFromConsole();
                break;

                case 4:
                cout<<"Goodbye.";
                break;

                default:
                cout<<"Please enter a valid number between 1 to 4";

            }
        }           while (choice!=4);
        return 0;
    
    }
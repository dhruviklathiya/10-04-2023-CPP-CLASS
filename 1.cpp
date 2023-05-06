#include<iostream>
#include<string.h>
using namespace std;
class student
{
    // variables in private
private:
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_email[20];
    char stu_city[20];
    char stu_college[20];
    // Functions in public
public:
    void setter(){
        cout<<"Enter student's id:";
        cin>>stu_id;
        cout<<"Enter student's name:";
        cin>>stu_name;
        cout<<"Enter student's age in years:";
        cin>>stu_age;
        cout<<"Enter in which course student is:";
        cin>>stu_course;
        cout<<"Enter student's email:";
        cin>>stu_email;
        cout<<"Enter student's city:";
        cin>>stu_city;
        cout<<"Enter student's college:";
        cin>>stu_college;
    }
    void getter(){
        cout<<"Student's id: "<<stu_id<<endl;
        cout<<"Student's name: "<<stu_name<<endl;
        cout<<"Student's age is: "<<stu_age<<endl;
        cout<<"Student is in following course: "<<stu_course<<endl;
        cout<<"Student's E-mail is: "<<stu_email<<endl;
        cout<<"Student is from following city: "<<stu_city<<endl;
        cout<<"Student is in following college: "<<stu_college<<endl;
    }
};

int main(){
    student stu1,stu2,stu3,stu4,stu5;
    stu1.setter();
    stu1.getter();
    stu2.setter();
    stu2.getter();
    stu3.setter();
    stu3.getter();
    stu4.setter();
    stu4.getter();
    stu5.setter();
    stu5.getter();
    cout<<endl<<endl<<endl<<endl;
    cout<<"Information of all students in one place:"<<endl;
    stu1.getter();
    stu2.getter();
    stu3.getter();
    stu4.getter();
    stu5.getter();

    return 0;
}

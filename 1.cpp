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
    void getter(){
        cout<<"Enter student's id:";
        cin>>this->stu_id;
        cout<<"Enter student's name:";
        cin>>this->stu_name;
        cout<<"Enter student's age in years:";
        cin>>this->stu_age;
        cout<<"Enter in which course student is:";
        cin>>this->stu_course;
        cout<<"Enter student's email:";
        cin>>this->stu_email;
        cout<<"Enter student's city:";
        cin>>this->stu_city;
        cout<<"Enter student's college:";
        cin>>this->stu_college;
    }
    void setter(){
        this->stu_id = stu_id;
        strcpy(this->stu_name,stu_name);
        this->stu_age = stu_age;
        strcpy(this->stu_course,stu_course);
        strcpy(this->stu_email,stu_email);
        strcpy(this->stu_city,stu_city);
        strcpy(this->stu_college,stu_college);
    }
    void printer(){
        cout<<"Student's id: "<<this->stu_id<<endl;
        cout<<"Student's name: "<<this->stu_name<<endl;
        cout<<"Student's age is: "<<this->stu_age<<endl;
        cout<<"Student is in following course: "<<this->stu_course<<endl;
        cout<<"Student's E-mail is: "<<this->stu_email<<endl;
        cout<<"Student is from following city: "<<this->stu_city<<endl;
        cout<<"Student is in following college: "<<this->stu_college<<endl;
    }
};

int main(){
    student stu1,stu2,stu3,stu4,stu5;
    stu1.getter();
    stu1.setter();
    stu1.printer();
    stu2.getter();
    stu2.setter();
    stu2.printer();
    stu3.getter();
    stu3.setter();
    stu3.printer();
    stu4.getter();
    stu4.setter();
    stu4.printer();
    stu5.getter();
    stu5.setter();
    stu5.printer();

    cout<<endl<<endl<<endl<<endl;
    cout<<"Information of all students in one place:"<<endl;
    stu1.printer();
    stu2.printer();
    stu3.printer();
    stu4.printer();
    stu5.printer();
    return 0;
}


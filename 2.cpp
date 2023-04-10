#include<iostream>
#include<string.h>

using namespace std;

class customer
{
private:
    int cust_id;
    char cust_name[20];
    int cust_age;
    char cust_telecome_brand_name[20];
    int cust_mobile_number;
    char cust_city[20];
    int cust_simcard_validity;
public:
    void getter(){
        cout<<"Enter customer id:";
        cin>>this->cust_id;
        cout<<"Enter customer name:";
        cin>>this->cust_name;
        cout<<"Enter customer age in years:";
        cin>>this->cust_age;
        cout<<"Enter customer telecom brand:";
        cin>>this->cust_telecome_brand_name;
        cout<<"Enter customer mobile number:";
        cin>>this->cust_mobile_number;
        cout<<"Enter customer's city:";
        cin>>this->cust_city;
        cout<<"Enter customer's simcard validity:";
        cin>>this->cust_simcard_validity;
    }
    void setter(){
        this->cust_id = cust_id;
        strcpy(this->cust_name,cust_name);
        this->cust_age = cust_age;
        strcpy(this->cust_telecome_brand_name,cust_telecome_brand_name);
        this->cust_mobile_number = cust_mobile_number;
        strcpy(this->cust_city,cust_city);
           this->cust_simcard_validity = cust_simcard_validity; 
    }
    void printer(){
        cout<<"Customer's id: "<<this->cust_id<<endl;
        cout<<"Customer's name: "<<this->cust_name<<endl;
        cout<<"Customer's age: "<<this->cust_age<<endl;
        cout<<"Customer is consumer of following telecom brand: "<<this->cust_telecome_brand_name<<endl;
        cout<<"Customer's mobile number is: "<<this->cust_mobile_number<<endl;
        cout<<"Customer is from following city: "<<this->cust_city<<endl;
        cout<<"Customer's simcard validity in years: "<<this->cust_simcard_validity<<endl;
    }
};

int main(){
    customer cust1,cust2,cust3,cust4,cust5;
    cust1.getter();
    cust1.setter();
    cust1.printer();
    cust2.getter();
    cust2.setter();
    cust2.printer();
    cust3.getter();
    cust3.setter();
    cust3.printer();
    cust4.getter();
    cust4.setter();
    cust4.printer();
    cust5.getter();
    cust5.setter();
    cust5.printer();

    cout<<endl<<endl<<endl<<endl;
    cout<<"Information of all customers in one place:"<<endl;
    cust1.printer();
    cust2.printer();
    cust3.printer();
    cust4.printer();
    cust5.printer();
    return 0;
}


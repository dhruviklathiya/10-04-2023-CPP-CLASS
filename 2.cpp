#include<iostream>
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
    void setter(){
        cout<<"Enter customer id:";
        cin>>cust_id;
        cout<<"Enter customer name:";
        cin>>cust_name;
        cout<<"Enter customer age in years:";
        cin>>cust_age;
        cout<<"Enter customer telecom brand:";
        cin>>cust_telecome_brand_name;
        cout<<"Enter customer mobile number:";
        cin>>cust_mobile_number;
        cout<<"Enter customer's city:";
        cin>>cust_city;
        cout<<"Enter customer's simcard validity:";
        cin>>cust_simcard_validity;
    }
    void getter(){
        cout<<"Customer's id: "<<cust_id<<endl;
        cout<<"Customer's name: "<<cust_name<<endl;
        cout<<"Customer's age: "<<cust_age<<endl;
        cout<<"Customer is consumer of following telecom brand: "<<cust_telecome_brand_name<<endl;
        cout<<"Customer's mobile number is: "<<cust_mobile_number<<endl;
        cout<<"Customer is from following city: "<<cust_city<<endl;
        cout<<"Customer's simcard validity in years: "<<cust_simcard_validity<<endl;
    }
};

int main(){
    customer cust1,cust2,cust3,cust4,cust5;
    cust1.setter();
    cust1.getter();
    cust2.setter();
    cust2.getter();
    cust3.setter();
    cust3.getter();
    cust4.setter();
    cust4.getter();
    cust5.setter();
    cust5.getter();

    cout<<endl<<endl<<endl<<endl;
    cout<<"Information of all customers in one place:"<<endl;
    cust1.getter();
    cust2.getter();
    cust3.getter();
    cust4.getter();
    cust5.getter();
    return 0;
}

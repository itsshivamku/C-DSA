#include<iostream>
using namespace std;

struct student{
    int roll_no;
    char name;
    char address;
    int phone_no;
    int dob;
};
int main()
{
    struct student s;
    int roll_no;
    char name[20];
    char address[25];
    int phone_no;
    int dob;

    cout<<"Enter the roll no of the student"<<endl;
    cin>>roll_no;
    cout<<"Enter the name of the student"<<endl;
    cin>>name;
    cout<<"Enter the address of the student"<<endl;
    cin>>address;
    cout<<"Enter the phone_no of the student"<<endl;
    cin>>phone_no;
    cout<<"Enter the dob of the student"<<endl;
    cin>>dob;
 
    cout<<"----------The details of the student------------"<<endl;

    cout<<"The roll no of the student is "<<roll_no<<endl;
    cout<<"the name of the student is"<<name<<endl;
    cout<<"the address of the student is "<<address<<endl;
    cout<<"the phone_no of the student is "<<phone_no<<endl;
    cout<<"the dob of the student is"<<dob<<endl;
 
    return 0;
}

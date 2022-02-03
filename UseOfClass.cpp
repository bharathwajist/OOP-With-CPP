#include <iostream>

using namespace std;

class person{
    char name[30];
    int age;

    public:
        void getdata();
        void showdata();
};

void person::getdata(){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
}

void person::showdata(){
    cout<<"Your name is : "<<name<<endl;
    cout<<"Your age is : "<<age<<endl;
}
int main(){
    person p;
    p.getdata();
    p.showdata();

    return 0;
}
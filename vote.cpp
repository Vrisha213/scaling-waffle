#include <iostream>

using namespace std;

int main()
{
    int name,age;
    cout<<"Enter the age of the person"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"Your age is "<<age<<endl;
        cout<<"You are eligible to vote"<<endl;
    }
    else
    {

       cout<<"Your age is "<<age<<endl;
       cout<<"You are not eligible to vote";
    }
    return 0;
}

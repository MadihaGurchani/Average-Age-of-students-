#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    int avgage = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
    cout<<"Please enter the age of the student:  ";
    cin>>age;
    sum += age;
    }
    avgage = sum/10;
    cout<<"The average age of a class of ten students is : "<<avgage;
    return 0;
}

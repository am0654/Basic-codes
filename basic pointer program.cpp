#include <iostream>

using namespace std;

int main()
{
    int num=5;
    cout<<num<<endl;
    cout<<"Address of num is : "<<&num;
    int *ptr=&num;
    cout<<"\nAddress is : "<<ptr<<endl;
    cout<<"Value is : "<<*ptr<<endl;
    return 0;
}


Output:
5
Address of num is : 0x7ffd3832862c  
Address is : 0x7ffd3832862c

#include<iostream>
using namespace std;
int main()
{
    int n, i;
    float arr[50], sum=0, armean;
    cout<<"How many number, You want to enter ? ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
    armean = sum/n;
    cout<<"\nArithmetic Mean = "<<armean;
    cout<<endl;
    return 0;
}


Input:
How many number, You want to enter ? 5
Enter 5 Number: 2 4 5 8 6
Output:
Arithmetic Mean = 5

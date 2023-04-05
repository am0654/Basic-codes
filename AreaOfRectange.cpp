#include<iostream>
using namespace std;
float areaOfRectangle(float, float);
int main()
{
    float len, bre, area;
    cout<<"Enter Length of Rectangle: ";
    cin>>len;
    cout<<"Enter Breadth of Rectangle: ";
    cin>>bre;
    area = areaOfRectangle(len, bre);
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}
float areaOfRectangle(float len, float bre)
{
    return (len*bre);
}


Input:
Enter Length of Rectangle: 5
Enter Breadth of Rectangle: 4
Output:
Area = 20

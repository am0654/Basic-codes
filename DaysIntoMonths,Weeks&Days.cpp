#include<iostream>

using namespace std;
int main()
{
   int tot, days, weeks, months, years;
   cout<<"Enter Total Number of Days: ";
   cin>>tot;
   years = tot/365;
   months = (tot%365)/30;
   weeks = ((tot%365)%30)/7;
   days = ((tot%365)%30)%7;

   cout<<"\nYears: "<<years<<endl;
   cout<<"Months: "<<months<<endl;
   cout<<"Weeks: "<<weeks<<endl;
   cout<<"Days: "<<days<<endl;
   cout<<endl;
   return 0;
}



Input:
Enter Total Number of Days: 38

Output:
Years:0
Months:1
Weeks:1
Days:1

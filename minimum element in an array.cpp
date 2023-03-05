#include <iostream>
using namespace std;
int getMin(int num[],int n){
    int min = int_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }return min;
}
int main()
{
    int size;
    cin>>size;
    int num[100];
    for(i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Minimum value is "<< getMin(num,size) << endl;

}




Input: 5
  10 80 20 40 60
 Output:
  Minimum value is 10
  

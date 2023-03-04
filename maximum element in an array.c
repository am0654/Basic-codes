#include <iostream>
using namespace std;
int getMax(int num[],int n){
    int max = int_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }return max;
}
int main()
{
    int size;
    cin>>size;
    int num[100];
    for(i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum value is "<< getMax(num,size) << endl;
    return 0;
}

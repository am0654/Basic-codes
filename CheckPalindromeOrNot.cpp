#include <iostream>
using namespace std;
bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]==a[e]){
            s++;
            e--;
        }else{
           return 0;
        }
    }
    return 1;
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }return count;
}
int main(){
    char name[20];
    cin>>name;
    cout<<"Enter String ";
    cout<<name<<endl;
    int len=getLength(name);
    cout<<"Length:"<<len<<endl;
    cout<<"Your String is :"<<name<<endl;
    cout<<"Palindrome or not: "<<checkPalindrome(name,len)<<endl;
    return 0;
}

Input:
madam
Enter String madam
Length:5
Your String is : madam
Palindrome or not: 1

  //Reverse a no.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ran=0,reverse = 0;
    while(n>0){
        ran = n%10;
        reverse = reverse*10 + ran;
        n = n/10; 
    }   

    cout<<reverse;
}

//Armstrong no
int sum = 0;
    int lastDigit;
    int originalN = n;
    while(n>0){
        lastDigit = n%10;
        sum +=  pow(lastDigit,3);
        n = n/10; 
    }   

    if (originalN == n)
    {
        cout<<"Armstrong";
    }else{
        cout<<"no armstrong";
    }

#include<iostream>
using namespace std;
int main()
{
    int m,remainder,originalnum,sum=0;
    cout<<"Enter the number to check whether it is Armstrong number or not";
    cin>>m;
    originalnum=m;

    while(originalnum!=0)
 {
    //taking the last digit as remainder contains the last digit of a number
    remainder=originalnum % 10;
    
    //adding the cubes of digits in a number
    sum+=remainder*remainder*remainder;
    

    //removing the last digit from the number
    originalnum/=10;
 }
    if(sum==m)
    cout<<"\n"<<m<<" \nis a Armstrong number....."<<"\nas its digits sum is equal to originalnum";

    else
    cout<<m<<"\n is not a Armstrong number";

    return 0;
}
#include<iostream>
#include<string.h>
using namespace std;

int main(){

 string str;
 cout<<"Read a String";
 getline(cin,str);
 string rev="";
 int len=(int)str.length();
 rev.resize(len);

 //WITHOUT CREATING A REVERSE STRING... (rev)
/* int i=0,j=len-1;

while(i<len&&j>=0){
 if(str[i]==str[j]){
  i++;j--;}
else
  break;

}
if(i<len&&j>=0)
cout<<"not a palindrome"<<endl;

else
cout<<str<<" is palindrome";*/

 for(int i=0,j=len-1;i<len;i++,j--){

    rev[i]=str[j];
 }
 rev[len]='\0';

 if(str.compare(rev)==0)
 cout<<str<<" is a palindrome"<<endl;
 else
 cout<<str<<" is not a palindrome"<<endl;


    return 0;
}
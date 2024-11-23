#include<iostream>
using namespace std;


template <class T>
T maxim(T x,T y){
 if(x>y)
 return x;
 else 
 return y;
}

/*int max(int x,int y)
{
 if(x>y)
 return x;
 else 
 return y;
}

float max(float x,float y)
{
 if(x>y)
 return x;
 else 
 return y;
}*/

int main()
{

   int c=maxim(12,40);
   float d=maxim(10.4f,12.9f);
   //in CPP by default it will take floating numbers as double without f.
   cout<<"max:"<<c<<endl;
   cout<<"max:"<<d;

    return 0;
}

/*Instead of writing a separate maxim functions for parameters of different types
 cpp allows a special template function, which will take a parameters of any datatype and returns the result*/
#include<iostream>
using namespace std;

class RationalN{
 private:
 int p,q;

public:
RationalN(){
 p=1;
 q=1;
}

RationalN(int p,int q){
 this->p=p;
 this->q=q;
}

void setP(int p){
    this->p=p;
}

void setQ(int q){

this->q=q;
}

void display()
{
 cout<<p<<"/"<<q<<endl;

}

friend RationalN operator+(RationalN &r1,RationalN &r2);
friend ostream & operator<<(ostream &out,RationalN &r);
};


RationalN operator+(RationalN &r1,RationalN &r2){
RationalN t;
t.p=r1.p*r2.q+r2.p*r1.q;
t.q=r1.q*r2.q;
return t;
}

ostream & operator<<(ostream &out,RationalN &r){

    out<<r.p<<"/"<<r.q;
    return out;
}




int main(){ 
 RationalN r1(3,4), r2(4,5),r3;
 r3=r1+r2; // if we don't use operator+ fun then we should make use of r3=r1.add(r2) or r3=r2.add(r1) where add function can called whose implementation is same as operator+'s
 cout<<"Sum of "<<r1<<"+"<<r2<<" is = "<<r3<<endl;
 //operator<<(cout,r3); both can be used .they one and the same. either Cout fun or fun name(operator<<) 
 return 0;
}

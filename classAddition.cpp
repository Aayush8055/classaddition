#include<iostream>
using namespace std;
class Addition
{
public:
int a1,a2,result;
//default cons.
Addition(){
    a1=a2=5;
} 
//paraametrised cons.
Addition(int a,int b){
    a1=a;
    a2=b;
}
void add(Addition a1,Addition a2);
void display();
};
void Addition::display(){//scope rebulution
    cout<<a1<<" "<<a2<<endl;
}
 void Addition::add(Addition s1,Addition s2){
    a1=s1.a1+s1.a2;
    a2=s2.a2+s2.a1;
}
int main()
{
    Addition d1,d2(5,7),result;
    d1.display();
    d2.display();
    result.add(d1,d2);
    result.display();
    return 0;
}
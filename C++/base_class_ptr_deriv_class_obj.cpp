#include<iostream>
using namespace std;
class base
{
   public:
   void funbase(){cout<<"in base"<<endl;}
};
class derived :public base
{
   public:
   void funderived(){cout<<"in derived:-"<<endl;}

};
int main()
{
   // derived d;              // base b;
                            // derived *p=&b;  (it is not working:-)
   // base *ptr =&d;
   // ptr->funbase();


   // base *p;                               //   derived *p;         
   // p= new derived; // it's working...      //  p= new base;    // it will not work.....
   //  p->funbase();
   // 

//   derived *d=new derived;
   // d->funbase();
   // d->funderived();

    return 0;
}














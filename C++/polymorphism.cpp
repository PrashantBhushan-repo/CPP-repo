




//! calling overriding Method:-




// #include<iostream>
// using namespace std;
// class base 
// {
//    public:
//    void display()   /*example of virtual function:-*/
//    {
    // cout<<"i am in base"<<endl;
//    }
// };
// class derived : public base
// {
    // public:
    // 
//    void display()
//    {
//    
    // cout<<" i am in derived:-"<<endl;
//    }
// };
// int main()
// { 
//    base *d;
    // d= new derived;
    // d->display();
    
    // derived b;
    //  base *d=&b;
    //  d->display();

    // derived d;
    // d.display();

    // base b;
    // b.display();

    // derived *d;
    // d= new derived;
    // d->display();

    
// 
    // return 0;
// }
// 





//!  polymorphism and virtual function concept:-





// #include<iostream>
// using namespace std;
// class car
// {
//    public:
    // virtual void start()=0;
// {
    //    cout<<"car started"<<endl;     ** make it virtual

//    }
  // virtual void stop()=0;
//    {
        // cout<<"car stopped"<<endl;                 //  ***note:- make virtual class =0 it becomes pure virtual function
//    }
//};
// class enova :public car
// {
//    public:
//    void start()
// {
    // cout<<"enova started"<<endl;  /*in enova & safari class we nothing to get from car class just we overriding function:-*/
// }
// void stop()
// {
    // cout<<"enova stopped"<<endl;
// }
// };
// class safari :public car
// {
//    public:
//    void start()
// {
    // cout<<"safari started"<<endl;
// }
// void stop()
// {
    // cout<<"safari stopped"<<endl;
// }
// };
// 
// int main()
// {
   //car c;
    // car *c;
    // c=new enova;
    // c->start();  /*here 2 times calling same thing c->start()....but getting different resutt that's we achieved polymorphism:-*/
    // c=new safari;
    // c->start();
    // return 0;
// }






// ! use of base class as reusability in derived class:-






// #include<iostream>
// using namespace std;
// class base
// {
    // public:
//    void  fun1()
//    {
    //  cout<<"i am in base fun1"<<endl;
//    }
//    void fun2()
//    {
    //  cout<<"i am in base fun2"<<endl;
//    }
// 
// };
// class derived :public base
// {
//    
// };
// int main()
// {
    // derived p;
    // p.fun1();
    // p.fun2();
    // return 0;
// }





//! now make member function of base class **virtual**  to achieve generalization and polymorphism:-




// #include<iostream>
// using namespace std;
// class base
// {
    //  public:
//   virtual  void  fun1()                   //? this function help in reusability....
//    {
    //  cout<<"i am in base fun1"<<endl;
//    }
//    virtual  void fun2()                    // ? as this function overrided in derived class so it is use for achieve polymorphism...
//    { 
    //  cout<<"i am in base fun2"<<endl;
//    }
// 
// };
// class derived :public base  /* now override function:-*/
// {
//   public:
// 
//    void  fun1()              
//  {
//    cout<<"i am in derived fun1"<<endl;
//  }
// 
// void fun2()
// {
//   cout<<"i am in derived fun2"<<endl;
// }
// };
// int main()
// {
    // base *p;
    //  p = new derived;
    // p->fun1();
    // p->fun2();
    // return 0;
// }






// ? Q:- shape base class in derived class circle,rectangle and show how to achieve polymorphism:-

   


#include <iostream>
#include<math.h>
using namespace std;
class shape
{
     public:
  
   virtual float area()=0;
   virtual float peri()=0;

};

class circle : public shape
{
    private:
    float r;

    public:
    circle(float r){this->r=r;}
    float area()
    {
        return 3.14*r*r;
    }
    float peri()
    {
       return 2*3.14*r;
    }
};
class rectangle :public shape
{
    private:
    float l;
    float b;

    public:
    rectangle(float l,float b){this->l=l;this->b=b;}
    float area()
   {
       return l*b;
   }
   float peri()
   {
    return 2*(l+b);
   }
};
int main()
{
    shape *p=new circle(4);                      //as like ram(claas) a1(object) c1(4); 
     cout<< p->area()<<"\t"<<p->peri()<<endl;
     p=new rectangle(6,4);
     cout<<p->area()<<"\t"<<p->peri()<<endl;


    return 0;
}













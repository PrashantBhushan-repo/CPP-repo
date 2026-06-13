// #include<iostream>
// using namespace std;
// class rectangle
// {
//     public:
//     int l;
//     int b;
//     rectangle(int l=0,int b=0)
//     {
//         this->b=b;
//         this->l=l;
//     }
//    int   area(){return l*b;}
//    void  show(){cout<<l<<"  "<<b<<endl;}
// };

// class cuboid : rectangle
// {
//     public:
//     int h;
//     cuboid(int l=0,int b=0,int h=0) : rectangle(l,b)
//     {
//         this->h=h;
//     }
//     int volume(){return l*b*h;}
//       void show(){cout<<l<<" "<<b<<" "<<h<<endl;}
// };

// int main()
// {
//     rectangle r1(4,8);
//     cout<<r1.area()<<endl;
//     r1.show();
//     cuboid c1(4,8,5);
//     cout<<c1.volume()<<endl;
//     c1.show();
//     return 0;
// }


//! Bsaic implimention of inheritance:-




// #include<iostream>
// using namespace std;
// class base 
// {
//     public:
//     int a;
//    void  display()
//    {
//       cout<<"yu are in base class"<<" \t "<<a<<endl;
//    }
// };
// class derived :public base
// {
//     public:
//    int b;
//    void show()
//    {
//      cout<<"yu are in derived part:-"<<"  "<<b<<endl;
//    }
// };
// int main()
// {
//     derived d;
//     base b1;
   
//     d.a=56;
//     b1.a=90;
//     d.b=667;
//     d.display();
//     d.show();
//     return 0;
// }




//TODOuse of inheritance by making rectangle and cuboid classes:-




// #include<iostream>
// using namespace std;
// class rectangle
// {
//     private:
//     int l;
//     int b;
//     public:
//      rectangle(){l=1;b=1;};
//      rectangle(int l ,int b){this->l=l;this->b=b;};
//      rectangle(rectangle & c){l=c.l;b=c.b;};
//      void set_length(int lenght){l=lenght;}
//      int get_length(){return l;}
//      void set_breath(int breath){b=breath;}
//      int get_breath(){return b;}
//      int area(){return l*b;}
//      int peri(){return 2*(l+b);}
//      ~ rectangle(){
//                     //cout<<"rectangle destroyed:-"
//                   }
// };

// class cuboid : public rectangle
// {
//    private:
//    int h;
//    public:

//    cuboid(int l=0,int b=0,int h=0){this->h=h;set_breath(b);set_length(l);}
//    void set_height(int height){h=height;}
//    int  get_height(){return h;}
//    int volume (){return get_length()*get_breath()*h;}

// };
// int main()
// {
//     cuboid c1(6,7,5);
    
//     cout<<c1.volume()<<endl;
//     return 0;
// }





//TODOconstructor in inheritance:-*/




// #include<iostream>
// using namespace std;
// class base
// {
    // public:
  // int a;
    // base(){cout<<"i am in base class"<<endl;}
    // base(int a){cout<<"i sam in base para const"<<"  "<<a<<endl;}
// };
// class derived:public base
// {
    // public:
    // derived(){cout<<"i am in derived class"<<endl;}
    // derived(int a){cout<<" i am deri parametrise construct "<<"  "<<a<<endl;}
    // derived(int x,int a):base(x)
    // {
        // cout<<"i am in double patra mer constrct"<<"  "<<a<<endl;
    // }
// };
// 
// int main()
// {
    // derived d(10,23);
    // 
    // return 0;
// }






//! ways of inheritance:-




// #include<iostream>
// using namespace std;
// class parent
// {
//    public : int a;
//    protected : int b;
//    public : int c;
// 
// };
// 
// class child : public parent
// {
    // protected:
// 
// 
    // void funparent()
    // {
    //    a=10;
    //    b=20;
    //    c=30;
    // }
// };
// class grandchild :protected child
// { 
    // 
    //   void fungrandchild()
    //   {
        // a=40;
        // b=50;
        // c=60;
    //   }
// };
// int main()
// {
    // child o;
//   
    // o.a;
    // o.b;
    // o.c;
//    
// 
    // return 0;
// }








// ! empopy name & id given : yu have to genetate derived class for showing salary of full time employ & daily wage for part time employ:-






#include<iostream>
using namespace std;
#include<string>
#include<iomanip>

class employ
{
  private:
  int id;
  string name;

  public:
  employ(int id, string name)
  {
     this->id=id;
     this->name=name;
  }

  int getemployID(){return id;}
  string getName(){return name;}
  
};
class fullTimeEmploy : public employ
{
    private: 
    int salary;
    public:
    fullTimeEmploy(int id=0,string name=" ",int salary=0):employ(id,name){this->salary=salary;}
    int  get_fulltimesalary(){return salary;}
};
class partTimeEmploy :  public employ
{
    private:
    int salary;
    public:
    partTimeEmploy(int id=0,string name=" ",int salary=0):employ(id,name){this->salary=salary;}
    int get_parttimesalary(){return salary;}
};
int main()
{
    fullTimeEmploy  e1(2789,"prashant",7000);
    partTimeEmploy  e2(4567,"aniket",1000);
    cout<<setw(10)<<"Name"<<setw(10)<<"ID.No"<<setw(10)<<"salary"<<endl;
    cout<<setw(10)<<e1.getName()<<setw(10)<<e1.getemployID()<<setw(10)<<e1.get_fulltimesalary()<<endl;
    cout<<setw(10)<<e2.getName()<<setw(10)<<e2.getemployID()<<setw(10)<<e2.get_parttimesalary()<<endl;
    return 0;
}
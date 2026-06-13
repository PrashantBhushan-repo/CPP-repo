// #include<iostream>
// using namespace std;
// class complex
// {
//    private:
//    int real;
//    int img;

//    public:
//    complex(int real=0,int img=0)
//    {
//      this->real=real;
//      this->img=img;
//    }
//   //  complex operator + (complex c)     /* here operator overloading:-*/
//   //  {
//   //       complex temp;
//   //       temp.real=real + c.real;
//   //       temp.img=img +c.img;
//   //       return temp;
//   //  }
//    void  display()
//    {
//       cout<<real<<"+"<<img<<"i"<<endl;
//    }
//   friend complex operator + (complex c1 ,complex c2);
//   //  int get_real(){return real;}
//   //  int get_img(){return img;}
// };

// /*we can write friend function out side class without using scope resolution:-*/

// complex operator +(complex c1, complex c2)  /*operator overloading using frienf function:-*/
// {
//   complex c;
//   c.real=c1.real+c2.real;
//   c.img=c1.img+c2.img;
//   return c;
// }

// int main()
// {
//     complex c1(5,9),c2(1,1),c3(4,9),c4;
//     //c4=c3+c1;   OR

//        c4= operator + (c1,c2);
//      c4.display();
//     //cout<<c4.get_real()<<"+"<<c4.get_img()<<"i"<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class complex {
//    private:
//    int real;
//    int img;

//    public:
//    complex(int real=0, int img=0) {
//      this->real = real;
//      this->img = img;
//    }

//    complex add(const complex &c) const {  // Pass by reference and mark function as const
//         complex temp;
//         temp.real = real + c.real;
//         temp.img = img + c.img;
//         return temp;
//    }

//    int get_real() const { return real; }  // Mark getter as const
//    int get_img() const { return img; }    // Mark getter as const
// };

// int main() {
//     complex c1(5,9), c2(1,1), c3;
//     c3 = c1.add(c2);

//     cout << c3.get_real() << "+" << c3.get_img() << "i" << endl;
//     return 0;
// }

//! /*insertion operator overloding:-*/  :-(use for to do)

// # include<iostream>
// using namespace std;

// class complex
// {
//   private:
//   int real;
//   int img;
//   public:
//   complex(int real=0,int img=0)
//   {
//     this->real=real;
//     this->img=img;
//   }
//   friend complex operator + (complex &c1,complex &c2);
//   friend /*ostream &*/ void  operator << (ostream &cout,complex &c3);

// };
// complex  operator + (complex &c1,complex &c2)
// {
//   complex temp;
//   temp.real=c1.real+c2.real;
//   temp.img=c1.img+c2.img;
//   return temp;
// }

// /*ostream &*/ void operator << (ostream &cout,complex &c3)
// {
//    cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
//   //  return cout;
// }

// int main()
// {
//   complex c1(1,2),c2(3,4),c3;
//  // c3=c1+c2;
//   c3= operator +(c1,c2);
//   cout<<c3;
//  //operator<<(cout,c3);
//   return 0;
// }

//! TODO displaying ration number as(p/q) and show output sum of two ration number as in (p/q)form:-

// #include<iostream>
// using namespace std;
// class rational_no
// {
//   private:
//   int p;
//   int q;
//   public:
//   rational_no(int p=0,int q=0)
//   {
//     this->p=p;
//     this->q=q;
//   }
//   friend void operator <<(ostream &cout,rational_no & r);
//   friend rational_no operator+ (rational_no &r1,rational_no & r2);

// };

// void operator <<(ostream &cout,rational_no & r)
//  {
//     cout<<r.p<<"/"<<r.q<<endl;
//  }

// rational_no operator + (rational_no &r1,rational_no & r2)
// {
//     rational_no r;
//     r.q=r1.q * r2.q;
//     r.p=(r1.p * r2.q) + (r1.q * r2.p);

//     int i=2;
//     while(i<= r.p && i<= r.q)
//     {
//       if(r.p % i==0 && r.q % i==0)
//       {
//         r.p=r.p/i;
//         r.q=r.q/i;
//       }
//       else i++;
//     }
//     return r;
// }

// int main()
// {
//    rational_no r1(7,3),r2(5,9),r3;
//    r3=r1+r2;
//    cout<<r3;
//   return 0;
// }

// ! overloading of member function:-


class complex
{
    private:
    int real;
    int img;
    public:
    complex(int real=0,int img =0)
    {
        this->img=img;
        this->real=real;
    }
}


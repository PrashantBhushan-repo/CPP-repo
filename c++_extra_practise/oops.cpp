# include <iostream>
using namespace std;

class rectange
{
    public:
    int l;
    int b;
    // rectange(int l,int b){this->l=l;this->b=b;}
    int area();
    int peri();
};
int rectange :: area()
{
    return l*b;
}
int rectange :: peri()
{
    return 2*(l+b);
}

int main()
{
    rectange r1={3,5},r2={3,4},*r,r3,*p=&r3;

    r=new rectange;
    r->l=r1.l;
    r->b=r2.b;

   p->l=1;
   p->b=1;

   cout<<r->area()<< " "<< r3.area()<< endl;


   
}
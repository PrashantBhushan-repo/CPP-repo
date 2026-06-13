// #include<iostream>
// using namespace std;

// class rectangle
// {
//     public:
//     int l;
//     int b;
//     int area(){return l*b;}
//     int peri(){return 2*(l+b);}
// };
// int main()
// {
//     rectangle a1={4,7},a2={56,90},*r3,r,*p=&r;
//     r3 = new rectangle;
//     r3->l=100;
//     r3->b=200;
//     p->l=1;
//     p->b=1;
//     cout<<r3->area()<<" "<<r3->peri()<<endl;
//     cout<<a1.area()<<"  "<<a1.peri()<<endl;
//     cout<<a2.area()<<"  "<<a2.peri()<<endl;
//     cout<<p->area()<<"  "<<p->peri()<<endl;
//     return 0;
// }





// #include<iostream>
// using namespace std;
// class point
// {
//     private:
//     int x;
//     int y;
//     public:
//     void set_x(int a){x=a;}
//     void set_y(int b){y=b;}
//     int get_x(){return x;}
//     int get_y(){return y;}
//     int area(){return x*y;}
//     int peri(){return 2*(x+y);}
// };
// int main()
// {
//     point p1;
//     p1.set_x(10);
//     p1.set_y(45);
//     cout<<p1.get_x()<<endl<<p1.get_y()<<endl<<p1.area()<<endl<<p1.peri()<<endl;
//     return 0;
// }




/*costructur:- 1) default constructor   2) paramerize cotructor 3) non-prametrize 4)copy conxsytuctor*/



// #include<iostream>
// using namespace std;
// class point
// {
//     private:
//     int x;
//     int y;
//     public:
//    // point(){x=0;y=0;}
//   //  point(int a,int b){x=a;y=b;}
//     //point(point & r){x=r.x;y=r.y;}
//     int get_x(){return x;}
//     int get_y(){return y;}

// };

// int main()
// { 
//     point p1/*,p2(5,9),p3(p2)*/;
//      cout<<p1.get_x()<<","<<p1.get_y()<<endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// class point 
// {
//     public:
//     int size;
//     int *p;

//    // public:
//     point(){size =0,p=nullptr;}
//     point(int x)
//     {
//         size=x; 
//         p=new int[size];
//         for(int i=0;i<size;i++)
//         p[i]=i*i;
//     }
//     point(point & r)
//     {
//         size=r.size;
//        p=new int[size];
//        for(int i=0;i<size;i++)
//        p[i]=r.p[i];
//     }
// };
// int main()
// {
//     point r,r1(5),r2(r1);
//     cout<<r.size<<" "<<r.p<<endl;
//    for(int i=0;i<5;i++)
//    {
//       cout<<r1.p[i]<<"\t"<<r2.p[i]<<endl;
//    }
//     return 0;
// }



#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class student_details
{
    public:
   int roll_no;
   string name; 
   int sub1;
   int sub2;
   int sub3;
   float full_marks ;

   student_details(int a,string b,int s1,int s2,int s3)
   {
      roll_no=a;
      name=b;
      sub1=s1;
      sub2=s2;
      sub3=s3;
      full_marks=300;
    }
   int total_marks();
   char grade();
 //  ~ student_details();
};
int student_details :: total_marks()
{
        return sub1+sub2+sub3;
}
char student_details :: grade()
{
   float per_marks= ((sub1+sub2+sub3)/full_marks)*100;
    if(per_marks>60) return 'A';
    else if(per_marks>40 &&per_marks<=60)return 'B';
    else if(per_marks>30 && per_marks<=40)return 'C';
    else return 'F';
}

int main()
{
    student_details a1(1,"ramesh",56,89,77),a2(2,"prashant",40,8,98),a3(3,"priyanka",7,90,9);
    cout<<setw(10)<<"NAME:-"<<setw(10)<<"Roll.NO:-"<<setw(1)<<"Total Marks:-"<<setw(10)<<"Grad"<<endl ;
    cout<<setw(10)<<a1.name<<setw(10)<<a1.roll_no<<setw(10)<<a1.total_marks()<<setw(10)<<a1.grade()<<endl;
    cout<<setw(10)<<a2.name<<setw(10)<<a2.roll_no<<setw(10)<<a2.total_marks()<<setw(10)<<a2.grade()<<endl;
    cout<<setw(10)<<a3.name<<setw(10)<<a3.roll_no<<setw(10)<<a3.total_marks()<<setw(10)<<a3.grade()<<endl;
    
 

    return 0;
}







// #include<iostream>
// #include<string>
// #include<iomanip>  // Include the iomanip header for setw
// using namespace std;

// class student_details
// {
// public:
//     int roll_no;
//     string name; 
//     int sub1;
//     int sub2;
//     int sub3;
//     float full_marks ;

//     student_details(int a, string b, int s1, int s2, int s3)
//     {
//         roll_no = a;
//         name = b;
//         sub1 = s1;
//         sub2 = s2;
//         sub3 = s3;
//         full_marks = 300;
//     }
//     int total_marks();
//     char grade();
// };

// int student_details :: total_marks()
// {
//     return sub1 + sub2 + sub3;
// }

// char student_details :: grade()
// {
//     float per_marks = ((sub1 + sub2 + sub3) / full_marks) * 100;
//     if (per_marks > 60) return 'A';
//     else if (per_marks > 40 && per_marks <= 60) return 'B';
//     else if (per_marks > 30 && per_marks <= 40) return 'C';
//     else return 'F';
// }

// int main()
// {
//     student_details a1(1, "ramesh", 56, 89, 77);
//     student_details a2(2, "prashant", 40, 8, 98);
//     student_details a3(3, "priyanka", 7, 90, 9);

//     cout << setw(10) << "Name" << setw(10) << "Roll No" << setw(15) << "Total Marks" << setw(10) << "Grade" << endl;
//     cout << setw(10) << a1.name << setw(10) << a1.roll_no << setw(15) << a1.total_marks() << setw(10) << a1.grade() << endl;
//     cout << setw(10) << a2.name << setw(10) << a2.roll_no << setw(15) << a2.total_marks() << setw(10) << a2.grade() << endl;
//     cout << setw(10) << a3.name << setw(10) << a3.roll_no << setw(15) << a3.total_marks() << setw(10) << a3.grade() << endl;

//     return 0;
// }

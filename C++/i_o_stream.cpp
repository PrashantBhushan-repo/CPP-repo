// #include<iostream>
// using namespace std;
// #include<fstream>
// 
// int main()
// {
    // ofstream out("abc.txt",ios::app);  //! append use for whatevewr exist in file already there and new created thing will we adding latter

    // out<<"prashant"<<endl;
    // out<<"bhushan"<<endl;
    // out<<"12345678"<<endl;
    // out<<"12345678"<<endl;
    // out<<"12345678"<<endl;
//   out.close(); // use for closing file
    // return 0;
// }





// !Now reading data from file:-




// #include<iostream>
// using namespace std;
// #include<fstream>
// 
// int main()
// {
    // ifstream ifs;
    // ifs.open("abc.txt");  //! for opening file
    // string str1;
    // string str2;
    // int a;
    // ifs>>str1;
    // ifs>>str2;
    // ifs>>a;
    // ifs.close();    // !when we closing file:-
    // cout<<str1<<" "<<str2<<" "<<a<<endl;
// 
    // if(!ifs.eof())              //!it checking end of file:-
    // cout<<"true"<<endl;
// 
  // if(ifs)      //! for checking is file open or not*/
  // cout<<"true"<<endl;
// 
  // if(!ifs.is_open()) //! true message print out if file will not open:-
   //cout<<"true"<<endl;
// 
//    
    // return 0;
// }





// !serialization:-





// #include<iostream>
// using namespace std;
// #include<fstream>
// #include<string>
// 
// class ram
// {
    // public:
    // string name;
    // int roll_no;
    // string department;
//    ram(){ name="";roll_no=0;department="";}
//    friend ofstream & operator <<(ofstream & ofile ,ram &s);
//    friend ifstream & operator >>(ifstream & ifile ,ram &s);
// };
// 
// 
// ofstream & operator <<(ofstream & ofile ,ram &s)
// {
    // ofile<<s.name<<endl;
    // ofile<<s.roll_no<<endl;
    // ofile<<s.department<<endl;
    // return ofile;
// };
// 
// ifstream & operator >>(ifstream & ifile ,ram &s)
//  {
    // ifile>>s.name>>s.roll_no>>s.department;
    // 
    // 
    // return ifile;
//  };
// 
// int main()
// {
//    ram s;
    // s.name ="prashant";
    // s.roll_no=90;
    // s.department="chemical";
// 
    // 
    // ofile<<s.name;
    // ofile<<s.roll_no;   //! istead of this do << operator ovreloading:- and do directly  ** ofile<<s;
    // ofile<<s.department;  
    // ofstream ofile("abc.txt",ios::app);
    // ofile<<s;   //! do overloading:-  and no need to write these three lines:-
// 
// 
  //  ? now we want to read the file:-
//  
    //  ifstream ifile("abc.txt");
    // 
   // ifile.open();
    //   ifile>>s;
    //   cout<<s.department<<" "<<s.name<<" "<<s.roll_no<<endl;
// 
  //  ofile<<s<<endl;
//   
   // ofile<<s<<endl;
   //ifile.close();
    // return 0;
// }




//! sample example



// #include<iostream>
// using namespace std;
// #include<fstream>
// #include<string>
// int main()
// {
    // ofstream file("prashant.txt",ios::trunc);
    //  file<<"prashant"<<endl;
    //  file<<"bhushan"<<endl;
    //  file<<"123"<<endl;
    //  file.close();
    //  
    // return 0;
// }
// 

//! for reaging file in binary form, /* but not understand:- */

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// 
// int main() {
 //   Writing to the file in text mode
    // ofstream file("prashant.txt");
    // if (!file) {
        // cerr << "File could not be opened for writing!" << endl;
        // return 1;
    // }
    // file << "prashant" << endl;
    // file << "bhushan" << endl;
    // file << "123" << endl;
    // file.close();
// 
   // Reading the file in binary mode
    // ifstream binaryFile("prashant.txt", ios::binary);
    // if (!binaryFile) {
        // cerr << "File could not be opened for reading!" << endl;
        // return 1;
    // }
// 
//   Read the entire file in binary mode
  // binaryFile.seekg(0, ios::end); // Move the pointer to the end to get the size
   // size_t fileSize = binaryFile.tellg(); // Get the size of the file
   // binaryFile.seekg(0, ios::beg); // Move the pointer back to the beginning

   // char *buffer = new char[fileSize]; // Allocate memory to hold the file contents
   // binaryFile.read(buffer, fileSize); // Read the file into the buffer

    // Display the contents as binary data (byte by byte)
    //cout << "File contents in binary form:" << endl;
    //for (size_t i = 0; i < fileSize; ++i) {
   //     cout << hex << (unsigned int)(unsigned char)buffer[i] << " ";
   // }
   // cout << endl;

   // delete[] buffer; // Free the allocated memory
  //  binaryFile.close();

  //  return 0;
//}



//!  use serialization concept retrive from list of item name,quality,price:-



#include<iostream>
using namespace std;

#include<string>
#include<fstream>
//template<class T>

class item
{
    private:

    string name;
    float quantity ;
    float price;

    public:
   item(){}
   item(string ,float , float);
   friend ofstream & operator <<(ofstream & ofile, item  &i);
   friend ifstream & operator >>(ifstream & ifile, item  &i);
   friend ostream & operator <<(ostream & out, item  &i);
};

item ::item(string name ,float quantity ,float price)
{
    this->name=name;
    this->quantity=quantity;
    this->price=price;
}

ofstream & operator <<(ofstream & ofile, item  &i)
{
    ofile<<i.name<<endl;
    ofile<<i.quantity<<endl;
    ofile<<i.price<<endl;
    return ofile;

}

ifstream & operator >>(ifstream & ifile, item  &i)
{
   ifile>>i.name>>i.quantity>>i.price;
   return ifile;
}
ostream & operator <<(ostream & out, item  &i)
{
    out<<i.name<<endl<<i.quantity<<endl<<i.price<<endl;
    return out;
}



int main()
{
   string name;
    float quantity;
    float price;
    int n;
    cout<<"enter no of item:-"<<endl;
    cin>>n;
    item *Item[n];

    cout<<"enter all items:-"<<endl;
     for(int i=0;i<n;i++)
    { 
        cout<<"enter name, quantity ,price for "<<i<<" th item:-"<<endl;
        cin>>name>>quantity>>price;
        Item[i]=new item(name,quantity,price);
    }

     ofstream ofile("item.txt",ios::trunc);


    /*for checking is file open or not?*/
    if(!ofile.is_open())
    {
       cout<<"file not opend"<<endl;
       return 1;
    }

     
     /*writing in file using operatyor ovrloading concept:-*/
     for(int i=0;i<n;i++)
     {
       ofile<<*Item[i];
     }
     

     /* now reading file items values using operator overloding concept:-*/

     ifstream ifile("item.txt");
     for(int i=0;i<n;i++)
     {
        ifile>>*Item[i];
     }
    


    /*now finally displaying read things from file:-*/


    for(int i=0;i<n;i++)
    {
        cout<<"item "<<i<<" th detail:-"<<endl;
        cout<<*Item[i]<<endl;
    }

    

return 0;
}


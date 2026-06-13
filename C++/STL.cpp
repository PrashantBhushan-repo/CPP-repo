// #include<iostream>
// #include<set>
// using namespace std;

// int main()
// {
//    set<int> v={900,0,34};/*it also set result in increasing order:-*/
//    v.insert(12);
//    v.insert(112);
//    v.insert(1);
//    v.insert(10);
   
//    cout<<"using iterator:-"<<endl;
//    set<int>::iterator itr;
//    for(itr=v.begin();itr!=v.end();++itr)
//    cout<<*itr<<endl;   /*we can't modify values using set class container:-*/

//    cout<<"using for each loop:-"<<endl;
//    for(int x:v)
//    cout<<x<<endl;
   
//    return 0;
// }




// #include<iostream>
// #include<map>
// using namespace std;

// int main()
// {
//    map<int,string> m;
//    m.insert(pair<int ,string>(1,"prashant"));
//    m.insert(pair<int ,string>(2,"priyanka"));
//    m.insert(pair<int ,string>(3,"tanu priya"));
//    m.insert(pair<int ,string>(4,"prianka chopra"));
//    map<int ,string> ::iterator itr;

//    for(itr =m.begin();itr!=m.end();++itr)
//        cout<<itr->first<<" "<<itr->second<<endl;

//        map<int ,string> ::iterator itr1;
//        itr1=m.find(2);
//        cout<<itr1->first<<" "<<itr1->second<<endl;


//     return 0;
// }




////! STL revisited:-
//? vector and it's all important function member:-
/*In C++, the `vector` class is a dynamic array that is part of the Standard Template Library (STL). It's widely used in competitive programming due to its flexibility and ease of use. Here are some of the most important and frequently used member functions of the `vector` class:

### 1. **Basic Operations**
   - **`push_back(value)`**: Adds an element to the end of the vector.
   - **`pop_back()`**: Removes the last element of the vector.
   - **`size()`**: Returns the number of elements in the vector.
   - **`empty()`**: Checks if the vector is empty.
   - **`clear()`**: Removes all elements from the vector.

### 2. **Accessing Elements**
   - **`operator[]`**: Accesses the element at a specified position (e.g., `vec[i]`).
   - **`at(index)`**: Accesses the element at a specified position with bounds checking.
   - **`front()`**: Returns a reference to the first element.
   - **`back()`**: Returns a reference to the last element.
   - **`data()`**: Returns a pointer to the underlying array serving as the vector's storage.

### 3. **Iterators**
   - **`begin()`**: Returns an iterator to the first element.
   - **`end()`**: Returns an iterator to the element following the last element.
   - **`rbegin()`**: Returns a reverse iterator to the last element.
   - **`rend()`**: Returns a reverse iterator to the element preceding the first element.
   - **`cbegin()`**, **`cend()`**: Returns constant iterators (cannot modify the values).
   - **`crbegin()`**, **`crend()`**: Returns constant reverse iterators.

### 4. **Modifying the Vector**
   - **`insert(position, value)`**: Inserts an element at the specified position.
   - **`erase(position)`**: Removes the element at the specified position.
   - **`resize(new_size)`**: Resizes the vector to contain `new_size` elements.
   - **`swap(vec)`**: Swaps the contents of two vectors.

### 5. **Capacity Management**
   - **`reserve(n)`**: Reserves storage to contain at least `n` elements.
   - **`capacity()`**: Returns the number of elements that the vector can hold without reallocating.
   - **`shrink_to_fit()`**: Reduces capacity to fit the size.

### **Usage in Competitive Programming**
- **`push_back()`** and **`pop_back()`** are frequently used for building and modifying sequences.
- **`size()`** and **`empty()`** are essential for condition checking in loops.
- **`begin()`** and **`end()`** are crucial for iterating over elements.
- **`insert()`** and **`erase()`** help in efficiently managing dynamic data structures.
- **`resize()`** is useful for initializing or modifying the size of a vector in one go.

Mastering these functions can greatly enhance your efficiency and performance in competitive programming.*/





////! all about vector container:-






#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v={2,7,90,78},v1={45,89};
    v.push_back(5);
    v.push_back(15);
    v.push_back(53);
    v.pop_back();

    for( int &x :v)
     ++x;

v.
/*getting 1st & last element of vector:-*/


cout<<"back="<<v.back()<<endl;
cout<<"front="<<v.front()<<endl;


/*insert single and multipul element:-*/

v.insert(v.begin()+3,8); /* at posotion 3 we inserting 8 */
for(int x:v)
cout<<x<<" ";

cout<<endl;

v.insert(v.begin()+1,2,23);  /* inserting 2 element(76,23) at position 1 */
for(int x:v)
cout<<x<<" ";

cout<<endl;

v.insert(v.begin()+2,v1.begin(),v1.end());  /* at positin 2 added vector v1*/
for(int x:v)
cout<<x<<" ";

cout<<endl;

//!method of accesssing element:-*/


v[0]=777;  // modifing 0 th element:-
cout<<v[0]<<endl;
cout<<v.at(2)<<endl;   // use of at

int *p= v.data();
for(size_t i=0;i<v.size();i++)           /*used for unsinged integer:-*/
cout<<p[i]<<" ";

cout<<endl<<" "<<v.size()<<endl<<v.capacity()<<endl;


 vector<int>:: iterator it;
 it= v.begin();
 while(it != v.end())
 {
    cout<<*it<<" ";
    ++it;
 }
 cout<<endl;

 vector<int>:: reverse_iterator rit;
  rit=v.rbegin();
 
 while(rit!=v.rend())
 {
   cout<<*rit<<" ";
   rit++;
 }
 cout<<endl;

 for(auto it=v.begin();it!=v.end();it++)
 {
   cout<<*it<<" ";
 }
 cout<<endl;

 for(auto it =v.rbegin();it!=v.rend();it++)
   cout<<*it<<" ";

 cout<<endl;
cout<<"erase"<<endl;
   cout<<*v.erase(v.begin()+2)<<endl;;
   
   v.resize(3);
   for(int x:v)
   cout<<x<<" ";

   cout<<endl;

   v.reserve(21);
   cout<<v.size()<<endl<<v.capacity()<<endl;

   if(v!=v1)
   cout<<"true"<<endl;

     v.swap(v1);

     for(int x:v)
     cout<<x<<" ";

     cout<<endl;

   cout<<"checking use of constiterator:-"<<endl;

   for(auto it=v.cbegin();it!=v.cend();it++)   /* after using cbegin(),crbegin(),cend(),crend() we can't do operation on vector elementds:-*/
   cout<<*it<<" ";

 cout<<"for checking:-"<<endl;
   for(auto it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";

   cout<<endl;

     if(!v.empty())
     cout<<"true"<<endl;
   cout<<v.size()<<endl;
    return 0;
}





//! code related to where we are returning vector type:-



// #include<iostream>
// using namespace std;
// #include<vector>
// #include<string>
// 
// 
// vector<int> createvector(int n)
// {
   // vector<int> newvector;
   //   for(int i=0;i<n;i++)
   //   {
      //   newvector.push_back(i*i);
   //   }
   //   return newvector;
// }
// 
// int main()
// {
   // vector<int> myvector = createvector(5);
// 
   // for( int i=0;i<5;i++)
   //   cout<< myvector.at(i)<<" ";
   // return 0;
// }



//! creating string of vector and terutrn type vector:-




// #include<iostream>
// using namespace std;
// #include<vector>
// #include<string>
// 
//  vector<string> stringvector()
//  {
      //  vector<string> nstr ={"estry","dtdty","456","ffyuyyuf","fr6"} ;
         //   return nstr;
//  }
//  int main()
//  {
   //  vector<string> str =stringvector();
   //  for(const string &word :str)
   //  cout<<word<<" ";
   // return 0;
//  }



//!  all about list:-


#include<iostream>
using namespace std;
#include<forward_list>
int main()
{ int value=1;
   forward_list<int> list(6);
   for(auto i=list.begin();i!=list.end();i++)
       *i=value++;

    for(auto i=list.begin();i!=list.end();i++)
       cout<<*i<<" ";
   return 0;
}


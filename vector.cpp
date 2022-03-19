Dynamic array - Vector

As of now we have learnt about static arrays, Let look at how we can use the basic concept of array in Dynamic arrays
STL provide rich set of libraries through which we can perform various operations by using inbuilt functions.

Java offer -> Utility classes
Python/Node offer -> packages(classes)


Initialization:

vector<int> a;                                       // empty vector of ints

vector<int> v(length, defaultValue);
vector<int> b (5, 10);                               // five ints with value 10

Creating vector from another vector
vector<int> c (b.begin(), b.end());                   // iterating through second - It can utilized for cases where 
                                                      //  we need just some elements from another array

vector<int> d(c);                                    // copy of c


Functions:

front(): Returns the reference to the first element. Its time complexity is O(1).
back(): Returns the reference to the last element. Its time complexity is O(1). => returns the last element
pop_back(): Removes the last element from the vector. Its time complexity is O(1).
push_back(): Inserts a new element at the end of the vector. Its time complexity is O(1).
size(): Returns the number of elements in the vector. Its time complexity is O(1).


begin(): Returns an iterator pointing to the first element of the vector. Its time complexity is O(1).
end(): Returns an iterator pointing to a position which is next to the last element of the vector. Its time complexity is O(1).

clear(): Deletes all the elements from the vector and assign an empty vector. Its time complexity is O(N) where N is the size of the vector.
erase(): Deletes a single element or a range of elements. Its time complexity is O(N + M) where N is the number of the elements erased and M  
         is the number of the elements moved.

resize(): Resizes the vector to the new length which can be less than or greater than the current length. Its time complexity is O(N) where N
         is the size of the resized vector.
empty(): Returns a boolean value, true if the vector is empty and false if the vector is not empty. Its time complexity is O(1).
insert(): Inserts new elements into the vector at a particular position. ts time complexity is O(N + M) where N is the number of elements 
          inserted and M is the number of the elements moved .



Traverse:

void traverse(vector<int> v)
{
    vector <int>::iterator it;
    for(it = v.begin();it != v.end();++it)
        cout << *it <<  ‘ ‘;
    cout << endl;
    for(int i = 0;i < v.size();++i)
        cout << v[i] << ‘ ‘;
    cout << endl;
 }
 
 
Implementation:

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    vector <int>::iterator it;
    
    v.push_back(5); // v = [5]

    while(v.back() > 0)
        v.push_back(v.back() - 1); // v = [5, 4, 3, 2, 1, 0]
    
    for(it = v.begin(); it != v.end();++it)
        cout << *it << ' ';
     // = 5 4 3 2 1 0 => print


    cout << endl;

    for(int i = 0;i < v.size();++i)
        cout << v.at(i) << ' ';
    // = 5 4 3 2 1 0 => print


    cout << endl;

    while(!v.empty())
    {
        cout << v.back() << ' ';
        v.pop_back();
    }
    //= 0 1 2 3 4 5

    cout << endl;
    return 0;
}

Output:

5 4 3 2 1 0
5 4 3 2 1 0
0 1 2 3 4 5



Operations


#include <iostream>
#include <vector>
using namespace std;
 
int main() {
 
 //ways of initialization
 vector<int> v1; // v1 = []
 vector<int> v2 = {10, 20, 30}; // v2 = [10, 20, 30]
 vector<int> v3(5, 7); //(size, value) -> v3 = [7, 7, 7, 7, 7]
 vector<int> v4(6); //size -> v4 = [0, 0, 0, 0, 0, 0]
 vector<int> anothervector (2,400); // anothervector = [400, 400]
 vector<int> v5 {1, 2, 3, 4, 5, 6, 7, 8}; //v5 = [1, 2, 3, 4, 5, 6, 7, 8]
 
 
 //push_back, pop_back
 v1.push_back(1); //v1 = [1]
 v1.push_back(2); //v1 = [1, 2]
 v1.push_back(3); // v1 = [1, 2, 3]
 
 for(int i = 0; i < 5; ++i){
   cout << v3[i] << endl;
 }
 // print v3 -> [7 7 7 7 7]
 
 //initialization of iterators - pointing to index
 vector<int>::iterator it1; // iterator
 //or
 auto it2 = v1.begin(); // iterator it2 -> v1[0]
 
 it1 = v1.begin() + 2; // iterator it1 -> v1[2]
  
 //insert variations
 v1.insert(it1, 4); //(position, value) => v1 = [1, 2, 4, 3] -> insert the element at 2nd index position, moving right all next values
 v2.insert(v2.end() - 1, anothervector.begin(), anothervector.end()); //(position to insert, another_vector_start_position, another_vector_end_position) v2 = [10, 20, 400, 400, 30]

 int myarray [] = { 501,502,503 }; // myarray = [501, 502, 503]

 vector<int> myvector; // myvector = []
 myvector.insert (myvector.begin(), myarray, myarray+3); // myvector = [501, 502, 503]
 
 
 //deleting elements
 
 v3.pop_back(); // v3 = [7, 7, 7, 7]
 v4.clear(); // removing all elements, making it size 0 v4 = []
 v5.erase(v5.begin() + 3, v5.begin() + 6) ; //[first,last) v5 = [1, 2, 3, 7, 8]
 
 cout << "myvector contains:";
 for (auto it = myvector.begin(); it < myvector.end(); it++)
   cout << ' ' << *it;
   // = [501, 502, 503]
 cout << '\n';
 
 cout << "v1 contains:";
 for (auto it = v1.begin(); it < v1.end(); it++)
   cout << ' ' << *it;
 cout << endl;
 // v1 [1, 2, 4, 3]
 
 cout << "v2 contains:";
 for (auto it = v2.begin(); it < v2.end(); it++)
   cout << ' ' << *it;
 cout << endl;
 // [10, 20, 400, 400, 30]
 
 cout << "v3 contains:";
 for (auto it = v3.begin(); it < v3.end(); it++)
   cout << ' ' << *it;
 cout << endl;
 // [7, 7, 7, 7]
 
 cout << "v4 contains:";
 for (auto it = v4.begin(); it < v4.end(); it++)
   cout << ' ' << *it;
 cout << endl;
 // = 
 
 cout << "v5 contains:";
 for (auto it = v5.begin(); it < v5.end(); it++)
   cout << ' ' << *it;
 cout << endl;
 // = [1, 2, 3, 7, 8]
 
 
}
 
Output

	myvector contains: 501 502 503
v1 contains: 1 2 4 3
v2 contains: 10 20 400 400 30
v3 contains: 7 7 7 7
v4 contains:
v5 contains: 1 2 3 7 8


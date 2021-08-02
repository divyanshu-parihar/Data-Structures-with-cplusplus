#include <array>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
/*
STL : Standard templating Library
    - Library for general class and functions.

Advantages:
    - use of well tested components.
    - save time.

Conponents:
    -Container eg: vector
    -Algorithms eg: searching , sort ...
    -iterators : Objects points to an element.
*/

int main() {
    cout << "DSA is easy when done with some help from STL.";
    // --------------------CONTAINER--------------------
    // Arrays
    // array<int, 4> a = {1, 2, 3, 4};
    // int size = a.size();
    // for (int i = 0; i < size; i++) {
    //     cout << a.at(i);  // .at(i) -> returns the element at given i index.
    // }
    // a.empty();  // returns true if array is empty and false otherwise.
    // a.front();// return first element
    // a.back(); // returns the last element.

    // Vectors
    // vector<int> v;
    // vector<int> a(3,2); // initialize vector with size(3) with all values
    // equal to 2;default is 0; vector<int> copy(a); // copies all the element
    // with values of vector provided;

    // v.capacity(); // returns the memory size of the vector.
    // v.size();// returns the no. of elements.
    // v.push_back(1); // add values to last index.
    // v.front() ; v.back(); // same as arrays.
    // v.pop_back(); // deletes the last element.
    // v.begin() ;// iterator for first element.
    // v.end(); // iterator for last element.

    // Deques : better when being used in insertion or deletion in first or last
    // element. Don't use when you want to delete elements from middle than will
    // be  worse.

    // deque<int> d;

    // d.push_back(1);
    // d.push_front(2);
    // d.pop_back();
    // d.pop_front();
    // d.at(index);
    // d.front();
    // d.back();
    // d.empty();
    // d.size();
    // d.erase(d.begin(),d.begin()+1); // delete first element.
    // d.clear() // Delete elements.

    // List : Double linked List
    // list<int> l;
    // list<int> l2(l); // copy all the elements of list provided in this case
    // it will be empty here. list<int> l3(5,100); // should create a list with
    // size(5) and all elements equal to 100;
    // // all basic functions are included like empty , front , end ,size ...
    // l.push_back(1);
    // l.push_front(2);
    // l.erase(l.begin()); //  takes the iterator to the element.O(N) as we have
    // to travel to that element.

    // Stack : LIFO Gang
    // stack<string> s;
    // s.push("Parihar");
    // s.pop();
    // s.size();
    // s.empty();

    // queue<string> q;
    // q.push("A");
    // q.push("B");
    // q.front();  // A
    // q.pop();
    // q.front();  // B
    // q.size();

    // priority queue : Queue where first element will always be greatest.(Max
    // Heap -- Default) priority_queue<int> max; // Max heap
    // priority_queue<int,vector<int>, greater<int>> min; // Min Heap

    // // max.push(1);
    // // max.push(2);
    // // max.push(3);
    // // max.push(4);
    // // when max iterated  return  4 3 2 1
    // // when min iterated return 1 2 3 4

    // SET  : No duplicate elements. returns element in sorted way.
    // set<int> s;
    // set<int>::iterator it = s.begin();
    // it++;
    // O(LogN) method
    // s.insert(2);
    // s.insert(2);
    // // still s will contain only one 2;
    // s.erase(it); // deletes the  element iterator is pointing at.
    // s.count(2); // tells if element is present in set .
    // s.find(2); // returns the iterator of the element. or .end() if not
    // present.

    // Map
    // map<int, string> m;

    // m[1] = "Learning";
    // m[2] = "Love";
    // // O(N);
    // m.insert({3, "them"});
    // for (auto i : m) {
    //     cout << i.first << endl;
    // }
    // m.erase(2); // deleted element with key equal to 2;
    // m.count(2);

    // auto it = m.find(2); // returns iterator
    // for(auto i = it; i!= m.end(); i++){
    //     cout << (*i).first << endl;
    // }





    // -------------------Algorithms ----------------------------
    // vector <int> v;

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);

    // binary_search(v.begin(),v.end() , 5); // takes first and last iterator and search for 3rd arguments.
    // max(4,3); //returns max val;
    // min(4,5); // returns min val;
    // // swap(a,b);  swap 2 values could be anything.
    // reverse(v.begin(),v.end());
    // rotate(v.begin(), v.begin()+1, v.end());
    // sort(v.begin(), v.end());
}

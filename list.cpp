#include <iostream>
#include <list>
using namespace std;
void printlist(list<int> ds, string name) {
    cout << "List " <<name;
  if (ds.empty()) 
  cout <<" is empty";
  else {
      cout << " has " << ds.size() << " elements: ";
      list<int>::iterator it;
      for (it = ds.begin(); it != ds.end(); it++)
        cout << *it <<' ';
        // cout<<"\t\tfront: "<<ds.front()<<' ';
        // cout<<"\tback: "<<ds.back()<<' ';
  }
  cout << endl;
}

/*
int main () {
    int myints[] = {11,22,33,44,55,66};
    list<int> a;
    list<int> b(4,100);
    list<int> c(b);
    list<int> d(myints, myints + 6 );
    list<int> e = d;
    list<int> f(b.begin(), b.end());
    printlist(a, "a"); printlist(b, "b"); printlist(c, "c");
    printlist(d, "d"); printlist(e, "e"); printlist(f, "f");
    cout<<"New\n";
    a.assign(b.begin(),b.end());
    b.assign(7, 55);
    c.assign(myints, myints + 3);
    d.clear();
    e.swap(f);
    printlist(a, "a"); printlist(b, "b"); printlist(c, "c");
    printlist(d, "d"); printlist(e, "e"); printlist(f, "f");
    return 0;
}

*/

/*
int main () {
  int myints[] = {11,22,33,44,55,66};
  list<int> a(myints, myints + 6 );
  printlist(a, "a");
   cout<<"\nAccess: \n";
  a.front() = 111;  printlist(a, "a");
  a.back() = 789;   printlist(a, "a");
                        
                        
  cout<<"\nPush\n";
  a.push_front(100); printlist(a, "a");
  a.push_back(900);  printlist(a, "a");
  cout<<"\nPop\n";
  a. pop_front();   printlist(a, "a");
  a. pop_back();    printlist(a, "a");
                        

  return 0;
}
*/

/*
#include <vector>
int main () {
    int myints[] = {11,22,33,44,55,66};
    list<int> a(myints, myints + 6 );
    printlist(a, "a");
    list<int>::iterator it = a.begin();
    ++it;
    a.insert(it, 100);    printlist(a, "a");
    a.insert(it, 3, 300); printlist(a, "a");
    vector<int> myvector (2,400);
    ++it;
    a.insert (it,myvector.begin(), myvector.end());
    printlist(a, "a");
    return 0;
}
*/

/*
int main () {
    list<int> mylist;
    for (int i = 1; i<10; ++i)
    mylist.push_back(i*10);
    printlist(mylist, "mylist");
    list<int> :: iterator it1, it2;
    it1 = it2 = mylist.begin();
    advance (it2,6);
    ++it1;
    it1 = mylist.erase (it1);
    printlist(mylist, "mylist");
    it2 = mylist.erase (it2);
    printlist(mylist, "mylist");
    ++it1;
    --it2;
    mylist.erase (it1,it2);
    printlist(mylist, "mylist");
    return 0;
}
*/

int main () {
  int myints[] = {1,2,4,5,6,3};
  list<int> mylist(myints, myints + 6 );
  printlist(mylist, "mylist");

  mylist.sort();    printlist(mylist, "mylist");
  mylist.remove(5); printlist(mylist, "mylist");
  mylist.reverse(); printlist(mylist, "mylist");
  
  int my[] = {1,3,5,7,9,4,6,8};
  list<int> mylist2(my, my + 8);
  printlist(mylist2, "mylist2");
  
  cout<<"\nsplice\n";
  list<int>::iterator it = mylist.begin();
  it++;
  mylist.splice (it, mylist2);
  printlist(mylist, "mylist");
  printlist(mylist2, "mylist2");

  cout<<"\nunique\n";
  mylist.sort();  printlist(mylist, "mylist");
  mylist.unique(); printlist(mylist, "mylist");
  return 0;
}


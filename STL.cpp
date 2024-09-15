#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

// this function contains the block of code to understand the Pair which will be used to understand containers, pair is a utility library
void explainPair() {
    cout<< "Pairs in STL" <<"\n";
    pair<int, int> p = {1,3};
    cout<< p.first << " "<< p.second<<"\n";

    pair<int, pair<int, int>> p1 = {1, {3,4}};
    cout<<p1.first<<" "<<p1.second.second<<" " << p1.second.first<<"\n";

    pair<int, int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second <<endl;
    cout<<"___________________________________________________________________________________"<<"\n";
}
// Pairs in STL
// 1 3
// 1 4 3
// 5

void explainVector() {
    cout<<"Vectors in STL"<<"\n";
    vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size()<<endl;
  cout<<"___________________________________________________________________________________"<<"\n";
}
// Vectors in STL
// the elements in the vector: 0 1 2 3 4 5 6 7 8 9 
// The front element of the vector: 0
// The last element of the vector: 9
// The size of the vector: 10
// Deleting element from the end: 9
// Printing the vector after removing the last element:
// 0 1 2 3 4 5 6 7 8 
// Inserting 5 at the beginning:
// The first element is: 5
// Erasing the first element
// Now the first element is: 0

// vector is not empty
// Size of the vector after clearing the vector: 0

void explainSet(){
  set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size()<<endl;
  cout<<"___________________________________________________________________________________"<<"\n";
}
// Elements present in the set: 1 2 3 4 5 6 7 8 9 10 
// 2 is present in set
// Elements after deleting the first element: 2 3 4 5 6 7 8 9 10 
// The size of the set is: 9
// The set is not empty 
// Size of the set after clearing all the elements: 0


int main(){
    explainPair();
    explainVector();
    explainSet();
    return 0;
}
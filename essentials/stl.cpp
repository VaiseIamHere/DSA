#include<bits/stdc++.h>
using namespace std;

// Pairs
void explainPairs(){
    cout << endl << endl;
    // Specify types, can be different
    pair<int, int> p1 = {1, 2};
    cout << p1.first <<" "<< p1.second << endl;

    pair<int, char> p2 = {3, 'a'};
    cout << p2.first <<" "<< p2.second << endl;

    // Treat as a data type make arrays ;)
    cout << "As an array:\n";
    pair<int, int> arr[] = {{4, 5}, {6, 7}, {8, 9}, {10, 11}};
    for(int i=0; i<4; ++i){
        cout << arr[i].first <<" "<< arr[i].second << endl;
    }
}

// Vectors
void explainVectors(){
    cout << endl << endl;

    // Specify types, can be different
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);  // A bit faster

    // Iterators, in this case gives address
    vector<int>::iterator i1 = v.begin();    // Gives start address
    cout << *i1 << endl;

    // auto automatically detects the data type of the given data
    auto i2 = v.end();   // Gives address of block after the last element
    cout <<"Garbage value: "<< *i2 <<"  Actual value: "<<*(i2 - 1)<< endl;

    // For each - kind of Loop
    for(int a: v){
        cout <<a<< " ";
    }

    cout << "\nVector 2:\n";
    vector<int> v1(5, 100);     // Initiate 5 spaces with value 100
    // vector<int> v2(5);          // Initiate 5 spaces with 0

    // Insertion using v1
    v1.insert(v1.begin(), 3);   // Insertes at a specified position (0, 1..) with respect to address
    v1.insert(v1.begin() + 2, 99);
    v1.insert(v1.begin()+3, 5, 1000); // Insertes 5 1000's from 3rd position

    // Inserting in loop for deletion
    for(int i=2, j=200; i<6; ++i, ++j){
        v1.insert(v1.begin()+i, j);
    }

    cout <<"Vector after insertion: Size -> "<<v1.size()<< endl;
    for(int a: v1){
        cout <<a<< " ";
    }

    v1.erase(v1.end()-1);   // Deleting individual element
    v1.erase(v1.begin()+1, v1.begin()+6);       // Endpoint is exclusive
    cout <<"\nVector after deletion: Size -> "<<v1.size()<< endl;
    for(int a: v1){
        cout <<a<< " ";
    }
    cout << endl << "Is vector empty?: "<< v1.empty();  // Either true or false
    v1.pop_back();  // Removes last element
    v1.clear();     // Erases all the elements
    cout << endl << "Size: "<< v1.size();
    cout << endl << "Is vector empty?: "<< v1.empty();
}

// Stack
void explainStack(){
    cout << endl << endl;

    stack<int> st;
    for(int i=1; i<=10; ++i){
        st.push(i);
    }
    cout <<"Top element: "<< st.top() << endl;
    // Pop element twice
    st.pop();
    st.pop();
    cout <<"Top element: "<< st.top() << endl;

    // Only 3 generic functions
}

void explainQueue(){
    cout << endl << endl;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.emplace(4);
    
    cout << "First element: " << q.front() << endl
         << "Last element: " << q.back() << endl;
    
    q.pop();
    q.pop();
    cout << "First element: " << q.front();
}

void explainSet(){
    // Unique and Sorted
    cout << endl << endl;

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(12);
    s.insert(2);

    for(int a: s){
        cout << a << " ";
    }
    // Returns 1 if present 0 if absent
    cout << "Count 3: " << s.count(3) << endl
         << "Count 10: " << s.count(10) << endl;

    // Returns address of element if present else s.end()
    auto it1 = s.find(4);
    cout << "Address of 4: " << *it1;
}

int main(void){
    // explainPairs();     // For pairs
    // explainVectors();   // For Vectors
    // There are List, Deque very similiar to Vectors
    // explainStack();     // For Stack
    // explainQueue();     // For queue
    // Priority queue always keeps the queue sorted larger value higher priority
    explainSet();
    return 0;
}
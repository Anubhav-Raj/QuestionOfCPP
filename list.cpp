#include <iostream>
#include <list>
using namespace std;
int main()
{
    // create a list
    list<int> l;
    l.push_front(1);
    l.push_back(2);
    for (int i : l)
        cout << i << " ";

    cout << endl;
    l.erase(l.begin());
    cout << "after erase " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "Size of list " << l.size() << endl;
    // list<int> n;
    list<int> n{l};
    cout << "Print list is ";
    for (int i : n)
    {
        cout << i << " ";
    }

    list<int> p(5,10);
    cout<<endl;
    cout << "Print list P : ";
    for (int i : p)
    {
        cout << i << " ";
    }
    


    return 0;
}
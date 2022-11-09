#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> vt;
    vt.reserve(10);
    vt.push_back("1. first");
    vt.push_back("2. second");
    vt.push_back("3. third");
    cout << "ok" << endl;
    cout << "size(): " << vt.size() << endl;
    cout << "max_size(): " << vt.max_size() << endl; 
    cout << "capacity(): " << vt.capacity() << endl;
    for(auto it = vt.begin(); it != vt.end(); it++)
    {
        cout << *it << endl;
    }
    cin.get();
    return 0;
}
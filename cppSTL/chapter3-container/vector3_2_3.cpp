#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
void print(const int &tmp)
{
    cout << tmp<< endl;
}

int main()
{
    const int ARRAY_SIZE =8;
    int IntArray[ARRAY_SIZE] = {1,2,3,4,4,5,6,7};
    vector<int> myvt;
    //int* location_index=nullptr;
    for(int i=0; i< 8; i++)
    {
        myvt.push_back(IntArray[i]);
    }

    // for_each traverse
    for_each(myvt.cbegin(), myvt.cend(), print);
    
    // location and find
    auto location_index  = find(myvt.begin(), myvt.end(), 5);
    cout << "下标： " << location_index- myvt.begin() << endl;

    //find_if 条件查找第一个大于5数据的指针
    auto index = find_if(myvt.begin(), myvt.end(),bind2nd(greater<int>(), 5));
    cout << "第一个大于5的下标:" << (index - myvt.begin())<<endl; 
    return 0;
}
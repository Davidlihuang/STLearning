#include  <iostream>
#include  <valarray>
using namespace std;

///< 输出当前valArray
template<typename T>
void printValArray(const valarray<T>& val)
{
    for(int i=0; i< val.size(); i++)
    {
	    cout << val[i] << " "; 
    }
    cout << endl;
}

///< 主函数
int main()
{
	///< 分配4个元素，但不初始化
    valarray<int> val(4); 
    printValArray(val);
	
	///< 4个重复的3
	valarray<int> val2(3, 4);
	printValArray(val2);

	///< 使用普通数组初始化valarray
	int ia[]={1, 2, 3, 4, 5, 6};
	valarray<int> val3(ia, sizeof(ia)/sizeof(ia[0]));
	printValArray(val3);

	///< 数组ia前4个元素+1后初始化valarray
	valarray<int> val4(ia+1, 4);
	printValArray(val4);

	///< 运算，逐个元素运算
	valarray<int> va = (val2+val4)*val4;
	printValArray(va);
	
    return 0;
}

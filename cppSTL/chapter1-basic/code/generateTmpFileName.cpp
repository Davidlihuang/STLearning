#include <iostream>
#include <cstdio>
#include <fstream>
/**
 * @brief 库函数tmpnam(char* c)生成, 随机的文件名。最大数量TMP_MAX文件名最大长度L_tmpnam
 * 
 * @return int 
 */
int main()
{
    using namespace std;
    cout << "this system can generate" << TMP_MAX << " temporary names of up to "<<
    L_tmpnam << "characters\n";
    char pszName[L_tmpnam]={'\0'};
    cout << "here are ten names: \n";
    for (int i  =0; i< 10; i++)
    {
        tmpnam(pszName);
        cout << pszName << endl;
        ofstream f;
        f.open(pszName, ios::out);
        f<< pszName << endl;
        f.close();
    }
    return 0;
}
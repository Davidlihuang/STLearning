#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
    Student(const string& a, double b):name(a), score(b){}
    bool operator<(const Student& stu) const{
        return score< stu.score;
    }
    Student set(const string& a, const double &b)
    {
        name = a;
        score = b;
        return *this;
    }
    string name;
    double score;
};

bool name_sort_less(const Student& m, const Student& n)
{
    return m.name < n.name;
}
bool name_sort_greater(const Student& m, const Student& n)
{
    return m.name > n.name;
}
bool score_sort_less(const Student& m, const Student& n)
{
    return m.score < n.score;
}
bool score_sort_greater(const Student& m, const Student& n)
{
    return m.score > n.score;
}
void print(const Student& s)
{
    cout << s.name << " " << s.score << endl;
}

void original(vector<Student>& stu)
{
    Student st1("Tom", 74);
    stu.push_back(st1);
    stu.push_back(st1.set("Jimy", 56));
    stu.push_back(st1.set("Mary", 92));
    stu.push_back(st1.set("Jessy",85));
    stu.push_back(st1.set("Jone", 56));
    stu.push_back(st1.set("Bush", 52));
    stu.push_back(st1.set("Winter", 77));
    stu.push_back(st1.set("Ander", 63));
    stu.push_back(st1.set("Lily", 76));
    stu.push_back(st1.set("Maryia", 89));
}

int main()
{
    ///< 初始化
    vector<Student> stu;
    original(stu);
    for_each(stu.cbegin(), stu.cend(), print);

    ///< 排序
    sort(stu.begin(), stu.end()); //使用类<运算符
    cout << "defualt sort: " << endl;
    for_each(stu.cbegin(), stu.cend(), print);

    sort(stu.begin(), stu.end(), name_sort_less);
    cout << "name sort less: " << endl;
    for_each(stu.cbegin(), stu.cend(), print);

    sort(stu.begin(), stu.end(), name_sort_greater); 
    cout << "name sort greater: " << endl;
    for_each(stu.cbegin(), stu.cend(), print);

    sort(stu.begin(), stu.end(), score_sort_less); 
    cout << "score_sort_less: " << endl;
    for_each(stu.cbegin(), stu.cend(), print);

    sort(stu.begin(), stu.end(), score_sort_greater); 
    cout << "score_sort_greater: " << endl;
    for_each(stu.cbegin(), stu.cend(), print);

    return 0;
}
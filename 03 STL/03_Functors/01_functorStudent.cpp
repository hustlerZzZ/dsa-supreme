#include <iostream>
#include <vector>

using namespace std;

class Student
{
public:
    int marks;
    string name;

    Student(int m, string n)
    {
        this->marks = m;
        this->name = n;
    }
};

// functor
class StudentComparator
{
public:
    bool operator()(Student a, Student b)
    {
        return a.marks < b.marks;
    }
};

int main()
{
    Student s1(93, "Prince Pal");
    Student s2(91, "Ujjawal");

    StudentComparator cmp;
    if (cmp(s1, s2))
        cout << "Prince marks is less" << endl;
    else
        cout << "Ujjawal marks is less" << endl;

    return 0;
}

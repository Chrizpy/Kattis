#include <iostream>
#include <istream>
using namespace std;

int main()
{
    int n{};
    bool success{true};
    string f1;
    string f2;

    cin >> n >> f1 >> f2;

    if (n % 2 != 0)
    {
        for (int i{0}; i < f1.size(); i++)
        {
            if (f1.at(i) == f2.at(i))
            {
                success = false;
                break;
            }
        }
    }
    else
    {
        for (int i{0}; i < f1.size(); i++)
        {
            if (f1.at(i) != f2.at(i))
            {
                success = false;
                break;
            }
        }
    }

    if (success)
    {
        cout << "Deletion succeeded" << endl;
    }
    else
    {
        cout << "Deletion failed" << endl;
    }
    return 0;

}
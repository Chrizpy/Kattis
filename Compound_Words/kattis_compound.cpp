#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main()
{
    vector<string> words;
    string word;
    set<string> uniq_comp;

    while(cin >> word)
    {
        words.push_back(word);
    }

    for (auto it = words.begin(); it != words.end(); ++it )
    {
        for (auto ib = words.begin(); ib != words.end(); ++ib )
        {
            if (*it != *ib)
                uniq_comp.insert(*it + *ib);
        }
    }

    for (auto it = uniq_comp.begin(); it != uniq_comp.end(); ++it )
    {
        cout << *it << endl;
    }


  return 0;
}
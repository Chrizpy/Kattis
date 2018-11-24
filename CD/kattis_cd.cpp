#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int jack{0}, jill{0}, stash{0}, doubles{0};
    unordered_set<int> cds;

    while(scanf("%d%d", &jack, &jill))
    {
        if (jack + jill == 0)
            return 0;

        for (int i = 0; i < jack; ++i)
        {
            scanf("%d", &stash);
            cds.insert(stash);
        }

        for (int i = 0; i < jill; ++i)
        {
            scanf("%d", &stash);

            auto it = cds.find(stash);

            if (it != cds.end())
                ++doubles;

        }
        printf ("%d\n", doubles);

        cds.clear();
        doubles = 0;

    }

    return 1;
}
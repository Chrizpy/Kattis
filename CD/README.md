Basically I was introduced to these sort of problems during the course "Data Structures and Algorithms", TDDI16 is the course code at LiU.

We want to take the complexity of programs into consideration when writing them, to make programs fast and sustainable in the long run.
This is why you see me using this:
```
while(scanf("%d%d", &jack, &jill))                
    {
        if (jack + jill == 0)
            return 0;

        for (int i = 0; i < jack; ++i)
        {
            scanf("%d", &stash);
            cds.insert(stash);
        }
        .
        .
        .

while(cin >> jack >> jill)
    {
        if (jack + jill == 0)
            return 0;

        for (int i = 0; i < jack; ++i)
        {
            scanf("%d", &stash);
            cds.insert(stash);
        }
        .
        .
        .
```

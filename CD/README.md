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
```
As opposed to doing it like this:
```
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

Why I do it like this is easy! I went from a 1.15s running time to a whopping 0.55s!
Jokes aside. If you're interested, there's tons you can read about cin which was introduced in C++ along the iostream library
or scanf which is much older and stems from the older C library. If I remember correctly, there should be ways to optimize it so
the C++ way will be faster.

if(a<=b && a<=c)
    {
        if(a == b)
        {
            if(a==b && a==c)
            {
                cout << "a,b,c";
            }else {
            cout << "a,b";
            }
        }else if(a == c)
        {
            cout << "a,c";
        }else if(a<b && a<c)
        {
            cout << "a";
        }
    }
    else if(b<=a && b<=c)
    {
        if(b == a)
        {
            cout << "a,b";
        }else if(b == c)
        {
            cout << "b,c";
        }else if(b<a && b<c)
        {
            cout << "b";
        }
    }
    else if(c<=a && c<=b)
    {
        if(a == c)
        {
            cout << "a,c";
        }else if(c == b)
        {
            cout << "c,b";
        }else if(c<a && c<b)
        {
            cout << "c";
        }
    }

if(a>b)
{
    if(a>c)
    {
        cout << "A";
    }
    else {
        cout << "C";
    }
}
else {
    if(b>c)
    {
        cout << "B";
    }
    else {
        cout << "C";
    }
}
#include <iostream>
#include <cstring>

using namespace std;

class Base
{
public:
    Base * next;
    Base()
    {
        next = nullptr;
    }
    void setNext(Base * n)
    {
        next = n;
    }
    void add(Base * n)
    {
        if(next)
            next -> add(n);
        else
            next = n;
    }
    virtual void filter(string s)
    {
        next -> filter(s);
    }
};

class Filter1: public Base
{
public:
    void filter(string s) override
    {
        int j = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == ' ')
                j++;
        if (j)
            for (int i = 0; i < j; i++)
                s.erase(s.find(' '), 1);
        cout << "F1: " << "s = '" << s << "'" << endl;
        if (next)
            Base::filter(s);
    }
};

class Filter2: public Base
{
public:
    void filter(string s) override
    {
        int j = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '-')
                j++;
        if (j)
            for (int i = 0; i < j; i++)
                s.replace(s.find('-'), 1, "777");
        cout << "F1: " << "s = '" << s << "'" << endl;
        if (next)
            Base::filter(s);
    }
};

class Filter3: public Base
{
public:
    void filter(string s) override
    {
        cout << "F3: " << s << endl;
        if (next)
            Base::filter(s);
    }
};

class Filter4: public Base
{
public:
    void filter(string s) override
    {
        cout << "F4: " << s << endl;
        if (next)
            Base::filter(s);
    }
};

int main() {

    Filter1 root;
    Filter2 two;
    Filter3 thr;
    Filter4 four;

    string s = "   _12 -__sdgjvlv -[()yufjg}{[123]";
    root.add(&two);
    root.add(&thr);
    root.add(&four);

    root.filter(s);
    cout << endl;

//    string s1 = "hel lo";
//
//    s1.replace(s1.find(' '), 1, "777");
//
//    for (int i = 0; i < s1.size(); i++) {
//        cout << s1[i] << endl;
//    }

    return 0;
}
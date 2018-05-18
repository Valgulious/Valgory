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
        cout << "F1: " << "s = " << s << endl;
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
        cout << "F2: " << "s = " << s << endl;
        if (next)
            Base::filter(s);
    }
};

class Filter3: public Base
{
public:
    void filter(string s) override
    {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                for (int j = i+1; j < s.size(); j++)
                    if (s[j] == ')') {
                        s.erase(s.find('('), 1);
                        i--;
                        s.erase(s.find(')'), 1);
                    }
            if (s[i] == '{')
                for (int j = i+1; j < s.size(); j++)
                    if (s[j] == '}') {
                        s.erase(s.find('{'), 1);
                        i--;
                        s.erase(s.find('}'), 1);
                    }
            if (s[i] == '[')
                for (int j = i+1; j < s.size(); j++)
                    if (s[j] == ']') {
                        s.erase(s.find('['), 1);
                        i--;
                        s.erase(s.find(']'), 1);
                    }
        }
        cout << "F3: " << "s = " << s << endl;
        if (next)
            Base::filter(s);
    }
};

class Filter4: public Base
{
public:
    void filter(string s) override
    {
        for (int i = 0; i < s.size(); i++)
            if (int(s[i]) >= 65 && int(s[i]) <= 90)
                s[i] = char(int(s[i]) + 32);
            else if (int(s[i]) >= 97 && int(s[i]) <= 122)
                s[i] = char(int(s[i]) - 32);
        cout << "F4: " << "s = " << s << endl;
        if (next)
            Base::filter(s);
    }
};

int main() {

    Filter1 root;
    Filter2 two;
    Filter3 thr;
    Filter4 four;

    string s = "   _12 -__sdgjvlv --[()yufjg}{[123]";
    root.add(&two);
    root.add(&thr);
    root.add(&four);

    cout << "s = " << s << endl;
    root.filter(s);
    cout << endl;

    return 0;
}
#include <iostream>

using namespace std;

class Male
{
public:
    virtual void info() = 0;
    virtual ~Male() {}
};

class Female
{
public:
    virtual void info() = 0;
    virtual ~Female() {}
};

class MalePerson: public Male
{
public:
    void info()
    {
        cout << "Gender - Male" << endl;
    }
};

class FemalePerson: public Female
{
public:
    void info()
    {
        cout << "Gender - Female" << endl;
    }
};

class PersonFactory {
public:
   Male* createMale()
   {
       return new MalePerson;
   }
    virtual Female* createFemale()
    {
        return new FemalePerson;
    }
};


int main() {

    return 0;
}
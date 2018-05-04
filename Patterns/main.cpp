#include <iostream>

using namespace std;

//class Male
//{
//public:
//    virtual void info() = 0;
//    virtual ~Male() {}
//};
//
//class Female
//{
//public:
//    virtual void info() = 0;
//    virtual ~Female() {}
//};

class Gender
{
    virtual void genderInfo() = 0;
    virtual ~Gender() {}
};

class MalePerson: public Gender
{
public:
    void genderInfo()
    {
        cout << "Gender - Male" << endl;
    }
};

class FemalePerson: public Gender
{
public:
    void GenderInfo()
    {
        cout << "Gender - Female" << endl;
    }
};

class PersonFactory {
public:
   Gender* createMalePerson()
   {
       return new MalePerson;
   }
    virtual Gender* createFemalePerson()
    {
        return new FemalePerson;
    }
};


int main() {

    return 0;
}
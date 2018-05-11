#include <iostream>
#include <vector>

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
public:
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
    ~MalePerson() {}
};

class FemalePerson: public Gender
{
public:
    void genderInfo()
    {
        cout << "Gender - Female" << endl;
    }
    ~FemalePerson() {}
};

class PersonFactory {
public:
    virtual MalePerson* createMalePerson() = 0;
    virtual FemalePerson* createFemalePerson() = 0;
};

class MalePersonFactory : public PersonFactory
{
public:
    MalePerson* createMalePerson()
    {
        return new MalePerson;
    }
};

class FemalePersonFactory : public PersonFactory
{
public:
    FemalePerson* createFemalePerson()
    {
        return new FemalePerson;
    }
};


class Race
{
public:
    vector<MalePerson*> malePersons;
    vector<FemalePerson*> femalePersons;

    void info()
    {
        for (int i = 0; i < malePersons.size(); i++) malePersons[i]->genderInfo();
        for (int i = 0; i < femalePersons.size(); i++) femalePersons[i]->genderInfo();
    }

    ~Race()
    {
        for (int i = 0; i < malePersons.size(); i++) delete malePersons[i];
        for (int i = 0; i < femalePersons.size(); i++) delete femalePersons[i];
    }
};

class Game
{
public:
    Race * createRace(PersonFactory& factory)
    {
        Race * race = new Race;
        race->malePersons.push_back(factory.createMalePerson());
        race->femalePersons.push_back((factory.createFemalePerson()));
        return race;
    }
};

int main() {
//    MalePerson* malePerson = new MalePerson();
//    malePerson->genderInfo();
    Game game;
    MalePersonFactory mFactory;
    FemalePersonFactory fmFactory;
//    PersonFactory pFactrory;

    Race * race1 = game.createRace(mFactory);
    Race * race2 = game.createRace(fmFactory);
    race1->info();
    race2->info();

    return 0;
}
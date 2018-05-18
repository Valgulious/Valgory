#include <iostream>
#include <vector>

using namespace std;

class Caster
{
public:
    virtual void info() = 0;
    ~Caster()  = default;
};

class Archer
{
public:
    virtual void info() = 0;
    ~Archer()  = default;
};

class Saber
{
public:
    virtual void info() = 0;
    ~Saber() = default;
};

class Lancer
{
public:
    virtual void info() = 0;
    ~Lancer()  = default;
};

class Berserk
{
public:
    virtual void info() = 0;
    ~Berserk() = default;
};

class Assassin
{
public:
    virtual void info() = 0;
    ~Assassin() = default;
};

class Rider
{
public:
    virtual void info() = 0;
    ~Rider() = default;
};

class RedCaster : public Caster
{
public:
    void info() override
    {
        cout << "Red Caster" << endl;
    }
};

class RedArcher : public Archer
{
public:
    void info() override
    {
        cout << "Red Archer" << endl;
    }
};

class RedSaber : public Saber
{
public:
    void info() override
    {
        cout << "Red Saber" << endl;
    }
};

class RedLancer : public Lancer
{
public:
    void info() override
    {
        cout << "Red Lancer" << endl;
    }
};

class RedBerserk : public Berserk
{
public:
    void info() override
    {
        cout << "Red Berserk" << endl;
    }
};

class RedAssassin : public Assassin
{
public:
    void info() override
    {
        cout << "Red Assassin" << endl;
    }
};

class RedRider : public Rider
{
public:
    void info() override
    {
        cout << "Red Rider" << endl;
    }
};

class BlackCaster : public Caster
{
public:
    void info() override
    {
        cout << "Black Caster" << endl;
    }
};

class BlackArcher : public Archer
{
public:
    void info() override
    {
        cout << "Black Archer" << endl;
    }
};

class BlackSaber : public Saber
{
public:
    void info() override
    {
        cout << "Black Saber" << endl;
    }
};

class BlackLancer : public Lancer
{
public:
    void info() override
    {
        cout << "Black Lancer" << endl;
    }
};

class BlackBerserk : public Berserk
{
public:
    void info() override
    {
        cout << "Black Berserk" << endl;
    }
};

class BlackAssassin : public Assassin
{
public:
    void info() override
    {
        cout << "Black Assassin" << endl;
    }
};

class BlackRider : public Rider
{
public:
    void info() override
    {
        cout << "Black Rider" << endl;
    }
};

class FamiliarsFactory
{
public:
    virtual Caster * createCaster() = 0;
    virtual Archer * createArcher() = 0;
    virtual Saber * createSaber() = 0;
    virtual Lancer * createLancer() = 0;
    virtual Berserk * createBerserk() = 0;
    virtual Assassin * createAssassin() = 0;
    virtual  Rider * createRider() = 0;
    virtual ~FamiliarsFactory() = default;
};

class RedFamiliarsFactory : public FamiliarsFactory
{
public:
    Caster * createCaster() override
    {
        return new RedCaster;
    }
    Archer * createArcher() override
    {
        return new RedArcher;
    }
    Saber * createSaber() override
    {
        return new RedSaber;
    }
    Lancer * createLancer() override
    {
        return new RedLancer;
    }
    Berserk * createBerserk() override
    {
        return new RedBerserk;
    }
    Assassin * createAssassin() override
    {
        return  new RedAssassin;
    }
    Rider * createRider() override
    {
        return new RedRider;
    }
};

class BlackFamiliarsFactory : public FamiliarsFactory
{
public:
    Caster * createCaster() override
    {
        return new BlackCaster;
    }
    Archer * createArcher() override
    {
        return new BlackArcher;
    }
    Saber * createSaber() override
    {
        return new BlackSaber;
    }
    Lancer * createLancer() override
    {
        return new BlackLancer;
    }
    Berserk * createBerserk() override
    {
        return new BlackBerserk;
    }
    Assassin * createAssassin() override
    {
        return  new BlackAssassin;
    }
    Rider * createRider() override
    {
        return new BlackRider;
    }
};

class Familiars
{
public:
    Caster * caster;
    Archer * archer;
    Saber * saber;
    Lancer * lancer;
    Berserk * berserker;
    Assassin * assassin;
    Rider * rider;

    void info()
    {
        caster->info();
        archer->info();
        saber->info();
        lancer->info();
        berserker->info();
        assassin->info();
        rider->info();
    }

    ~Familiars()
    {
        delete caster;
        delete archer;
        delete saber;
        delete lancer;
        delete berserker;
        delete assassin;
        delete rider;
    }
};

class WarForTheHolyGrail
{
public:
    Familiars * createFamiliars(FamiliarsFactory& factory)
    {
        auto * familiars = new Familiars;
        familiars->caster = factory.createCaster();
        familiars->archer = factory.createArcher();
        familiars->saber = factory.createSaber();
        familiars->lancer = factory.createLancer();
        familiars->berserker = factory.createBerserk();
        familiars->assassin = factory.createAssassin();
        familiars->rider = factory.createRider();
        return familiars;
    }
};

int main() {
//    MalePerson* malePerson = new MalePerson();
//    malePerson->genderInfo();
    WarForTheHolyGrail fate;
    RedFamiliarsFactory redFactory;
    BlackFamiliarsFactory blackFactory;

    Familiars * redFamiliars = fate.createFamiliars(redFactory);
    Familiars * blackFamiliars = fate.createFamiliars(blackFactory);

    cout << "Red familiars:" << endl;
    redFamiliars->info();
    cout << endl << "Black familiars:" << endl;
    blackFamiliars->info();

    return 0;
}
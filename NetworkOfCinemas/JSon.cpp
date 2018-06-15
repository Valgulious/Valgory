#include "JSon.h"

void JSon::pars() {
    json j,j1,j4;

    j["pi"] = 3.141;
    j["happy"] = true;
    j["name"] = "Niels";
    j["nothing"] = nullptr;
    j["answer"]["everything"] = 42;
    j["list"] = {1, 0, 2};
    j4["object2"] = {{"object3", {{"name", "Andrew"}, {"age", 23}}}};
    ofstream o("../file.json");
    j1.push_back("foo");
    j1.push_back(1);
    j1.push_back(true);
    j["list2"] = j1;
    auto j3 = json::parse("{ \"happy\": true, \"pi\": 3.141 }");
//    cout << j3.dump(4) << endl;
    j["object"] = {{"currency", "USD"}, {"value", 42.99 }, {"object2", j3}};
    o << setw(4) << j << endl;
    json j2 = {
            {"pi", 3.141},
            {"happy", true},
            {"name", "Niels"},
            {"nothing", nullptr},
            {"answer", {
                           {"everything", 42},
                               {"list2", {5, 4, 2}}
                   }},
            {"list", {1, 0, 2}},
            {"object", {
                           {"currency", "USD"},
                         {"value", 42.99}
                   }},
            {"object2", {
                                {"object3", {
                                                    {"name", "Andrew"},
                                                    {"age", 23}
                                            }}
                        }}
    };
//    cout << j2.dump(4) << endl;
    json ot;
    ot["foo"] = 23;
    ot["bar"] = false;
    ot["baz"] = 3.141;
    ot["object"] = {{"name","Daniel"}, {"age", 32}};

    cout << ot.dump(4) << endl;

    ot.emplace("weather", "cloudy");
    ot["object"].emplace("sex", "male");
    cout << ot.dump(4) << endl;
}
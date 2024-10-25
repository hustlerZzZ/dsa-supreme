#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

int main()
{
    // creation
    unordered_map<string, string> table;
    map<string, string> table2;

    // insertion
    table["in"] = "India";
    table.insert(make_pair("en", "England"));

    pair<string, string> p;
    p.first = "br";
    p.second = "Brazil";

    table.insert(p);

    // Size of the map
    cout << table.size() << endl;

    // Checking the value
    cout << table.at("in") << endl;

    // iterator
    unordered_map<string, string>::iterator it = table.begin();

    while (it != table.end())
    {
        pair<string, string> p = *it;
        cout << p.first << " " << p.second << endl;
        // cout << (*it).first << " " << (*it).second << endl;
        it++;
    }

    table.find("in") != table.end() ? cout << "India found" : cout << "India not found " << endl;

    return 0;
}

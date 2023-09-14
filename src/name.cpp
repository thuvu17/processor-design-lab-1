#include "name.hpp"
using namespace std;

string ask_name()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    return name;
}
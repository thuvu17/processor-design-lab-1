#include "name.hpp"
using namespace std;

int main()
{
  string name = ask_name();
  std::cout << "Hello, " << name << "\n";
  return 0;
}

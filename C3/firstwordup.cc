#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

int main()
{
    string s = "hello there BOYS";

    for (auto it = s.begin(); it != s.end() && !isspace(*it); it++)
        *it = toupper(*it);

    std::cout << s << std::endl;
    return 0;
}
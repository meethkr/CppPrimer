#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> t1;
    vector<int> t2;

    t1.push_back(3);
    t2.push_back(3);

    auto it = t1.begin();
    auto it2 = t2.begin();

    std::cout << (*it == *it2) << std::endl;
}

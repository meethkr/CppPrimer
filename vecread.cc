#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> ivec;
    int temp;
    while (std::cin >> temp)
    {
        ivec.push_back(temp);
    }

    std::cout << "The size of the vector is " << ivec.size() << " and the elements are" << std::endl;
    for (auto i: ivec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

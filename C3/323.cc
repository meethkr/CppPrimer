#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> ivec;
    int temp;

    for (int i = 0; i < 10; i++)
    {
        std::cin >> temp;
        ivec.push_back(temp);
    }

    for (auto it = ivec.begin(); it != ivec.end(); it++)
    {
        *it = *it * 2;
    }

    for (auto i: ivec)
        std::cout << i << " ";

    std::cout << std::endl;

    return 0;
}
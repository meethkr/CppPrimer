#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> gvec(11, 0);
    int grade;
    while (std::cin >> grade)
    {
        if (grade <= 100)
            ++gvec[grade/10];
    }

    std::cout << "The grades clusters are" << std::endl;
    for (auto i : gvec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

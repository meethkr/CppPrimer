#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> ivec;
    int temp;

    while(std::cin >> temp)
    {
        ivec.push_back(temp);
    }

    for (decltype(ivec.size()) i = 0; i < ivec.size(); i++)
    {
        if (i < ivec.size()/2)
            std::cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
    }
    std::cout << std::endl;

    return 0;
}

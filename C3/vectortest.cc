#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> ivec;
    int n;
    std::cout << "Enter the value of n: " ;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
        ivec.push_back(i*i);

    vector<int> pdv(n, 23);

    for (int i = 0; i < n; i++)
        std::cout << ivec[i] - pdv[i] << " ";

    std::cout << std::endl;

    return 0;
}
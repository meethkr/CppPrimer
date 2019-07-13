#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> a1; //YOU WILL
    int temp;

    for (int i = 0; i < 10; i++)
    {
        std::cin >> temp;
        a1.push_back(temp);
    }

    auto runner = a1.begin();
    auto mid = a1.begin() + (a1.size() / 2);

    int key;
    std::cout << "Enter element to find: " ;
    std::cin >> key;
    while (1)
    {
        if (*mid == key)
        {
            std::cout << "Found at position " << mid - a1.begin();
            break;
        }
       
    }

    return 0;
}
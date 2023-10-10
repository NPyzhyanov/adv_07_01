#include <iostream>
#include <vector>
#include <set>

int main()
{
    std::vector<int> input_data = {1, 1, 2, 5, 6, 1, 2, 4};
    std::set<int> processed_data;
    
    std::cout << "[IN]:";
    for (auto it = input_data.cbegin(); it != input_data.cend(); it++)
    {
        std::cout << " " << *it;
        processed_data.insert(*it);
    }
    std::cout << std::endl;
    
    std::cout << "[OUT]:";
    for (auto it = processed_data.cbegin(); it != processed_data.cend(); it++)
    {
        std::cout << " " << *it;
    }
    std::cout << std::endl;
    
    return 0;
}

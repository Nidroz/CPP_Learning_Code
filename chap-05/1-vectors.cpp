#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5};
    // int* iterator_on_2nd_element = &array[1]; // or -> array + 1
    /*
    std::vector<int> v (4, 0);
    for (const auto value : v)
    {
        std::cout << value << std::endl;
    }
    */

    std::vector<int> part (&array[2], &array[5]);
    /*
    for (const auto value : part)
    {
        std::cout << value << std::endl;
    }
    */

    std::vector<int> full (array, array + 6);
    /*
    for (const auto value : full)
    {
        std::cout << value << std::endl;
    }
    */

    /*
    for (size_t left = 0, right = full.size() - 1; left < right; ++left, --right) {
        std::swap(full[left], full[right]);
    }
    */
    for (const auto value : full)
    {
        std::cout << value << std::endl;
    }
    std::cout << std::endl;
    /*
    for (auto it = full.begin(); it != full.end(); it += 2) {
        it = full.insert(it, *it);
    }
    */
    for (const auto value : full)
    {
        std::cout << value << std::endl;
    }
    std::cout << std::endl;
    
    while (!full.empty()) {
        full.pop_back();
    }

    if (full.empty()) {
        std::cout << "Vide !" << std::endl;
    }
    std::cout << std::endl;

    std::vector<int> v {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    v.erase(v.begin() + 2, v.begin() + 7);
    for (const auto value : v) {
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    const auto it = std::find(v.begin(), v.end(), 9);
    if (it != v.end()) {
        v.erase(it);
    }
    for (const auto value : v) {
        std::cout << value << std::endl;
    }
    std::cout << std::endl;


    std::vector<int> v2;
    v2.assign(5, 2);
    v2.assign({ 0, 2, 32, -4, 3 });
    v2.clear();

    return 0;
}
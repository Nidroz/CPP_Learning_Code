#include <array>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays() {
    // Implement array tests here.
    std::array<std::string, Fruit_Count> fruitNames;
    fruitNames[Apricot]   = "apricot";
    fruitNames[Cherry]    = "cherry";
    fruitNames[Mango]     = "mango";
    fruitNames[Raspberry] = "raspberry";
}

void try_lists() {
    std::list<int> l1 { 270, 93, 69, 213 };
    std::list<int> l2 { 1234, 5678, 0 };
    std::list<int> l3;
    std::list<int> l4;

    l1.sort();
    l2.sort();
    l1.merge(l2);

    l3.assign({ 12, 34, 56, 78, 90 });
    l4.emplace_front(2);
    l4.emplace_front(8);
    l4.emplace_front(7);

    // l3.splice(l3.begin(), l4);
    // l3.sort();
    l3.sort();
    l4.sort();
    l3.merge(l4);

    auto mid = l1.begin();
    std::advance(mid, l1.size() / 2);
    l1.splice(mid, l3);
}

void try_stacks() {
    // Implement stack tests here.
    std::stack<int, std::vector<int>> s1;
    s1.emplace(0);
    s1.emplace(1);
    s1.emplace(2);

    std::vector<int>                  v { 0, 1, 2 };
    std::stack<int, std::vector<int>> s2 { v };
    /*
    for (const auto elem : s1.top()) {
        std::cout << elem << std::endl;
    }
    */
   // => Marche pas, il semblerait qu'on définir les fonctions begin() et end()
}

int main() {
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}
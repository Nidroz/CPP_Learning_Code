#include "keys.h"

#include <iostream>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>


using Owner = std::pair<std::string, std::string>;

int main() {
    /*
    std::set<ComparableDog> dogs;
    ComparableDog           medor { "medor", "labrador" };
    dogs.emplace(medor);

    ComparableDog gus { "gus", "bordercollie" };
    dogs.emplace(gus);
    std::cout << dogs.size() << std::endl;

    ComparableDog medor_clone = medor;
    dogs.emplace(medor_clone);

    std::cout << dogs.size() << std::endl;
    */

    /*
    std::unordered_set<HashableDog> dogs;
    
    HashableDog medor { "medor", "labrador" };
    dogs.emplace(medor);
    std::cout << dogs.size() << std::endl;

    HashableDog medorClone = medor;
    dogs.emplace(medorClone);
    std::cout << dogs.size() << std::endl;
    */

    // remplacer ComparableDog par HashableDog, si on veut utiliser une unordored_map plutôt qu'une map
    std::map<ComparableDog, Owner> ownersByDog;
    ComparableDog medor { "medor", "labrador" };
    ComparableDog gus { "gus", "bordercollie" };
    ComparableDog zim { "zim", "poodle" };
    ComparableDog flippy { "flippy", "spaniel" };

    ownersByDog.insert(std::make_pair(medor, Owner {"Tonton", "Adolf"}));
    ownersByDog.insert_or_assign(gus, Owner {"Celine", "Noel"});
    ownersByDog.emplace(zim, Owner {"3ami", "Staline"});
    ownersByDog.try_emplace(flippy, "Sadam", "Hussein");

    ownersByDog.emplace(gus, Owner { "Claire", "David" });
    // -> gus is still owned by Marc (emplace does not modify values with existing keys, neither does insert or try_emplace)

    ownersByDog.insert_or_assign(gus, Owner { "Vincent", "Nozick" });
    // -> gus is now owned by Vincent (insert_or_assign reassign values with existing keys)
    return 0;
}
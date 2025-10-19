/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() {
    // testing 1.1
    int a = 1;
    int b = 2;
    int c = 3;

    swap_ptr(&a, &b, &c);

    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    // testing 1.2
    UniqueData d(5);
    std::cout << d.get() << std::endl;
    d.set(10);
    std::cout << d.get() << std::endl;

    // testing 2.1
    Knight k("Sir Knightalot");
    k.setWeapon("Vanquisher of C++");
    k.attack(); 

    // testing 2.2
    Sorcerer s("The Wicked Witch of the Linux");
    s.setAbility("Syntax Error");
    s.attack(); 

    // testing 2.3
    auto k2 = k.clone();
    auto s2 = s.clone();
    k2->attack(); 
    s2->attack(); 

    Duel<Knight, Sorcerer> duel(&k, &s);
    auto winner = duel.fight();
    winner->attack(); 

    return 0;


}


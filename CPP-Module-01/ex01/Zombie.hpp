#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie ();
        Zombie(std::string name);
        ~Zombie();
        
        void announce ();
        void setName (std::string name);
};

Zombie* zombieHorde (int n, std::string name);

#endif

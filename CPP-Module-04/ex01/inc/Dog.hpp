# ifndef DOG_HPP
#  define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *ideas;

    public :
        Dog ();
        Dog (const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

        void makeSound () const;
        Brain getIdea ( void ) const;
} ;

# endif
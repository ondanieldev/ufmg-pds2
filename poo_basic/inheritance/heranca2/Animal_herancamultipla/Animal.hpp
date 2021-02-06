#ifndef ANIMAL
#define ANIMAL

class Animal {

};

class Herbivoro : public Animal {

};

class Carnivoro : public Animal {

};

class Onivoro : public Herbivoro, public Carnivoro {

}; 

#endif
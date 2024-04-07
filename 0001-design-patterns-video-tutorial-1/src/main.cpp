#include "Animal.h"
#include "Bird.h"
#include "Dog.h"
#include <cstdio>

int main(int argc, char *argv[]) {
  Animal *boar = new Animal();

  boar->setName("boar");
  /* printf(boar->name); */
  printf("%s\n", boar->name.c_str());
  boar->move(2);
  boar->eat();

  Bird *bird = new Bird();
  bird->setName("birb");
  printf("%s\n", bird->name.c_str());
  bird->move(2);
  bird->eat();

  Dog *dog = new Dog();
  dog->setName("doggo");
  printf("%s\n", dog->name.c_str());
  dog->move(2);
  dog->eat();
  dog->digHole();

  return 0;
}

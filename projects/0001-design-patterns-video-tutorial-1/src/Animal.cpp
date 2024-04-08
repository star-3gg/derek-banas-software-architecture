#include "Animal.h"
#include <cstdio>

/**
 * Animal implementation
 */

/**
 * @return void
 */
Animal::Animal() { return; }

/**
 * @param int
 * @return void
 */
void Animal::move(int) {
  printf("moving...\n");
  return;
}

/**
 * @return void
 */
void Animal::eat() {
  printf("eating...\n");
  return;
}

/**
 * @param String
 * @return void
 */
void Animal::setName(string newName) {
  name = newName;
  return;
}

/**
 * @return String
 */
string Animal::getName() { return name; }

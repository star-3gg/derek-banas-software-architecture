#include <string>

#ifndef _ANIMAL_H
#define _ANIMAL_H

using std::string;
class Animal {
public:
  string name;
  double height;
  int weight;
  string favoriteFood;
  double speed;

  Animal();

  /**
   * @param int
   */
  void move(int);

  void eat();

  /**
   * @param String
   */
  void setName(string);

  string getName();
};
#endif //_ANIMAL_H

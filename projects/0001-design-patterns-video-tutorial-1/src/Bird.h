#ifndef _BIRD_H
#define _BIRD_H

#include "Animal.h"

class Bird : public Animal {
public:
  /**
   * @param int
   */
  void move(int);
};

#endif //_BIRD_H

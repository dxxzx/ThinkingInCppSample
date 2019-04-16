// OurMin.cpp
#ifndef OURMIN_CPP
#define OURMIN_CPP
#include "OurMin.h"
// The definition of min()
template<typename T> const T& min(const T& a, const T& b) {
  return (a < b) ? a : b;
}
#endif // OURMIN_CPP ///:~
//: C05:StringConv.h
// Function templates to convert to and from strings.
#ifndef STRINGCONV_H
#define STRINGCONV_H
#include <string>
#include <sstream>

template<typename T> T fromString(const std::string& s) {
  std::stringstream is(s);
  T t;
  is >> t;
  return t;
}

template<typename T> std::string toString(const T& t) {
  std::ostringstream s;
  s << t;
  return s.str();
}
#endif // STRINGCONV_H ///:~
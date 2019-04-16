//: C05:StaticAssert1.cpp {-xo}
// A simple. compile-time assertion facility
#define STATIC_ASSERT(x) \
  do { typedef int a[(x) ? 1 : -1]; } while(0)

int main() {
  STATIC_ASSERT(sizeof(int) <= sizeof(long)); // Passes
  //! STATIC_ASSERT(sizeof(double) <= sizeof(int)); // Fails
} ///:~
#ifndef FLOOIDSARRAY_HPP_
#define FLOOIDSARRAY_HPP_
#include <string>

class Grid {
private:
  int nx_ = 0;
  int ng_ = 0;
  double* data_;

public:
  FlooidsArray(const int N, const int G) {
    nx_ = N;
    ng_ = G;
    data_ = new double[nx_];
  };

  ~FlooidsArray() {
    delete[] data_;
  };

  void shout();

};



#endif // FLOOIDSARRAY_HPP_
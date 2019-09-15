#ifndef FLOOIDSARRAY_HPP_
#define FLOOIDSARRAY_HPP_
#include <string>

class Grid {
private:
  int nx_ = 0;
  int ng_ = 0;
  double* data_;

public:
  Grid(const int N, const int G) {
    nx_ = N;
    ng_ = G;
    data_ = new double[nx_];
  };

  ~Grid() {
    delete[] data_;
  };

  void shout();

};


class Flooid {
private:
  int nx_ = 0;
  int ng_ = 0;
  Grid* rho;
  Grid* vx;
  Grid* vy;

public:
  Flooid() {
    nx_ = N;
    ng_ = G;
    Grid rho(1,1);
    Grid vx(1,1);
    Grid vy(1,1);
  }

}



#endif // FLOOIDSARRAY_HPP_
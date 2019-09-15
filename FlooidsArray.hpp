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
    data_ = new double[nx_*nx_];
  };

  ~Grid() {
    delete[] data_;
  };

  void shout();
  int index(const int i, const int j);
  void WriteData(const std::string filename);

};


class Flooid {
private:
  int nx_ = 0;
  int ng_ = 0;
  Grid* rho;
  Grid* vx;
  Grid* vy;

public:
  Flooid(const int N, const int G) {
    nx_ = N;
    ng_ = G;
    Grid rho(N,G);
    Grid vx(N,G);
    Grid vy(N,G);
  };
  ~Flooid() {
    delete rho;
    delete vx;
    delete vy;
  };

  void shout();
  int index(const int i, const int j);
  void WriteData();
};



#endif // FLOOIDSARRAY_HPP_

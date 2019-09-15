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
    for (int i=0; i<nx_*nx_; i++)
    {
      data_[i]=0.;
    }
  };

  ~Grid() {
    delete[] data_;
  };

  void shout();
  int index(const int i, const int j);
  void WriteData(const std::string filename);
  void PrintAll();
  double GetVal(const int i, const int j);

};


class Flooid {
private:
  int nx_ = 0;
  int ng_ = 0;
  Grid *rho;
  Grid *vx;
  Grid *vy;

public:
  Flooid(const int N, const int G) {
    nx_ = N;
    ng_ = G;
    rho = new Grid(N,G);
    vx = new Grid(N,G);
    vy = new Grid(N,G);
  };
  ~Flooid() {
    delete rho;
    delete vx;
    delete vy;
  };

  void shout();
  int index(const int i, const int j);
  void WriteData();
  void Print();
};



#endif // FLOOIDSARRAY_HPP_

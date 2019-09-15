#include <iostream>
#include <cmath>
#include <fstream>
#include "FlooidsArray.hpp"
#include "FlooidsArray.cpp"
#include <string>
#include <omp.h>



int main() {

  Flooid test_flooid(5,5);
  test_flooid.shout();
  //test_flooid.WriteData();
  test_flooid.Print();

  return 0;
}
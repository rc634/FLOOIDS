#include <fstream>
#include <string>
#include <iostream>
#include "FlooidsArray.hpp"

void Grid::shout() {
	std::cout << "Haliboombah!" << std::endl;
}

void Flooid::shout() {
	std::cout << "SlurpySlurpy" << std::endl;
}

int Grid::index(const int i, const int j) {
	return i*nx_ + j;
}

int Flooid::index(const int i, const int j) {
	return i*nx_ + j;
}

void Grid::WriteData(const std::string filename) {
  std::ofstream outfile(filename,std::ios::binary);
  for (int i=0; i<nx_; ++i) {
    double val = data_[i];
    outfile.write(reinterpret_cast<const char*>(&val), sizeof(val));
  }
  outfile.close();
}

void Flooid::WriteData() {
	rho->WriteData("rho.dat");
}

void Grid::PrintAll() {
  for (int i=0; i<nx_*nx_; i++) {
    std::cout << i << ": " << rho.GetVal()
  }
}

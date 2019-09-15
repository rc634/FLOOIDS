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
  for (int i=0; i<nx_; i++) {
  	for (int j=0; j<nx_; j++) {
      std::cout << i << "," << j << ": " << 0. << std::endl;
    }
  }
}

double Grid::GetVal(const int i, const int j) {
  return data_[index(i,j)];
}

void Flooid::Print() {
	&rho.PrintAll();
}
// Create a function that takes a number returns a matrix(list of lists) 
// with height and width as the number, all of it's elments should be zero,
// beside the main diagonal should be ones like:
//
//1 0 0 0 0
//0 1 0 0 0
//0 0 1 0 0
//0 0 0 1 0
//0 0 0 0 1

#include <iostream>
#include <vector>

std::vector<std::vector<bool>> make_matrix(int number) {
  std::vector<std::vector<bool>> matrix(number, std::vector<bool>(number, 0));
  for (int i = 0; i < number; i++) {
    matrix[i].at(i) = 1;
  }
  return matrix;
}

void print_double_vector(const std::vector < std::vector<bool>>& vect) {
  for (unsigned int i = 0; i < vect.size(); i++) {
    for (unsigned int j = 0; j < vect[i].size(); j++) {
      std::cout << vect[i][j] << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

int main() {
  std::cout << "Please give me the size of the matrix: ";
  int input;
  std::cin >> input;
  print_double_vector(make_matrix(input));
  return 0;
}

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

int ask_a_number() {
  std::cout << "Please give me the size of the matrix: ";
  int input;
  std::cin >> input;
  while (input < 1) {
    std::cerr << "Error: Matrix size can not be negative. Try again.: ";
    std::cin >> input;
  }
  return input;
}

std::vector<std::vector<bool>> make_matrix(int number) {
  std::vector<std::vector<bool>> matrix(number, std::vector<bool>(number, 0));
  for (int i = 0; i < number; i++) {
    matrix[i][i] = 1;
  }
  return matrix;
}

void print_double_vector(const std::vector<std::vector<bool>>& vect) {
  for (unsigned int i = 0; i < vect.size(); i++) {
    for (unsigned int j = 0; j < vect[i].size(); j++) {
      std::cout << vect[i][j] << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

int main() {
  int size = ask_a_number();
  print_double_vector(make_matrix(size));
  return 0;
}

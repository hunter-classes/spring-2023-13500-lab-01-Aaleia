#include <iostream>

int main(){
  int first;
  int second;
  int third;
  std::cout << "Enter the first number: ";
  std::cin >> first;
  std::cout << "Enter the second number: ";
  std::cin >> second;
  std::cout << "Enter the third number: ";
  std::cin >> third;
  if (first < second && first < third){
    std::cout << "The smaller of the three is " << first << std::endl;
  }
  if (second < first && second < third){
    std::cout << "The smaller of the three is " << second << std::endl;
  }
  if (third < first && third < second){
    std::cout << "The smaller of the three is " << third << std::endl;
  }
  if (first == second && second == third){
    std::cout << "The numbers are all equal." << std::endl;
  }
}

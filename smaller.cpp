/*
Author: Aaleia Fernando
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1A

Write a program that asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>

int main(){
  int first;
  int second;
  std::cout << "Enter the first number: ";
  std::cin >> first;
  std::cout << "Enter the second number: ";
  std::cin >> second;
  if (first > second){
    std::cout << "The smaller of the two is " << second << std::endl;
  }
  if (second > first){
    std::cout << "The smaller of the two is " << first << std::endl;
  }
  if (first == second){
    std::cout << "The numbers are equal." << std::endl;
   }
}

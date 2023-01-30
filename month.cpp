/*
Author: Aaleia Fernando
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1D

Write a program that asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years).
*/

#include <iostream>

int main(){
  int year;
  int month;
  std::cout << "Enter year: ";
  std::cin >> year;
  std::cout << "Enter month: ";
  std::cin >> month;
  if (month == 2){
    if (year % 4 != 0){
      std::cout <<"28 days" << std::endl;
    }
    else if (year % 100 != 0){
      std::cout <<"29 days" << std::endl;
    }
    else if (year % 400 != 0){
      std::cout <<"28 days" << std::endl;
    }
    else {
      std::cout << "29 days" << std::endl;
    }
  }
  else if (month < 8){
    if (month % 2 == 0){
      std::cout << "30 days" << std::endl;
    }
    else {
      std::cout << "31 days" << std::endl;
    }
  }
  if (month >= 8){
    if (month % 2 == 0){
      std::cout << "31 days" << std::endl;
    }
    else {
      std::cout << "30 days" << std::endl;
    }
  }
}

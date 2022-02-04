#include <iostream>

void month(int year, int mes){
  std::cout << "among us " << std::endl;
  if ((mes%2) == 0){
    std::cout << "30 days" << std::endl;
  }if ((mes%2) != 0) {
    std::cout << "31 days" << std::endl;
  }
}

int main(){
  int year;
  int mes;
  std::cout << "Enter year:" << std::endl;
  std::cin >> year;
  std::cout << "Enter month:" << std::endl;
  std::cin >> mes;
  month(year,mes);
  return 0;
}
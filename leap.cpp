#include <iostream>

void leap(int year){ 
  // std::cout << year%400 << std::endl;
  // std::cout << year%4 << std::endl;
  if ((year%4)!=0){
    std::cout << "Common Year" << std::endl;
  } else if ((year%100)!= 0){
    std::cout << "Leap Year" << std::endl;
  }else if((year%400)!=0){
    std::cout << "Common Year";
  }else {
    std::cout << "Leap Year" << std::endl;
  }
}

int main(){
  int year;
  std::cout << "Enter year: ";
  std::cin >> year;
  leap(year);
  return 0;
}
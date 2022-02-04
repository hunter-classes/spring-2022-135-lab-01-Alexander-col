#include <iostream>

void leap(int year){ 
  std::cout << year%400 << std::endl;
  std::cout << year%4 << std::endl;
  if ((year%400) > 1) {
    std::cout << "Common year" << std::endl;
  }else if ((year%4) == 0){
    std::cout << "Leap year" << std::endl;
  }else{
    std::cout << "Common year" << std::endl;
  }
  
}

int main(){
  int year;
  std::cout << "Enter year: ";
  std::cin >> year;
  leap(year);
}
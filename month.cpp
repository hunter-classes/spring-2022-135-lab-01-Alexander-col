#include <iostream>

void month(int year, int mes){
  if (mes == 2){
      if ((year%4)!=0){
    std::cout << "28 days" << std::endl;
  } else if ((year%100)!= 0){
    std::cout << "29 days" << std::endl;
  }else if((year%400)!=0){
    std::cout << "28 days";
  }else {
    std::cout << "29 days" << std::endl;
  }
  }
  if ((mes%2) == 0 && mes != 2){
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

  // if ((year%4)!=0){
  //   std::cout << "Common Year" << std::endl;
  // } else if ((year%100)!= 0){
  //   std::cout << "Leap Year" << std::endl;
  // }else if((year%400)!=0){
  //   std::cout << "Common Year";
  // }else {
  //   std::cout << "Leap Year" << std::endl;
  // }
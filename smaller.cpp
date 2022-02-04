# include <iostream> 

void smaller(int a, int b){
  if (a > b){
    std::cout << "The smaller number of the two is: " << b;
  }else{
    std::cout << "The smaller number of the two is: " << a;
  }
}

int main(){
  int a;
  int b;
  std::cout << "Enter the first number: " << std::endl;
  std::cin >> a;
  std::cout << "Enter the second number: " << std::endl;
  std::cin >> b;
  smaller(a,b);
  return 0;
}


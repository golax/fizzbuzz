#include <stdio.h>

char * check(int num){
  if (num % 15 == 0){ return "FizzBuzz\n";}
  else if (num % 5 == 0) {return "Buzz\n";}
  else if (num % 3 == 0) {return "Fizz\n";}
  else {return "";}
}

int main(){
  for(int i = 1; i < 101; i++){
    printf("%d\n", i);
    printf("%s", check(i));
  }
}

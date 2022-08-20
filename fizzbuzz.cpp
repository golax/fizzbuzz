#include <iostream> 
#include <math.h>
using namespace std;

int main() { 
    for (int i = 1; i < 30; i++){ 
        i % 3 == 0 && i % 5 == 0 ? cout << "FizzBuzz" << i << endl : i % 3 == 0 || i % 5 == 0 ? cout << "Fizz" << i << endl : cout << "Buzz" << i << endl ;;
    }
}
#include <iostream>

using namespace std;

int main() {
  for (int h = 0; h < 100; h++)
    for (int p = 0; p < 100; p++)
      for (int r = 0; r < 100; r++)
        if(h+p+r == 100)
          if(((h * 10) + (p * 3) + (r * 0.50)) == 100)
            cout << "Found one! " << h << " horses " << p << " pigs " << r << " rabbits " << endl;

}

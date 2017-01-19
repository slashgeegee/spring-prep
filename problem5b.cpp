#include <iostream>

using namespace std;

int main() {
  for (int book1 = 0; book1 < 720; book1++)
    for (int book2 = 0; book2 < 720; book2++)
      for (int book3 = 0; book3 < 720; book3++)
        for (int book4 = 0; book4 < 720; book4++)
          for (int book5 = 0; book5 < 720; book5++)
            for (int book6 = 0; book6 < 720; book6++)
              if (book1+book2+book3+book4+book5+book6 == 720)


              cout << book1 << " books " << book2 << " books " << book3 << " books " << book4 << " books " << book5 << " books " << book6 << " books " \
              << endl;
              cin.clear();
              cin.ignore(1000, '\n');
              return 0;
}


/* infinit loop */

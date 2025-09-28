/*#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int year;
public:
    Book& setTitle(const string& t) {
        title = t;
        return *this;
    }
    Book& setAuthor(const string& a) {
        author = a;
        return *this;
    }
    Book& setYear(int y) {
        year = y;
        return *this;
    }
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Book b1;
    b1.setTitle("C++ Programming")
      .setAuthor("Bjarne Stroustrup")
      .setYear(1985);
       b1.display();
      return 0;
}*/
#include <iostream>
#include <string.h>  // For using strcpy and strlen

using namespace std;

class Book {
private:
    char title[100];   // Fixed-size character array for title
    char author[100];  // Fixed-size character array for author
    int year;

public:
    Book& setTitle(const char* t) {
        strncpy(title, t, sizeof(title) - 1);
        title[sizeof(title) - 1] = '\0';  // Ensuring null termination
        return *this;
    }

    Book& setAuthor(const char* a) {
        strncpy(author, a, sizeof(author) - 1);
        author[sizeof(author) - 1] = '\0';  // Ensuring null termination
        return *this;
    }

    Book& setYear(int y) {
        year = y;
        return *this;
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Book b1;
    b1.setTitle("C++ Programming")
      .setAuthor("Bjarne Stroustrup")
      .setYear(1985);

    b1.display();

    return 0;
}

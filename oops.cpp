#include <iostream>
#include <string>  // For using std::string

using namespace std;

class Book {
private:
    string title;   // String to store the title of the book
    string author;  // String to store the author of the book
    int year;       // Publication year
    float price;    // Price of the book

public:
    // Inline constructor to initialize the member variables
    Book(string t = "", string a = "", int y = 0, float p = 0.0)
        : title(t), author(a), year(y), price(p) {}

    // Setter functions
    Book& setTitle(string title) {
        this->title = title;
        return *this;
    }

    Book& setAuthor(string author) {
        this->author = author;
        return *this;
    }

    Book& setYear(int year) {
        this->year = year;
        return *this;
    }

    Book& setPrice(float price) {
        this->price = price;
        return *this;
    }

    // Getter functions
    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }

    int getYear() {
        return year;
    }

    float getPrice() {
        return price;
    }

    // Display function
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book b1;
    b1.setTitle("C++ Programming")
      .setAuthor("Bjarne Stroustrup")
      .setYear(1985)
      .setPrice(39.99);

    b1.display();

    return 0;
}

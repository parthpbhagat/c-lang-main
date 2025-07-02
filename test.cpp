

//                                  Q1

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string address;

public:
    Person(string n, int a, string addr)
    {
        name = n;
        age = a;
        address = addr;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getAddress()
    {
        return address;
    }

    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setAddress(string addr)
    {
        address = addr;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "--------------------------" << endl;
    }
};

int main()
{
    int N;
    cout << "Enter number of persons: ";
    cin >> N;

    Person *persons[N];

    for (int i = 0; i < N; ++i)
    {
        string name, address;
        int age;
        cout << "\nEnter details for person " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore();
        cout << "Address: ";
        getline(cin, address);

        persons[i] = new Person(name, age, address);
    }

    cout << "\n---- Person Details ----\n";
    for (int i = 0; i < N; ++i)
    {
        persons[i]->display();
    }

    for (int i = 0; i < N; ++i)
    {
        delete persons[i];
    }

    return 0;
}

//                                       Q2
#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int publishedYear;

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Published Year: " << publishedYear << endl;
        cout << "---------------------------" << endl;
    }
};

int main()
{

    Book books[3];

    books[0].title = "The Great Gatsby";
    books[0].author = "F. Scott Fitzgerald";
    books[0].publishedYear = 1925;

    books[1].title = "1984";
    books[1].author = "George Orwell";
    books[1].publishedYear = 1949;

    books[2].title = "To Kill a Mockingbird";
    books[2].author = "Harper Lee";
    books[2].publishedYear = 1960;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Book " << i + 1 << " Details:\n";
        books[i].display();
    }

    return 0;
}

                                Q3
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void displayDetails() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    void displayDetails() override
    {
        cout << "Animal: Dog\nSound: Woof!\nLoyal and friendly.\n"
             << endl;
    }
};

class Cat : public Animal
{
public:
    void displayDetails() override
    {
        cout << "Animal: Cat\nSound: Meow!\nLoves to nap and climb.\n"
             << endl;
    }
};

class Bird : public Animal
{
public:
    void displayDetails() override
    {
        cout << "Animal: Bird\nSound: Chirp!\nCan fly and sing.\n"
             << endl;
    }
};

int main()
{

    Animal *animals[3];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Bird();

    for (int i = 0; i < 3; ++i)
    {
        animals[i]->displayDetails();
    }

    for (int i = 0; i < 3; ++i)
    {
        delete animals[i];
    }

    return 0;
}

//                            Q4
#include <iostream>
#include <cmath>
using namespace std;
class Shape
{
public:
    virtual float area() = 0;
    virtual void draw() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float area() override
    {
        return 3.14159 * radius * radius;
    }

    void draw() override
    {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() override
    {
        return length * width;
    }

    void draw() override
    {
        cout << "Drawing a Rectangle of size " << length << " x " << width << endl;
    }
};

int main()
{

    Shape *shapes[2];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i)
    {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl
             << endl;
    }

    for (int i = 0; i < 2; ++i)
    {
        delete shapes[i];
    }

    return 0;
}

//                        Q5
#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator-(const Complex &obj)
    {
        Complex result;
        result.real = real - obj.real;
        result.imag = imag - obj.imag;
        return result;
    }

    void display()
    {
        cout << real << endl;
    }
};

int main()
{
    Complex c1(4, 7);
    Complex c2(2, 3);

    Complex result = c1 - c2;

    cout << "Result of subtraction: ";
    result.display();

    return 0;
}

// //                        Q6
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void displayDetails() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    void displayDetails() override
    {
        cout << "Animal: Dog" << endl;
        cout << "Sound: Woof!" << endl;
        cout << "Dogs are loyal and friendly." << endl
             << endl;
    }
};
class Cat : public Animal
{
public:
    void displayDetails() override
    {
        cout << "Animal: Cat" << endl;
        cout << "Sound: Meow!" << endl;
        cout << "Cats love to nap and climb." << endl
             << endl;
    }
};
class Elephant : public Animal
{
public:
    void displayDetails() override
    {
        cout << "Animal: Elephant" << endl;
        cout << "Sound: Trumpet!" << endl;
        cout << "Elephants are the largest land animals." << endl
             << endl;
    }
};

int main()
{
    Animal *zoo[3];
    zoo[0] = new Dog();
    zoo[1] = new Cat();
    zoo[2] = new Elephant();
    cout << "Displaying Animal Details:\n\n";
    for (int i = 0; i < 3; ++i)
    {
        zoo[i]->displayDetails();
    }

    for (int i = 0; i < 3; ++i)
    {
        delete zoo[i];
    }

    return 0;
}

//                              Q7
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    try
    {
        if (b == 0)
            throw "Division by zero is not allowed!";

        cout << "Result: " << a / b << endl;
    }
    catch (const char *err)
    {
        cout << "Error: " << err << endl;
    }

    return 0;
}

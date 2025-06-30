//                        practical 5 library management system

#include <iostream>
#include <string.h>
using namespace std;
class LibraryItem
{
protected:
    int id;
    string title;
    bool available = true;

public:
    LibraryItem(int i, string t) : id(i), title(t) {}
    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;
    int getID() { return id; }
    virtual ~LibraryItem() {}
};
class Book : public LibraryItem
{
protected:
    string author;

public:
    Book(int i, string t, string a) : LibraryItem(i, t), author(a) {}
    void checkOut() override
    {
        if (available)
        {
            available = false;
            cout << "Borrowed."<<endl;
        }
        else
            cout << "Already borrowed."<<endl;
    }
    void returnItem() override
    {
        if (!available)
        {
            available = true;
            cout << "Returned.\n";
        }
        else
            cout << "Already in library.\n";
    }
    void displayDetails() override
    {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author
             << ", Status: " << (available ? "Available" : "Borrowed") << endl;
    }
};
class SpecialBook : public Book
{
public:
    SpecialBook(int i, string t, string a) : Book(i, t, a) {}
    void displayDetails() override
    {
        cout << "[Special] ";
        Book::displayDetails();
    }
};
class DVD : public LibraryItem
{
    string director;

public:
    DVD(int i, string t, string d) : LibraryItem(i, t), director(d) {}
    void checkOut() override
    {
        if (available)
        {
            available = false;
            cout << "Borrowed.\n";
        }
        else
            cout << "Already borrowed.\n";
    }
    void returnItem() override
    {
        if (!available)
        {
            available = true;
            cout << "Returned.\n";
        }
        else
            cout << "Already in library.\n";
    }
    void displayDetails() override
    {
        cout << "ID: " << id << ", Title: " << title << ", Director: " << director
             << ", Status: " << (available ? "Available" : "Borrowed") << endl;
    }
};
class Library
{
    LibraryItem **items;
    int count;
    int capacity;

public:
    Library() : items(nullptr), count(0), capacity(0) {}
    void add(LibraryItem *item)
    {
        if (count == capacity)
        {
            int newCap = capacity == 0 ? 4 : capacity * 2;
            LibraryItem **newArr = new LibraryItem *[newCap];
            for (int i = 0; i < count; ++i)
                newArr[i] = items[i];
            delete[] items;
            items = newArr;
            capacity = newCap;
        }
        items[count++] = item;
    }
    void list()
    {
        if (count == 0)
            cout << "No items.\n";
        else
            for (int i = 0; i < count; ++i)
                items[i]->displayDetails();
    }
    LibraryItem *find(int id)
    {
        for (int i = 0; i < count; ++i)
            if (items[i]->getID() == id)
                return items[i];
        return nullptr;
    }
    ~Library()
    {
        for (int i = 0; i < count; ++i)
            delete items[i];
        delete[] items;
    }
};

int main()
{
    Library lib;
    int choice, id;
    string title, author, director;
    while (true)
    {
        cout << "1. Add Book " << endl;
        cout << "2. Add DVD " << endl;
        cout << "3. List" << endl;
        cout << "4. Search" << endl;
        cout << "5. Borrow" << endl;
        cout << "6. return" << endl;
        cout << "7. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
        if (choice == 7)
            break;
        switch (choice)
        {
        case 1:
            cout << "ID: ";
            cin >> id;
            cin.ignore();
            cout << "Title: ";
            getline(cin, title);
            cout << "Author: ";
            getline(cin, author);
            lib.add(id % 2 == 0 ? new Book(id, title, author) : new SpecialBook(id, title, author));
            break;
        case 2:
            cout << "ID: ";
            cin >> id;
            cin.ignore();
            cout << "Title: ";
            getline(cin, title);
            cout << "Director: ";
            getline(cin, director);
            lib.add(new DVD(id, title, director));
            break;
        case 3:
            lib.list();
            break;
        case 4:
        case 5:
        case 6:
            cout << "Item ID: ";
            cin >> id;
            {
                LibraryItem *item = lib.find(id);
                if (!item)
                    cout << "Not found.\n";
                else if (choice == 4)
                    item->displayDetails();
                else if (choice == 5)
                    item->checkOut();
                else if (choice == 6)
                    item->returnItem();
            }
            break;
        default:
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}

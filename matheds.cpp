// #include<iostream>
// using namespace std;
// class myclass{
//     public:
//    void mymethod(){
//         cout<<"hallo world"<<endl;
//     };

// };
// int main (){
//     myclass myobj;
//     myobj.mymethod();
// }

// #include <iostream>
// using namespace std;
// class parth
// {
// public:
//     void patel()
//     {
//         cout << "hello world";
//     }
// };
// int main()
// {
//     parth myobj;
//     myobj.patel();
// }

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//   // Create a map that will store the name and age of different people
//   map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

//   // Get the value associated with the key "John"
//   cout << "John is: " << people["John"] << "\n";

//   // Get the value associated with the key "Adele"
//   cout << "Adele is: " << people["Adele"] << "\n";

//   return 0;
// }

// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     map<string, int> people{{"parth", 25}, {"jay", 27}, {"prabhat", 30}};

//     cout << "jay is:" << people["jay"];
//     cout<<"prabhat is:"<<people["prabhat"];
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     for (int i = 0; i <=5; i++)
//     {for (int j = 0; j <= i; j++)
//     {
//        cout<<"*";
//     }

//         cout<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string.h>

// using namespace std;

// // constrcutor
// //  Name must be same as class name
// //  constructor never have any return datatype
// //  constructor never return anything

// class City
// {
// public:
//   int id;
//  char name[100];

//   // paramaterised constructor
//   City(int i, const char n[]) // constructor
//   {
//     this->id = i;
//     strcpy(this->name, n);

//     // cout << "welcome to city" << endl;

//     cout << this->id << " " <<this->name<<endl;
//   }

// //   City()
// //   {
// //     cout << "default Constructor" << endl;
// //   }
// };

// int main()
// {

//   // City c1; // class is instantiated

//   // City c1;
//   // City c2;

//   // City c[10]; // it means contructor function call 10 times

//   City c1(1,"goa");
// //   City c2(2);
// //   City c3(3);
// //   City c4(4);

// //   City c5(5);
// //   City c6;
//   return 0;
// }

// #include <iostream>
// #include<string.h>
// using namespace std;
// class City{
//     public:
//     int ID;
//     char name[100];
//     City(int i,const char n[])
//     {
//         this->ID=i;
//         strcpy(this -> name,n);
//         cout<<this->ID<<" "<<this->name<<endl;
//     };
//     City(){
//         cout<<"defoult constractar"<<endl;
//     };
// };
// int main (){
//     City c1(1,"nagpur");
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// struct Ticket {
//     int ticketID;
//     string name;
//     int age;
//     string trainName;
//     string destination;
// };

// vector<Ticket> tickets;
// int ticketCounter = 1;

// void bookTicket() {
//     Ticket t;
//     t.ticketID = ticketCounter++;

//     cout << "Enter passenger name: ";
//     // cin >> ws;
//     getline(cin, t.name);

//     cout << "Enter age: ";
//     cin >> t.age;

//     cout << "Enter train name: ";
//     cin >> ws;
//     getline(cin, t.trainName);

//     cout << "Enter destination: ";
//     cin >> ws;
//     getline(cin, t.destination);

//     tickets.push_back(t);
//     cout << "Ticket booked successfully! Ticket ID: " << t.ticketID << endl;
// }

// void viewTickets() {
//     if (tickets.empty()) {
//         cout << "No tickets booked yet.\n";
//         return;
//     }

//     cout << "\n--- Booked Tickets ---\n";
//     for (const auto& t : tickets) {
//         cout << "Ticket ID: " << t.ticketID << endl;
//         cout << "Name: " << t.name << ", Age: " << t.age << endl;
//         cout << "Train: " << t.trainName << ", Destination: " << t.destination << "\n\n";
//     }
// }

// void cancelTicket() {
//     int id;
//     cout << "Enter Ticket ID to cancel: ";
//     cin >> id;

//     bool found = false;
//     for (auto it = tickets.begin(); it != tickets.end(); ++it) {
//         if (it->ticketID == id) {
//             tickets.erase(it);
//             cout << "Ticket ID " << id << " canceled successfully.\n";
//             found = true;
//             break;
//         }
//     }

//     if (!found) {
//         cout << "Ticket ID not found.\n";
//     }
// }

// int main() {
//     int choice;

//     do {
//         cout << "\n--- Railway Reservation System ---\n";
//         cout << "1. Book Ticket\n";
//         cout << "2. View Tickets\n";
//         cout << "3. Cancel Ticket\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch(choice) {
//             case 1: bookTicket(); break;
//             case 2: viewTickets(); break;
//             case 3: cancelTicket(); break;
//             case 4: cout << "Exiting...\n"; break;
//             default: cout << "Invalid choice. Try again.\n";
//         }
//     } while (choice != 4);

//     return 0;
//}

// #include <iostream>
// #include <string.h>
// using namespace std;
// class cafe
// {
// private:
//     string cafe_name, cafe_type, cafe_rating, cafe_location;
//     int cafe_estabalish_year, cafe_staff_quntity;

// public:
//     cafe(string n, string t, string r, string l, int y, int q)
//     {
//         (cafe_name = n,
//          cafe_type = t,
//          cafe_rating = r,
//          cafe_location = l,
//          cafe_estabalish_year = y,
//          cafe_staff_quntity = q);
//     }
//     void displayinfo()
//     {
//         cout << "cafe name :" <<" "<< cafe_name << endl;
//         cout << "cafe type :" <<" "<< cafe_type << endl;
//         cout << "cafe rating :"<<" "<< cafe_rating << endl;
//         cout << "cafe location :" <<" "<< cafe_location << endl;
//         cout << "cafe estabalish year :" <<" "<< cafe_estabalish_year << endl;
//         cout << "cafe staff quntity :" <<" "<< cafe_staff_quntity << endl;
//     }
// };

// int main()
// {
// cafe mycafe("craving","cafe","5 star","ahemdabad",2025,25);
// mycafe.displayinfo();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Car
// {
// private:
//     // Private data members
//     string brand;
//     int year;

// public:
//     // Constructor
//     Car(string b, int y)
//     {
//         brand = b;
//         year = y;
//     }

//     // Member function to display car details
//     void displayInfo()
//     {
//         cout << "Brand: " << brand << ", Year: " << year << endl;
//     }
// };

// int main()
// {
//     // Creating an object of the class
//     Car myCar("Toyota", 2022);

//     // Calling a member function
//     myCar.displayInfo();

//     return 0;
// }



#include <iostream>
#include <string.h>
using namespace std;
class compony
{
private:
     int comp_id;
    string comp_name;
    int comp_staff_quantity;
    string comp_revenew;
    string comp_ceo;

public:
    compony(int i,string n,int q, string r, string c)
    {
        (comp_id = i,
         comp_name = n,
         comp_staff_quantity = q,
         comp_revenew = r,
         comp_ceo=c);
    }
    void displayinfo()
    {
        cout << "compony id :" <<" "<< comp_id << endl;
        cout << "compony name :" <<" "<< comp_name << endl;
        cout << "compony staff quantity:"<<" "<< comp_staff_quantity << endl;
        cout << "compony revenew :" <<" "<< comp_revenew << endl;
        cout << "compony ceo :" <<" "<< comp_ceo<< endl;
       
    }
};

int main()
{
compony mycomp(1081,"red and white",55,"good","parth patel");
mycomp.displayinfo();
    return 0;
}


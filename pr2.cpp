

                           //PR1 Railway resarvation syatem
#include <iostream>
#include <string>

using namespace std;

                                     // Train Class 
class Train {
private:
    int trainNo;
    string trainName;
    string source;
    string destination;
    string traintime;

public:
                                  // Default Constructor
    Train() : trainNo(0), trainName(""), source(""), destination(""),traintime("") {}

                                 // Parameterized Constructor
    Train(int no, string name, string src, string dest,string time) {
        trainNo = no;
        trainName = name;
        source = src;
        destination = dest;
        traintime = time;
    }

                               // Getters
    int getTrainNo() const { return trainNo; }
    string getTrainName() const { return trainName; }
    string getSource() const { return source; }
    string getDestination() const { return destination; }
    string getTratintime()const{return traintime;}

                                 // Setters
    void setTrainNo(int no) { trainNo = no; }
    void setTrainName(const string& name) { trainName = name; }
    void setSource(const string& src) { source = src; }
    void setDestination(const string& dest) { destination = dest; }
    void setTraintime(string& t){traintime = t;}

                            // Display function
    void displayTrain() const {
        cout << "Train No: " << trainNo
             << ", Name: " << trainName
             << ", From: " << source
             << ", To: " << destination
             <<",traintime: "<<traintime << endl;
    }
};

                          // RailwayReservation Class 
class RailwayReservation {
private:
    Train trains[100]; // fixed-size array
    int count;

public:
                              // Constructor
    RailwayReservation() {
        count = 0;
    }

                          // Add new train record
    void addTrain() {
        if (count >= 100) {
            cout << "Cannot add more trains. Limit reached." << endl;
            return;
        }

        int no;
        string name, src, dest,time;

        cout << "\nEnter Train Number: ";
        cin >> no;
        cin.ignore();

        cout << "Enter Train Name: ";
        getline(cin, name);

        cout << "Enter Source Station: ";
        getline(cin, src);

        cout << "Enter Destination Station: ";
        getline(cin, dest);


        cout <<"enter train time :";
        cin>>time;

        trains[3] = Train(no, name, src, dest,time);
        count++;

        cout << "Train added successfully!\n";
    }

           // Display all train records
    void displayAllTrains() const {
        if (count == 0) {
            cout << "No train records available.\n";
            return;
        }

        cout << "\n--- All Train Records ---\n";
        for (int i = 0; i < count; ++i) {
            trains[i].displayTrain();
        }
    }

                       // Search train by number
    void searchTrainByNumber() const {
        int searchNo;
        cout << "\nEnter Train Number to Search: ";
        cin >> searchNo;

        for (int i = 0; i < count; ++i) {
            if (trains[i].getTrainNo() == searchNo) {
                cout << "Train Found:\n";
                trains[i].displayTrain();
                return;
            }
        }

        cout << "Train not found with number: " << searchNo << "\n";
    }
};

                             //  Main Function
int main() {
    RailwayReservation system;
    int choice;

    do {
        cout << "\n===== Railway Reservation System Menu =====\n";
        cout << "1. Add New Train Record\n";
        cout << "2. Display All Train Records\n";
        cout << "3. Search Train by Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.addTrain();// press 1 and call addTrain function
                break;
            case 2:
                system.displayAllTrains();//press 2 and call displayAll train function
                break;
            case 3:
                system.searchTrainByNumber();//press 3 and call search train by number
                break;
            case 4:
                cout << "Exiting... Thank you!\n";//press 4 exit
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
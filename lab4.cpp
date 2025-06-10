#include <iostream>
#include <string>
using namespace std;
class myclass
{
private:
    int hotel_ID, hotel_estabilish_year,hotel_staff_quantity,hotel_room_quatity;
    string hotel_name,hotel_type,hotel_rating,hotel_location;

public:
    void satter(int hotel_ID,
                string hotel_name,
                string hotel_type,
                string hotel_rating,
                string hotel_location,
                int hotel_estabalish_year,
                int hotel_staff_quantity,
            int hotel_room_quntity)
    {

        this->hotel_ID=hotel_ID;
        this->hotel_name=hotel_name;
        this->hotel_type=hotel_type;
        this->hotel_rating=hotel_rating;
        this->hotel_location=hotel_location;
        this->hotel_estabilish_year=hotel_estabalish_year;
        this->hotel_staff_quantity=hotel_staff_quantity;
        this->hotel_room_quatity=hotel_room_quntity;
    };
    void getter()
    {
        cout << "ID" << " " << hotel_ID << " " << endl;
        cout << "name" << " " << hotel_name << " " << endl;
        cout << "type" << " " << hotel_type << " " << endl;
        cout << "rating" << " " << hotel_rating << " " << endl;
        cout << "location" << " " << hotel_location << " " << endl;
        cout << "year" << " " << hotel_estabilish_year << " " << endl;
        cout << "staff quantity" << " " << hotel_staff_quantity << " " << endl;
          cout << "room quatity" << " " << hotel_room_quatity << " " << endl;
    }
};
int main()
{
    myclass record1, record2, record3, record4, record5;

    record1.satter(1234,"ITC narmada","hotel","5 star","ahemdabad",2025,1000,1000);
    record2.satter(1235,"ITC narmada","hotel","5 star","ahemdabad",2025,1000,1000);
    record3.satter(1236,"ITC narmada","hotel","5 star","ahemdabad",2025,1000,1000);
    record4.satter(1237,"ITC narmada","hotel","5 star","ahemdabad",2025,1000,1000);
    record5.satter(1238,"ITC narmada","hotel","5 star","ahemdabad",2025,1000,1000);

    record1.getter();
    record2.getter();
    record3.getter();
    record4.getter();
    record5.getter();
    return 0;
}


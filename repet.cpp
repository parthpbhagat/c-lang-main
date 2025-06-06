// #include <iostream>
// #include <string>
// using namespace std;
// class myclass
// {
// private:
//     int stu_id, stu_age;
//     string stu_name, stu_collage;
//     public:
//     void satter(int stu_id, int age, string name, string collage)
//     {
//         // cout<<"enter student ID"<<endl;
//         // cin>>stu_id;
//         //  cout<<"enter student age"<<endl;
//         // cin>>stu_age;
//         // cout<<"enter student name"<<endl;
//         // cin>>stu_name;
//         //  cout<<"enter student collage"<<endl;
//         // cin>>stu_collage;
//         this->stu_id=stu_id, stu_age = age;
//         stu_name = name, stu_collage = collage;
//     };
//     void getter()
//     {
//         cout <<"id"<< stu_id << endl
//              <<"age"<< stu_age << endl
//              <<"name"<< stu_name << endl
//             <<"collage" << stu_collage << endl
//              << endl;
//     };
// };
// int main()
// {

//     myclass record1, record2;
//     // record1.stu_id=12345;
//     // record1.stu_name="parth";
//     // record1.stu_collage="GTU";

//     // cout<<record1.stu_age<<endl;
//     // cout<<record1.stu_name<<endl;
//     // cout<<record1.stu_id<<endl;
//     // cout<<record1.stu_collage<<endl;
//     record1.satter(88, 6878, "parth", "GTU");
//     record2.satter(89, 687, "prabhat", "GTU");
//     record1.getter();
//     record2.getter();
//     record1.getter();

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
class myclass
{
private:
    int stu_ID, stu_age;
    string stu_name, stu_course, stu_city, stu_email, stu_college;

public:
    void satter(int stu_ID,
                string stu_name,
                int stu_age,
                string stu_course,
                string stu_city,
                string stu_email,
                string stu_college)
    {

        this->stu_ID = stu_ID;
        this->stu_name = stu_name;
        this->stu_age = stu_age;
        this->stu_course = stu_course;
        this->stu_city = stu_city;
        this->stu_email = stu_email;
        this->stu_college = stu_college;
    };
    void getter()
    {
        cout << "ID" << " " << stu_ID << " " << endl;
        cout << "name" << " " << stu_name << " " << endl;
        cout << "age" << " " << stu_age << " " << endl;
        cout << "course" << " " << stu_course << " " << endl;
        cout << "city" << " " << stu_city << " " << endl;
        cout << "email" << " " << stu_email << " " << endl;
        cout << "college" << " " << stu_college << " " << endl;
    }
};
int main()
{
    myclass record1, record2, record3, record4, record5;

    record1.satter(11, "parth", 25, "BCA", "ahemdabad", "parthbhagat@gmail.com", "DNC");
    record2.satter(12, "parth", 26, "BBA", "ahemdabad", "parthbhagat@gmail.com", "DNC");
    record3.satter(13, "parth", 27, "BCCA", "ahemdabad", "parthbhagat@gmail.com", "DNC");
    record4.satter(14, "parth", 28, "B.com", "ahemdabad", "parthbhagat@gmail.com", "DNC");
    record5.satter(15, "parth", 29, "B.tech", "ahemdabad", "parthbhagat@gmail.com", "DNC");

    record1.getter();
    record2.getter();
    record3.getter();
    record4.getter();
    record5.getter();
    return 0;
}
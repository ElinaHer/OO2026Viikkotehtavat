#include "student.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            string N;
            int A;
            cout << "Anna opiskelijan nimi " << endl;
            cin >>N;
            cout << "Anna ika "<< endl;
            cin >>A;
            studentList.emplace_back(N,A);
        }
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;
        case 1:
            for(auto & s: studentList)
            {
                s.printStudentInfo();
            }
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            break;

        case 2:

            sort(studentList.begin(), studentList.end(),[](Student & a, Student & b){return a.getName()<b.getName();});

            for(auto & s: studentList)
            {
                s.printStudentInfo();
            }


            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;

        case 3:

            sort(studentList.begin(), studentList.end(),[](Student & a, Student & b){return a.getAge()<b.getAge();});

            for(auto & s: studentList)
            {
                s.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        case 4:
        {

            // Kysy käyttäjältä opiskelijan nimi
            cout << "Anna opiskelijan nimi " << endl;
            string s;
            cin >> s;
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            auto it = find_if(studentList.begin(), studentList.end(),[s](Student & a){return a.getName() == s;});
            it->printStudentInfo();
        }
            break;

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }

    }while(selection < 5);

return 0;
}

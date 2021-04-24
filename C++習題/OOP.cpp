#include <iostream>
using std::string;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void Introduceyourself(){
        std::cout << "Name : " << Name << std::endl;
        std::cout << "Company : " << Company << std::endl;
        std::cout << "Age : " << Age << std::endl;
    }
    Employee(string name,string company,int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){
    Employee employee1 = Employee("Yukina","CDNA",23);
    /*employee1.name = "Yukina";
    employee1.Company = "CDNA";
    employee1.Age = 23;*/
    employee1.Introduceyourself();

    Employee employee2 = Employee("Josh","Amazon",22);
    /*employee2.name = "Josh";
    employee2.Company = "Amazon";*/
    employee2.Introduceyourself();

}


#include <iostream> 
using namespace std;
struct Animals
{
    string name;
    int age;
    int weight;
    string animal;
    string poroda;
};

void printInformation(Animals a)
{
    cout << "Name: " << a.name << "\n";
    cout << "Age: " << a.age << "\n";
    cout << "Weight: " << a.weight << "\n";
    cout << "Animal: " << a.animal << "\n";
    cout << "Breed: " << a.poroda << "\n";
}

int main()
{
    Animals a;
    cout << "Enter the name of pet\n";
    cin >> a.name;
    cout << "Enter the age of pet\n";
    cin >> a.age;
    cout << "Enter weight of pet\n";
    cin >> a.weight;
    cout << "Enter kind of animal of pet\n";
    cin >> a.animal;
    cout << "Enter breed of pet\n\n";
    cin >> a.poroda;

    printInformation(a);

    return 0;
}
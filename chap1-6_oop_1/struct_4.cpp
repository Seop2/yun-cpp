#include <iostream>
using namespace std;
struct Person
{
    
    double height;
    float weight;
    int age;
    string name;

    void print()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "height: " << height << endl;
        cout << "weight: " << weight << endl;

        
    }
};

int main()
{
    Person me{ 175.0, 65.0f, 20, "Jack" };
    me.print();
}
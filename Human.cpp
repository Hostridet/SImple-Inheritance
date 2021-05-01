#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(string name, int age, int height, int weight)
{
    this->name = name;
    this->age = age;
    this->height = height;
    this->weight = weight;
}

void Human::SayName()
{
    cout << "My name is " << name << endl;
}

void Human::SetName(string name)
{
    this->name = name;
}
void Human::SetAge(int age)
{
    this->age = age;
}
void Human::SetHeight(int height)
{
    this->height = height;
}
void Human::SetWeight(int weight)
{
    this->weight = weight;
}
string Human::GetName()
{
    return name;
}
int Human::GetAge()
{
    return age;
}
int Human::GetWeight()
{
    return weight;
}
int Human::GetHeight()
{
    return height;
}
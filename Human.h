#include <iostream>


using namespace std;

class Human
{
protected:
    string name = "NoName";
    int height = 0;
    int weight = 0;
    int age = 0;
public:
    Human() = default;
    Human (string name, int age, int height, int weight);

    void SayName();

    void SetName(string name);
    void SetHeight(int height);
    void SetWeight(int weight);
    void SetAge(int age);

    string GetName();
    int GetHeight();
    int GetWeight();
    int GetAge();
};
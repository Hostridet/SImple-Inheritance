

class Student: public Human
{
protected:
    int course = 0;
public:
    Student() = default;
    Student(string name, int age, int height, int weight, int course):
            Human(name,age,height,weight)
    {
        this->course = course;
    }
};
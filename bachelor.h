
class bachelor: public Student
{
protected:
    string group = "none";
public:
    bachelor() = default;
    bachelor(string name, int age, int height, int weight, int course, string group):
            Student(name,age,height,weight,course)
    {
        this->group = group;
    }
};
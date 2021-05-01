
class graduated: public bachelor
{
protected:
    int diploma = 0;
public:
    graduated() = default;
    graduated(string name, int age, int height, int weight, int course, string group, int diploma):
    bachelor(name,age,height,weight,course, group)
    {
        this->diploma = diploma;
    }
};
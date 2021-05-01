
class worker: public graduated
{
protected:
    int Stage = 0;
public:
    worker() = default;
    worker(string name, int age, int height, int weight, int course, string group, int diploma, int Stage):
    graduated(name,age,height,weight,course, group, diploma)
    {
        this->Stage = Stage;
    }
};
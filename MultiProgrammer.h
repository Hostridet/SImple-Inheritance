


class Programmer: public worker, private Programming
{
public:
    Programmer() = default;
    Programmer(string name, int age, int softskills): worker(name,age,height,weight,course, group, diploma,Stage),
    Programming(SoftSkills)
    {}
};
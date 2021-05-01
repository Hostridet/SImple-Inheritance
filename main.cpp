#include "Human.h"
#include "Student.h"
#include "bachelor.h"
#include "Graduated.h"
#include "worker.h"
#include "Programming.h"
#include "MultiProgrammer.h"



int main() {
    Human people;
    people.SetName("Alexander");
    people.SayName();

    Student stud;
    stud.SetName("Dima");
    stud.SetAge(20);
    stud.SetWeight(80);
    stud.SayName();

    bachelor bach;
    bach.SetName("Alexey");
    bach.SetAge(22);
    bach.SayName();

    graduated grad;
    grad.SetName("Bogdan");
    grad.SetAge(24);
    grad.SayName();

    worker work;
    work.SetName("Maxim");
    work.SetAge(27);
    work.SayName();


    Programmer program;
    program.SetName("Ivan");
    program.SetAge(32);
    program.SayName();

    return 0;
}

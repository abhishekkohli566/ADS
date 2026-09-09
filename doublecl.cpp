// crete 2 class student class and sports class student class stored the academic marks in studnet class and sports marks in sports class and the marks willl be private 
//used a friend function to calcuate the total score and marks  
#include <iostream>
using namespace std;

class Sports;

class Student
{
private:
    int academicMarks;
public:
    Student(int a)
    {
        academicMarks = a;
    }
    friend void calculateTotal(Student, Sports);
};
class Sports
{
private:
    int sportsMarks;
public:
    Sports(int s)
    {
        sportsMarks = s;
    }
    friend void calculateTotal(Student, Sports);
};
void calculateTotal(Student s1, Sports s2)
{
    int total = s1.academicMarks + s2.sportsMarks;
    cout << "Academic Marks : " << s1.academicMarks << endl;
    cout << "Sports Marks   : " << s2.sportsMarks << endl;
    cout << "Total Score    : " << total << endl;
}
int main()
{
    Student student(85); 
    Sports sports(15);   

    calculateTotal(student, sports);

    return 0;
}
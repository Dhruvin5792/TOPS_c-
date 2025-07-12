#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout<<"Name:-"<<name;
        cout<<"\n Age:-"<<age;
    }
};

class Student : public Person {
private:
    string studentID;
    string course;

public:
    void setStudentDetails(string id, string c) {
        studentID = id;
        course = c;
    }

    void displayStudent() {
        cout << "\n--- Student Details ---\n";
        displayPersonDetails(); 
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};
class Teacher : public Person {
private:
    string subject;
    float salary;

public:
    void setTeacherDetails(string sub, float sal) {
        subject = sub;
        salary = sal;
    }
    void displayTeacher() {
        cout << "\n--- Teacher Details ---\n";
        displayPersonDetails();  
        cout << "Subject: " << subject << endl;
        cout << "Salary: ?" << salary << endl;
    }
};


int main() {
    Student student;
    student.setPersonDetails("Dhruvin", 20);
    student.setStudentDetails("S123", "BCA");

    Teacher teacher;
    teacher.setPersonDetails("Mr.Viren", 45);
    teacher.setTeacherDetails("Mathematics", 55000);
   
    student.displayStudent();
    teacher.displayTeacher();
}


//mars task - medium 2 c++
//ec23b1038 caitlin 



#include <iostream>
#include <vector>
#include <string>

class Person {
private:
    std::string name;
    int powerLevel;

public:
    Person(const std::string& name, int powerLevel) : name(name), powerLevel(powerLevel) {}

    std::string getName() const {
        return name;
    }

    int getPowerLevel() const {
        return powerLevel;
    }

    void displayInfo() const {
        std::cout << "Name: " << name << ", Power Level: " << powerLevel << std::endl;
    }
};

class mars {
private:
    std::vector<Person> members;

public:
    void addMember(const Person& person) {
        members.push_back(person);
    }

    void displayMembers() const {
        std::cout << "mars Club Members:\n";
        for (const auto& member : members) {
            member.displayInfo();
        }
    }

    void Comm() const {
        std::cout << "Intra Communication within mars Club Members is allowed.\n";
    }
};

int main() {
    mars mc;

    // Adding members
    Person p1("rahul", 100);
    Person p2("caitlin", 80);
    Person p3("varsha", 120);

    mc.addMember(p1);
    mc.addMember(p2);
    mc.addMember(p3);

    // Displaying members
    mc.displayMembers();

    // Intra communication
    mc.Comm();

    return 0;
}

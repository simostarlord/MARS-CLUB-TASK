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

class MaRS {
private:
    std::vector<Person> members;

public:
    void addMember(const Person& person) {
        members.push_back(person);
    }

    void displayMembers() const {
        std::cout << "MaRS Club Members:\n";
        for (const auto& member : members) {
            member.displayInfo();
        }
    }

    void allowIntraCommunication() const {
        std::cout << "Intra Communication within MaRS Club Members is allowed.\n";
    }
};

int main() {
    MaRS marsClub;

    // Adding members
    Person p1("Alice", 100);
    Person p2("Bob", 80);
    Person p3("Charlie", 120);

    marsClub.addMember(p1);
    marsClub.addMember(p2);
    marsClub.addMember(p3);

    // Displaying members
    marsClub.displayMembers();

    // Intra communication
    marsClub.allowIntraCommunication();

    return 0;
}

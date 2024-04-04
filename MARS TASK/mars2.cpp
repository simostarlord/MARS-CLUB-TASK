// ec23b1038 caitlin - mars medium task 2
#include <iostream>
#include <vector>
#include <string>

class Person {
private:
    std::string n;
    int pl;

public:
    Person(const std::string& name, int powerLevel) : n(name), pl(powerLevel) {}

    std::string getName() const {
        return n;
    }

    int getPowerLevel() const {
        return pl;
    }

    void displayInfo() const {
        std::cout << "Name: " << n << ", Power Level: " << pl << std::endl;
    }
};

class Mars {
private:
    std::vector<Person> mem;

public:
    void add(const Person& p) {
        mem.push_back(p);
    }

    void disp() const {
        std::cout << "Mars Club Members:\n";
        for (const auto& m : mem) {
            m.displayInfo();
        }
    }

    void com() const {
        std::cout << "Intra Communication within Mars Club Members is allowed.\n";
    }
};

int main() {
    Mars mc;

    // Adding members
    Person p1("rahul", 100);
    Person p2("caitlin", 80);
    Person p3("varsha", 120);

    mc.add(p1);
    mc.add(p2);
    mc.add(p3);

    // Displaying members
    mc.disp();

    // Intra communication
    mc.com();

    return 0;
}



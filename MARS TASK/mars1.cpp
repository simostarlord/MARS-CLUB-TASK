#include <iostream>
#include <functional>

// Define a custom data type
struct CustomData {
    int value1;
    double value2;
};

int main() {
    // Create a variable to store the custom data type using std::function
    std::function<CustomData()> getData = []() -> CustomData {
        CustomData data;
        data.value1 = 10;
        data.value2 = 3.14;
        return data;
    };

    // Use the stored lambda function to retrieve the custom data
    CustomData retrievedData = getData();

    // Display the retrieved custom data
    std::cout << "Value 1: " << retrievedData.value1 << std::endl;
    std::cout << "Value 2: " << retrievedData.value2 << std::endl;

    return 0;
}

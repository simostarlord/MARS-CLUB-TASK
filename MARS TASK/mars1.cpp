//mars task - medium 1 c++
//ec23b1038 caitlin 



#include <iostream>
#include <functional>

//custom data
struct cd {
    int v1;
    double v2;
};

int main() {
   
    std::function<cd()> getData = []() -> cd {
        cd data;
        data.v1 = 10;
        data.v2 = 3.14;
        return data;
    };

   //retrieved data
    cd rd = getData();

 
    std::cout << "Value 1: " << rd.v1 << std::endl;
    std::cout << "Value 2: " << rd.v2 << std::endl;

    return 0;
}

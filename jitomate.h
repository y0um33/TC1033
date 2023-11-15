#include <string>
using namespace std;

class jitomate{
private:
    int value;

public:
    jitomate(): value(0){};
    jitomate(int va): value(va){};

    int get_value();

    void set_value(int);
};

int jitomate::get_value(){
    return value;
}

void jitomate::set_value(int va){
    value = va;
};

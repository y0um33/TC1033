#include <string>
using namespace std;

class pepino{
private:
    int value;

public:
    pepino(): value(0){};
    pepino(int va): value(va){};

    int get_value();

    void set_value(int);
};

int pepino::get_value(){
    return value;
}

void pepino::set_value(int va){
    value = va;
};

#include <string>
using namespace std;

class vegetal{
private:
    int value;
    string mes;
    int yar;
    int di;

public:
    vegetal(): value(0){};
    vegetal(int va): value(va){};

    int get_value();

    void set_value(int);
};

int vegetal::get_value(){
    return value;
}

void vegetal::set_value(int va){
    value = va;
};




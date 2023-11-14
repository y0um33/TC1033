#include <string>
using namespace std;

class juego{
private:
    int quantity;
public:
    juego(): quantity(0){};
    juego(int qua): quantity(qua){};

    int get_quantity();

    void set_quantity(int);

};

int juego::get_quantity(){
    return quantity;
}

void juego::set_quantity(int qua){
    quantity = qua;
};

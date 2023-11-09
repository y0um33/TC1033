#include <string>
using namespace std;

class juego{
private:
    int quantity;
    string mon;
    int day;
    int yearth;
public:
    juego(): quantity(0), mon(""), day(0), yearth(0){};
    juego(int qua, string th, int yt, int dye): quantity(qua), mon(th), yearth(yt), day(dye){};

    int get_quantity();
    string get_mon();
    int get_yearth();
    int get_day();

    void set_quantity(int);
    void set_mon(string);
    void set_day(int);
    void set_yearth(int);
};

int juego::get_quantity(){
    return quantity;
}
string juego::get_mon(){
    return mon;
}
int juego::get_yearth(){
    return yearth;
}

int juego::get_day(){
    return day;
}

void juego::set_quantity(int qua){
    quantity = qua;
};

void juego::set_mon(string th){
    mon = th;
};

void juego::set_day(int dye){
    day = dye;
};

void juego::set_yearth(int yt){
    yearth = yt;
};

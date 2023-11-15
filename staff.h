#include <string>
using namespace std;

class supstaff{
private:
    string month;
    string name;
    int day;
    int year;
public:
    supstaff(): name("Yumee"), month("Noviembre"), day(8), year(2023){};
    supstaff(string n, string m, int d, int y): name(n),month(m), day(d), year(y){};

    string get_month ();
    int get_day ();
    int get_year ();
    string get_name ();

    void set_month(string);
    void set_day(int);
    void set_year(int);
    void set_name(string);

};

string supstaff::get_month(){
    return month;
}

int supstaff::get_day(){
    return day;
}

int supstaff::get_year(){
    return year;
}

string supstaff::get_name(){
    return name;
}

void supstaff::set_name(string n){
    name = n;
};

void supstaff::set_month(string m){
    month = m;
};

void supstaff::set_day(int d){
    day = d;
};

void supstaff::set_year(int y){
    year = y;
};

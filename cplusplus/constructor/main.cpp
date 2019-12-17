class Tdate {
public:
    Tdate(int m, int d, int y);
protected:
    int month;
    int day;
    int year;
};

Tdate::Tdate(int m, int d, int y) { 
    month = m;
    day = d;
    year = y;
}

int main() {
    Tdate tdate(12, 10, 2019);
    return 0;
}

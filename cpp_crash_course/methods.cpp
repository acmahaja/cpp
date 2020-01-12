#include <cstdio>

struct ClockOfTheLongNew {
    void add_year()
    {
        year++;
    }
    bool set_year(int new_year)
    {
        if (new_year < 2019)
            return false;
        year = new_year;
        return true;
    }
    int get_year()
    {
        return year;
    }
    void pick_year(int new_year)
    {
        year = new_year;
    }
    private:
        int year;
};

int main()
{
    ClockOfTheLongNew clock;
    clock.pick_year(2017);
    clock.add_year();
    printf("year:\t%d\n", clock.get_year());
    clock.add_year();
    printf("year:\t%d\n", clock.get_year());
}
#include <iomanip>

class Time
{
public:
    int hours;
    int minutes;

    Time(int hours, int minutes)
    {
        if (hours > 12 || minutes > 59)
        {
            this->hours = 0;
            this->minutes = 0;
        }
        else
        {
            this->hours = hours;
            this->minutes = minutes;
        }
    }
};

bool operator==(Time T1, Time T2)
{
    return (T1.hours == T2.hours) && (T1.minutes == T2.minutes);
}

Time operator+(Time T1, Time T2)
{
    Time res(0, 0);
    res.hours = (T1.hours + T2.hours) % 12;
    res.hours += (T1.minutes + T2.minutes >= 60) ? ((T1.minutes + T2.minutes) / 60) : 0;
    res.minutes = (T1.minutes + T2.minutes) % 60;

    if (res.hours == 0)
        res.hours = 12;

    return res;
}

std::ostream &operator<<(std::ostream &os, Time T)
{
    return os << T.hours << "." << std::setfill('0') << std::setw(2) << T.minutes;
}
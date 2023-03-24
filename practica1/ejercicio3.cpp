#include <iostream>
#include <ctime>

#include <bits/stdc++.h>

using namespace std;

void calcule_date(int year,
                int month,
                int day)
{

    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);

    int actual_day = now->tm_mday;
    int actual_month = now->tm_mon +1;
    int actual_year = now->tm_year + 1900;

    // calculate days from days
    int days = 0;
    days = actual_day - day;

    // calculate days from past month


    int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(year != actual_year)
    {


        for(int i = month-1; i < 12;i++)
        {
            days+=days_month[i];
        }

        if(month <= 2 && ((!(year % 4) && (year % 100)) || !(year % 400)))
            days++;

        //calculate days from actual month

        for(int i= 0; i < actual_month; i++)
            days+=days_month[i];
            
    }
    else{

        for(int i = month + 1; i < actual_month; i++)
            days+=days_month[i];
        
    }

    if(actual_month >= 2 && ((!(actual_year % 4) && (actual_year % 100)) || !(actual_year % 400)))
        days++;

    // calcule days from years

    for(int i = year + 1; i < actual_year; i++)
    {
        days+=365;
        if((!(year % 4) && (year % 100)) || !(year % 400)) // bisiesto
            days++;
    }

    cout << "El numero de dias entre esa fecha y la actual es :"  << days;
}

int main() {
    int year;
    int month;
    int day;

    std::cout << "Ingrese un año, luego un mes y finalmente un día:";
    std::cin >> year >> month >> day;

    std::tm time_in = {0, 0, 0, day, month - 1, year - 1900};
    std::time_t time_temp = std::mktime(&time_in);

    const std::tm * time_out = std::localtime(&time_temp);
    const char * weekday[] = {"Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado"};
    std::cout << "El día de la semana fue: " << weekday[time_out->tm_wday] << std::endl;
    calcule_date(year, month, day);    
    return 0;
}
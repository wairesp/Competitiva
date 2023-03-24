#include <iostream>
#include <ctime>

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
    
    return 0;
}
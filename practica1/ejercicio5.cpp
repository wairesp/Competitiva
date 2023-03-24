#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

int main() {
    int n;
    std::cout << "Ingrese el numero de fechas: ";
    std::cin >> n;
    std::vector<std::tuple<int, int, int>> dates(n);
    std::cout << "Ingrese las" << n << " fechas como enteros(dia mes año): ";
    for (int i = 0; i < n; i++) {
        int day, month, year;
        std::cin >> day >> month >> year;
        dates[i] = std::make_tuple(day, month, year);
    }

    std::sort(dates.begin(), dates.end(), [](const auto &a, const auto &b) {
        int day_a, month_a, year_a;
        std::tie(day_a, month_a, year_a) = a;
        int day_b, month_b, year_b;
        std::tie(day_b, month_b, year_b) = b;
        if (month_a != month_b) {
            return month_a < month_b;
        }
        if (day_a != day_b) {
            return day_a < day_b;
        }
        return year_a > year_b;
    });

    for (const auto &date : dates) {
        int day, month, year;
        std::tie(day, month, year) = date;
        std::cout << day << ' ' << month << ' ' << year << '\n';
    }

    return 0;
}
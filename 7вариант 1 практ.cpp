
#include <iostream>
#include <iomanip>

int main() {
    std::cout << "==========================================" << std::endl;
    std::cout << " Лабораторная работа №1. Вариант 7" << std::endl;
    std::cout << " Расчет времени передачи зашифрованного пакета данных" << std::endl;
    std::cout << "==========================================" << std::endl << std::endl;

    double sizeMB = 0.0;
    double speedKbps = 0.0;

    std::cout << "Введите объем пакета данных (в МБ): ";
    std::cin >> sizeMB;

    std::cout << "Введите пропускную способность канала (в Кбит/с): ";
    std::cin >> speedKbps;

    if (sizeMB < 0 || speedKbps <= 0) {
        std::cout << "\nОШИБКА: объем пакета не может быть отрицательным, "
                  << "а пропускная способность канала должна быть больше нуля!" << std::endl;
        return 0;
    }

    const double KBIT_PER_MB = 1024.0 * 8.0;
    double sizeKbit = sizeMB * KBIT_PER_MB;

    double timeSec = sizeKbit / speedKbps;

    std::cout << "\n--- РЕЗУЛЬТАТЫ ВЫЧИСЛЕНИЙ ---" << std::endl;
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Объем пакета: " << sizeMB << " МБ (" << sizeKbit << " Кбит)" << std::endl;
    std::cout << "Пропускная способность канала: " << speedKbps << " Кбит/с" << std::endl;
    std::cout << "Время передачи пакета: " << timeSec << " секунд" << std::endl;
    std::cout << "==========================================" << std::endl;

    return 0;
}

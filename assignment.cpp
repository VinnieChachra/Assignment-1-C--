#include <iostream>
#include <cmath>

double calculate_gibbs_free_energy(double R, double T)
{
    double T_kelvin = T + 273.15;
    double lnK = -6.45;
    double delta_G = -R * T_kelvin * lnK;
    return delta_G;
}

int main()
{
    double R, T;
    std::cout << "Enter the value for R: ";
    std::cin >> R;
    std::cout << "Enter the value for T (in Celsius): ";
    std::cin >> T;
    double gibbs_free_energy = calculate_gibbs_free_energy(R, T);
    std::cout << "The Gibbs free energy is: " << gibbs_free_energy << std::endl;
    return 0;
}

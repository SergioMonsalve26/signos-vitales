#include <iostream>
#include <string>

std::string evaluarFrecuenciaCardiaca(int bpm) {
    if (bpm < 60) return "Bradicardia";
    if (bpm <= 100) return "Normal";
    return "Taquicardia";
}

std::string evaluarPresionArterial(int sistolica, int diastolica) {
    if (sistolica < 120 && diastolica < 80) return "Normal";
    if (sistolica <= 129 && diastolica < 80) return "Elevada";
    return "Presion alta (Hipertensión)";
}

int main() {
    std::cout << "--- MODULO SIGNOS VITALES ---" << std::endl;
    std::cout << "Frecuencia cardiaca (75 bpm): " << evaluarFrecuenciaCardiaca(75) << std::endl;
    std::cout << "Presion arterial (120/80): " << evaluarPresionArterial(120, 80) << std::endl;
    return 0;
}
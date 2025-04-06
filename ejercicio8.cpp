#include <iostream>

int main() {
    int wood_balance = 1000;
    int w1 = 1, d1 = 1, h1 = 3;
    int w2 = 1, d2 = 2, h2 = 3;
    int w3 = 1, d3 = 2, h3 = 3;
    int box_area;

   
    box_area = w1 * d1 + 2 * (w1 * h1 + d1 * h1);
    wood_balance -= box_area;
    std::cout << "Madera contrachapada restante: " << wood_balance << std::endl;

    
    box_area = w2 * d2 + 2 * (w2 * h2 + d2 * h2);
    wood_balance -= box_area;
    std::cout << "Madera contrachapada restante: " << wood_balance << std::endl;

    
    box_area = w3 * d3 + 2 * (w3 * h3 + d3 * h3);
    wood_balance -= box_area;
    std::cout << "Madera contrachapada restante: " << wood_balance << std::endl;

    return 0;
}

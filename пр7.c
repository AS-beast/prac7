#include <stdio.h>
#include <math.h>

int calculate(int x1, int y1, int r1, int x2, int y2, int r2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); /* Обчислення відстані між центрами колів */
    
    /* Перевірка випадків, коли кола не перетинаються */
    if (distance > r1 + r2) { /* Кола не мають точок перетину */
        return 0;  
    } else if (distance < fabs(r1 - r2)) {  /* Одне коло знаходиться всередині іншого, немає точок перетину */
        return 0;  
    } else if (distance == 0 && r1 == r2) { /* Кола збігаються, точок перетину нескінченно багато */
        return -1;  
    } else {
        return 2;  /* Кола перетинаються у двох точках */
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2); /* Введення координат та радіусів двох кіл */
    int intersectionPoints = calculate(x1, y1, r1, x2, y2, r2); /* Обчислення кількості точок перетину за допомогою функції calculate */
    printf("%d\n", intersectionPoints); /* Виведення результату */
    
    return 0;
}
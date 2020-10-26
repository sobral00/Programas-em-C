#include <stdio.h>
 
int main() {
 
    const double N = 3.14159;
    
    double raio;
    double area;
    
    scanf("%lf",&raio);
    
    area=N*(raio*raio);
    
    printf("A=%.4lf\n",area);
 
    return 0;
}

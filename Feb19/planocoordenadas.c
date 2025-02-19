#include
#include
 
void cartesianToSpherical(double x, double y, double z, double *r, double *theta, double *phi) {
    *r = sqrt(x * x + y * y + z * z);
    *theta = atan2(y, x);
    *phi = acos(z / (*r));
}
 
void cartesianToCylindrical(double x, double y, double z, double *r, double *theta, double *z_out) {
    *r = sqrt(x * x + y * y);
    *theta = atan2(y, x);
    *z_out = z;
}
 
int main() {
    double x, y, z;
    printf("Ingrese las coordenadas cartesianas (x, y, z): ");
    scanf("%lf %lf %lf", &x, &y, &z);
    
    double r_s, theta_s, phi_s;
    cartesianToSpherical(x, y, z, &r_s, &theta_s, &phi_s);
    printf("\nCoordenadas Esféricas:\n");
    printf("r = %.3f, theta = %.3f rad, phi = %.3f rad\n", r_s, theta_s, phi_s);
    
    double r_c, theta_c, z_c;
    cartesianToCylindrical(x, y, z, &r_c, &theta_c, &z_c);
    printf("\nCoordenadas Cilíndricas:\n");
    printf("r = %.3f, theta = %.3f rad, z = %.3f\n", r_c, theta_c, z_c);
    
    return 0;
}

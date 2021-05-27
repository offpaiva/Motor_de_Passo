#ifndef MOTORPASSO_H
#define MOTORPASSO_H

    void stepMotor_init(int pulsosPorRevolucao); 
    void stepMotor (char sentido, int graus, char t);
    void meiopasso (char sentido, int graus, char t);
    void passoduplo (char sentido, int graus, char t);
    
#endif


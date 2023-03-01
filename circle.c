#include "circle.h"
#include "safeinput.h"

void circle(){

    float radie;
    const float pi = 3.14;
    GetInputFloat("Enter radie: ", &radie);
    printf("Omkrets is: %f\n", radie * 2 * pi);

}
#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
float angle = 0.0;
void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{

    glBegin(GL_TRIANGLE_FAN);
    //glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(cx, cy);

    for (int i = 0;i <= 100;i++)
    {
        float angle = 2.0f * 3.1416f * i / 100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x + cx), (y + cy));
    }
    glEnd();

}

// void text(int x, int y, char* string)
// {
//     glColor3f(0.0, 0.0, 0.0);
//     glRasterPos2f(x, y);
//     int len, i;
//     len = (int)strlen(string);
//     for (i = 0; i < len; i++)
//     {
//         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string[i]);
//     }
// }

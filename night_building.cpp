
#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>


void circle1(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy, int x, int y)
{

    glBegin(GL_TRIANGLE_FAN);
    //glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(cx, cy);

    for (int i = x;i <= y;i++)
    {
        float angle = 2.0f * 3.1416f * i / 100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x + cx), (y + cy));
    }
    glEnd();

}

void window1()
{
    glBegin(GL_POLYGON);
    //glColor3f(0.0f, 0.0f, 0.0f);
    glColor3ub(204, 149, 60);
    glVertex2f(105.0f, 290.0f);
    glVertex2f(120.0f, 290.0f);
    glVertex2f(120.0f, 275.0f);
    glVertex2f(105.0f, 275.0f);

    glEnd();
}

void all_window1(float x, float y)
{
    glPushMatrix();//////////////////////////////////
    glTranslatef(x, y, 0);
    ///glScalef(5.0, 5.0, 0.0);
    window1();
    glLoadIdentity();
    glPopMatrix();
}

void building11(float x, float y)
{
    glBegin(GL_POLYGON);//////////////building 1.0
    // glColor3f(0.6, 0.4, 0.4);

    glVertex2f(98.0f, 300.0f);
    glVertex2f(180.0f, 300.0f);
    glVertex2f(180.0f, 155.0f);
    glVertex2f(98.0f, 155.0f);
    glEnd();

    ///////////////////////windows of building 1 /////////////////////

    all_window1(0, 2);
    all_window1(25, 2);
    all_window1(50, 2);

    all_window1(0, -20);
    all_window1(25, -20);
    all_window1(50, -20);


    all_window1(0, -42);
    all_window1(25, -42);
    all_window1(50, -42);

    all_window1(0, -64);
    all_window1(25, -64);
    all_window1(50, -64);

    all_window1(0, -86);
    all_window1(25, -86);
    all_window1(50, -86);

    all_window1(0, -108);
    all_window1(25, -108);
    all_window1(50, -108);
}

void building33(float x, float y)
{
    glBegin(GL_POLYGON);//////////////building 1.0
    // glColor3f(0.6, 0.4, 0.4);

    glVertex2f(98.0f, 240.0f);
    glVertex2f(150.0f, 240.0f);
    glVertex2f(150.0f, 155.0f);
    glVertex2f(98.0f, 155.0f);
    glEnd();

    ///////////////////////windows of building 1 /////////////////////



    all_window1(0, -64);
    all_window1(25, -64);


    all_window1(0, -86);
    all_window1(25, -86);


    all_window1(0, -108);
    all_window1(25, -108);

}


void school1(float x, float y)
{



    glBegin(GL_POLYGON);//////////////building 1.0
    glColor3ub(9, 26, 34);

    glVertex2f(100.0f, 250.0f);
    glVertex2f(225.0f, 250.0f);
    glVertex2f(225.0f, 155.0f);
    glVertex2f(100.0f, 155.0f);
    glEnd();





    all_window1(0, -64);
    all_window1(25, -64);
    all_window1(50, -64);
    all_window1(75, -64);
    all_window1(100, -64);

    all_window1(0, -86);
    all_window1(25, -86);
    all_window1(50, -86);
    all_window1(75, -86);
    all_window1(100, -86);

    all_window1(0, -108);
    all_window1(25, -108);
    all_window1(50, -108);
    all_window1(75, -108);
    all_window1(100, -108);
}

void moszid1(float x, float y)
{



    glBegin(GL_POLYGON);  /* Main building of moszid*/
    glColor3ub(9, 26, 34);

    glVertex2f(200.0f, 250.0f);
    glVertex2f(400.0f, 250.0f);
    glVertex2f(400.0f, 155.0f);
    glVertex2f(200.0f, 155.0f);
    glEnd();


    glBegin(GL_POLYGON);//...............gombus... supporter..........
    glColor3ub(9, 26, 34);

    glVertex2f(240.0f, 250.0f);
    glVertex2f(310.0f, 250.0f);
    glVertex2f(310.0f, 270.0f);
    glVertex2f(240.0f, 270.0f);
    glEnd();

    glColor3ub(9, 26, 34);
    circle1(40, 40, 275, 270, 0, 50);



    //..............................END...........................


    glBegin(GL_POLYGON);
    glColor3ub(9, 26, 34);

    glVertex2f(355.0f, 250.0f);
    glVertex2f(385.0f, 250.0f);
    glVertex2f(385.0f, 350.0f);
    glVertex2f(355.0f, 350.0f);
    glEnd();

    glBegin(GL_POLYGON);//...............gombus2... supporter..........
    glColor3ub(9, 26, 34);

    glVertex2f(350.0f, 340.0f);
    glVertex2f(390.0f, 340.0f);
    glVertex2f(390.0f, 350.0f);
    glVertex2f(350.0f, 350.0f);
    glEnd();


    glColor3ub(9, 26, 34);
    circle1(20, 20, 370, 345, 0, 50);



    //....................Moszid ghate...............


    glBegin(GL_POLYGON);  /* Main ghate1 of moszid*/
    glColor3ub(204, 149, 60);

    glVertex2f(216.0f, 215.0f);
    glVertex2f(263.9f, 215.0f);
    glVertex2f(263.9f, 155.0f);
    glVertex2f(216.0f, 155.0f);
    glEnd();


    glColor3ub(204, 149, 60);
    circle1(25, 20, 240, 210, 0, 50);



    glBegin(GL_POLYGON);  /* Main ghate2 of moszid*/
    glColor3ub(204, 149, 60);

    glVertex2f(326.0f, 215.0f);
    glVertex2f(373.9f, 215.0f);
    glVertex2f(373.9f, 155.0f);
    glVertex2f(326.0f, 155.0f);
    glEnd();


    glColor3ub(204, 149, 60);
    circle1(25, 20, 350, 210, 0, 50);


}

void good_night(float x, float y)
{



    //glColor3f(0.6, 0.4, 0.4);  /////////// house1...................
    glColor3ub(9, 26, 34);
    building11(x, y);


    glPushMatrix();//.....................school....................
    glTranslatef(x - 15, y - 200, 0);
    //glColor3f(0.6, 0.4, 0.4);
    glColor3ub(9, 26, 34);
    school1(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();

    glPushMatrix();//...................... house3.........................
    glTranslatef(x + 140, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    //glColor3f(0.9, 0.8, 0.5);
    glColor3ub(9, 26, 34);
    building11(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();




    glPushMatrix();//...................... house4.........................
    glTranslatef(x + 230, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    //glColor3f(0.1, 0.4, 0.5);
    glColor3ub(9, 26, 34);
    building33(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();




    glPushMatrix();//...................... house5.........................
    glTranslatef(x + 300, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    //glColor3f(0.1, 0.8, 0.7);
    glColor3ub(9, 26, 34);
    building11(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();



    //..................................Moszid.....................
    glPushMatrix();
    glTranslatef(x + 500, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
   // glColor3f(0.1, 0.8, 0.7);
    glColor3ub(9, 26, 34);
    moszid1(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();

    //..................................END.....................



     //..................................House6.....................
    glPushMatrix();
    glTranslatef(x + 400, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    //glColor3f(0.7, 0.9, 0.5);
    glColor3ub(9, 26, 34);
    building33(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();

    //..................................END.....................




     //..................................House7.....................
    glPushMatrix();
    glTranslatef(x + 460, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
   // glColor3f(0.3, 0.2, 0.5);
    glColor3ub(9, 26, 34);
    building11(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();

    //..................................END.....................




}

#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>


void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy, int x, int y)
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


void window()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(105.0f, 290.0f);
    glVertex2f(120.0f, 290.0f);
    glVertex2f(120.0f, 275.0f);
    glVertex2f(105.0f, 275.0f);

    glEnd();
}

void all_window(float x, float y)
{
    glPushMatrix();//////////////////////////////////
    glTranslatef(x, y, 0);
    ///glScalef(5.0, 5.0, 0.0);
    window();
    glLoadIdentity();
    glPopMatrix();
}

void building1(float x, float y)
{
    glBegin(GL_POLYGON);//////////////building 1.0
    // glColor3f(0.6, 0.4, 0.4);

    glVertex2f(98.0f, 300.0f);
    glVertex2f(180.0f, 300.0f);
    glVertex2f(180.0f, 155.0f);
    glVertex2f(98.0f, 155.0f);
    glEnd();

    ///////////////////////windows of building 1 /////////////////////

    all_window(0, 2);
    all_window(25, 2);
    all_window(50, 2);

    all_window(0, -20);
    all_window(25, -20);
    all_window(50, -20);


    all_window(0, -42);
    all_window(25, -42);
    all_window(50, -42);

    all_window(0, -64);
    all_window(25, -64);
    all_window(50, -64);

    all_window(0, -86);
    all_window(25, -86);
    all_window(50, -86);

    all_window(0, -108);
    all_window(25, -108);
    all_window(50, -108);
}

void building3(float x, float y)
{
    glBegin(GL_POLYGON);//////////////building 1.0
    // glColor3f(0.6, 0.4, 0.4);

    glVertex2f(98.0f, 240.0f);
    glVertex2f(150.0f, 240.0f);
    glVertex2f(150.0f, 155.0f);
    glVertex2f(98.0f, 155.0f);
    glEnd();

    ///////////////////////windows of building 1 /////////////////////



    all_window(0, -64);
    all_window(25, -64);


    all_window(0, -86);
    all_window(25, -86);


    all_window(0, -108);
    all_window(25, -108);

}


void school(float x, float y)
{



    glBegin(GL_POLYGON);//////////////building 1.0
    glColor3f(0.9, 0.7, 0.6);

    glVertex2f(100.0f, 250.0f);
    glVertex2f(225.0f, 250.0f);
    glVertex2f(225.0f, 155.0f);
    glVertex2f(100.0f, 155.0f);
    glEnd();


    glBegin(GL_POLYGON);//....................danda.................
    glColor3f(0.1, 0.0, 0.0);
    glVertex2f(150.0f, 250.0f);
    glVertex2f(150.0f, 320.0f);
    glVertex2f(155.0f, 320.0f);
    glVertex2f(155.0f, 250.0f);
    glEnd();


    glBegin(GL_POLYGON);//................Flag...............
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(155.0f, 290.0f);
    glVertex2f(155.0f, 320.0f);
    glVertex2f(200.0f, 320.0f);
    glVertex2f(200.0f, 290.0f);
    glEnd();

    ///////////////////////circle  /////////////////////

    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    circle(10, 10, 175, 305, 0, 100);



    all_window(0, -64);
    all_window(25, -64);
    all_window(50, -64);
    all_window(75, -64);
    all_window(100, -64);

    all_window(0, -86);
    all_window(25, -86);
    all_window(50, -86);
    all_window(75, -86);
    all_window(100, -86);

    all_window(0, -108);
    all_window(25, -108);
    all_window(50, -108);
    all_window(75, -108);
    all_window(100, -108);
}


/*==============================Mosjid===================================*/
void moszid(float x, float y)
{



    glBegin(GL_POLYGON);  /* Main building of moszid*/
    glColor3f(0.6, 0.4, 0.4);

    glVertex2f(200.0f, 250.0f);
    glVertex2f(400.0f, 250.0f);
    glVertex2f(400.0f, 155.0f);
    glVertex2f(200.0f, 155.0f);
    glEnd();


    glBegin(GL_POLYGON);//...............gombus... supporter..........
    glColor3f(0.5, 0.3, 0.3);

    glVertex2f(240.0f, 250.0f);
    glVertex2f(310.0f, 250.0f);
    glVertex2f(310.0f, 270.0f);
    glVertex2f(240.0f, 270.0f);
    glEnd();

    glColor3f(0.5, 0.2, 0.2);
    circle(40, 40, 275, 270, 0, 50);

    glBegin(GL_POLYGON);//...............gombus1... supporter..........
    glColor3f(0.3, 0.0, 0.2);

    glVertex2f(274.0f, 310.0f);
    glVertex2f(277.0f, 310.0f);
    glVertex2f(277.0f, 350.0f);
    glVertex2f(274.0f, 350.0f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    circle(18, 18, 280, 345, 0, 100);

    glColor3ub(195, 203, 200); // Dont' touch here
    circle(18, 18, 285, 350, 0, 100);

    //..............................END...........................


    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.3);

    glVertex2f(355.0f, 250.0f);
    glVertex2f(385.0f, 250.0f);
    glVertex2f(385.0f, 350.0f);
    glVertex2f(355.0f, 350.0f);
    glEnd();

    glBegin(GL_POLYGON);//...............gombus2... supporter..........
    glColor3f(0.5, 0.2, 0.2);

    glVertex2f(350.0f, 340.0f);
    glVertex2f(390.0f, 340.0f);
    glVertex2f(390.0f, 350.0f);
    glVertex2f(350.0f, 350.0f);
    glEnd();


    glColor3f(0.5, 0.2, 0.2);
    circle(20, 20, 370, 345, 0, 50);



    //....................Moszid ghate...............


    glBegin(GL_POLYGON);  /* Main ghate1 of moszid*/
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(216.0f, 215.0f);
    glVertex2f(263.9f, 215.0f);
    glVertex2f(263.9f, 155.0f);
    glVertex2f(216.0f, 155.0f);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    circle(25, 20, 240, 210, 0, 50);



    glBegin(GL_POLYGON);  /* Main ghate2 of moszid*/
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(326.0f, 215.0f);
    glVertex2f(373.9f, 215.0f);
    glVertex2f(373.9f, 155.0f);
    glVertex2f(326.0f, 155.0f);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    circle(25, 20, 350, 210, 0, 50);


}




void good_morning(float x, float y)
{



    glColor3f(0.6, 0.4, 0.4);  /////////// house1...................
    building1(x, y);


    glPushMatrix();//.....................school....................
    glTranslatef(x - 15, y - 200, 0);
    glColor3f(0.6, 0.4, 0.4);
    school(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();

    glPushMatrix();//...................... house3.........................
    glTranslatef(x + 140, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    glColor3f(0.9, 0.8, 0.5);
    building1(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();




    glPushMatrix();//...................... house4.........................
    glTranslatef(x + 230, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    glColor3f(0.1, 0.4, 0.5);
    building3(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();




    glPushMatrix();//...................... house5.........................
    glTranslatef(x + 300, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    glColor3f(0.1, 0.8, 0.7);
    building1(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();



    //..................................Moszid.....................
    glPushMatrix();
    glTranslatef(x + 500, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    glColor3f(0.1, 0.8, 0.7);
    moszid(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();

    //..................................END.....................



     //..................................House6.....................
    glPushMatrix();
    glTranslatef(x + 400, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    glColor3f(0.7, 0.9, 0.5);
    building3(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();

    //..................................END.....................




     //..................................House7.....................
    glPushMatrix();
    glTranslatef(x + 460, y - 200, 0);
    //glScalef(0.0, 0.0, 0.0);
    glColor3f(0.3, 0.2, 0.5);
    building1(x - 100, y - 100);
    glLoadIdentity();
    glPopMatrix();

    //..................................END.....................




}

#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Day_buldings.cpp"
#include "Night_buildings.cpp"
#include "Tree.cpp"
#include "Background_buildings.cpp"
#include "Stars.cpp"
#include "Sky.cpp"
#include "LampPost.cpp"
#include "Cloud.cpp"
#include "day_building.cpp"
#include "night_building.cpp"

float CloudX = 0;
float CloudY = 0;

float CarX_R = 0;
float CarY_R = 0;

float CarX_L = 0;
float CarY_L = 0;

float sunX = 0;
float sunY = 0;

float moonX = 0;
float moonY = 0;
float rain = 0.0;
bool isDay = true;

bool makeItNight = false;
bool makeItDay = false;
bool sunSitThere = false;
bool moonSitThere = false;
bool rainday = false;
bool isRedlight = false;
void wheel(int x, int y, int outer, int inner);
void DrawCircle(float cx, float cy, float r, int num_segments)
{

    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments); //get the current angle

        float x = r * cosf(theta); //calculate the x component
        float y = r * sinf(theta); //calculate the y component

        glVertex2f(x + cx, y + cy); //output vertex
    }
    glEnd();
}
void text(int x, int y, char* string)
{
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(x, y);
    int len, i;
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string[i]);
    }
}
void Rain(int value)
{

    if (rainday)
    {

        rain += 0.01f;

        glBegin(GL_POINTS);
        for (int i = 1; i <= 10000; i++)
        {
            int x = rand(), y = rand();
            x %= 2000;
            y %= 2000;
            glBegin(GL_LINES);
            glColor3f(0.0, 1.0, 1.0);
            glVertex2d(x, y);
            glVertex2d(x + 5, y + 5);
            glEnd();
        }
    }
}

void sun()
{
    glPushMatrix();
    glTranslated(0, -300, 0);
    glColor3f(3.0, 1.0, 0.5);
    DrawCircle(805, 546, 50, 2000);
    glPopMatrix();
}
void moon()
{
    glPushMatrix();
    glTranslated(0, -200, 0);
    glColor3ub(251, 163, 31);
    DrawCircle(972, 402, 30, 2000);
    glColor3ub(0, 127, 179);
    DrawCircle(960, 405, 30, 2000);
    glPopMatrix();
}
void coverTheSun()
{
    glColor3ub(219, 223, 226);
    glBegin(GL_QUADS);
    glVertex2i(730, 590);
    glVertex2i(730, 130);
    glVertex2i(860, 130);
    glVertex2i(860, 590);
    glEnd();
}
void coverThemoon()
{
    glColor3ub(0, 127, 179);
    glBegin(GL_QUADS);
    glVertex2i(710, 530);
    glVertex2i(710, 130);
    glVertex2i(1010, 130);
    glVertex2i(1010, 530);
    glEnd();
}
struct cloud
{
    void drawDayCloud()
    {
        glColor3f(1.0, 1.0, 1.0);
        DrawCircle(246, 486, 23, 2000); //1
        DrawCircle(290, 509, 40, 2000); //2
        DrawCircle(350, 494, 36, 2000); //3
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_QUADS);
        glVertex2i(246, 480);
        glVertex2i(246, 463);
        glVertex2i(350, 459);
        glVertex2i(350, 480);
        glEnd();
    }
    void drawNightCloud()
    {
        glColor3ub(36, 138, 197);
        DrawCircle(246, 486, 23, 2000); //1
        DrawCircle(290, 509, 40, 2000); //2
        DrawCircle(350, 494, 36, 2000); //3
        glColor3ub(36, 138, 197);
        glBegin(GL_QUADS);
        glVertex2i(246, 480);
        glVertex2i(246, 463);
        glVertex2i(350, 459);
        glVertex2i(350, 480);
        glEnd();
    }
};




void DayCloud()
{
    cloud c;
    //cloud 1
    glPushMatrix();
    glTranslated(300, -50, 0);
    c.drawDayCloud();
    glPopMatrix();
    //cloud 2
    glPushMatrix();
    glTranslated(-150, 0, 0);
    c.drawDayCloud();
    glPopMatrix();
    //cloud 3
    glPushMatrix();
    glTranslated(200, 50, 0);
    c.drawDayCloud();
    glPopMatrix();
    //cloud 4
    glPushMatrix();
    glTranslated(600, -100, 0);
    c.drawDayCloud();
    glPopMatrix();
}

void NightCloud()
{
    cloud c;
    //cloud 1
    glPushMatrix();
    glTranslated(300, -50, 0);
    c.drawNightCloud();
    glPopMatrix();
    //cloud 2
    glPushMatrix();
    glTranslated(-150, 0, 0);
    c.drawNightCloud();
    glPopMatrix();
    //cloud 3
    glPushMatrix();
    glTranslated(200, 50, 0);
    c.drawNightCloud();
    glPopMatrix();
    //cloud 4
    glPushMatrix();
    glTranslated(600, -100, 0);
    c.drawNightCloud();
    glPopMatrix();
}
struct cars
{
    void dayCarsRight()
    {
        //car01
        glColor3ub(199, 199, 193);
        glBegin(GL_QUADS);
        glVertex2i(104, 26);
        glVertex2i(196, 26);
        glVertex2i(196, 90);
        glVertex2i(104, 90);
        glEnd();

        glColor3ub(180, 204, 201);
        glBegin(GL_POLYGON);
        glVertex2i(196, 26);
        glVertex2i(226, 26);
        glVertex2i(226, 50);
        glVertex2i(210, 65);
        glVertex2i(203, 80);
        glVertex2i(196, 85);
        glEnd();

        glColor3ub(240, 109, 35);
        glBegin(GL_QUADS);
        glVertex2i(104, 32);
        glVertex2i(196, 32);
        glVertex2i(196, 90);
        glVertex2i(104, 90);
        glEnd();

        //car 01 window
        glColor3ub(253, 231, 215);
        glBegin(GL_QUADS);
        glVertex2i(196, 76);
        glVertex2i(196, 61);
        glVertex2i(218, 57);
        glVertex2i(206, 72);
        glEnd();

        text(125, 53, "");

        wheel(123, 31, 8, 5);
        wheel(175, 31, 8, 5);

        //car03
        glColor3ub(28, 138, 141);
        glBegin(GL_POLYGON);
        glVertex2i(735, 22);
        glVertex2i(725, 22);
        glVertex2i(718, 18);
        glVertex2i(718, 14);
        glVertex2i(718, 14);
        glVertex2i(804, 14);
        glVertex2i(804, 18);
        glVertex2i(799, 22);
        glVertex2i(790, 22);
        glVertex2i(784, 46);
        glVertex2i(741, 46);
        glEnd();

        glColor3ub(153, 200, 209); //car3 window 01
        glBegin(GL_POLYGON);
        glVertex2i(746, 41);
        glVertex2i(741, 22);
        glVertex2i(761, 22);
        glVertex2i(761, 41);
        glEnd();

        glColor3ub(132, 172, 176); //car3 window 01 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(746, 41);
        glVertex2i(741, 22);
        glVertex2i(761, 41);
        glEnd();

        glColor3ub(153, 200, 209); //car2 window 02
        glBegin(GL_POLYGON);
        glVertex2i(765, 41);
        glVertex2i(765, 22);
        glVertex2i(784, 22);
        glVertex2i(779, 41);
        glEnd();

        glColor3ub(132, 172, 176); //car3 window 02 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(765, 41);
        glVertex2i(765, 22);
        glVertex2i(779, 41);
        glEnd();
        wheel(740, 14, 4, 2);
        wheel(788, 14, 4, 2);

        //car04
        glColor3ub(238, 84, 59);
        glBegin(GL_POLYGON);
        glVertex2i(895, 22);
        glVertex2i(885, 22);
        glVertex2i(878, 18);
        glVertex2i(878, 14);
        glVertex2i(878, 14);
        glVertex2i(964, 14);
        glVertex2i(964, 18);
        glVertex2i(959, 22);
        glVertex2i(950, 22);
        glVertex2i(944, 46);
        glVertex2i(901, 46);
        glEnd();

        glColor3ub(219, 238, 243); //car4 window 01
        glBegin(GL_POLYGON);
        glVertex2i(906, 41);
        glVertex2i(901, 22);
        glVertex2i(921, 22);
        glVertex2i(921, 41);
        glEnd();

        glColor3ub(182, 190, 184); //car4 window 01 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(906, 41);
        glVertex2i(901, 22);
        glVertex2i(921, 41);
        glEnd();

        glColor3ub(219, 238, 243); //car4 window 02
        glBegin(GL_POLYGON);
        glVertex2i(925, 41);
        glVertex2i(925, 22);
        glVertex2i(944, 22);
        glVertex2i(939, 41);
        glEnd();

        glColor3ub(182, 190, 184); //car4 window 02 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(925, 41);
        glVertex2i(925, 22);
        glVertex2i(939, 41);
        glEnd();
        wheel(895, 16, 4, 2);
        wheel(950, 16, 4, 2);
    }
    void dayCarLeft()
    {
        //car02
        glColor3ub(215, 236, 240);
        glBegin(GL_POLYGON);
        glVertex2i(535, 82);
        glVertex2i(525, 82);
        glVertex2i(518, 78);
        glVertex2i(518, 74);
        glVertex2i(518, 74);
        glVertex2i(604, 74);
        glVertex2i(604, 78);
        glVertex2i(599, 82);
        glVertex2i(590, 82);
        glVertex2i(584, 106);
        glVertex2i(541, 106);
        glEnd();

        glColor3ub(44, 136, 133); //car2 window 01
        glBegin(GL_POLYGON);
        glVertex2i(546, 101);
        glVertex2i(541, 84);
        glVertex2i(561, 84);
        glVertex2i(561, 101);
        glEnd();

        glColor3ub(23, 125, 117); //car2 window 01 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(546, 101);
        glVertex2i(561, 84);
        glVertex2i(561, 101);
        glEnd();

        glColor3ub(44, 136, 133); //car2 window 02
        glBegin(GL_POLYGON);
        glVertex2i(565, 101);
        glVertex2i(565, 84);
        glVertex2i(585, 84);
        glVertex2i(580, 101);
        glEnd();

        glColor3ub(23, 125, 117); //car2 window 02 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(565, 101);
        glVertex2i(585, 84);
        glVertex2i(580, 101);
        glEnd();
        wheel(540, 74, 4, 2);
        wheel(578, 74, 4, 2);
    }
    void nightCarsRight()
    {
        //car01

        glColor3ub(108, 100, 110); //head light
        glBegin(GL_TRIANGLES);
        glVertex2i(300, 40);
        glVertex2i(300, 15);
        glColor3ub(204, 169, 48);
        glVertex2i(200, 40);
        glEnd();

        glColor3ub(121, 182, 231);
        glBegin(GL_QUADS);
        glVertex2i(104, 26);
        glVertex2i(196, 26);
        glVertex2i(196, 90);
        glVertex2i(104, 90);
        glEnd();

        glColor3ub(121, 182, 231);
        glBegin(GL_POLYGON);
        glVertex2i(196, 26);
        glVertex2i(226, 26);
        glVertex2i(226, 50);
        glVertex2i(210, 65);
        glVertex2i(203, 80);
        glVertex2i(196, 85);
        glEnd();

        glColor3ub(0, 137, 191);
        glBegin(GL_QUADS);
        glVertex2i(104, 32);
        glVertex2i(196, 32);
        glVertex2i(196, 90);
        glVertex2i(104, 90);
        glEnd();

        //car 01 window
        glColor3ub(253, 231, 215);
        glBegin(GL_QUADS);
        glVertex2i(196, 76);
        glVertex2i(196, 61);
        glVertex2i(218, 57);
        glVertex2i(206, 72);
        glEnd();

        text(125, 53, "");

        wheel(123, 31, 8, 5);
        wheel(175, 31, 8, 5);

        //car03
        glColor3ub(108, 100, 110); //head light
        glBegin(GL_TRIANGLES);
        glVertex2i(860, 25);
        glVertex2i(860, 10);
        glColor3ub(204, 169, 48);
        glVertex2i(785, 20);
        glEnd();

        glColor3ub(6, 177, 213);
        glBegin(GL_POLYGON);
        glVertex2i(735, 22);
        glVertex2i(725, 22);
        glVertex2i(718, 18);
        glVertex2i(718, 14);
        glVertex2i(718, 14);
        glVertex2i(804, 14);
        glVertex2i(804, 18);
        glVertex2i(799, 22);
        glVertex2i(790, 22);
        glVertex2i(784, 46);
        glVertex2i(741, 46);
        glEnd();

        glColor3ub(0, 109, 157); //car3 window 01
        glBegin(GL_POLYGON);
        glVertex2i(746, 41);
        glVertex2i(741, 22);
        glVertex2i(761, 22);
        glVertex2i(761, 41);
        glEnd();

        glColor3ub(9, 36, 43); //car3 window 01 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(746, 41);
        glVertex2i(741, 22);
        glVertex2i(761, 41);
        glEnd();

        glColor3ub(0, 109, 157); //car3 window 02
        glBegin(GL_POLYGON);
        glVertex2i(765, 41);
        glVertex2i(765, 22);
        glVertex2i(784, 22);
        glVertex2i(779, 41);
        glEnd();

        glColor3ub(9, 36, 43); //car3 window 02 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(765, 41);
        glVertex2i(765, 22);
        glVertex2i(779, 41);
        glEnd();
        wheel(740, 14, 4, 2);
        wheel(788, 14, 4, 2);

        //car04
        glColor3ub(108, 100, 110); //head light
        glBegin(GL_TRIANGLES);
        glVertex2i(1020, 25);
        glVertex2i(1020, 10);
        glColor3ub(204, 169, 48);
        glVertex2i(950, 20);
        glEnd();

        glColor3ub(79, 183, 223);
        glBegin(GL_POLYGON);
        glVertex2i(895, 22);
        glVertex2i(885, 22);
        glVertex2i(878, 18);
        glVertex2i(878, 14);
        glVertex2i(878, 14);
        glVertex2i(964, 14);
        glVertex2i(964, 18);
        glVertex2i(959, 22);
        glVertex2i(950, 22);
        glVertex2i(944, 46);
        glVertex2i(901, 46);
        glEnd();

        glColor3ub(68, 112, 131); //car4 window 01
        glBegin(GL_POLYGON);
        glVertex2i(906, 41);
        glVertex2i(901, 22);
        glVertex2i(921, 22);
        glVertex2i(921, 41);
        glEnd();

        glColor3ub(7, 18, 14); //car4 window 01 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(906, 41);
        glVertex2i(901, 22);
        glVertex2i(921, 41);
        glEnd();

        glColor3ub(68, 112, 131); //car4 window 02
        glBegin(GL_POLYGON);
        glVertex2i(925, 41);
        glVertex2i(925, 22);
        glVertex2i(944, 22);
        glVertex2i(939, 41);
        glEnd();

        glColor3ub(7, 18, 14); //car4 window 02 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(925, 41);
        glVertex2i(925, 22);
        glVertex2i(939, 41);
        glEnd();
        wheel(895, 16, 4, 2);
        wheel(950, 16, 4, 2);
    }
    void nightCarsLeft()
    {
        //car02
        glColor3ub(108, 100, 110); //head light
        glBegin(GL_TRIANGLES);
        glVertex2i(472, 85);
        glVertex2i(472, 70);
        glColor3ub(204, 169, 48);
        glVertex2i(540, 79);
        glEnd();

        glColor3ub(4, 139, 182);
        glBegin(GL_POLYGON);
        glVertex2i(535, 82);
        glVertex2i(525, 82);
        glVertex2i(518, 78);
        glVertex2i(518, 74);
        glVertex2i(518, 74);
        glVertex2i(604, 74);
        glVertex2i(604, 78);
        glVertex2i(599, 82);
        glVertex2i(590, 82);
        glVertex2i(584, 106);
        glVertex2i(541, 106);
        glEnd();

        glColor3ub(6, 99, 157); //car2 window 01
        glBegin(GL_POLYGON);
        glVertex2i(546, 101);
        glVertex2i(541, 84);
        glVertex2i(561, 84);
        glVertex2i(561, 101);
        glEnd();

        glColor3ub(0, 30, 45); //car2 window 01 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(546, 101);
        glVertex2i(561, 84);
        glVertex2i(561, 101);
        glEnd();

        glColor3ub(6, 99, 157); //car2 window 02
        glBegin(GL_POLYGON);
        glVertex2i(565, 101);
        glVertex2i(565, 84);
        glVertex2i(585, 84);
        glVertex2i(580, 101);
        glEnd();

        glColor3ub(0, 30, 45); //car2 window 02 Glitch
        glBegin(GL_TRIANGLES);
        glVertex2i(565, 101);
        glVertex2i(585, 84);
        glVertex2i(580, 101);
        glEnd();
        wheel(540, 74, 4, 2);
        wheel(578, 74, 4, 2);
    }
};


void moveCarRight()
{
    cars c;
    if (isRedlight)
    {
        CarX_R += 0;
    }
    else
    {
        CarX_R += .9;
    }

    if (CarX_R > 1200)
    {
        CarX_R = -800;
    }

    glPushMatrix();
    glTranslatef(CarX_R, CarY_R, 0);
    if (isDay)
    {
        c.dayCarsRight();
    }
    else
    {
        c.nightCarsRight();
    }

    glPopMatrix();
}
void moveCarLeft()

{
    cars c;
    if (isRedlight)
    {
        CarX_L += 0;
    }
    else
    {
        CarX_L -= .9;
    }

    if (CarX_L < -650)
    {
        CarX_L = 650;
    }

    glPushMatrix();
    glTranslatef(CarX_L, CarY_L, 0);
    if (isDay)
    {
        c.dayCarLeft();
    }
    else
    {
        c.nightCarsLeft();
    }

    glPopMatrix();
}
void vehicle()
{
    moveCarLeft();
    moveCarRight();
}

void moveCloud()
{

    CloudX += .3;

    if (CloudX > 1200)
    {
        CloudX = -1200;
    }

    glPushMatrix();
    glTranslatef(CloudX, CloudY, 0);
    if (isDay)
    {
        DayCloud();
    }
    else
    {
        NightCloud();
    }

    glPopMatrix();
}
void sunRise()

{
    if (!sunSitThere)
    {
        sunY += .3;
        //std::cout << "  " << moonY;
    }
    if (sunY > 290)
    {
        //std::cout << "working!";
        text(50, 540, "Press N to make Night");
        sunSitThere = true;
    }
    glPushMatrix();
    glTranslatef(sunX, sunY, 0);
    sun();
    glPopMatrix();
}
void sunset()

{

    if (makeItNight)
    {
        sunY -= .3;
    }
    //std::cout << "  " << sunY ;
    if (sunY < -125)
    {
        isDay = false;
        sunY = 0;
    }

    glPushMatrix();
    glTranslatef(sunX, sunY, 0);
    sun();
    glPopMatrix();
}
void MoonRise()

{
    if (!moonSitThere)
    {
        moonY += .3;
        //std::cout << "  " << moonY;
    }
    if (moonY > 290)
    {
        //std::cout << "working!";
        text(50, 540, "Press D to make Day");
        moonSitThere = true;
    }
    glPushMatrix();
    glTranslatef(moonX, moonY, 0);
    moon();
    glPopMatrix();
}
void moonset()

{

    if (makeItDay)
    {
        //std::cout << " clicked ";
        moonY -= .5;
    }
    //std::cout << "  " << sunY ;
    if (moonY < -100)
    {
        isDay = true;
        moonY = 0;
    }

    glPushMatrix();
    glTranslatef(moonX, moonY, 0);
    moon();
    glPopMatrix();
}


void wheel(int x, int y, int outer, int inner)
{
    glPushMatrix();
    glColor3ub(0, 22, 51);
    DrawCircle(x, y, outer, 2000);
    glColor3ub(164, 199, 178);
    DrawCircle(x, y, inner, 2000);
    glPopMatrix();
}
void trafficlights(int x, int y)
{
    glPushMatrix();
    DrawCircle(x, y, 5, 2000);
    glPopMatrix();
}
void trfficText()
{
    if (isRedlight)
    {
        text(50, 560, "Press G for Green Light");
    }
    else
    {
        text(50, 560, "Press S for Red Light");
    }
}
void trafficlightStand()
{
    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(600, 122);
    glVertex2i(605, 122);
    glVertex2i(605, 160);
    glVertex2i(600, 160);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(595, 160);
    glVertex2i(610, 160);
    glVertex2i(610, 190);
    glVertex2i(595, 190);
    glEnd();

    if (isRedlight)
    {
        glColor3ub(255, 0, 0);
        trafficlights(602, 181);
        glColor3ub(0, 80, 0);
        trafficlights(602, 168);
    }
    else
    {
        glColor3ub(80, 0, 0);
        trafficlights(602, 181);
        glColor3ub(0, 255, 0);
        trafficlights(602, 168);
    }
}

void DayTime()
{
    daytime();
}
void NightTime()
{
    night_time();
}


bool isSound = false;

void soundNull() {
    PlaySound(NULL, 0, 0);
}

void keyboard(unsigned char key, int x, int y)

{
    switch (key)
    {
    case 'd':
        if (moonSitThere)
        {
            makeItDay = true;
            makeItNight = false;
            sunSitThere = false;
            soundNull();
        }
        break;
    case 'n':
        if (sunSitThere)
        {
            makeItNight = true;
            makeItDay = false;
            moonSitThere = false;
        }
        break;
    case 'N':
        PlaySound("C:/D----------------Drive/Computer-Graphics-main/OpenGL Programming/final_project1/final_project/cricket.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
        break;
    case 'r':
        PlaySound("C:/D----------------Drive/Computer-Graphics-main/OpenGL Programming/final_project1/final_project/rain.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
        rainday = true;
        break;
    case 'a':
        PlaySound("C:/D----------------Drive/Computer-Graphics-main/OpenGL Programming/final_project1/final_project/azan1.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
        break;
    case 'f':
        rainday = false;
        break;
    case 's':
        isRedlight = true;
        break;
    case 'g':
        isRedlight = false;
        break;
    case 'p':
        isSound = false;
        soundNull();
        break;
    default:
        break;
    }
}

void Day()
{
    Daysky();
    if (sunY < -60)
        if (!rainday)
            EveningSky();
    sunRise();
    sunset();
    if (rainday)
    {
        coverTheSun();
        text(50, 580, "Press F to stop Rain");
    }
    else
        text(50, 580, "Press R to start Rain");
    trfficText();
    moveCloud();
    BgBuildingDayTime();
    RoadFieldDay();
    //DayTime();
    good_morning(100, 200);
    dayTree();
    trafficlightStand();
    vehicle();
    dayLampPost();
}

void Night()
{
    Nightsky();
    trfficText();
    MoonRise();
    moonset();
    stars();
    if (rainday)
    {
        coverThemoon();
        text(50, 580, "Press F to stop Rain");
    }
    else
        text(50, 580, "Press R to start Rain");
    moveCloud();
    //BgBuildingNightTime();

    RoadFielNight();
    //NightTime();
    good_night(100, 200);
    nightTree();
    trafficlightStand();
    vehicle();
    nightLampPost();
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    if (isDay)
    {
        Day();
    }
    else
    {
        Night();
    }
    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();

    glPushMatrix();
    Rain(rain);
    glutPostRedisplay();
    glutTimerFunc(1, Rain, 0);
    glFlush();
    glPopMatrix();
}

void myInit(void)
{

    glClearColor(255, 255, 255, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0.0, 600.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("OpenGL_Project_Group_2");
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(keyboard);
    myInit();
    glutMainLoop();
}

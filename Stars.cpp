struct star
{
    void drawstars()
    {
        glColor3ub(251, 163, 31);
        glBegin(GL_TRIANGLE_FAN);

        glVertex2i(535, 608);
        glVertex2i(502, 597);
        glVertex2i(532, 592);

        glVertex2i(541, 560);
        glVertex2i(552, 590);

        glVertex2i(593, 599);
        glVertex2i(553, 607);

        glVertex2i(544, 647);
        glVertex2i(532, 592);

        glEnd();
    }
};
void stars()
{
    star s;
    //stars 1
    glPushMatrix();
    glScalef(0.3, 0.3, 0.0);
    glTranslated(2000, 1000, 0);
    s.drawstars();
    glPopMatrix();
    //stars 2
    glPushMatrix();
    glScalef(0.3, 0.3, 0.0);
    glTranslated(2200, 800, 0);
    s.drawstars();
    glPopMatrix();
    //stars 3
    glPushMatrix();
    glScalef(0.1, 0.1, 0.0);
    glTranslated(8000, 4200, 0);
    s.drawstars();
    glPopMatrix();
    //stars 4
    glPushMatrix();
    glScalef(0.1, 0.1, 0.0);
    glTranslated(9000, 4000, 0);
    s.drawstars();
    glPopMatrix();
    //stars 5
    glPushMatrix();
    glScalef(0.1, 0.1, 0.0);
    glTranslated(8700, 3850, 0);
    s.drawstars();
    glPopMatrix();
    //stars 6
    glPushMatrix();
    glScalef(0.1, 0.1, 0.0);
    glTranslated(8900, 3600, 0);
    s.drawstars();
    glPopMatrix();
    //point stars
    glPushMatrix();
    glBegin(GL_POINTS);
    glColor3ub(251, 163, 31);
    glVertex2i(947, 465);
    glVertex2i(901, 441);
    glVertex2i(912, 421);
    glEnd();
    glPopMatrix();
}
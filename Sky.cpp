

void Daysky()
{
    ///---------------------Ajran-----------------------///
    ///sky block
    glColor3ub(219, 223, 226);
    glBegin(GL_QUADS);
    glVertex2i(0, 600);
    glVertex2i(0, 145);
    glVertex2i(1200, 145);
    glVertex2i(1200, 600);
    glEnd();
}
void EveningSky()
{
    ///sky block
    glColor3ub(255, 137, 54);
    glBegin(GL_QUADS);
    glVertex2i(0, 145);
    glVertex2i(1200, 145);
    glColor3ub(219, 223, 226);
    glVertex2i(1200, 600);
    glVertex2i(0, 600);
    glEnd();
}
void Nightsky()
{

    ///sky block
    glColor3ub(0, 127, 179);
    glBegin(GL_QUADS);
    glVertex2i(0, 600);
    glVertex2i(0, 145);
    glVertex2i(1200, 145);
    glVertex2i(1200, 600);
    glEnd();
}
// void sun()
// {
//     glPushMatrix();
//     glTranslated(0, -300, 0);
//     glColor3f(3.0, 1.0, 0.5);
//     circle(805, 546, 50, 2000);
//     glPopMatrix();
// }
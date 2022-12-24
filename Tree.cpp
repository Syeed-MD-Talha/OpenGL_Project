struct Tree
{
    void drawdayTree()
    {
        glColor3ub(78, 148, 45);
        glBegin(GL_TRIANGLES);
        glVertex2i(370, 250);
        glVertex2i(440, 255);
        glVertex2i(400, 290);
        glEnd();

        glColor3ub(39, 118, 37);
        glBegin(GL_TRIANGLES);
        glVertex2i(375, 272);
        glVertex2i(432, 268);
        glVertex2i(405, 297);
        glEnd();

        glColor3ub(78, 148, 45);
        glBegin(GL_TRIANGLES);
        glVertex2i(380, 290);
        glVertex2i(425, 290);
        glVertex2i(405, 315);
        glEnd();

        glColor3ub(119, 68, 34);
        glBegin(GL_QUADS);
        glVertex2i(400, 235);
        glVertex2i(410, 235);
        glVertex2i(410, 253);
        glVertex2i(400, 253);
        glEnd();

    }

    void drawnightTree()
    {
        glColor3ub(26, 77, 132);
        glBegin(GL_TRIANGLES);
        glVertex2i(370, 250);
        glVertex2i(440, 255);
        glVertex2i(400, 290);
        glEnd();

        glColor3ub(26, 77, 132);
        glBegin(GL_TRIANGLES);
        glVertex2i(375, 272);
        glVertex2i(432, 268);
        glVertex2i(405, 297);
        glEnd();

        glColor3ub(26, 77, 132);
        glBegin(GL_TRIANGLES);
        glVertex2i(380, 290);
        glVertex2i(425, 290);
        glVertex2i(405, 315);
        glEnd();

        glColor3ub(26, 77, 132);
        glBegin(GL_QUADS);
        glVertex2i(400, 235);
        glVertex2i(410, 235);
        glVertex2i(410, 253);
        glVertex2i(400, 253);
        glEnd();

        glPointSize(2);
        glColor3ub(rand() % 255, rand() % 255, rand() % 255);
        glBegin(GL_POINTS);
        glVertex2i(394, 300);
        glVertex2i(406, 297);
        glVertex2i(396, 271);
        glVertex2i(426, 261);
        glVertex2i(415, 279);
        glVertex2i(400, 279);
        glVertex2i(380, 255);
        glEnd();
    }
};

void dayTree()
{
    Tree t;
    glPushMatrix();
    glTranslated(-100, -100, 0);
    t.drawdayTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(60, -95, 0);
    t.drawdayTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(80, -95, 0);
    t.drawdayTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(170, -110, 0);
    t.drawdayTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(270, -100, 0);
    t.drawdayTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-300, -110, 0);
    t.drawdayTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(380, -100, 0);
    t.drawdayTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(400, -110, 0);
    t.drawdayTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(600, -100, 0);
    t.drawdayTree();
    glPopMatrix();

}

void nightTree()
{

    Tree t;
    glPushMatrix();
    glTranslated(-100, -100, 0);
    t.drawnightTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(60, -95, 0);
    t.drawnightTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(80, -95, 0);
    t.drawnightTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(170, -110, 0);
    t.drawnightTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(270, -100, 0);
    t.drawnightTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-300, -110, 0);
    t.drawnightTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(380, -100, 0);
    t.drawnightTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(400, -110, 0);
    t.drawnightTree();
    glPopMatrix();

    glPushMatrix();
    glTranslated(600, -100, 0);
    t.drawnightTree();
    glPopMatrix();
}
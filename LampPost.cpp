struct LampPost
{
    void drawdayLampPost()
    {
        glColor3ub(103, 154, 169);
        glBegin(GL_TRIANGLES);
        glVertex2i(204, 120);
        glVertex2i(215, 120);
        glVertex2i(210, 135);
        glEnd();

        glColor3ub(49, 46, 55);
        glBegin(GL_QUADS);
        glVertex2i(208, 129);
        glVertex2i(212, 129);
        glVertex2i(212, 200);
        glVertex2i(208, 200);
        glEnd();

        glColor3ub(49, 46, 55);
        glBegin(GL_TRIANGLES);
        glVertex2i(210, 195);
        glVertex2i(215, 205);
        glVertex2i(205, 205);
        glEnd();

        glColor3ub(241, 237, 216);
        glBegin(GL_QUADS);
        glVertex2i(204, 204);
        glVertex2i(215, 204);
        glVertex2i(215, 213);
        glVertex2i(204, 213);
        glEnd();

        glColor3ub(49, 46, 55);
        glBegin(GL_QUADS);
        glVertex2i(208, 214);
        glVertex2i(212, 214);
        glVertex2i(212, 222);
        glVertex2i(208, 222);
        glEnd();

        glColor3ub(49, 46, 55);
        glLineWidth(4);
        glBegin(GL_LINES);
        glVertex2i(204, 215);
        glVertex2i(215, 215);
        glVertex2i(204, 120);
        glVertex2i(215, 120);
        glVertex2i(208, 204);
        glVertex2i(212, 204);
        glEnd();
    }
    void drawnightLampPost()
    {
        glColor3ub(103, 154, 169);
        glBegin(GL_TRIANGLES);
        glVertex2i(204, 120);
        glVertex2i(215, 120);
        glVertex2i(210, 135);
        glEnd();

        glColor3ub(49, 46, 55);
        glBegin(GL_QUADS);
        glVertex2i(208, 129);
        glVertex2i(212, 129);
        glVertex2i(212, 200);
        glVertex2i(208, 200);
        glEnd();

        glColor3ub(49, 46, 55);
        glBegin(GL_TRIANGLES);
        glVertex2i(210, 195);
        glVertex2i(215, 205);
        glVertex2i(205, 205);
        glEnd();

        glColor3ub(255, 207, 88);
        glBegin(GL_QUADS);
        glVertex2i(204, 204);
        glVertex2i(215, 204);
        glVertex2i(215, 213);
        glVertex2i(204, 213);
        glEnd();

        glColor3ub(49, 46, 55);
        glBegin(GL_QUADS);
        glVertex2i(208, 214);
        glVertex2i(212, 214);
        glVertex2i(212, 222);
        glVertex2i(208, 222);
        glEnd();

        glColor3ub(49, 46, 55);
        glLineWidth(4);
        glBegin(GL_LINES);
        glVertex2i(204, 215);
        glVertex2i(215, 215);
        glVertex2i(204, 120);
        glVertex2i(215, 120);
        glVertex2i(208, 204);
        glVertex2i(212, 204);
        glEnd();
    }

};




void dayLampPost()
{
    LampPost lp;

    glPushMatrix();
    glTranslated(20, 5, 0);
    lp.drawdayLampPost();
    glPopMatrix();

    glPushMatrix();
    glTranslated(340, 5, 0);
    lp.drawdayLampPost();
    glPopMatrix();

    glPushMatrix();
    glTranslated(700, 5, 0);
    lp.drawdayLampPost();
    glPopMatrix();
}

void nightLampPost()
{
    LampPost lp;

    glPushMatrix();
    glTranslated(20, 5, 0);
    lp.drawnightLampPost();
    glPopMatrix();

    glPushMatrix();
    glTranslated(340, 5, 0);
    lp.drawnightLampPost();
    glPopMatrix();

    glPushMatrix();
    glTranslated(700, 5, 0);
    lp.drawnightLampPost();
    glPopMatrix();
}

void RoadFieldDay()
{
    ///Green Field
    glColor3ub(169, 188, 60);
    glBegin(GL_QUADS);
    glVertex2i(0, 170);
    glVertex2i(0, 122);
    glVertex2i(1200, 122);
    glVertex2i(1200, 170);
    glEnd();
    ///end

    ///Road
    glColor3f(0.3f, 0.4f, 0.4f);
    //glColor3ub(254, 206, 8);
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(1200, 0);
    glVertex2i(1200, 122);
    glVertex2i(0, 122);
    glEnd();

    glPushAttrib(GL_ENABLE_BIT);
    glLineWidth(5); // road_strip
    glLineStipple(10, 0xAAAA);
    glEnable(GL_LINE_STIPPLE);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2i(0, 58);
    glVertex2i(1190, 58);
    glEnd();
    glPopAttrib();

    ///end
}
void RoadFielNight()
{
    ///Green Field
    glColor3ub(9, 27, 32);
    glBegin(GL_QUADS);
    glVertex2i(0, 170);
    glVertex2i(0, 122);
    glVertex2i(1200, 122);
    glVertex2i(1200, 170);
    glEnd();
    ///end

    ///Road
    glColor3ub(27, 66, 121);
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(1200, 0);
    glVertex2i(1200, 122);
    glVertex2i(0, 122);
    glEnd();

    glPushAttrib(GL_ENABLE_BIT);
    glLineWidth(5); // road_strip
    glLineStipple(10, 0xAAAA);
    glEnable(GL_LINE_STIPPLE);
    glColor3ub(6, 95, 138);
    glBegin(GL_LINES);
    glVertex2i(0, 58);
    glVertex2i(1190, 58);
    glEnd();
    glPopAttrib();

    ///end
}
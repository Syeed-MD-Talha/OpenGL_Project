
void daytime()
{
    //1st building

    glBegin(GL_POLYGON);
    glPointSize(10.0);
    glColor3ub(106, 135, 109);
    glVertex2i(310, 250);
    glVertex2i(395, 250);
    glVertex2i(387, 262);
    glVertex2i(318, 262);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(305, 245);
    glVertex2i(400, 245);
    glVertex2i(397, 250);
    glVertex2i(306, 250);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);

    glColor3ub(239, 124, 33);
    glVertex2i(310, 145);
    glVertex2i(395, 145);
    glVertex2i(395, 245);
    glVertex2i(310, 245);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(214, 195, 144);
    glVertex2i(310, 212);
    glVertex2i(395, 212);
    glVertex2i(395, 217);
    glVertex2i(310, 217);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 253, 253);
    glVertex2i(322, 217);
    glVertex2i(336, 217);
    glVertex2i(336, 238);
    glVertex2i(322, 238);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(322, 232);
    glVertex2i(336, 232);
    glVertex2i(322, 222);
    glVertex2i(336, 222);
    glVertex2i(330, 238);
    glVertex2i(330, 218);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 253, 253);
    glVertex2i(345, 217);
    glVertex2i(357, 217);
    glVertex2i(357, 238);
    glVertex2i(345, 238);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(345, 232);
    glVertex2i(358, 232);
    glVertex2i(345, 222);
    glVertex2i(358, 222);
    glVertex2i(352, 238);
    glVertex2i(352, 218);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 253, 253);
    glVertex2i(368, 217);
    glVertex2i(381, 217);
    glVertex2i(381, 238);
    glVertex2i(368, 238);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(368, 232);
    glVertex2i(382, 232);
    glVertex2i(368, 222);
    glVertex2i(382, 222);
    glVertex2i(375, 238);
    glVertex2i(375, 218);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 253, 253);
    glVertex2i(335, 185);
    glVertex2i(345, 185);
    glVertex2i(345, 205);
    glVertex2i(335, 205);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(335, 200);
    glVertex2i(345, 200);
    glVertex2i(335, 191);
    glVertex2i(345, 191);
    glVertex2i(340, 205);
    glVertex2i(340, 185);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 253, 253);
    glVertex2i(355, 185);
    glVertex2i(370, 185);
    glVertex2i(370, 205);
    glVertex2i(355, 205);
    glEnd();
    ///---------------------Asraf-----------------------///
    //yellow building
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(251, 185, 23);
    glVertex2i(0, 145);
    glVertex2i(20, 145);
    glVertex2i(20, 260);
    glVertex2i(0, 260);
    glEnd();

    glBegin(GL_QUADS); //1st Building Top bar
    glColor3ub(65, 51, 0);
    glVertex2i(0, 260);
    glVertex2i(20, 260);
    glVertex2i(20, 266);
    glVertex2i(0, 266);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(245, 225, 164);
    glVertex2i(20, 145);
    glVertex2i(64, 145);
    glVertex2i(64, 260);
    glVertex2i(20, 260);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(65, 51, 0);
    glVertex2i(20, 260);
    glVertex2i(64, 260);
    glVertex2i(64, 266);
    glVertex2i(20, 266);
    glEnd();

    //window 1
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(25, 237);
    glVertex2i(33, 237);
    glVertex2i(33, 250);
    glVertex2i(25, 250);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(25, 250);
    glVertex2i(33, 250);
    glVertex2i(33, 253);
    glVertex2i(25, 253);
    glEnd();

    //window 2
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(37, 237);
    glVertex2i(45, 237);
    glVertex2i(45, 250);
    glVertex2i(37, 250);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(37, 250);
    glVertex2i(45, 250);
    glVertex2i(45, 253);
    glVertex2i(37, 253);
    glEnd();

    //window 3
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(50, 237);
    glVertex2i(58, 237);
    glVertex2i(58, 250);
    glVertex2i(50, 250);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(50, 250);
    glVertex2i(58, 250);
    glVertex2i(58, 253);
    glVertex2i(50, 253);
    glEnd();

    //window 4
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(25, 215);
    glVertex2i(33, 215);
    glVertex2i(33, 228);
    glVertex2i(25, 228);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(25, 228);
    glVertex2i(33, 228);
    glVertex2i(33, 231);
    glVertex2i(25, 231);
    glEnd();

    //window 5

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(37, 215);
    glVertex2i(45, 215);
    glVertex2i(45, 228);
    glVertex2i(37, 228);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(37, 228);
    glVertex2i(45, 228);
    glVertex2i(45, 231);
    glVertex2i(37, 231);
    glEnd();

    //window 6
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(50, 215);
    glVertex2i(58, 215);
    glVertex2i(58, 228);
    glVertex2i(50, 228);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(50, 228);
    glVertex2i(58, 228);
    glVertex2i(58, 231);
    glVertex2i(50, 231);
    glEnd();

    //window 7
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(25, 195);
    glVertex2i(33, 195);
    glVertex2i(33, 208);
    glVertex2i(25, 208);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(25, 207);
    glVertex2i(33, 207);
    glVertex2i(33, 210);
    glVertex2i(25, 210);
    glEnd();

    //window 8

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(37, 195);
    glVertex2i(45, 195);
    glVertex2i(45, 208);
    glVertex2i(37, 208);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(37, 207);
    glVertex2i(45, 207);
    glVertex2i(45, 210);
    glVertex2i(37, 210);
    glEnd();

    //window 9

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(50, 195);
    glVertex2i(58, 195);
    glVertex2i(58, 208);
    glVertex2i(50, 208);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(50, 207);
    glVertex2i(58, 207);
    glVertex2i(58, 210);
    glVertex2i(50, 210);
    glEnd();

    //window 10
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 252);
    glVertex2i(25, 175);
    glVertex2i(33, 175);
    glVertex2i(33, 188);
    glVertex2i(25, 188);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(252, 194, 40);
    glVertex2i(25, 188);
    glVertex2i(33, 188);
    glVertex2i(33, 191);
    glVertex2i(25, 191);
    glEnd();

    //green building

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(201, 78, 44);
    glVertex2i(90, 150);
    glVertex2i(100, 150);
    glVertex2i(100, 275);
    glVertex2i(90, 275);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(201, 78, 44);
    glVertex2i(85, 270);
    glVertex2i(95, 270);
    glVertex2i(95, 280);
    glVertex2i(85, 280);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(36, 71, 66);
    glVertex2i(100, 150);
    glVertex2i(160, 150);
    glVertex2i(160, 275);
    glVertex2i(100, 275);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(36, 71, 66);
    glVertex2i(90, 275);
    glVertex2i(165, 275);
    glVertex2i(165, 280);
    glVertex2i(90, 280);
    glEnd();

    //window 1
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(135, 173, 149);
    glVertex2i(104, 245);
    glVertex2i(118, 245);
    glVertex2i(118, 265);
    glVertex2i(104, 265);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(104, 255);
    glVertex2i(118, 255);
    glVertex2i(111, 245);
    glVertex2i(111, 265);
    glEnd();

    //window 2
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(135, 173, 149);
    glVertex2i(124, 245);
    glVertex2i(138, 245);
    glVertex2i(138, 265);
    glVertex2i(124, 265);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(124, 255);
    glVertex2i(138, 255);
    glVertex2i(131, 245);
    glVertex2i(131, 265);
    glEnd();

    //window 3
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(135, 173, 149);
    glVertex2i(142, 245);
    glVertex2i(156, 245);
    glVertex2i(156, 265);
    glVertex2i(142, 265);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(142, 255);
    glVertex2i(156, 255);
    glVertex2i(149, 245);
    glVertex2i(149, 265);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(107, 131, 125);
    glVertex2i(100, 237);
    glVertex2i(160, 237);
    glVertex2i(160, 240);
    glVertex2i(100, 240);
    glEnd();

    //window 4
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(135, 173, 149);
    glVertex2i(104, 215);
    glVertex2i(118, 215);
    glVertex2i(118, 235);
    glVertex2i(104, 235);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(104, 225);
    glVertex2i(118, 225);
    glVertex2i(111, 215);
    glVertex2i(111, 235);
    glEnd();

    //window 5
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(135, 173, 149);
    glVertex2i(124, 215);
    glVertex2i(138, 215);
    glVertex2i(138, 235);
    glVertex2i(124, 235);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(124, 135, 118);
    glVertex2i(124, 225);
    glVertex2i(138, 225);
    glVertex2i(131, 215);
    glVertex2i(131, 235);
    glEnd();

    //window 6
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(135, 173, 149);
    glVertex2i(142, 215);
    glVertex2i(156, 215);
    glVertex2i(156, 235);
    glVertex2i(142, 235);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(142, 225);
    glVertex2i(156, 225);
    glVertex2i(149, 215);
    glVertex2i(149, 235);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(107, 131, 125);
    glVertex2i(100, 207);
    glVertex2i(160, 207);
    glVertex2i(160, 210);
    glVertex2i(100, 210);
    glEnd();

    //window 7
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(135, 173, 149);
    glVertex2i(104, 185);
    glVertex2i(118, 185);
    glVertex2i(118, 205);
    glVertex2i(104, 205);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(104, 195);
    glVertex2i(118, 195);
    glVertex2i(111, 185);
    glVertex2i(111, 205);
    glEnd();

    //window 8
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(135, 173, 149);
    glVertex2i(124, 185);
    glVertex2i(138, 185);
    glVertex2i(138, 205);
    glVertex2i(124, 205);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(124, 195);
    glVertex2i(138, 195);
    glVertex2i(131, 185);
    glVertex2i(131, 205);
    glEnd();

    //window 9
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(135, 173, 149);
    glVertex2i(142, 185);
    glVertex2i(156, 185);
    glVertex2i(156, 205);
    glVertex2i(142, 205);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(107, 131, 125);
    glVertex2i(100, 177);
    glVertex2i(160, 177);
    glVertex2i(160, 180);
    glVertex2i(100, 180);
    glEnd();

    //red building
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(146, 44, 27);
    glVertex2i(228, 145);
    glVertex2i(237, 145);
    glVertex2i(237, 310);
    glVertex2i(228, 310);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(146, 44, 27);
    glVertex2i(227, 305);
    glVertex2i(232, 305);
    glVertex2i(232, 315);
    glVertex2i(227, 315);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(209, 70, 42);
    glVertex2i(237, 145);
    glVertex2i(300, 145);
    glVertex2i(300, 310);
    glVertex2i(237, 310);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(209, 70, 42);
    glVertex2i(232, 310);
    glVertex2i(305, 310);
    glVertex2i(305, 315);
    glVertex2i(232, 315);
    glEnd();

    //window 1

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(131, 180, 160);
    glVertex2i(250, 270);
    glVertex2i(262, 270);
    glVertex2i(262, 295);
    glVertex2i(250, 295);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(250, 285);
    glVertex2i(262, 285);
    glVertex2i(256, 270);
    glVertex2i(256, 295);
    glEnd();
    //window 2

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(131, 180, 160);
    glVertex2i(267, 270);
    glVertex2i(279, 270);
    glVertex2i(279, 295);
    glVertex2i(267, 295);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(267, 285);
    glVertex2i(279, 285);
    glVertex2i(273, 270);
    glVertex2i(273, 295);
    glEnd();

    //window 3

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(131, 180, 160);
    glVertex2i(284, 270);
    glVertex2i(296, 270);
    glVertex2i(296, 295);
    glVertex2i(284, 295);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(284, 285);
    glVertex2i(296, 285);
    glVertex2i(290, 270);
    glVertex2i(290, 295);
    glEnd();

    //window 4

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(131, 180, 160);
    glVertex2i(250, 235);
    glVertex2i(262, 235);
    glVertex2i(262, 260);
    glVertex2i(250, 260);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(250, 250);
    glVertex2i(262, 250);
    glVertex2i(256, 235);
    glVertex2i(256, 260);
    glEnd();

    //window 5

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(131, 180, 160);
    glVertex2i(267, 235);
    glVertex2i(279, 235);
    glVertex2i(279, 260);
    glVertex2i(267, 260);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(267, 250);
    glVertex2i(279, 250);
    glVertex2i(273, 235);
    glVertex2i(273, 260);
    glEnd();

    //window 6

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(131, 180, 160);
    glVertex2i(284, 235);
    glVertex2i(296, 235);
    glVertex2i(296, 260);
    glVertex2i(284, 260);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(284, 250);
    glVertex2i(296, 250);
    glVertex2i(290, 235);
    glVertex2i(290, 260);
    glEnd();

    //window 7

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(131, 180, 160);
    glVertex2i(250, 195);
    glVertex2i(262, 195);
    glVertex2i(262, 220);
    glVertex2i(250, 220);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(250, 210);
    glVertex2i(262, 210);
    glVertex2i(256, 195);
    glVertex2i(256, 220);
    glEnd();

    //window 8

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(131, 180, 160);
    glVertex2i(267, 195);
    glVertex2i(279, 195);
    glVertex2i(279, 220);
    glVertex2i(267, 220);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(267, 210);
    glVertex2i(279, 210);
    glVertex2i(273, 195);
    glVertex2i(273, 220);
    glEnd();

    //window 9

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(131, 180, 160);
    glVertex2i(284, 195);
    glVertex2i(296, 195);
    glVertex2i(296, 220);
    glVertex2i(284, 220);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(284, 210);
    glVertex2i(296, 210);
    glVertex2i(290, 195);
    glVertex2i(290, 220);
    glEnd();

    //yellow building
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(235, 197, 73);
    glVertex2i(130, 145);
    glVertex2i(180, 145);
    glVertex2i(180, 210);
    glVertex2i(130, 210);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(222, 147, 51);
    glVertex2i(127, 210);
    glVertex2i(180, 210);
    glVertex2i(180, 218);
    glVertex2i(127, 218);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(249, 243, 222);
    glVertex2i(180, 145);
    glVertex2i(230, 145);
    glVertex2i(230, 210);
    glVertex2i(180, 210);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(243, 165, 75);
    glVertex2i(180, 210);
    glVertex2i(232, 210);
    glVertex2i(232, 218);
    glVertex2i(180, 218);
    glEnd();

    //window 1
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(132, 195);
    glVertex2i(137, 195);
    glVertex2i(137, 203);
    glVertex2i(132, 203);
    glEnd();

    //window 2
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(139, 195);
    glVertex2i(144, 195);
    glVertex2i(144, 203);
    glVertex2i(139, 203);
    glEnd();

    //window 3
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(146, 195);
    glVertex2i(151, 195);
    glVertex2i(151, 203);
    glVertex2i(146, 203);
    glEnd();

    //window 4
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(153, 195);
    glVertex2i(158, 195);
    glVertex2i(158, 203);
    glVertex2i(153, 203);
    glEnd();

    //window 5
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(160, 195);
    glVertex2i(165, 195);
    glVertex2i(165, 203);
    glVertex2i(160, 203);
    glEnd();

    //window 6
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(167, 195);
    glVertex2i(172, 195);
    glVertex2i(172, 203);
    glVertex2i(167, 203);
    glEnd();

    //window 7
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(132, 180);
    glVertex2i(137, 180);
    glVertex2i(137, 188);
    glVertex2i(132, 188);
    glEnd();

    //window 8
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(139, 180);
    glVertex2i(144, 180);
    glVertex2i(144, 188);
    glVertex2i(139, 188);
    glEnd();

    //window 9
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(146, 180);
    glVertex2i(151, 180);
    glVertex2i(151, 188);
    glVertex2i(146, 188);
    glEnd();

    //window 10
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(153, 180);
    glVertex2i(158, 180);
    glVertex2i(158, 188);
    glVertex2i(153, 188);
    glEnd();

    //window 11
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(160, 180);
    glVertex2i(165, 180);
    glVertex2i(165, 188);
    glVertex2i(160, 188);
    glEnd();

    //window 12
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(167, 180);
    glVertex2i(172, 180);
    glVertex2i(172, 188);
    glVertex2i(167, 188);
    glEnd();

    //window 13
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(132, 165);
    glVertex2i(137, 165);
    glVertex2i(137, 173);
    glVertex2i(132, 173);
    glEnd();

    //window 14
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(139, 165);
    glVertex2i(144, 165);
    glVertex2i(144, 173);
    glVertex2i(139, 173);
    glEnd();

    //window 15
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(146, 165);
    glVertex2i(151, 165);
    glVertex2i(151, 173);
    glVertex2i(146, 173);
    glEnd();

    //window 16
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(153, 165);
    glVertex2i(158, 165);
    glVertex2i(158, 173);
    glVertex2i(153, 173);
    glEnd();

    //window 17
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(160, 165);
    glVertex2i(165, 165);
    glVertex2i(165, 173);
    glVertex2i(160, 173);
    glEnd();

    //window 18
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(167, 165);
    glVertex2i(172, 165);
    glVertex2i(172, 173);
    glVertex2i(167, 173);
    glEnd();

    //window 19
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(132, 150);
    glVertex2i(137, 150);
    glVertex2i(137, 158);
    glVertex2i(132, 158);
    glEnd();

    //window 20
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(139, 150);
    glVertex2i(144, 150);
    glVertex2i(144, 158);
    glVertex2i(139, 158);
    glEnd();

    //window 21
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(146, 150);
    glVertex2i(151, 150);
    glVertex2i(151, 158);
    glVertex2i(146, 158);
    glEnd();

    //window 22
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(153, 150);
    glVertex2i(158, 150);
    glVertex2i(158, 158);
    glVertex2i(153, 158);
    glEnd();

    //window 23
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(160, 150);
    glVertex2i(165, 150);
    glVertex2i(165, 158);
    glVertex2i(160, 158);
    glEnd();

    //window 24
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 246, 221);
    glVertex2i(167, 150);
    glVertex2i(172, 150);
    glVertex2i(172, 158);
    glVertex2i(167, 158);
    glEnd();

    //pink building
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(185, 32, 116);
    glVertex2i(35, 140);
    glVertex2i(125, 140);
    glVertex2i(125, 185);
    glVertex2i(35, 185);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(49, 13, 84);
    glVertex2i(30, 140);
    glVertex2i(40, 140);
    glVertex2i(40, 205);
    glVertex2i(30, 205);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(49, 13, 84);
    glVertex2i(65, 185);
    glVertex2i(80, 185);
    glVertex2i(80, 205);
    glVertex2i(65, 205);
    glEnd();

    glBegin(GL_TRIANGLES);
    glPointSize(10.0);
    glColor3ub(185, 32, 116);
    glVertex2i(40, 185);
    glVertex2i(75, 185);
    glVertex2i(40, 205);
    glEnd();

    glBegin(GL_TRIANGLES);
    glPointSize(10.0);
    glColor3ub(185, 32, 116);
    glVertex2i(78, 185);
    glVertex2i(120, 185);
    glVertex2i(78, 205);
    glEnd();

    //window 1
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 255);
    glVertex2i(50, 152);
    glVertex2i(65, 152);
    glVertex2i(65, 170);
    glVertex2i(50, 170);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(85, 19, 85);
    glVertex2i(50, 170);
    glVertex2i(65, 170);
    glVertex2i(65, 174);
    glVertex2i(50, 174);
    glEnd();

    //window 2
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 255);
    glVertex2i(75, 172);
    glVertex2i(80, 172);
    glVertex2i(80, 178);
    glVertex2i(75, 178);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(85, 19, 85);
    glVertex2i(75, 178);
    glVertex2i(80, 178);
    glVertex2i(80, 180);
    glVertex2i(75, 180);
    glEnd();

    //window 3
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 255);
    glVertex2i(83, 172);
    glVertex2i(88, 172);
    glVertex2i(88, 178);
    glVertex2i(83, 178);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(85, 19, 85);
    glVertex2i(83, 178);
    glVertex2i(88, 178);
    glVertex2i(88, 180);
    glVertex2i(83, 180);
    glEnd();

    //window 4
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 255);
    glVertex2i(83, 162);
    glVertex2i(88, 162);
    glVertex2i(88, 168);
    glVertex2i(83, 168);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(85, 19, 85);
    glVertex2i(83, 168);
    glVertex2i(88, 168);
    glVertex2i(88, 170);
    glVertex2i(83, 170);
    glEnd();

    //window 5

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 255);
    glVertex2i(91, 162);
    glVertex2i(96, 162);
    glVertex2i(96, 168);
    glVertex2i(91, 168);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(85, 19, 85);
    glVertex2i(91, 168);
    glVertex2i(96, 168);
    glVertex2i(96, 170);
    glVertex2i(91, 170);

    glEnd();
    ///---------------------Mahjabin-----------------------///
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(355, 200);
    glVertex2i(370, 200);
    glVertex2i(355, 191);
    glVertex2i(370, 191);
    glVertex2i(363, 205);
    glVertex2i(363, 185);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(113, 140, 120);
    glVertex2i(328, 152);
    glVertex2i(376, 152);
    glVertex2i(376, 170);
    glVertex2i(328, 170);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(245, 234, 188);
    glVertex2i(328, 144);
    glVertex2i(376, 144);
    glVertex2i(376, 146);
    glVertex2i(328, 146);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(245, 234, 188);
    glVertex2i(328, 146);
    glVertex2i(376, 146);
    glVertex2i(376, 152);
    glVertex2i(328, 152);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(376, 152);
    glVertex2i(376, 170);
    glVertex2i(376, 170);
    glVertex2i(328, 170);
    glVertex2i(328, 170);
    glVertex2i(328, 152);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(376, 144);
    glVertex2i(376, 152);
    glVertex2i(328, 152);
    glVertex2i(328, 144);
    glVertex2i(350, 170);
    glVertex2i(350, 144);
    glEnd();

    //2nd building

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(145, 55, 50);
    glVertex2i(405, 145);
    glVertex2i(430, 145);
    glVertex2i(430, 330);
    glVertex2i(405, 330);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(247, 165, 63);
    glVertex2i(430, 145);
    glVertex2i(485, 145);
    glVertex2i(485, 330);
    glVertex2i(430, 330);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(16, 17, 8);
    glVertex2i(405, 330);
    glVertex2i(430, 330);
    glVertex2i(430, 336);
    glVertex2i(405, 336);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(241, 205, 54);
    glVertex2i(430, 330);
    glVertex2i(485, 330);
    glVertex2i(485, 336);
    glVertex2i(430, 336);
    glEnd();

    glBegin(GL_QUADS); ///1st window
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(436, 305);
    glVertex2i(446, 305);
    glVertex2i(446, 315);
    glVertex2i(436, 315);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(436, 316);
    glVertex2i(446, 316);
    glVertex2i(446, 318);
    glVertex2i(436, 318);
    glEnd();

    glBegin(GL_QUADS); ///2nd
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(450, 305);
    glVertex2i(460, 305);
    glVertex2i(460, 315);
    glVertex2i(450, 315);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(450, 316);
    glVertex2i(460, 316);
    glVertex2i(460, 318);
    glVertex2i(450, 318);
    glEnd();

    glBegin(GL_QUADS); ///3rd
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(465, 305);
    glVertex2i(475, 305);
    glVertex2i(475, 315);
    glVertex2i(465, 315);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(465, 316);
    glVertex2i(475, 316);
    glVertex2i(475, 318);
    glVertex2i(465, 318);
    glEnd();

    glBegin(GL_QUADS); ///1st bar
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(435, 299);
    glVertex2i(475, 299);
    glVertex2i(475, 302);
    glVertex2i(435, 302);
    glEnd();

    glBegin(GL_QUADS); ///4th
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(435, 265);
    glVertex2i(445, 265);
    glVertex2i(445, 275);
    glVertex2i(435, 275);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(435, 275);
    glVertex2i(445, 275);
    glVertex2i(445, 277);
    glVertex2i(435, 277);
    glEnd();

    glBegin(GL_QUADS); ///5th
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(465, 265);
    glVertex2i(475, 265);
    glVertex2i(475, 275);
    glVertex2i(465, 275);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(465, 275);
    glVertex2i(475, 275);
    glVertex2i(475, 277);
    glVertex2i(465, 277);
    glEnd();

    glBegin(GL_QUADS); ///6th
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(450, 265);
    glVertex2i(460, 265);
    glVertex2i(460, 275);
    glVertex2i(450, 275);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(450, 275);
    glVertex2i(460, 275);
    glVertex2i(460, 277);
    glVertex2i(450, 277);
    glEnd();

    glBegin(GL_QUADS); ///2nd bar
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(435, 262);
    glVertex2i(475, 262);
    glVertex2i(475, 259);
    glVertex2i(435, 259);
    glEnd();

    glBegin(GL_QUADS); ///7th
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(435, 220);
    glVertex2i(445, 220);
    glVertex2i(445, 230);
    glVertex2i(435, 230);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(435, 231);
    glVertex2i(445, 231);
    glVertex2i(445, 233);
    glVertex2i(435, 233);
    glEnd();

    glBegin(GL_QUADS); ///8th
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(450, 220);
    glVertex2i(460, 220);
    glVertex2i(460, 230);
    glVertex2i(450, 230);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(450, 231);
    glVertex2i(460, 231);
    glVertex2i(460, 233);
    glVertex2i(450, 233);
    glEnd();

    glBegin(GL_QUADS); ///9th
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(465, 220);
    glVertex2i(475, 220);
    glVertex2i(475, 230);
    glVertex2i(465, 230);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(465, 231);
    glVertex2i(475, 231);
    glVertex2i(475, 233);
    glVertex2i(465, 233);
    glEnd();

    glBegin(GL_QUADS); ///3rd bar
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(435, 214);
    glVertex2i(475, 214);
    glVertex2i(475, 217);
    glVertex2i(435, 217);
    glEnd();

    glBegin(GL_QUADS); ///10th
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(465, 175);
    glVertex2i(475, 175);
    glVertex2i(475, 185);
    glVertex2i(465, 185);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(465, 186);
    glVertex2i(475, 186);
    glVertex2i(475, 188);
    glVertex2i(465, 188);
    glEnd();

    glBegin(GL_QUADS); ///11th
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(435, 175);
    glVertex2i(445, 175);
    glVertex2i(445, 185);
    glVertex2i(435, 185);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(435, 186);
    glVertex2i(445, 186);
    glVertex2i(445, 188);
    glVertex2i(435, 188);
    glEnd();

    glBegin(GL_QUADS); ///12th
    glPointSize(10.0);
    glColor3ub(255, 253, 241);
    glVertex2i(450, 175);
    glVertex2i(460, 175);
    glVertex2i(460, 185);
    glVertex2i(450, 185);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(450, 186);
    glVertex2i(460, 186);
    glVertex2i(460, 188);
    glVertex2i(450, 188);
    glEnd();

    glBegin(GL_QUADS); ///last bar
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(435, 170);
    glVertex2i(475, 170);
    glVertex2i(475, 173);
    glVertex2i(435, 173);
    glEnd();

    //3rd building

    glBegin(GL_TRIANGLES);
    glPointSize(10.0);
    glColor3ub(79, 143, 128);
    glVertex2i(492, 280);
    glVertex2i(540, 280);
    glVertex2i(535, 312);
    glEnd();

    glBegin(GL_TRIANGLES);
    glPointSize(10.0);
    glColor3ub(137, 180, 170);
    glVertex2i(540, 280);
    glVertex2i(580, 280);
    glVertex2i(535, 312);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(43, 141, 128);
    glVertex2i(495, 145);
    glVertex2i(540, 145);
    glVertex2i(540, 280);
    glVertex2i(495, 280);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(184, 217, 212);
    glVertex2i(540, 145);
    glVertex2i(580, 145);
    glVertex2i(580, 280);
    glVertex2i(540, 280);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(196, 231, 210);
    glVertex2i(500, 170);
    glVertex2i(535, 170);
    glVertex2i(535, 275);
    glVertex2i(500, 275);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //1
    glColor3ub(46, 142, 130);
    glVertex2i(495, 270);
    glVertex2i(535, 270);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 260);
    glVertex2i(535, 260);
    glEnd(); //2

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 250);
    glVertex2i(535, 250);
    glEnd(); //3

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 240);
    glVertex2i(535, 240);
    glEnd(); //4

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 230);
    glVertex2i(535, 230);
    glEnd(); //5

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 220);
    glVertex2i(535, 220);
    glEnd(); //6

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 210);
    glVertex2i(535, 210);
    glEnd(); //7

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 200);
    glVertex2i(535, 200);
    glEnd(); //8

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 190);
    glVertex2i(535, 190);
    glEnd(); //9

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 180);
    glVertex2i(535, 180);
    glEnd(); //10

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 170);
    glVertex2i(535, 170);
    glEnd(); //11

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(495, 160);
    glVertex2i(535, 160);
    glEnd(); //12

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(500, 275);
    glVertex2i(500, 170);
    glEnd(); //1

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(505, 275);
    glVertex2i(505, 170);
    glEnd(); //2

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(510, 275);
    glVertex2i(510, 170);
    glEnd(); //3

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(515, 275);
    glVertex2i(515, 170);
    glEnd(); //4

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(520, 275);
    glVertex2i(520, 170);
    glEnd(); //5

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(525, 275);
    glVertex2i(525, 170);
    glEnd(); //6

    glBegin(GL_LINES);
    glColor3ub(46, 142, 130);
    glVertex2i(530, 275);
    glVertex2i(530, 170);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(233, 248, 219);
    glVertex2i(545, 150);
    glVertex2i(575, 150);
    glVertex2i(575, 275);
    glVertex2i(545, 275);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 270);
    glVertex2i(575, 270);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 265);
    glVertex2i(575, 265);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 260);
    glVertex2i(575, 260);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 255);
    glVertex2i(575, 255);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 250);
    glVertex2i(575, 250);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 245);
    glVertex2i(575, 245);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 240);
    glVertex2i(575, 240);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 235);
    glVertex2i(575, 235);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 230);
    glVertex2i(575, 230);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 225);
    glVertex2i(575, 225);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 220);
    glVertex2i(575, 220);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 215);
    glVertex2i(575, 215);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 210);
    glVertex2i(575, 210);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 205);
    glVertex2i(575, 205);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 200);
    glVertex2i(575, 200);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 195);
    glVertex2i(575, 195);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 190);
    glVertex2i(575, 190);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 185);
    glVertex2i(575, 185);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 180);
    glVertex2i(575, 180);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 175);
    glVertex2i(575, 175);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 170);
    glVertex2i(575, 170);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 165);
    glVertex2i(575, 165);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 160);
    glVertex2i(575, 160);
    glEnd();

    glBegin(GL_LINES); //1
    glColor3ub(184, 217, 212);
    glVertex2i(545, 155);
    glVertex2i(575, 155);
    glEnd();
    //5th building

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 255, 51);
    glVertex2i(645, 165);
    glVertex2i(705, 165);
    glVertex2i(705, 330);
    glVertex2i(645, 330);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(244, 188, 22);
    glVertex2i(705, 270);
    glVertex2i(725, 270);
    glVertex2i(725, 330);
    glVertex2i(705, 330);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(0, 0, 0);
    glVertex2i(705, 330);
    glVertex2i(726, 330);
    glVertex2i(726, 335);
    glVertex2i(705, 335);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(77, 78, 23);
    glVertex2i(642, 330);
    glVertex2i(705, 330);
    glVertex2i(705, 335);
    glVertex2i(642, 335);
    glEnd();

    //1st
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(650, 300);
    glVertex2i(660, 300);
    glVertex2i(660, 315);
    glVertex2i(650, 315);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(650, 315);
    glVertex2i(660, 315);
    glVertex2i(660, 318);
    glVertex2i(650, 318);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(650, 270);
    glVertex2i(660, 270);
    glVertex2i(660, 285);
    glVertex2i(650, 285);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(650, 285);
    glVertex2i(660, 285);
    glVertex2i(660, 288);
    glVertex2i(650, 288);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(650, 240);
    glVertex2i(660, 240);
    glVertex2i(660, 255);
    glVertex2i(650, 255);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(650, 255);
    glVertex2i(660, 255);
    glVertex2i(660, 258);
    glVertex2i(650, 258);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(650, 210);
    glVertex2i(660, 210);
    glVertex2i(660, 225);
    glVertex2i(650, 225);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(650, 225);
    glVertex2i(660, 225);
    glVertex2i(660, 228);
    glVertex2i(650, 228);
    glEnd();

    //2nd
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(670, 300);
    glVertex2i(680, 300);
    glVertex2i(680, 315);
    glVertex2i(670, 315);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(670, 315);
    glVertex2i(680, 315);
    glVertex2i(680, 318);
    glVertex2i(670, 318);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(670, 270);
    glVertex2i(680, 270);
    glVertex2i(680, 285);
    glVertex2i(670, 285);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(670, 285);
    glVertex2i(680, 285);
    glVertex2i(680, 288);
    glVertex2i(670, 288);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(670, 240);
    glVertex2i(680, 240);
    glVertex2i(680, 255);
    glVertex2i(670, 255);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(670, 255);
    glVertex2i(680, 255);
    glVertex2i(680, 258);
    glVertex2i(670, 258);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(670, 210);
    glVertex2i(680, 210);
    glVertex2i(680, 225);
    glVertex2i(670, 225);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(670, 225);
    glVertex2i(680, 225);
    glVertex2i(680, 228);
    glVertex2i(670, 228);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(670, 180);
    glVertex2i(680, 180);
    glVertex2i(680, 195);
    glVertex2i(670, 195);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(670, 195);
    glVertex2i(680, 195);
    glVertex2i(680, 198);
    glVertex2i(670, 198);
    glEnd();

    //3rd

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(685, 300);
    glVertex2i(695, 300);
    glVertex2i(695, 315);
    glVertex2i(685, 315);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(685, 315);
    glVertex2i(695, 315);
    glVertex2i(695, 318);
    glVertex2i(685, 318);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(685, 270);
    glVertex2i(695, 270);
    glVertex2i(695, 285);
    glVertex2i(685, 285);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(685, 285);
    glVertex2i(695, 285);
    glVertex2i(695, 288);
    glVertex2i(685, 288);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(685, 240);
    glVertex2i(695, 240);
    glVertex2i(695, 255);
    glVertex2i(685, 255);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(685, 255);
    glVertex2i(695, 255);
    glVertex2i(695, 258);
    glVertex2i(685, 258);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(685, 210);
    glVertex2i(695, 210);
    glVertex2i(695, 225);
    glVertex2i(685, 225);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(685, 225);
    glVertex2i(695, 225);
    glVertex2i(695, 228);
    glVertex2i(685, 228);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(253, 254, 254);
    glVertex2i(685, 180);
    glVertex2i(695, 180);
    glVertex2i(695, 195);
    glVertex2i(685, 195);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(239, 181, 38);
    glVertex2i(685, 195);
    glVertex2i(695, 195);
    glVertex2i(695, 198);
    glVertex2i(685, 198);
    glEnd();

    //4th building

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(254, 207, 7);
    glVertex2i(590, 145);
    glVertex2i(635, 145);
    glVertex2i(635, 200);
    glVertex2i(590, 200);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(245, 225, 164);
    glVertex2i(635, 145);
    glVertex2i(685, 145);
    glVertex2i(685, 200);
    glVertex2i(635, 200);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(254, 207, 7);
    glVertex2i(590, 145);
    glVertex2i(635, 145);
    glVertex2i(635, 200);
    glVertex2i(590, 200);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(245, 225, 164);
    glVertex2i(635, 145);
    glVertex2i(685, 145);
    glVertex2i(685, 200);
    glVertex2i(635, 200);
    glEnd();

    //window 1
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(595, 190);
    glVertex2i(600, 190);
    glVertex2i(600, 185);
    glVertex2i(595, 185);
    glEnd();

    //window 2
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(602, 190);
    glVertex2i(607, 190);
    glVertex2i(607, 185);
    glVertex2i(602, 185);
    glEnd();

    //window 3
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(609, 190);
    glVertex2i(614, 190);
    glVertex2i(614, 185);
    glVertex2i(609, 185);
    glEnd();

    //window 4
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(616, 190);
    glVertex2i(621, 190);
    glVertex2i(621, 185);
    glVertex2i(616, 185);
    glEnd();

    //window 5
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(623, 190);
    glVertex2i(628, 190);
    glVertex2i(628, 185);
    glVertex2i(623, 185);
    glEnd();

    //window 6
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(595, 175);
    glVertex2i(600, 175);
    glVertex2i(600, 180);
    glVertex2i(595, 180);
    glEnd();

    //window 7
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(602, 175);
    glVertex2i(607, 175);
    glVertex2i(607, 180);
    glVertex2i(602, 180);
    glEnd();

    //window 8
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(609, 175);
    glVertex2i(614, 175);
    glVertex2i(614, 180);
    glVertex2i(609, 180);
    glEnd();

    //window 9
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(616, 175);
    glVertex2i(621, 175);
    glVertex2i(621, 180);
    glVertex2i(616, 180);
    glEnd();

    //window 10
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(623, 175);
    glVertex2i(628, 175);
    glVertex2i(628, 180);
    glVertex2i(623, 180);
    glEnd();

    //window 11
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(595, 165);
    glVertex2i(600, 165);
    glVertex2i(600, 170);
    glVertex2i(595, 170);
    glEnd();

    //window 12
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(602, 165);
    glVertex2i(607, 165);
    glVertex2i(607, 170);
    glVertex2i(602, 170);
    glEnd();

    //window 13
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(609, 165);
    glVertex2i(614, 165);
    glVertex2i(614, 170);
    glVertex2i(609, 170);
    glEnd();

    //window 14
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(616, 165);
    glVertex2i(621, 165);
    glVertex2i(621, 170);
    glVertex2i(616, 170);
    glEnd();

    //window 15
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(623, 165);
    glVertex2i(628, 165);
    glVertex2i(628, 170);
    glVertex2i(623, 170);
    glEnd();

    //window 16
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(595, 155);
    glVertex2i(600, 155);
    glVertex2i(600, 160);
    glVertex2i(595, 160);
    glEnd();

    //window 17
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(602, 155);
    glVertex2i(607, 155);
    glVertex2i(607, 160);
    glVertex2i(602, 160);
    glEnd();

    //window 18
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(609, 155);
    glVertex2i(614, 155);
    glVertex2i(614, 160);
    glVertex2i(609, 160);
    glEnd();

    //window 19
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(616, 155);
    glVertex2i(621, 155);
    glVertex2i(621, 160);
    glVertex2i(616, 160);
    glEnd();

    //window 20
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(255, 251, 254);
    glVertex2i(623, 155);
    glVertex2i(628, 155);
    glVertex2i(628, 160);
    glVertex2i(623, 160);
    glEnd();

    //6th building

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(245, 94, 55);
    glVertex2i(705, 145);
    glVertex2i(765, 145);
    glVertex2i(765, 270);
    glVertex2i(705, 270);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(58, 81, 76);
    glVertex2i(695, 145);
    glVertex2i(705, 145);
    glVertex2i(705, 270);
    glVertex2i(695, 270);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(720, 250);
    glVertex2i(730, 250);
    glVertex2i(730, 260);
    glVertex2i(720, 260);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(720, 255);
    glVertex2i(730, 255);
    glVertex2i(725, 260);
    glVertex2i(725, 250);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(733, 250);
    glVertex2i(743, 250);
    glVertex2i(743, 260);
    glVertex2i(733, 260);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(733, 255);
    glVertex2i(743, 255);
    glVertex2i(738, 260);
    glVertex2i(738, 250);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(745, 250);
    glVertex2i(755, 250);
    glVertex2i(755, 260);
    glVertex2i(745, 260);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(745, 255);
    glVertex2i(755, 255);
    glVertex2i(750, 260);
    glVertex2i(750, 250);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(720, 235);
    glVertex2i(730, 235);
    glVertex2i(730, 245);
    glVertex2i(720, 245);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(720, 240);
    glVertex2i(730, 240);
    glVertex2i(725, 245);
    glVertex2i(725, 235);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(720, 220);
    glVertex2i(730, 220);
    glVertex2i(730, 230);
    glVertex2i(720, 230);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(720, 225);
    glVertex2i(730, 225);
    glVertex2i(725, 230);
    glVertex2i(725, 220);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(720, 205);
    glVertex2i(730, 205);
    glVertex2i(730, 215);
    glVertex2i(720, 215);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(720, 210);
    glVertex2i(730, 210);
    glVertex2i(725, 215);
    glVertex2i(725, 205);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(720, 190);
    glVertex2i(730, 190);
    glVertex2i(730, 200);
    glVertex2i(720, 200);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(720, 195);
    glVertex2i(730, 195);
    glVertex2i(725, 200);
    glVertex2i(725, 190);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(720, 175);
    glVertex2i(730, 175);
    glVertex2i(730, 185);
    glVertex2i(720, 185);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(720, 180);
    glVertex2i(730, 180);
    glVertex2i(725, 185);
    glVertex2i(725, 175);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(720, 160);
    glVertex2i(730, 160);
    glVertex2i(730, 170);
    glVertex2i(720, 170);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(720, 165);
    glVertex2i(730, 165);
    glVertex2i(725, 170);
    glVertex2i(725, 160);
    glEnd();

    //2nd
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(733, 235);
    glVertex2i(743, 235);
    glVertex2i(743, 245);
    glVertex2i(733, 245);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(733, 240);
    glVertex2i(743, 240);
    glVertex2i(738, 245);
    glVertex2i(738, 235);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(733, 220);
    glVertex2i(743, 220);
    glVertex2i(743, 230);
    glVertex2i(733, 230);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(733, 225);
    glVertex2i(743, 225);
    glVertex2i(738, 230);
    glVertex2i(738, 220);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(733, 205);
    glVertex2i(743, 205);
    glVertex2i(743, 215);
    glVertex2i(733, 215);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(733, 210);
    glVertex2i(743, 210);
    glVertex2i(738, 215);
    glVertex2i(738, 205);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(733, 190);
    glVertex2i(743, 190);
    glVertex2i(743, 200);
    glVertex2i(733, 200);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(733, 195);
    glVertex2i(743, 195);
    glVertex2i(738, 200);
    glVertex2i(738, 190);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(733, 175);
    glVertex2i(743, 175);
    glVertex2i(743, 185);
    glVertex2i(733, 185);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(733, 180);
    glVertex2i(743, 180);
    glVertex2i(738, 185);
    glVertex2i(738, 175);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(733, 160);
    glVertex2i(743, 160);
    glVertex2i(743, 170);
    glVertex2i(733, 170);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(733, 165);
    glVertex2i(743, 165);
    glVertex2i(738, 170);
    glVertex2i(738, 160);
    glEnd();

    //3rd
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(745, 235);
    glVertex2i(755, 235);
    glVertex2i(755, 245);
    glVertex2i(745, 245);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(745, 240);
    glVertex2i(755, 240);
    glVertex2i(750, 245);
    glVertex2i(750, 235);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(745, 220);
    glVertex2i(755, 220);
    glVertex2i(755, 230);
    glVertex2i(745, 230);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(745, 225);
    glVertex2i(755, 225);
    glVertex2i(750, 230);
    glVertex2i(750, 220);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(745, 205);
    glVertex2i(755, 205);
    glVertex2i(755, 215);
    glVertex2i(745, 215);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(745, 210);
    glVertex2i(755, 210);
    glVertex2i(750, 215);
    glVertex2i(750, 205);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(745, 190);
    glVertex2i(755, 190);
    glVertex2i(755, 200);
    glVertex2i(745, 200);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(745, 195);
    glVertex2i(755, 195);
    glVertex2i(750, 200);
    glVertex2i(750, 190);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(745, 175);
    glVertex2i(755, 175);
    glVertex2i(755, 185);
    glVertex2i(745, 185);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(745, 180);
    glVertex2i(755, 180);
    glVertex2i(750, 185);
    glVertex2i(750, 175);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(157, 203, 178);
    glVertex2i(745, 160);
    glVertex2i(755, 160);
    glVertex2i(755, 170);
    glVertex2i(745, 170);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(104, 135, 118);
    glVertex2i(745, 165);
    glVertex2i(755, 165);
    glVertex2i(750, 170);
    glVertex2i(750, 160);
    glEnd();
    ///---------------------Fariha-----------------------///
    //2nd building
    glBegin(GL_QUADS); //red1 b2
    glPointSize(10.0);
    glColor3ub(208, 75, 36);
    glVertex2i(855, 155);
    glVertex2i(865, 155);
    glVertex2i(865, 330);
    glVertex2i(855, 330);
    glEnd();

    glBegin(GL_QUADS); //red2 b2 border
    glPointSize(10.0);
    glColor3ub(208, 75, 36);
    glVertex2i(850, 325);
    glVertex2i(865, 325);
    glVertex2i(865, 335);
    glVertex2i(850, 335);
    glEnd();
    glBegin(GL_QUADS); //green1 b2
    glPointSize(10.0);
    glColor3ub(29, 68, 59);
    glVertex2i(865, 155);
    glVertex2i(925, 155);
    glVertex2i(925, 330);
    glVertex2i(865, 330);
    glEnd();
    glBegin(GL_QUADS); //green2 b2 border
    glPointSize(10.0);
    glColor3ub(29, 68, 59);
    glVertex2i(860, 325);
    glVertex2i(930, 325);
    glVertex2i(930, 335);
    glVertex2i(860, 335);
    glEnd();
    glBegin(GL_QUADS); //w1 b2
    glPointSize(10.0);
    glColor3ub(184, 218, 194);
    glVertex2i(870, 290);
    glVertex2i(885, 290);
    glVertex2i(885, 310);
    glVertex2i(870, 310);
    glEnd();
    glBegin(GL_QUADS); //w2 b2
    glPointSize(10.0);
    glColor3ub(184, 218, 194);
    glVertex2i(890, 290);
    glVertex2i(905, 290);
    glVertex2i(905, 310);
    glVertex2i(890, 310);
    glEnd();
    glBegin(GL_QUADS); //w3 b2
    glPointSize(10.0);
    glColor3ub(184, 218, 194);
    glVertex2i(910, 290);
    glVertex2i(925, 290);
    glVertex2i(925, 310);
    glVertex2i(910, 310);
    glEnd();
    //line border1

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(184, 218, 194);
    glVertex2i(867, 282);
    glVertex2i(923, 282);
    glEnd();

    glBegin(GL_QUADS); //w4 b2
    glPointSize(10.0);
    glColor3ub(184, 218, 194);
    glVertex2i(870, 255);
    glVertex2i(885, 255);
    glVertex2i(885, 275);
    glVertex2i(870, 275);
    glEnd();
    glBegin(GL_QUADS); //w5 b2
    glPointSize(10.0);
    glColor3ub(184, 218, 194);
    glVertex2i(890, 255);
    glVertex2i(905, 255);
    glVertex2i(905, 275);
    glVertex2i(890, 275);
    glEnd();

    glBegin(GL_QUADS); //w6 b2
    glPointSize(10.0);
    glColor3ub(184, 218, 194);
    glVertex2i(910, 255);
    glVertex2i(925, 255);
    glVertex2i(925, 275);
    glVertex2i(910, 275);
    glEnd();
    //line border2
    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(184, 218, 194);
    glVertex2i(867, 244);
    glVertex2i(923, 244);
    glEnd();

    glBegin(GL_QUADS); //w7 b2
    glPointSize(10.0);
    glColor3ub(184, 218, 194);
    glVertex2i(870, 220);
    glVertex2i(885, 220);
    glVertex2i(885, 240);
    glVertex2i(870, 240);
    glEnd();

    glBegin(GL_QUADS); //w8 b2
    glPointSize(10.0);
    glColor3ub(184, 218, 194);
    glVertex2i(890, 220);
    glVertex2i(905, 220);
    glVertex2i(905, 240);
    glVertex2i(890, 240);
    glEnd();

    glBegin(GL_QUADS); //w9 b2
    glPointSize(10.0);
    glColor3ub(184, 218, 194);
    glVertex2i(910, 220);
    glVertex2i(925, 220);
    glVertex2i(925, 240);
    glVertex2i(910, 240);
    glEnd();

    //line border3
    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(184, 218, 194);
    glVertex2i(867, 204);
    glVertex2i(923, 204);
    glEnd();

    //1st building.
    glBegin(GL_QUADS); //red part b1
    glPointSize(10.0);
    glColor3ub(163, 76, 63);
    glVertex2i(774, 147);
    glVertex2i(790, 147);
    glVertex2i(790, 242);
    glVertex2i(774, 242);
    glEnd();
    // border
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(114, 149, 125);
    glVertex2i(777, 146);
    glVertex2i(777, 242);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(04);
    glColor3ub(114, 149, 125);
    glVertex2i(782, 146);
    glVertex2i(782, 242);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(04);
    glColor3ub(114, 149, 125);
    glVertex2i(789, 146);
    glVertex2i(789, 242);
    glEnd();

    glBegin(GL_QUADS); //white part b1
    glPointSize(10.0);
    glColor3ub(244, 237, 215);
    glVertex2i(790, 147);
    glVertex2i(863, 147);
    glVertex2i(863, 242);
    glVertex2i(790, 242);
    glEnd();
    glBegin(GL_QUADS); //w1 b1
    glPointSize(10.0);
    glColor3ub(187, 211, 188);
    glVertex2i(800, 217);
    glVertex2i(813, 217);
    glVertex2i(813, 232);
    glVertex2i(800, 232);
    glEnd();

    glBegin(GL_QUADS); //w2 b1
    glPointSize(10.0);
    glColor3ub(187, 211, 188);
    glVertex2i(820, 217);
    glVertex2i(833, 217);
    glVertex2i(833, 232);
    glVertex2i(820, 232);
    glEnd();
    glBegin(GL_QUADS); //w3 b1
    glPointSize(10.0);
    glColor3ub(187, 211, 188);
    glVertex2i(840, 217);
    glVertex2i(853, 217);
    glVertex2i(853, 232);
    glVertex2i(840, 232);
    glEnd();
    glBegin(GL_QUADS); //w4 b1
    glPointSize(10.0);
    glColor3ub(187, 211, 188);
    glVertex2i(800, 188);
    glVertex2i(813, 188);
    glVertex2i(813, 203);
    glVertex2i(800, 203);
    glEnd();
    glBegin(GL_QUADS); //w5 b1
    glPointSize(10.0);
    glColor3ub(187, 211, 188);
    glVertex2i(820, 188);
    glVertex2i(833, 188);
    glVertex2i(833, 203);
    glVertex2i(820, 203);
    glEnd();
    glBegin(GL_QUADS); //w6 b1
    glPointSize(10.0);
    glColor3ub(187, 211, 188);
    glVertex2i(840, 188);
    glVertex2i(853, 188);
    glVertex2i(853, 203);
    glVertex2i(840, 203);
    glEnd();

    glBegin(GL_QUADS); //w7 b1
    glPointSize(10.0);
    glColor3ub(187, 211, 188);
    glVertex2i(800, 159);
    glVertex2i(813, 159);
    glVertex2i(813, 174);
    glVertex2i(800, 174);
    glEnd();
    glBegin(GL_QUADS); //w8 b1
    glPointSize(10.0);
    glColor3ub(187, 211, 188);
    glVertex2i(820, 159);
    glVertex2i(833, 159);
    glVertex2i(833, 174);
    glVertex2i(820, 174);
    glEnd();
    glBegin(GL_QUADS); //w9 b1
    glPointSize(10.0);
    glColor3ub(187, 211, 188);
    glVertex2i(840, 159);
    glVertex2i(853, 159);
    glVertex2i(853, 174);
    glVertex2i(840, 174);
    glEnd();

    //3rd building
    glBegin(GL_QUADS); //b3 border
    glPointSize(10.0);
    glColor3ub(82, 78, 55);
    glVertex2i(924, 145);
    glVertex2i(934, 145);
    glVertex2i(934, 252);
    glVertex2i(924, 252);
    glEnd();
    //Red part b3
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(201, 79, 43);
    glVertex2i(934, 145);
    glVertex2i(995, 145);
    glVertex2i(995, 252);
    glVertex2i(934, 252);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w1 b3
    glVertex2i(952, 235);
    glVertex2i(960, 235);
    glVertex2i(960, 245);
    glVertex2i(952, 245);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w2 b3
    glVertex2i(975, 235);
    glVertex2i(984, 235);
    glVertex2i(984, 245);
    glVertex2i(975, 245);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w3 b3
    glVertex2i(940, 220);
    glVertex2i(950, 220);
    glVertex2i(950, 230);
    glVertex2i(940, 230);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w4 b3
    glVertex2i(963, 220);
    glVertex2i(973, 220);
    glVertex2i(973, 232);
    glVertex2i(963, 232);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w5 b3
    glVertex2i(952, 205);
    glVertex2i(960, 205);
    glVertex2i(960, 215);
    glVertex2i(952, 215);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w6 b3
    glVertex2i(975, 205);
    glVertex2i(984, 205);
    glVertex2i(984, 215);
    glVertex2i(975, 215);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w7 b3
    glVertex2i(940, 190);
    glVertex2i(950, 190);
    glVertex2i(950, 200);
    glVertex2i(940, 200);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w8 b3
    glVertex2i(963, 190);
    glVertex2i(973, 190);
    glVertex2i(973, 200);
    glVertex2i(963, 200);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w9 b3
    glVertex2i(952, 180);
    glVertex2i(960, 180);
    glVertex2i(960, 190);
    glVertex2i(952, 190);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w10 b3
    glVertex2i(975, 180);
    glVertex2i(984, 180);
    glVertex2i(984, 190);
    glVertex2i(975, 190);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w11 b3
    glVertex2i(940, 165);
    glVertex2i(950, 165);
    glVertex2i(950, 175);
    glVertex2i(940, 175);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w12 b3
    glVertex2i(963, 165);
    glVertex2i(973, 165);
    glVertex2i(973, 175);
    glVertex2i(963, 175);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w13 b3
    glVertex2i(952, 150);
    glVertex2i(960, 150);
    glVertex2i(960, 160);
    glVertex2i(952, 160);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(198, 242, 237); //w14 b3
    glVertex2i(975, 150);
    glVertex2i(984, 150);
    glVertex2i(984, 160);
    glVertex2i(975, 160);
    glEnd();

    //4th building
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(241, 219, 168);
    glVertex2i(1010, 147);
    glVertex2i(1025, 147);
    glVertex2i(1025, 208);
    glVertex2i(1010, 208);
    glEnd();

    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(191, 83, 22); //deep oranger part b4
    glVertex2i(1025, 147);
    glVertex2i(1030, 147);
    glVertex2i(1030, 208);
    glVertex2i(1025, 208);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(232, 107, 37); //light oranger part b4
    glVertex2i(1030, 147);
    glVertex2i(1060, 147);
    glVertex2i(1060, 208);
    glVertex2i(1030, 208);
    glEnd();
    glBegin(GL_QUADS); //light brik 1
    glPointSize(10.0);
    glColor3ub(241, 219, 168);
    glVertex2i(1060, 147);
    glVertex2i(1074, 147);
    glVertex2i(1074, 208);
    glVertex2i(1060, 208);
    glEnd();
    glBegin(GL_QUADS); //light brik 2
    glPointSize(10.0);
    glColor3ub(241, 219, 168);
    glVertex2i(1060, 147);
    glVertex2i(1074, 147);
    glVertex2i(1074, 208);
    glVertex2i(1060, 208);
    glEnd();
    glBegin(GL_QUADS); //light brik square
    glPointSize(10.0);
    glColor3ub(241, 219, 168);
    glVertex2i(1010, 208);
    glVertex2i(1074, 208);
    glVertex2i(1074, 233);
    glVertex2i(1010, 233);
    glEnd();
    glBegin(GL_QUADS); //white border
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1010, 233);
    glVertex2i(1074, 233);
    glVertex2i(1074, 239);
    glVertex2i(1010, 239);
    glEnd();
    glBegin(GL_QUADS); //upper brik
    glPointSize(10.0);
    glColor3ub(241, 219, 168);
    glVertex2i(1010, 239);
    glVertex2i(1074, 239);
    glVertex2i(1074, 282);
    glVertex2i(1010, 282);
    glEnd();
    glBegin(GL_QUADS); //W1
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1018, 260);
    glVertex2i(1024, 260);
    glVertex2i(1024, 270);
    glVertex2i(1018, 270);
    glEnd();
    glBegin(GL_QUADS); //W2
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1028, 260);
    glVertex2i(1035, 260);
    glVertex2i(1035, 270);
    glVertex2i(1028, 270);
    glEnd();
    glBegin(GL_QUADS); //W3
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1038, 260);
    glVertex2i(1045, 260);
    glVertex2i(1045, 270);
    glVertex2i(1038, 270);
    glEnd();
    glBegin(GL_QUADS); //W4
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1048, 260);
    glVertex2i(1055, 260);
    glVertex2i(1055, 270);
    glVertex2i(1048, 270);
    glEnd();
    glBegin(GL_QUADS); //W5
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1018, 249);
    glVertex2i(1024, 249);
    glVertex2i(1024, 258);
    glVertex2i(1018, 258);
    glEnd();
    glBegin(GL_QUADS); //W6
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1028, 249);
    glVertex2i(1035, 249);
    glVertex2i(1035, 258);
    glVertex2i(1028, 258);
    glEnd();
    glBegin(GL_QUADS); //W6
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1038, 249);
    glVertex2i(1045, 249);
    glVertex2i(1045, 258);
    glVertex2i(1038, 258);
    glEnd();
    glBegin(GL_QUADS); //W7
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1038, 249);
    glVertex2i(1045, 249);
    glVertex2i(1045, 258);
    glVertex2i(1038, 258);
    glEnd();
    glBegin(GL_QUADS); //W8
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1048, 249);
    glVertex2i(1055, 249);
    glVertex2i(1055, 258);
    glVertex2i(1048, 258);
    glEnd();
    //uppper triangle
    glBegin(GL_TRIANGLES);
    glPointSize(10.0);
    glColor3ub(121, 137, 109);
    glVertex2i(1010, 282);
    glVertex2i(1073, 282);
    glVertex2i(1053, 315);
    glEnd();
    glBegin(GL_QUADS); //deep border
    glPointSize(10.0);
    glColor3ub(44, 76, 63);
    glVertex2i(1010, 282);
    glVertex2i(1072, 282);
    glVertex2i(1072, 288);
    glVertex2i(1014, 288);
    glEnd();

    glBegin(GL_TRIANGLES);
    glPointSize(10.0);
    glColor3ub(56, 83, 58);
    glVertex2i(1073, 282);
    glVertex2i(1097, 282);
    glVertex2i(1053, 315);
    glEnd();
    glBegin(GL_QUADS);
    glPointSize(10.0);
    glColor3ub(203, 175, 98);
    glVertex2i(1074, 147);
    glVertex2i(1097, 147);
    glVertex2i(1097, 282);
    glVertex2i(1074, 282);
    glEnd();
    glBegin(GL_QUADS); //w1
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1080, 262);
    glVertex2i(1085, 262);
    glVertex2i(1085, 273);
    glVertex2i(1080, 273);
    glEnd();
    glBegin(GL_QUADS); //w2
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1088, 263);
    glVertex2i(1093, 263);
    glVertex2i(1093, 273);
    glVertex2i(1088, 273);
    glEnd();
    glBegin(GL_QUADS); //w3
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1080, 249);
    glVertex2i(1085, 249);
    glVertex2i(1085, 258);
    glVertex2i(1080, 258);
    glEnd();
    glBegin(GL_QUADS); //w4
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1088, 249);
    glVertex2i(1093, 249);
    glVertex2i(1093, 258);
    glVertex2i(1088, 258);
    glEnd();
    glBegin(GL_QUADS); //w5
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1080, 232);
    glVertex2i(1085, 232);
    glVertex2i(1085, 244);
    glVertex2i(1080, 244);
    glEnd();
    glBegin(GL_QUADS); //w6
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1088, 232);
    glVertex2i(1093, 232);
    glVertex2i(1093, 244);
    glVertex2i(1088, 244);
    glEnd();

    glBegin(GL_QUADS); //w7
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1080, 216);
    glVertex2i(1085, 216);
    glVertex2i(1085, 228);
    glVertex2i(1080, 228);
    glEnd();
    glBegin(GL_QUADS); //w8
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1088, 216);
    glVertex2i(1093, 216);
    glVertex2i(1093, 228);
    glVertex2i(1088, 228);
    glEnd();
    glBegin(GL_QUADS); //w9
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1080, 204);
    glVertex2i(1085, 204);
    glVertex2i(1085, 213);
    glVertex2i(1080, 213);
    glEnd();
    glBegin(GL_QUADS); //w10
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1088, 204);
    glVertex2i(1093, 204);
    glVertex2i(1093, 213);
    glVertex2i(1088, 213);
    glEnd();
    glBegin(GL_QUADS); //w11
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1080, 188);
    glVertex2i(1085, 188);
    glVertex2i(1085, 198);
    glVertex2i(1080, 198);
    glEnd();
    glBegin(GL_QUADS); //w12
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1088, 188);
    glVertex2i(1093, 188);
    glVertex2i(1093, 198);
    glVertex2i(1088, 198);
    glEnd();

    glBegin(GL_QUADS); //w13
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1080, 173);
    glVertex2i(1085, 173);
    glVertex2i(1085, 182);
    glVertex2i(1080, 182);
    glEnd();
    glBegin(GL_QUADS); //w14
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1088, 173);
    glVertex2i(1093, 173);
    glVertex2i(1093, 182);
    glVertex2i(1088, 182);
    glEnd();
    glBegin(GL_QUADS); //w15
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1080, 157);
    glVertex2i(1085, 157);
    glVertex2i(1085, 169);
    glVertex2i(1080, 169);
    glEnd();
    glBegin(GL_QUADS); //w16
    glPointSize(10.0);
    glColor3ub(255, 255, 255);
    glVertex2i(1088, 157);
    glVertex2i(1093, 157);
    glVertex2i(1093, 169);
    glVertex2i(1088, 169);
    glEnd();
    //5th building
    glBegin(GL_QUADS); //light part
    glPointSize(10.0);
    glColor3ub(159, 158, 58);
    glVertex2i(1108, 147);
    glVertex2i(1158, 147);
    glVertex2i(1158, 267);
    glVertex2i(1108, 267);
    glEnd();
    glBegin(GL_QUADS); //deep part
    glPointSize(10.0);
    glColor3ub(129, 130, 53);
    glVertex2i(1158, 147);
    glVertex2i(1186, 147);
    glVertex2i(1186, 300);
    glVertex2i(1158, 268);
    glEnd();
    glBegin(GL_QUADS); //deep blue
    glPointSize(10.0);
    glColor3ub(55, 25, 85);
    glVertex2i(1108, 267);
    glVertex2i(1158, 267);
    glVertex2i(1186, 300);
    glVertex2i(1136, 300);
    glEnd();
    //shade
    glBegin(GL_LINES); //1
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 255);
    glVertex2i(1158, 255);
    glVertex2i(1117, 147);
    glVertex2i(1117, 267);
    glEnd();

    glBegin(GL_LINES); //2
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 245);
    glVertex2i(1158, 245);
    glVertex2i(1125, 147);
    glVertex2i(1125, 266);
    glEnd();

    glBegin(GL_LINES); //3
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 233);
    glVertex2i(1158, 233);
    glVertex2i(1135, 147);
    glVertex2i(1135, 266);
    glEnd();

    glBegin(GL_LINES); //4
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 222);
    glVertex2i(1158, 222);
    glVertex2i(1145, 147);
    glVertex2i(1145, 266);
    glEnd();
    glBegin(GL_LINES); //5
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 212);
    glVertex2i(1158, 212);
    glVertex2i(1135, 147);
    glVertex2i(1135, 266);
    glEnd();
    glBegin(GL_LINES); //6
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 202);
    glVertex2i(1158, 202);
    glEnd();
    glBegin(GL_LINES); //7
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 192);
    glVertex2i(1158, 192);
    glEnd();
    glBegin(GL_LINES); //8
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 182);
    glVertex2i(1158, 182);
    glEnd();
    glBegin(GL_LINES); //9
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 172);
    glVertex2i(1158, 172);
    glEnd();
    glBegin(GL_LINES); //10
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 162);
    glVertex2i(1158, 162);
    glEnd();
    glBegin(GL_LINES); //11
    glLineWidth(10);
    glColor3ub(199, 192, 49);
    glVertex2i(1108, 152);
    glVertex2i(1158, 152);
    glEnd();
}
////  tugas1
////
////  Nama    : Thoriq Hadiwinata
////  NIM     : 24060122130086
////  Lab     : D2
////  Tanggal : Selasa, 20 Februari 2024
//
//#include <GL/glut.h>
//
//void nomorsatu(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glLineWidth(2.0f);
//    
//    glBegin(GL_LINE_STRIP);
//    glColor3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(-0.50, 0.0, 0.0);
//    glVertex3f(-0.50, 0.20, 0.0);
//    glVertex3f(-0.60, 0.20, 0.0);
//    glVertex3f(-0.40, 0.50, 0.0);
//    glVertex3f(-0.20, 0.20, 0.0);
//    glVertex3f(-0.30, 0.20, 0.0);
//    glVertex3f(-0.30, 0.0, 0.0);
//    glVertex3f(-0.50, 0.0, 0.0);
//    glEnd();
//    
//    glBegin(GL_LINE_LOOP);
//    glColor3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(0.50, 0.0, 0.0);
//    glVertex3f(0.50, 0.20, 0.0);
//    glVertex3f(0.20, 0.20, 0.0);
//    glVertex3f(0.40, 0.50, 0.0);
//    glVertex3f(0.60, 0.20, 0.0);
//    glVertex3f(0.30, 0.20, 0.0);
//    glVertex3f(0.30, 0.0, 0.0);
//    glEnd();
//
//    glBegin(GL_QUADS);
//    glColor3f(1.0f, 1.0f, 0.0f);
//    glVertex3f(-0.80, -0.80, 0.0);
//    glColor3f(0.0f, 2.0f, 1.0f);
//    glVertex3f(-0.60, -0.60, 0.0);
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(-0.80, -0.60, 0.0);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(-0.60, -0.80, 0.0);
//    glEnd();
//    
//    glBegin(GL_QUAD_STRIP);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glVertex3f(-0.40, -0.80, 0.0);
//    glColor3f(0.0f, 2.0f, 1.0f);
//    glVertex3f(-0.40, -0.60, 0.0);
//    glColor3f(2.0f, 3.0f, 7.0f);
//    glVertex3f(-0.15, -0.80, 0.0);
//    glColor3f(1.0f, 4.0f, 0.0f);
//    glVertex3f(-0.30, -0.60, 0.0);
//    glColor3f(0.0f, 1.0f, 5.0f);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(0.25, -0.80, 0.0);
//    glColor3f(4.0f, 7.0f, 1.0f);
//    glVertex3f(0.13, -0.70, 0.0);
//    glColor3f(0.0f, 2.0f, 1.0f);
//    glVertex3f(0.20, -0.60, 0.0);
//    glColor3f(1.0f, 4.0f, 1.0f);
//    glVertex3f(0.30, -0.60, 0.0);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(0.37, -0.70, 0.0);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(0.85, -0.80, 0.0);
//    glColor3f(1.0f, 0.0f, 4.0f);
//    glVertex3f(0.75, -0.60, 0.0);
//    glColor3f(1.0f, 1.0f, 2.0f);
//    glVertex3f(0.65, -0.60, 0.0);
//    glVertex3f(0.55, -0.80, 0.0);
//    glEnd();
//    
//    glFlush();
//}
//
//void diw(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glBegin(GL_QUADS);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(-0.20, 0.20, 0.0);
//    glColor3f(0.0f, 1.0f, 1.0f);
//    glVertex3f(0.20, 0.20, 0.0);
//    glColor3f(1.0f, 1.0f, 0.0f);
//    glVertex3f(0.20, -0.20, 0.0);
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(-0.20, -0.20, 0.0);
//    glEnd();
//    
//    glBegin(GL_LINE_STRIP);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(-0.95, -0.95, 0.0);
//    glColor3f(0.0f, 1.0f, 1.0f);
//    glVertex3f(-0.80, -0.75, 0.0);
//    glColor3f(2.0f, 0.0f, 7.0f);
//    glVertex3f(-0.95, -0.75, 0.0);
//    glColor3f(1.0f, 0.0f, 3.0f);
//    glVertex3f(-0.80, -0.95, 0.0);
//    glColor3f(1.0f, 5.0f, 0.0f);
//    glVertex3f(-0.87, -0.60, 0.0);
//    glColor3f(6.0f, 0.0f, 3.0f);
//    glVertex3f(-0.95, -0.95, 0.0);
//    glEnd();
//    
//    glBegin(GL_LINE_LOOP);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(-0.75, -0.95, 0.0);
//    glColor3f(0.0f, 1.0f, 1.0f);
//    glVertex3f(-0.68, -0.85, 0.0);
//    glColor3f(2.0f, 0.0f, 7.0f);
//    glVertex3f(-0.61, -0.95, 0.0);
//    glColor3f(1.0f, 0.0f, 3.0f);
//    glVertex3f(-0.645, -0.78, 0.0);
//    glColor3f(1.0f, 5.0f, 0.0f);
//    glVertex3f(-0.61, -0.73, 0.0);
//    glColor3f(2.0f, 0.0f, 3.0f);
//    glVertex3f(-0.655, -0.73, 0.0);
//    glColor3f(6.0f, 9.0f, 3.0f);
//    glVertex3f(-0.68, -0.58, 0.0);
//    glColor3f(2.0f, 0.0f, 1.0f);
//    glVertex3f(-0.705, -0.73, 0.0);
//    glColor3f(1.0f, 0.0f, 3.0f);
//    glVertex3f(-0.75, -0.73, 0.0);
//    glColor3f(6.0f, 0.0f, 3.0f);
//    glVertex3f(-0.715, -0.78, 0.0);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(-0.45, -0.95, 0.0);
//    glColor3f(4.0f, 7.0f, 1.0f);
//    glVertex3f(-0.40, -0.85, 0.0);
//    glColor3f(0.0f, 0.0f, 4.0f);
//    glVertex3f(-0.425, -0.825, 0.0);
//    glColor3f(1.0f, 4.0f, 1.0f);
//    glVertex3f(-0.475, -0.825, 0.0);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(-0.50, -0.85, 0.0);
//    glEnd();
//
//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(-0.35, -0.95, 0.0);
//    glVertex3f(-0.32, -0.85, 0.0);
//    glVertex3f(-0.30, -0.925, 0.0);
//    glColor3f(0.0f, 1.0f, 1.0f);
//    glVertex3f(-0.27, -0.845, 0.0);
//    glVertex3f(-0.25, -0.96, 0.0);
//    glEnd();
//    
//    glBegin(GL_QUAD_STRIP);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(-0.15, -0.90, 0.0);
//    glColor3f(0.0f, 1.0f, 1.0f);
//    glVertex3f(-0.15, -0.75, 0.0);
//    glColor3f(2.0f, 0.0f, 7.0f);
//    glVertex3f(-0.05, -0.95, 0.0);
//    glColor3f(1.0f, 0.0f, 3.0f);
//    glVertex3f(-0.05, -0.80, 0.0);
//    glColor3f(1.0f, 5.0f, 0.0f);
//    glVertex3f(0.05, -0.90, 0.0);
//    glColor3f(2.0f, 0.0f, 3.0f);
//    glVertex3f(0.05, -0.75, 0.0);
//    glEnd();
//    
//    glFlush();
//}
//
//
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Nomor 1");
//    glutDisplayFunc(nomorsatu);
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//    
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Nomor 1");
//    glutDisplayFunc(diw);
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//    glutMainLoop();
//    return 0;
//}

//  tugas1no2
//
//
//  Nama    : Thoriq Hadiwinata
//  NIM     : 24060122130086
//  Lab     : D2
//  Tanggal : Selasa, 20 Februari 2024

#include <GL/glut.h>

void nomordua(void) {
    glClear(GL_COLOR_BUFFER_BIT);        
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 3.0f);
    glVertex3f(-0.50, 0.03, 0.0);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.30, 0.03, 0.0);
    glVertex3f(-0.30, -0.17, 0.0);
    glVertex3f(-0.50, -0.17, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(-0.29, 0.03, 0.0);
    glColor3f(2.0f, 1.0f, 1.0f);
    glVertex3f(-0.09, 0.03, 0.0);
    glVertex3f(-0.09, -0.17, 0.0);
    glVertex3f(-0.29, -0.17, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(-0.08, 0.03, 0.0);
    glColor3f(0.0f, 1.0f, 5.0f);
    glVertex3f(0.12, 0.03, 0.0);
    glVertex3f(0.12, -0.17, 0.0);
    glVertex3f(-0.08, -0.17, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 2.0f, 0.0f);
    glVertex3f(0.13, 0.03, 0.0);
    glColor3f(1.0f, 2.0f, 4.0f);
    glVertex3f(0.33, 0.03, 0.0);
    glVertex3f(0.33, -0.17, 0.0);
    glVertex3f(0.13, -0.17, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 2.0f, 1.0f);
    glVertex3f(-0.40, 0.24, 0.0);
    glColor3f(3.0f, 1.0f, 0.0f);
    glVertex3f(-0.20, 0.24, 0.0);
    glVertex3f(-0.20, 0.04, 0.0);
    glVertex3f(-0.40, 0.04, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-0.19, 0.24, 0.0);
    glColor3f(3.0f, 1.0f, 2.0f);
    glVertex3f(0.01, 0.24, 0.0);
    glVertex3f(0.01, 0.04, 0.0);
    glVertex3f(-0.19, 0.04, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, .0f, 1.0f);
    glVertex3f(0.02, 0.24, 0.0);
    glColor3f(6.0f, 2.0f, 4.0f);
    glVertex3f(0.22, 0.24, 0.0);
    glVertex3f(0.22, 0.04, 0.0);
    glVertex3f(0.02, 0.04, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 2.0f, 0.0f);
    glVertex3f(-0.30, 0.45, 0.0);
    glColor3f(7.0f, 3.0f, 4.0f);
    glVertex3f(-0.10, 0.45, 0.0);
    glVertex3f(-0.10, 0.25, 0.0);
    glVertex3f(-0.30, 0.25, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(-0.09, 0.45, 0.0);
    glColor3f(3.0f, 1.0f, 2.0f);
    glVertex3f(0.11, 0.45, 0.0);
    glVertex3f(0.11, 0.25, 0.0);
    glVertex3f(-0.09, 0.25, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 4.0f);
    glVertex3f(-0.20, 0.66, 0.0);
    glColor3f(1.0f, 0.0f, 2.0f);
    glVertex3f(0.00, 0.66, 0.0);
    glVertex3f(0.00, 0.46, 0.0);
    glVertex3f(-0.20, 0.46, 0.0);
    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Nomor 2");
    glutDisplayFunc(nomordua);
    glClearColor(-1.0f, -1.0f, -1.0f, -1.0f);
    glutMainLoop();
    return 0;
}

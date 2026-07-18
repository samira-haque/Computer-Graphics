#include <GL/glut.h>

void init()
{
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100,100,-100,100,-1,1);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,0);

    glPushMatrix();
    glTranslatef(30,30,0);
    glRectf(-25,-25,25,25);
    glPopMatrix();

    glutSwapBuffers();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Translation");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
}

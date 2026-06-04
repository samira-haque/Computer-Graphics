#include <GL/glut.h>
#include <GL/gl.h>

void init()
{
    glClearColor(1.0,1.0,1.0,1.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // LEFT HOUSE
    glColor3f(1.0,0.6,0.6);
    glBegin(GL_POLYGON);
        glVertex2f(0.15,0.20);
        glVertex2f(0.40,0.20);
        glVertex2f(0.40,0.60);
        glVertex2f(0.15,0.60);
    glEnd();

    // RIGHT HOUSE
    glColor3f(0.6,0.8,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.40,0.20);
        glVertex2f(0.75,0.20);
        glVertex2f(0.75,0.60);
        glVertex2f(0.40,0.60);
    glEnd();

    // LEFT TRIANGLE ROOF FACE
    glColor3f(0.8,0.3,0.3);
    glBegin(GL_POLYGON);
        glVertex2f(0.15,0.60);
        glVertex2f(0.25,0.75);
        glVertex2f(0.40,0.60);
    glEnd();

    // TOP ROOF
    glColor3f(0.5,0.2,0.2);
    glBegin(GL_POLYGON);
        glVertex2f(0.25,0.75);
        glVertex2f(0.60,0.75);
        glVertex2f(0.75,0.60);
        glVertex2f(0.40,0.60);
    glEnd();

    // LEFT WINDOW
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.20,0.42);
        glVertex2f(0.30,0.42);
        glVertex2f(0.30,0.52);
        glVertex2f(0.20,0.52);
    glEnd();

    // RIGHT WINDOW
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.55,0.42);
        glVertex2f(0.65,0.42);
        glVertex2f(0.65,0.52);
        glVertex2f(0.55,0.52);
    glEnd();

    // LEFT DOOR
    glColor3f(0.4,0.2,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.22,0.20);
        glVertex2f(0.30,0.20);
        glVertex2f(0.30,0.38);
        glVertex2f(0.22,0.38);
    glEnd();

    // RIGHT DOOR
    glColor3f(0.4,0.2,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.55,0.20);
        glVertex2f(0.63,0.20);
        glVertex2f(0.63,0.38);
        glVertex2f(0.55,0.38);
    glEnd();

    // OUTLINES
    glColor3f(0.0,0.0,0.0);

    glBegin(GL_LINE_LOOP);
        glVertex2f(0.15,0.20);
        glVertex2f(0.40,0.20);
        glVertex2f(0.40,0.60);
        glVertex2f(0.15,0.60);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(0.40,0.20);
        glVertex2f(0.75,0.20);
        glVertex2f(0.75,0.60);
        glVertex2f(0.40,0.60);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(0.15,0.60);
        glVertex2f(0.25,0.75);
        glVertex2f(0.40,0.60);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(0.25,0.75);
        glVertex2f(0.60,0.75);
        glVertex2f(0.75,0.60);
        glVertex2f(0.40,0.60);
    glEnd();

    // GROUND
    glBegin(GL_LINES);
        glVertex2f(0.10,0.20);
        glVertex2f(0.80,0.20);
    glEnd();

    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);

    glutCreateWindow("House");

    init();
    glutDisplayFunc(Draw);

    glutMainLoop();

    return 0;
}

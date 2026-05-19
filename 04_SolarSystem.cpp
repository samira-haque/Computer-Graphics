#include <windows.h>
#include <GL/glut.h>

float angle = 0;

void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();

    // Sun
    glColor3f(1,1,0);

    glutSolidSphere(0.2,50,50);

    // Planet
    glRotatef(angle,0,0,1);

    glTranslatef(0.6,0,0);

    glColor3f(0,0,1);

    glutSolidSphere(0.1,50,50);

    glutSwapBuffers();
}

void update(int value) {

    angle += 1;

    glutPostRedisplay();

    glutTimerFunc(25, update, 0);
}

int main(int argc,char** argv) {

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);

    glutInitWindowSize(600,600);

    glutCreateWindow("Solar System");

    glutDisplayFunc(display);

    glutTimerFunc(25,update,0);

    glutMainLoop();

    return 0;
}

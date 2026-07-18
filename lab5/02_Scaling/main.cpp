#include <GL/glut.h>
#include <stdio.h>

double sx, sy;

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

    float x1=-25,y1=-25;
    float x2=25,y2=-25;
    float x3=0,y3=25;

    x1*=sx;
    y1*=sy;

    x2*=sx;
    y2*=sy;

    x3*=sx;
    y3*=sy;

    glColor3f(1,1,0);

    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();

    glutSwapBuffers();
}

int main(int argc,char** argv)
{
    printf("Enter sx sy: ");
    scanf("%lf%lf",&sx,&sy);

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Scaling");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
}

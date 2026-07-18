#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

float angle;

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

    float rad = angle * 3.1416 / 180;

    float nx1=x1*cos(rad)-y1*sin(rad);
    float ny1=x1*sin(rad)+y1*cos(rad);

    float nx2=x2*cos(rad)-y2*sin(rad);
    float ny2=x2*sin(rad)+y2*cos(rad);

    float nx3=x3*cos(rad)-y3*sin(rad);
    float ny3=x3*sin(rad)+y3*cos(rad);

    glColor3f(1,1,0);

    glBegin(GL_TRIANGLES);
    glVertex2f(nx1,ny1);
    glVertex2f(nx2,ny2);
    glVertex2f(nx3,ny3);
    glEnd();

    glutSwapBuffers();
}

int main(int argc,char** argv)
{
    printf("Enter Rotation Angle: ");
    scanf("%f",&angle);

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Rotation");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
}

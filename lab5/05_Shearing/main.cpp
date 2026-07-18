#include <GL/glut.h>
#include <stdio.h>

float sh;
int choice;

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

    float x1=-25, y1=-25;
    float x2= 25, y2=-25;
    float x3=  0, y3= 25;

    switch(choice)
    {
        case 1:   // X-Shearing
            x1 = x1 + sh * y1;
            x2 = x2 + sh * y2;
            x3 = x3 + sh * y3;
            break;

        case 2:   // Y-Shearing
            y1 = y1 + sh * x1;
            y2 = y2 + sh * x2;
            y3 = y3 + sh * x3;
            break;

        default:
            printf("Invalid Choice!\n");
    }

    glColor3f(1,1,0);

    glBegin(GL_TRIANGLES);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
        glVertex2f(x3,y3);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    printf("Shearing Menu\n");
    printf("1. X-Shearing\n");
    printf("2. Y-Shearing\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    printf("Enter Shearing Factor: ");
    scanf("%f",&sh);

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Shearing");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

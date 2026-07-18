#include <GL/glut.h>
#include <stdio.h>

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
    float x2=25,  y2=-25;
    float x3=0,   y3=25;

    // Reflection
    switch(choice)
    {
        case 1:     // X-axis
            y1 = -y1;
            y2 = -y2;
            y3 = -y3;
            break;

        case 2:     // Y-axis
            x1 = -x1;
            x2 = -x2;
            x3 = -x3;
            break;

        case 3:     // Origin
            x1 = -x1; y1 = -y1;
            x2 = -x2; y2 = -y2;
            x3 = -x3; y3 = -y3;
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
    printf("Reflection Menu\n");
    printf("1. X-axis\n");
    printf("2. Y-axis\n");
    printf("3. Origin\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Reflection");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

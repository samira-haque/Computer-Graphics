#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>
float p = -10;
void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    if(p<=10)
    {
        p=p+0.005;
    }
    else
        p=-10;
    glutPostRedisplay();
    glColor3f( 0.2,0.3, 0.75);
    glBegin(GL_POLYGON);
    glVertex3f(p,3,0);
    glVertex3f(p+8,3,0);
    glVertex3f(p+8,7,0);
    glVertex3f(p,7,0);
    glEnd();
    glutSwapBuffers();
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("2D Animation");
    init();
    glutDisplayFunc(Draw);

    glutMainLoop();
    return 0;
}

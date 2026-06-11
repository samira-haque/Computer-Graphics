#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
/* glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex
   glEnd();

*/
// Write your Code
glClear (GL_COLOR_BUFFER_BIT);
/*
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f(0.47,0.47,0.0);
glVertex3f(0.5,0.39,0.0);
glVertex3f(0.53,0.47,0.0);
glVertex3f(0.61,0.5,0.0);
glVertex3f(0.53,0.53,0.0);
glVertex3f(0.5,0.61,0.0);
glVertex3f(0.47,0.53,0.0);
glVertex3f(0.39,0.5,0.0);

glEnd();
*/
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f(0.5,0.42,0.0);
glVertex3f(0.58,0.5,0.0);
glVertex3f(0.5,0.58,0.0);
glVertex3f(0.42,0.5,0.0);
glEnd();


glColor3f(0.0, 0.1, 1.0);
glBegin(GL_POLYGON);
glVertex3f(0.47,0.28,0.0);
glVertex3f(0.5,0.20,0.0);
glVertex3f(0.53,0.28,0.0);
glVertex3f(0.61,0.31,0.0);
glVertex3f(0.53,0.34,0.0);
glVertex3f(0.5,0.42,0.0);
glVertex3f(0.47,0.34,0.0);
glVertex3f(0.39,0.31,0.0);

glEnd();

glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f(0.47,0.66,0.0);
glVertex3f(0.5,0.58,0.0);
glVertex3f(0.53,0.66,0.0);
glVertex3f(0.61,0.69,0.0);
glVertex3f(0.53,0.72,0.0);
glVertex3f(0.5,0.8,0.0);
glVertex3f(0.47,0.72,0.0);
glVertex3f(0.39,0.69,0.0);

glEnd();

glColor3f(0.1, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f(0.28,0.47,0.0);
glVertex3f(0.31,0.39,0.0);
glVertex3f(0.34,0.47,0.0);
glVertex3f(0.42,0.5,0.0);
glVertex3f(0.34,0.53,0.0);
glVertex3f(0.31,0.61,0.0);
glVertex3f(0.28,0.53,0.0);
glVertex3f(0.2,0.5,0.0);

glEnd();

glColor3f(0.5, 0.5, 0.5);
glBegin(GL_POLYGON);
glVertex3f(0.66,0.47,0.0);
glVertex3f(0.69,0.39,0.0);
glVertex3f(0.72,0.47,0.0);
glVertex3f(0.8,0.5,0.0);
glVertex3f(0.72,0.53,0.0);
glVertex3f(0.69,0.61,0.0);
glVertex3f(0.66,0.53,0.0);
glVertex3f(0.58,0.5,0.0);

glEnd();

glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(750,600);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

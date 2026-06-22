#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>
void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx, GLfloat cy){
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f (cx,cy);

    for(int i=0;i<=100;i++){
        float angle=2.0f*3.1416f*i/100;
        float x=rx*cos(angle);
        float y=ry*sin(angle);
        glVertex2f((x+cx),(y+cy));

    }
    glEnd();
}


void Draw()
{
 glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 0.1 ,0.1,0.44);
   circle(0.3,0.3,0.3,0.3);
   glColor3f(0.1 ,0.1,0.44);
   circle(0.3,0.3,0.6,0.3);
   glColor3f(0.1 ,0.1,0.44);
   circle(0.3,0.3,0.3,0.6);
   glColor3f(0.1 ,0.1,0.44);
   circle(0.3,0.3,0.1,0.3);
   glColor3f(0.98,0.98,0.82);
   circle(0.4,0.4,-0.6,0);
   glColor3f(0.0,0.0,0.0);
   circle(0.35,0.35,-0.5,0);


glColor3f(1.0, 0.3, 0.8);
    glBegin(GL_POLYGON);
    glVertex3f(0.27, 0.47, 0.0);
    glVertex3f(0.30, 0.39, 0.0);
    glVertex3f(0.33, 0.47, 0.0);
    glVertex3f(0.41, 0.50, 0.0);
    glVertex3f(0.33, 0.53, 0.0);
    glVertex3f(0.30, 0.61, 0.0);
    glVertex3f(0.27, 0.53, 0.0);
    glVertex3f(0.19, 0.50, 0.0);
    glEnd();

 glColor3f(0.98,0.98,0.82);
    glBegin(GL_POLYGON);
    glVertex3f(0.47, 0.67, 0.0);
    glVertex3f(0.50, 0.59, 0.0);
    glVertex3f(0.53, 0.67, 0.0);
    glVertex3f(0.61, 0.70, 0.0);
    glVertex3f(0.53, 0.73, 0.0);
    glVertex3f(0.50, 0.81, 0.0);
    glVertex3f(0.47, 0.73, 0.0);
    glVertex3f(0.39, 0.70, 0.0);
    glEnd();

   glColor3f(0.98,0.98,0.82);
    glBegin(GL_POLYGON);
    glVertex3f(0.67, 0.47, 0.0);
    glVertex3f(0.70, 0.39, 0.0);
    glVertex3f(0.73, 0.47, 0.0);
    glVertex3f(0.81, 0.50, 0.0);
    glVertex3f(0.73, 0.53, 0.0);
    glVertex3f(0.70, 0.61, 0.0);
    glVertex3f(0.67, 0.53, 0.0);
    glVertex3f(0.59, 0.50, 0.0);
    glEnd();

    glColor3f(0.98,0.98,0.82);
    glBegin(GL_POLYGON);
    glVertex3f(0.47, 0.27, 0.0);
    glVertex3f(0.50, 0.19, 0.0);
    glVertex3f(0.53, 0.27, 0.0);
    glVertex3f(0.61, 0.30, 0.0);
    glVertex3f(0.53, 0.33, 0.0);
    glVertex3f(0.50, 0.41, 0.0);
    glVertex3f(0.47, 0.33, 0.0);
    glVertex3f(0.39, 0.30, 0.0);
    glEnd();



// Write your Code


glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

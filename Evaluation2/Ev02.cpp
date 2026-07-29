#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>
float p= 0;
float q=0;

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 50.0, 0.0, 50.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
void circle(GLfloat rx, GLfloat ry,GLfloat cx, GLfloat cy){
glBegin(GL_TRIANGLE_FAN);
glVertex2f(cx,cy);
for(int i=0;i<=100;i++){
    float angle=2.0f*3.1416*i/100;
    float x=rx*cos(angle);
    float y=ry*sin(angle);
    glVertex2f((x+cx),(y+cy));
}
glEnd();
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    if(p<=50){
        p = p+0.001;
    }
    else
        q=0;
        if(q<=50){
        q = q+0.0005;
    }
    else
        q=0;

        glutPostRedisplay();

   glColor3f( 0.6 ,0.3, 0);
   glBegin(GL_POLYGON);
   glVertex3f(10,10,0);
   glVertex3f(15,10,0);
   glVertex3f(15,20,0);
   glVertex3f(10,20,0);
   glEnd();

   glColor3f( 0 ,1, 0);
   glBegin(GL_POLYGON);
   glVertex3f(5,20,0);
   glVertex3f(20,20,0);
   glVertex3f(12.5,25,0);
   glEnd();

   glColor3f( 0 ,1, 0);
   glBegin(GL_POLYGON);
   glVertex3f(7,25,0);
   glVertex3f(18,25,0);
   glVertex3f(12.5,28,0);
   glEnd();

glColor3f(0.53,0.81,0.92);
circle(3,4,p+0,40);
circle(3,4,p+0,36);
circle(5,3,p+0,38);
circle(5,3,p+0,38);
glEnd();

glColor3f(1.0, 0.95, 0.6);
circle(3,3,q+0,45);
glColor3f(0,0,0);
circle(3,3,q+2,45);
glEnd();


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

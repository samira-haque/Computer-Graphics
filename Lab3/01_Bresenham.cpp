#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
float x1,y1,x2,y2, dx, dy,i,j;
float m;

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
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,0, 0);
   glBegin(GL_POINTS);
if (dx == 1)
    {

        for ( i = x1, j = y1; i <= x2 ,j<=y2; i=i+1 ,j = j + m)
        {
            glVertex3f((i / 100.0), (j / 100.0), 0.0);
        }
    }
    else if (dy == 1)
    {

        for ( i = x1, j = y1; i <= x2,j<=y2; i = i + (1.0 / m), j = j + 1)
        {
            glVertex3f((i / 100.0), (j / 100.0), 0.0);
        }
    }
   glEnd();




glutSwapBuffers();
}

int main(int argc,char **argv){

    printf("Enter 1st Point: ");
    scanf("%f %f" , &x1, &y1);

    printf("Enter 2nd Point: ");
    scanf("%f %f" , &x2, &y2);
    m = (y2 - y1)/(x2-x1);

    if (abs(m)< 1)
        {
            dx =1;
        }
    else {
        dy = 1;
    }
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab 3");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

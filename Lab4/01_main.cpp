#include <GL/glut.h>

#include <stdio.h>

#include <GL/gl.h>

#include <math.h>



void init(void)

{

  glClearColor(0.0,0.0,0.0,0.0);

  glMatrixMode(GL_PROJECTION);

  glLoadIdentity();

  glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

}



void circle (GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy, int segments)

{

    glBegin (GL_TRIANGLE_FAN);

    glVertex2f (cx, cy);



    for (int i=0; i<= segments; i++)

    {

        float angle= 2.0f * 3.1416 * i / segments;

        float x= rx * cos (angle);

        float y= ry * sin (angle);

        glVertex2f ((x+cx), (y+cy));

    }

    glEnd ();

}



void Draw()

{

    glClear(GL_COLOR_BUFFER_BIT);


glColor3f(1.0, 1.0, 0.0);
    circle(0.25, 0.25, 0.1, -0.2, 100);


    glColor3f(0.0, 0.0, 0.0);
    circle(0.25, 0.25, 0.25, -0.14, 100);




    glColor3f(0.3, 0.3, 0.3);


    circle(0.14, 0.21, 0.5, 0.03, 100);


    circle(0.175, 0.14, 0.29, 0.03, 100);

    circle(0.175, 0.14, 0.71, 0.03, 100);

    circle(0.14, 0.14, 0.5, 0.205, 100);

    glColor3f(0.3, 0.3, 0.3);
    glBegin (GL_POLYGON);
    glVertex3f( 0.0,0.8,0.0);
    glVertex3f( 0.18,0.25,0.0);
    glVertex3f( 0.75,0.25,0.0);
    glVertex3f( 0.3,-.1,0.0);
    glVertex3f( 0.5,-0.75,0.0);
    glVertex3f( 0.0,-0.3,0.0);
    glVertex3f( -.5,-0.75,0.0);
    glVertex3f( -0.3,-0.1,0.0);
    glVertex3f( -.75,0.25,0.0);
    glVertex3f( -.18,0.25,0.0);

    glutSwapBuffers();

}



int main(int argc,char **argv){

    glutInit(&argc,argv);

    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );

    glutInitWindowPosition(0,0);

    glutInitWindowSize(500,500);

    glutCreateWindow("Lab Final - Half Moon");

    init();

    glutDisplayFunc(Draw);

    glutMainLoop();

    return 0;

}


#include<windows.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
#include <stdlib.h>
#define rad (3.1416/180)
#define EN_SIZE 20

using namespace std;
//initial declaration
float zoom=4;
int tola[5000][5000];
float tX=0,tY=0,tZ=-8,rX=0,rY=0,rZ=4;
float tZ1=-20,tZ2=-40,tZ3=-60,tZ4=-80,tZ5=-100,tZ6=-120;
float rotX=0,rotY=0,rotZ=0;
float cosX=0,cosY=1,cosZ=0;
float angle=0;
float xEye=0.0f,yEye=5.0f,zEye=30.0f;
float cenX=0,cenY=0,cenZ=0,roll=0;
float radius=0;
float theta=0,slope=0;
float speed = 0.3;
float angleBackFrac = 0.2;
bool saheedMinarVisible = false;
float r[] = {0.1,0.4,0.0,0.9,0.2,0.5,0.0,0.7,0.5,0.0};
float g[] = {0.2,0.0,0.4,0.5,0.2,0.0,0.3,0.9,0.0,0.2};
float b[] = {0.4,0.5,0.0,0.7,0.9,0.0,0.1,0.2,0.5,0.0};
int SCORE=1;
bool START = false;
float torusPosX[7] = {1,-2,3,-4,-2,0,2};
float torusPosY[7] = {2,3,10,6,7,4,1};

bool rot = false;
static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 1000.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void drawShohidMinar(){

    glColor3d(0.4,0.2,0.2);
	glPushMatrix();
        glTranslated(0,1.55,0);
        glScaled(2,0.05,1.5);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(0.4,0.2,0.2);
	glPushMatrix();
        glTranslated(0,1.6,0);
        glScaled(1.9,0.05,1.4);
        glutSolidCube(1);
    glPopMatrix();


    glColor3d(0.4,0.2,0.2);
	glPushMatrix();
        glTranslated(0,1.65,0);
        glScaled(1.8,0.05,1.3);
        glutSolidCube(1);
    glPopMatrix();


    glColor3d(1,1,1);
	glPushMatrix();
        glTranslated(0,1.68,-0.4);
        glScaled(0.5,0.02,0.08);
        glutSolidCube(1);
    glPopMatrix();



	glPushMatrix();
        glTranslated(0,1.99,-0.4);
        glScaled(0.06,0.7,0.04);
        glutSolidCube(1);
    glPopMatrix();


    glColor3d(0,0,0);

    glPushMatrix();
        glTranslated(0.07,1.99,-0.4);
        glScaled(0.003,0.7,0.003);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.11,1.99,-0.4);
        glScaled(0.003,0.7,0.003);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.15,1.99,-0.4);
        glScaled(0.003,0.7,0.003);
        glutSolidCube(1);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-0.22,0,0);
        glPushMatrix();
            glTranslated(0.07,1.99,-0.4);
            glScaled(0.003,0.7,0.003);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.11,1.99,-0.4);
            glScaled(0.003,0.7,0.003);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.15,1.99,-0.4);
            glScaled(0.003,0.7,0.003);
            glutSolidCube(1);
        glPopMatrix();
    glPopMatrix();


        glPushMatrix();
            glTranslated(2.2,0,-0.1);
            glScaled(4.2,1,1);
                glColor3d(0,0,0);
                glPushMatrix();
                    glTranslated(-0.528,1.85,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                    glTranslated(-0.528,2.02,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                    glTranslated(-0.528,2.18,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();
                glColor3d(1,1,1);
            glPopMatrix();


    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(-0.22,1.99,-0.4);
        glScaled(0.06,0.7,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.22,1.99,-0.4);
        glScaled(0.06,0.7,0.04);
        glutSolidCube(1);
    glPopMatrix();



    glPushMatrix();
        glTranslated(0,0.743,-1.424);
        glRotated(45,1,0,0);


        glPushMatrix();
            glTranslated(0,1.99,-0.4);
            glScaled(0.06,0.3,0.04);
            glutSolidCube(1);
        glPopMatrix();


        glPushMatrix();
            glTranslated(-0.22,1.99,-0.4);
            glScaled(0.06,0.3,0.04);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.22,1.99,-0.4);
            glScaled(0.06,0.3,0.04);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0,2.15,-0.4);
            glScaled(0.5,0.04,0.04);
            glutSolidCube(1);
        glPopMatrix();



        glColor3d(0,0,0);

        glPushMatrix();
            glTranslated(0.07,1.99,-0.4);
            glScaled(0.003,0.277,0.003);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.11,1.99,-0.4);
            glScaled(0.003,0.277,0.003);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.15,1.99,-0.4);
            glScaled(0.003,0.277,0.003);
            glutSolidCube(1);
        glPopMatrix();



        glColor3d(0,0,0);
        glPushMatrix();
        glTranslated(-0.22,0,0);
            glPushMatrix();
                glTranslated(0.07,1.99,-0.4);
                glScaled(0.003,0.277,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.277,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.15,1.99,-0.4);
                glScaled(0.003,0.277,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();

        glPushMatrix();
            glTranslated(2.2,0,-0.1);
            glScaled(4.2,1,1);
                glColor3d(0,0,0);
                glPushMatrix();
                    glTranslated(-0.528,1.85,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                    glTranslated(-0.528,2,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                    glTranslated(-0.528,2.15,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();
                glColor3d(1,1,1);
        glPopMatrix();

    glPopMatrix();


    /// left pillar1
    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(0.1,0,-0.4);
        glRotated(45,0,1,0);

        glPushMatrix();
            glTranslated(-0.605,1.94,-0.3);
            glScaled(0.045,0.65,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.45,1.94,-0.3);
            glScaled(0.045,0.65,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.528,2.258,-0.3);
            glScaled(0.199,0.04,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.528,1.68,-0.3);
            glScaled(0.199,0.02,0.06);
            glutSolidCube(1);
        glPopMatrix();

        /// ROD
        glColor3d(0,0,0);
        glPushMatrix();
            glTranslated(-0.64,-0.05,0.1);
            glScaled(1,1.02,1);
            glPushMatrix();
                glTranslated(0.078,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.145,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();


        glColor3d(1,1,1);

        ///Horizontal rod
            glColor3d(0,0,0);
            glPushMatrix();
                glTranslated(-0.528,1.85,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2.15,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();
            glColor3d(1,1,1);
    glPopMatrix();

    /// leftpillar2
    glPushMatrix();
        glTranslated(0.65,0,0.3);
        glRotated(-45,0,1,0);

        glPushMatrix();
            glTranslated(-0.605,1.94,-0.3);
            glScaled(0.045,0.65,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.45,1.94,-0.3);
            glScaled(0.045,0.65,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.528,2.258,-0.3);
            glScaled(0.199,0.04,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.528,1.68,-0.3);
            glScaled(0.199,0.02,0.06);
            glutSolidCube(1);
        glPopMatrix();

        ///ROD
        glColor3d(0,0,0);
        glPushMatrix();
        glTranslated(-0.64,-0.05,0.1);
            glScaled(1,1.02,1);
            glPushMatrix();
                glTranslated(0.078,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.145,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();
        glColor3d(1,1,1);
        ///ROD

        ///Horizontal rod
            glColor3d(0,0,0);
            glPushMatrix();
                glTranslated(-0.528,1.85,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2.15,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();
            glColor3d(1,1,1);

    glPopMatrix();


    ///Cpillars

    glPushMatrix();
        /// leftpillar1
        glTranslated(0.06,0,0.14);
        glPushMatrix();

            glTranslated(-0.2,0,-0.31);
            glRotated(45,0,1,0);

            glPushMatrix();
                glTranslated(-0.605,1.88,-0.3);
                glScaled(0.045,0.4,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.45,1.88,-0.3);
                glScaled(0.045,0.4,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2.08,-0.3);
                glScaled(0.2,0.04,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,1.68,-0.3);
                glScaled(0.199,0.02,0.06);
                glutSolidCube(1);
            glPopMatrix();

        ///ROD
        glColor3d(0,0,0);
        glPushMatrix();
        glTranslated(-0.641,0.43,0.1);
        glScaled(1,0.73,1);
            glPushMatrix();
                glTranslated(0.078,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.145,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();

        ///Horizontal rod
            glColor3d(0,0,0);
            glPushMatrix();
                glTranslated(-0.528,1.8,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,1.96,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();
            glColor3d(1,1,1);
        ///ROD

        glPopMatrix();

        /// lefpillar2
        glPushMatrix();
            glTranslated(0.83,0,0.39);
            glRotated(-45,0,1,0);

            glPushMatrix();
                glTranslated(-0.605,1.88,-0.3);
                glScaled(0.045,0.4,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.45,1.88,-0.3);
                glScaled(0.045,0.4,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2.1,-0.3);
                glScaled(0.199,0.04,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,1.68,-0.3);
                glScaled(0.199,0.02,0.06);
                glutSolidCube(1);
            glPopMatrix();


            ///Horizontal rod
            glColor3d(0,0,0);
            glPushMatrix();
                glTranslated(-0.528,1.8,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,1.96,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();
            glColor3d(1,1,1);

            ///ROD
        glColor3d(0,0,0);
        glPushMatrix();
        glTranslated(-0.641,0.43,0.1);
        glScaled(1,0.73,1);
            glPushMatrix();
                glTranslated(0.078,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.145,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();
        glColor3d(1,1,1);
        ///ROD

        glPopMatrix();


    glPopMatrix();

    /// Circle

    glColor3d(1,0,0);
    glPushMatrix();
        glTranslated(0,2.1,-0.44);
        glScaled(0.35,0.35,0.01);
        glutSolidSphere(1,50,50);
    glPopMatrix();

    glColor3d(0,0,0);
    glPushMatrix();
        glTranslated(-0.18,1.9,-0.45);
        glScaled(0.01,0.5,0.01);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(0,0,0);
    glPushMatrix();
        glTranslated(0.18,1.9,-0.45);
        glScaled(0.01,0.5,0.01);
        glutSolidCube(1);
    glPopMatrix();


}

void fan(){
    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(0,0,0);
        glScaled(1,1,0.7);
        glutSolidSphere(0.8,30,30);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(0,0,0);
        glRotated(5,0,1,0);
        glScaled(0.5,2.5,0.05);
        glutSolidSphere(1,30,30);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(0,0,0);
        glRotated(-5,0,1,0);
        glRotated(90,0,0,1);
        glScaled(0.5,2.5,0.05);
        glutSolidSphere(1,30,30);
    glPopMatrix();

}

void plane(){
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    double a = t*90.0;

    /// body of plane
    glColor3d(0.8,1.3,0.4);
    glPushMatrix();
        glTranslated(0,0,0);
        glScaled(3,0.4,0.5);
        glutSolidSphere(1,30,30);
    glPopMatrix();
    //plane mirror color
    glColor3d(0.4,0.5,0.2);
    glPushMatrix();
        glTranslated(1.7,0.1,0);
        glScaled(1.5,0.7,0.8);
        glRotated(40,0,1,0);
        glutSolidSphere(0.45,30,30);
    glPopMatrix();
    ///WINGS OF PLANE

    ///Right
    glColor3d(1,1.3,0.6);
    glPushMatrix();
        glTranslated(0,0,1.2);
        glRotated(-50,0,1,0);
        glScaled(0.7,0.1,3);
        glRotated(25,0,1,0);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,1.3,0.6);
    glPushMatrix();
        glTranslated(-0.3,-0.15,1.5);
        glRotated(90,0,1,0);
        glScaled(0.1,0.1,0.9);
        glutSolidTorus(0.5,0.5,50,50);
    glPopMatrix();

    glColor3d(1,1.3,0.6);
    glPushMatrix();
        glTranslated(0.2,-0.15,0.9);
        glRotated(90,0,1,0);
        glScaled(0.1,0.1,0.9);
        glutSolidTorus(0.5,0.5,50,50);
    glPopMatrix();

    ///Left
    glColor3d(1,1.3,0.6);
    glPushMatrix();
        glTranslated(0,0,-1.2);
        glRotated(50,0,1,0);
        glScaled(0.7,0.1,3);
        glRotated(-25,0,1,0);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,1.3,0.6);
    glPushMatrix();
        glTranslated(-0.3,-0.15,-1.5);
        glRotated(90,0,1,0);
        glScaled(0.1,0.1,0.9);
        glutSolidTorus(0.5,0.5,50,50);
    glPopMatrix();

    glColor3d(1,1.3,0.6);
    glPushMatrix();
        glTranslated(0.2,-0.15,-0.9);
        glRotated(90,0,1,0);
        glScaled(0.1,0.1,0.9);
        glutSolidTorus(0.5,0.5,50,50);
    glPopMatrix();


    ///BACK WINGS
    glPushMatrix();
        glTranslated(-2.8,0,0);
        glScaled(0.8,0.5,0.3);

        ///Right
        glColor3d(1,1.3,0.6);
        glPushMatrix();
            glTranslated(0.4,0,1.5);
            glRotated(-30,0,1,0);
            glScaled(0.7,0.1,3);
            glRotated(10,0,1,0);
            glutSolidCube(1);
        glPopMatrix();

        ///left
        glColor3d(1,1.3,0.6);
        glPushMatrix();
            glTranslated(0.4,0,-1.5);
            glRotated(30,0,1,0);
            glScaled(0.7,0.1,3);
            glRotated(-10,0,1,0);
            glutSolidCube(1);
        glPopMatrix();
    glPopMatrix();

    /// UP WINGS
    glColor3d(1,1.3,0.6);
    glPushMatrix();
        glTranslated(-2.7,0.5,0);
        glRotated(45,0,0,1);
        glScaled(0.8,2,0.1);
        glRotated(-20,0,0,1);
        glutSolidCube(0.5);
    glPopMatrix();


}

///BUILDINGS CODE
void singleTolaHouse(int R,int G,int B){
    glColor3d(r[R%30],g[G%45],b[B%75]);
    glPushMatrix();
        glTranslated(0,0,0);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,1.3,1); //color of windows in buildings
    glPushMatrix();
        glTranslated(0.2,0,0);
        glScaled(0.3,0.3,1.001);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,1.3,1);
    glPushMatrix();
        glTranslated(-0.2,0,0);
        glScaled(0.3,0.3,1.001);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,1.3,1);
    glPushMatrix();
        glTranslated(0,0,0.2);
        glScaled(1.001,0.3,0.3);
        glutSolidCube(1);
    glPopMatrix();

   glColor3d(1,1.3,1);
    glPushMatrix();
        glTranslated(0,0,-0.2);
        glScaled(1.001,0.3,0.3);
        glutSolidCube(1);
    glPopMatrix();

}

void house(int n,int R,int G){
    for(int i=0;i<n;i++){
        glPushMatrix();
            glTranslated(0,0.8+i,0);
            singleTolaHouse(G,R,i);
        glPopMatrix();
    }
}

void soheedMinarEnv(){
    /// Ground
    glColor3d(0.2,0.3,0.2);
    glPushMatrix();
        glTranslated(0,0,0);
        glScaled(EN_SIZE*2,0.3,EN_SIZE*2);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-8,-2.7,-5);
        glRotated(65,0,1,0);
        //glRotated(15,0,1,0);
        glScaled(2,2,2);
        drawShohidMinar();
    glPopMatrix();

    glPushMatrix();
        glTranslated(8,-2.7,-5);
        glRotated(-65,0,1,0);
        //glRotated(15,0,1,0);
        glScaled(2,2,2);
        drawShohidMinar();
    glPopMatrix();
}

void environment(int n){


    int i;

    glColor3d(0.2,0.3,0.2); //change ground color
    glPushMatrix();
        glTranslated(0,0,0);
        glScaled(EN_SIZE*2,0.3,EN_SIZE*2);
        glutSolidCube(1);
    glPopMatrix();


    glColor3d(1,1,0); //Change the color of ring
     //glColor3d(0,1,1);
    glPushMatrix();
     for(i=0;i<=n;i++)
    {

                if(i%5==0)
                      glColor3d(0.0f, 1.0f, 1.4f); //CYAN
                else if ((i-1)%3==0)
                      glColor3d(1.0f, 0.0f, 1.5f); //PURPLE
                else if (i%3==0)
                      glColor3d(1.0f, 0.0f, 0.2f); //REDDISH
                else
                    glColor3d(1.0f, 5.0f, 0.2f); // YELLOWISH
    }

        glTranslated(torusPosX[n],torusPosY[n],0);
        glScaled(0.4,0.4,0.4); //increase the size of ring
        glutSolidTorus(1,3,25,30); //change the values for position
    glPopMatrix();

        for(int i=-(EN_SIZE/2)+1;i<(EN_SIZE/2);i+=2){
            for(int j=-(EN_SIZE/2)+1;j<(EN_SIZE/2);j+=2){
                if(tola[i+(EN_SIZE/2)+1][j+(EN_SIZE/2)+1]!=0){
                    glPushMatrix();
                        glTranslated(i,0,j);
                        house(tola[i+(EN_SIZE/2)+1][j+(EN_SIZE/2)+1],i,j);
                    glPopMatrix();
                }else if(i>=-5&&i<=5){}
                else{
                    tola[i+(EN_SIZE/2)+1][j+(EN_SIZE/2)+1]=(rand()%5)+1;
                    glPushMatrix();
                        glTranslated(i,0,j);
                        house(tola[i+(EN_SIZE/2)+1][j+(EN_SIZE/2)+1],i,j);
                    glPopMatrix();
                }
            }
        }
}


void draw(){
    double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    double a = t*90.0;

    SCORE = t;

    ///Plane
    if(rotX>11)rotX=11;
    if(rotX<-11)rotX=-11;
    if(rotZ>10)rotZ=10;
    if(rotZ<-15)rotZ=-15;

    glPushMatrix();
        glTranslated(0,1,0);
        glRotated(90,0,1,0);
        glRotated(5,0,0,1);
        glRotated(rotX,1,0,0);
        glRotated(rotY,0,1,0);
        glRotated(rotZ,0,0,1);

        glScaled(0.4,0.4,0.4);
        plane();
    glPopMatrix();

    ///Environment
    if(tX>=4.1)tX=4.1;
    if(tX<=-4.1)tX=-4.1;
    if(tY>0.1)tY= 0.1;
    if(tY<-15)tY= -15;

    glPushMatrix();
        glTranslated(tX,tY,tZ);
        environment(2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(tX,tY,tZ1);
        soheedMinarEnv();
    glPopMatrix();

    glPushMatrix();
        glTranslated(tX,tY,tZ2);
        environment(3);
    glPopMatrix();

    glPushMatrix();
        glTranslated(tX,tY,tZ3);
        environment(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(tX,tY,tZ4);
        environment(5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(tX,tY,tZ5);
        environment(4);
    glPopMatrix();

    glPushMatrix();
        glTranslated(tX,tY,tZ6);
        environment(2);
    glPopMatrix();

    tZ+=speed;
    tZ1+=speed;
    tZ2+=speed;
    tZ3+=speed;
    tZ4+=speed;
    tZ5+=speed;
    tZ6+=speed;

    if(tZ>=20)tZ=-110;
    if(tZ1>=20)tZ1=-110;
    if(tZ2>=20)tZ2=-110;
    if(tZ3>=20)tZ3=-110;
    if(tZ4>=20)tZ4=-110;
    if(tZ5>=20)tZ5=-110;
    if(tZ6>=20)tZ6=-110;

    if(rotX>0)rotX-=angleBackFrac;
    if(rotX<0)rotX+=angleBackFrac;
    if(rotY>0)rotY-=angleBackFrac;
    if(rotY<0)rotY+=angleBackFrac;
    if(rotZ>0)rotZ-=angleBackFrac;
    if(rotZ<0)rotZ+=angleBackFrac;


    speed += 0.0002;
    if(speed>=0.7)speed=0.7;
}


void drawBitmapText(char *str,float x,float y,float z)
{
	char *c;
	glRasterPos3f(x,y+8,z);

	for (c=str; *c != '\0'; c++)
	{
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *c);
	}
}

void drawStrokeText(char* str,int x,int y,int z)
{
	  char *c;
	  glPushMatrix();
	  glColor3d(0.4,0.5,0.2);
	  glTranslatef(x, y+8,z);
	  glScalef(0.002f,0.002f,z);

	  for (c=str; *c != '\0'; c++)
	  {
    		glutStrokeCharacter(GLUT_STROKE_ROMAN , *c);
	  }
	  glPopMatrix();
}
void drawStrokeText1(char* str,int x,int y,int z)
{
	  char *c;
	  glPushMatrix();
	  glColor3d(1,1.3,1);
	  glTranslatef(x, y+8,z);
	  glScalef(0.0019f,0.0019f,z); //SIZE OF TEXT

	  for (c=str; *c != '\0'; c++)
	  {
    		glutStrokeCharacter(GLUT_STROKE_ROMAN , *c);
	  }
	  glPopMatrix();
}

void drawStrokeText2(char* str,int x,int y,int z)
{
	  char *c;
	  glPushMatrix();
      glColor3d(0.4,0.5,0.2);
	  glTranslatef(x, y+8,z);
	  glScalef(0.006f,0.006f,z);


	  for (c=str; *c != '\0'; c++)
	  {
    		glutStrokeCharacter(GLUT_STROKE_ROMAN , *c);
	  }
	  glPopMatrix();
}
void drawStrokeText3(char* str,int x,int y,int z)
{
	  char *c;
	  glPushMatrix();
      glColor3d(1,1.3,1);
	  glTranslatef(x, y+8,z);
	  glScalef(0.002f,0.002f,z);

	  for (c=str; *c != '\0'; c++)
	  {

    		glutStrokeCharacter(GLUT_STROKE_ROMAN , *c);
	  }
	  glPopMatrix();
}
void drawStrokeChar(char c,float x,float y,float z)
{
	  glPushMatrix();
          glTranslatef(x-5.5, y+8,z);
          glScalef(0.002f,0.002f,z);
          glutStrokeCharacter(GLUT_STROKE_ROMAN , c);
	  glPopMatrix();
}


static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    double a = t*90.0;
    double aa=a;

    if(!rot){
        a=0;
    }


    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();

    gluLookAt(	0.0, 4.5, 10.0,
                0, 4, 0,
                0, 1.0f, 0.0f);

    if(START){

        glPushMatrix();
            glTranslated(0,0,0);
            glScaled(zoom,zoom,zoom);
            glRotated(a,0,1,0);
            draw();
        glPopMatrix();


        drawStrokeText1("L : LEFT  R : RIGHT  U : UP  D : DOWN  z : ZOOM-IN  Z : ZOOM-OUT  A : ROTATE Q : QUIT ",-6,-0.999,-1);
        drawStrokeText3("SCORE :",-3,0.1,0);
        int mod=0;
        int number=0;
        while(SCORE)
        {
            mod=(SCORE%10);
            number=number*10+mod;
            SCORE=SCORE/10;

        }

        float tmp=0;
        while(number){
            mod=number%10;

            drawStrokeChar(mod+48,4+tmp,0,0);
            number/=10;
            tmp+=0.2;
        }
    }
    else{

        glPushMatrix();
            glTranslated(0,3,0);
            glRotated(aa,0,1,0);
            glScaled(1.5,1.5,1.5);
            plane();
        glPopMatrix();

        drawStrokeText("PRESS B TO BEGIN PLAYING",-1,-3,0.2);
        drawStrokeText2("AEROPLANE GAME",-3,-2,-0.2);
    }


    glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    float frac = 0.3;
    float rotFrac = 1;
    switch (key)
    {

        case 'Q':
        case 'q':
            exit(0);
            break;
        case 'A':
        case 'a':
            rot=true;
            break;
        case 't':
            rot=false;
            break;
        case 'z':
            zoom+=0.05;
            break;
        case 'Z':
            zoom-=0.05;
        case 'U':
        case 'u':
            tY-=frac;
            rotZ+=rotFrac;
            break;
        case 'D':
        case 'd':
            tY+=frac;
            rotZ-=rotFrac;
            break;
        case 'L':
        case 'l':
            tX+=frac;
            rotX-=rotFrac*3;
            rotY+=rotFrac/2;
            break;
        case 'R':
        case 'r':
            tX-=frac;
            rotX+=rotFrac*3;
            rotY-=rotFrac/2;
            break;
        case 'B':
        case 'b':
            START=true;
            break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
        const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);

    glutInitWindowPosition(0,0);
	glutInitWindowSize(1366,720);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);

    glutCreateWindow("PLANE-GAME-CG-MINI-PROJECT");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);


    glClearColor(1,1,1,1); //change the background color
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return EXIT_SUCCESS;
}

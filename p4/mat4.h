#include <stdio.h>
#include <string.h>
#define _USE_MATH_INCLUDES
#include <cmath>
#include "vec3.h"

#ifndef MAT4_H
#define MAT4_H

class Mat4
{
     protected:
        float	m[4][4];

    public:
	Mat4( );
        Mat4( float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float );
	Mat4&	operator=( const Mat4& );
	Mat4	operator*( Mat4& );
	Vec3	operator*( Vec3& );
	void	Export(	float [4][4] );
	void	Print( char * = "", FILE * = stderr );
	void	SetIdentity( );
	void	SetRotateX( float );
	void	SetRotateY( float );
	void	SetRotateZ( float );
	void	SetScale( float, float, float );
	void	SetTranslate( float, float, float );
	void	SetTranspose( );
};

// don't need to declare SQR and WhoAmI in here -- they are defined in vec3.h

#endif          // MAT4_H

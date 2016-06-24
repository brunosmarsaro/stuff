#include "../gLib.h"

using namespace std;

class Texture{
	private:
		FILE *file;
        	GLuint textureID;
	public:
		Texture( FILE *fp );
		~Texture( void );
		void setTexFile( FILE *fp ) { file = fp; }
		void setTexID( void ) { textureID = loadBMP_custom(); }
		GLuint getTexID( void ) { return textureID; }
		GLuint loadBMP_custom( void );
};

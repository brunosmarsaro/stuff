*** USING TEXTURE CLASSS ***

In the init function you should instantiate the pointer to your .bmp texture file like in the example below:
...
GLuint texID;  // Global variable
...
void init(){
...
    FILE *bmpfile = fopen("file.bmp", "rb");
    Texture tex(bmpfile);
    texID = tex.getTexID();
... 
}

Then, you'll be able to use it in the display function like this:
...
void display(){
...
  glEnable(GL_TEXTURE_2D);
  glBindTexture (GL_TEXTURE_2D, texID);
  glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    
  glBegin(GL_POLYGON);
    glTexCoord2i(0,0); glVertex3f(0,0, 0);
    glTexCoord2i(1,0); glVertex3f(512,0,0);
    glTexCoord2i(1,1); glVertex3f(512,512,0);
    glTexCoord2i(0,1); glVertex3f(0,512, 0);
  glEnd();
  glDisable(GL_TEXTURE_2D);
...
}

The example above is to simply texture a 4 sided polygon, however it can be applied to much more complex stuff.

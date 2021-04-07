# tennis_racket
C++ implementation of the Tennis Racket Theorem or the Intermediate Axis Theorem.

#### Link to great OpenGL Tutorials
https://antongerdelan.net/opengl/

#### Installing Libraries
To install OpenGL in Ubuntu
```
sudo apt-get install mesa-utils
```
You would also need development version of GLEW. Install it from
```
sudo apt-get install libglew-dev
```

Check the OpenGl version using the following :-
```
 glxinfo | grep "OpenGL version"
```
To install GLFW3
```
sudo apt-get update
sudo apt-get install libglfw3
sudo apt-get install libglfw3-dev
```

For Checking whether the libraries exist, Run the code from the following link -
1. https://antongerdelan.net/opengl/hellotriangle.html
2. https://www.glfw.org/docs/3.0/quick.html

Run the code as
```
g++ -o main main.cpp -lglfw -lGL -lGLEW
```

##### Important Links
1. https://www.glfw.org/docs/3.3/build_guide.html
2. https://stackoverflow.com/questions/34367424/building-glfw3-application-with-cmake-glfw-libraries-doesnt-set
3. I think I will also need GLM (OpenGL Mathematics) for the project : https://learnopengl.com/Getting-started/Transformations
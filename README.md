# tennis_racket
C++ simulation of tennis racket theorem


#### Installing the GLFW3 and OpenGL
To install OpenGL in Ubuntu
```
sudo apt-get install mesa-utils
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

For Checking whether the libraries exist, Run the code from the following link -\
1. https://antongerdelan.net/opengl/hellotriangle.html
2. https://www.glfw.org/docs/3.0/quick.html

Run the code as
```
g++ -o main main.cpp -lglfw -lGL -lGLEW
```

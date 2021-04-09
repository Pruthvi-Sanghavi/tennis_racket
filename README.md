# [tennis_racket_theorem](https://link.springer.com/content/pdf/10.1007/BF01049489.pdf)
C++ implementation of the Tennis Racket Theorem or the Intermediate Axis Theorem.\
https://www.comsol.com/blogs/why-do-tennis-rackets-tumble-the-dzhanibekov-effect-explained/

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

##### For Setup using CMAKE
https://cis.gvsu.edu/~dulimarh/Okto/cis367/#forlinux


For Checking whether the libraries exist, Run the code from the following link -
1. https://antongerdelan.net/opengl/hellotriangle.html
2. https://www.glfw.org/docs/3.0/quick.html

Run the code as
```
g++ -o main main.cpp -lglfw -lGL -lGLEW
```

#### Notes

GLFW - a small C library that lets you create and manage windows, OpenGL and OpenGL ES contexts and Vulkan surfaces, enumerate monitors and video modes as well as handle inputs such as keyboard, mouse, joystick, clipboard and time.\
Both printf and std::cout can be used in c++. Almost anything from c can be used in c++.\


##### Important Links
1. https://www.glfw.org/docs/3.3/build_guide.html
2. https://stackoverflow.com/questions/34367424/building-glfw3-application-with-cmake-glfw-libraries-doesnt-set
3. I think I will also need GLM (OpenGL Mathematics) for the project : https://learnopengl.com/Getting-started/Transformations
4. https://www.cs.rpi.edu/~cutler/classes/advancedgraphics/S17/opengl_install_notes.php
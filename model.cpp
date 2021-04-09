#include <GL/glew.h> // Includes OpenGL library
#include <GLFW/glfw3.h> // GLFW library
// #include <GLM>
// #include <stdio.h> //standard input output library
// #include <iostream>
// #include <thread>

int main() {
	glfwInit(); // Initializes the GLFW
	
	// GLFW contexts for checking the OpenGL versions and stuff 
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // Maximum opengl version setup
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2); // Minimum opengl version setup
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); 
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	// Object that creates windows
	GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", nullptr, nullptr);

	// Creates a current context
	glfwMakeContextCurrent(window);

	// close event loop
	while(!glfwWindowShouldClose(window)){
		glfwSwapBuffers(window); //to swap the back buffer and front buffer after you’ve finished drawing
		glfwPollEvents(); // to retrieve window events. 
	} 

	glfwTerminate(); // Terminates GLFW buffer

}

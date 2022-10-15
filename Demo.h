#pragma once
#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float angle = 0;
	float angle1 = 0;
	float angle2 = 0;
	float ssX = 0;
	float ssZ = 0;
	float scale = 2;
	float speed = 0.3f;
	//waypoint
	float point0x = -10;
	float point0z = 0;
	float point1x = -5.8;
	float point1z = -85.1;
	float point2x = -60.7;
	float point2z = 15;
	float x = 0;
	float z = 0;
	float t = 0;
	float tempX = 0;
	float tempZ = 0;
	float posisiX[500];
	float posisiZ[500];
	int index = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildColoredCube();
	void BuildColoredPlane();
	void DrawColoredCube(int rotate, float posX, float posY, float posZ, float scaleX, float scaleY, float scaleZ);
	void DrawColoredPlane();
	void BezierCurve();
};


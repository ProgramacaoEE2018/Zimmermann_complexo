#include<math.h>

class Complexo
{
private:
	float real, im;
public:
	Complexo (float x, float y)
{
		real = x;
		im = y;
}
	Complexo Conjugado();
	float Modulo();
	Complexo operador - (Complexo);
	Complexo operador + (Complexo);
	Complexo operador *(Complexo);
	Complexo operador / (Complexo);
};
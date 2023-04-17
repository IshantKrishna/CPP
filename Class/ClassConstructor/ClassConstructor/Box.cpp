#include "Box.h"
using namespace example;

/*Box::Box()
{
}
*/

Box::Box(int i): m_width(i), m_lenght(i), m_height(i)
{
}

Box::Box(int width, int length, int height) : m_width(width), m_lenght(length), m_height(height)
{
}

Box::~Box()
{
}

int example::Box::Volume()
{
	return m_width * m_lenght * m_height;
}


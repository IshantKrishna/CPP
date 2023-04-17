#pragma once
namespace example
{
	class Box
	{
	public:
		//prevent the compiler from generating an implicit default constructor by defining it as deleted :
		Box() = delete; //  Box() = delete;
		Box(int i);
		Box(int width, int length, int height);
		~Box();
		int Volume();
	private:
		int m_width{ 0 };
		int m_lenght{ 0 };
		int m_height{ 0 };
	

	};
}
	

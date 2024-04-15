#include <iostream>

class Monitor
{
public:
	int resolution;
	void image_output()
	{
		std::cout << "image\n";
	}
};

class Keyboard
{
public:
	int size;
	void tap()
	{
		std::cout << "Tap\n";
	}
};

class Processor
{
public:
	std::string name;
	void heating()
	{
		std::cout << "Heating\n";
	}
};

class RAM
{
public:
	int memory_size;
	void data_transfer()
	{
		std::cout << "tranformer\n";
	}
};

class Motherboard
{
public:
	int chipset;
	void turn_on()
	{
		std::cout << "zhuzhit\n";
	}
};

class GraphicsCard
{
public:
	int video_chip ;
	void rendering()
	{
		std::cout << "render\n";
	}
};

class Cooler
{
public:
	int rpm;
	void cooling_processor()
	{
		std::cout << "cooling\n";
	}
};

class System : public Processor, public RAM, public Motherboard, public GraphicsCard, public Cooler
{
public:
	void turn_on()
	{
		std::cout << "Turn it on\n";
	}
};

class PC : public System, public Keyboard, public Monitor
{
public:
	void working_pc()
	{
		std::cout << "Playing games\n";
	}
};

int main()
{
	
}

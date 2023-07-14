#pragma once
class Engine
{
public:
	virtual ~Engine() = default;
	virtual void start() = 0;
	virtual void stop() = 0;
private:

};


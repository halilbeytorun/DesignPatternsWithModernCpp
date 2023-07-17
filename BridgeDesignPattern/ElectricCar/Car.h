#pragma once
#include <Engine.h>
#include<memory>
#include<utility>
class Car
{
protected:
	explicit Car(std::unique_ptr<Engine> engine)
		: pimpl_(std::move(engine)) {}
public:
	virtual ~Car() = default;
	virtual void drive() = 0;
protected:
	Engine* getEngine() { return pimpl_.get(); }
	Engine const* getEngine() const{ return pimpl_.get(); }
private:
	std::unique_ptr<Engine> pimpl_;
};


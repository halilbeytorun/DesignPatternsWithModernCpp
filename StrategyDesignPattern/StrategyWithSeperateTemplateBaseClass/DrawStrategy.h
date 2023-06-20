#pragma once

template <typename T>
class DrawStrategy 
{
public:
	virtual ~DrawStrategy() = default;
	virtual void draw(T const&) const = 0;
};

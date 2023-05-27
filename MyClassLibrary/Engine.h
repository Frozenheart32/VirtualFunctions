#pragma once

class Engine
{
    
public:

    Engine();
    Engine(float power);
    
private:
    
    float power = 0;

public:
    
    float get_engine_power() const;
    Engine& operator==(Engine& OtherWheel);
};
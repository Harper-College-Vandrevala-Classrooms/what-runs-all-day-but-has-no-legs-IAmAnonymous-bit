using namespace std;

#include <iostream>
#include <chrono>
#include "timer.hpp"

Timer::Timer()
{

}

void Timer::start()
{
    try
    {
        if(!stopped)
        {
            throw 0;
        }
    }

    catch(int numexception)
    {
        cout << "Error: Timer Has Not Been Stopped" << endl;
    }
    
    auto start = chrono::system_clock::now();
    start_time = chrono::system_clock::to_time_t(start);
    stopped = false;
}

void Timer::stop()
{
    try
    {
        if(stopped)
        {
            throw 0;
        }
    }

    catch(int numexception)
    {
        cout << "Error: Timer Is Already Stopped" << endl;
    }

    auto end = chrono::system_clock::now();
    end_time = chrono::system_clock::to_time_t(end);
    stopped = true;
}

int Timer::elapsed()
{
    return (int)(end_time - start_time);
}
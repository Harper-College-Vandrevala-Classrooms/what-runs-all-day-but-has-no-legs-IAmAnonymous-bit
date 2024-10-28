#pragma once

using namespace std;

class Timer
{
    private:
        float time_elapsed = 0.00;
        bool stopped = true;
    public:
        Timer();
        void start();
        void stop();
        float elapsed();
};
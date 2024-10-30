#pragma once

using namespace std;

class Timer
{
    private:
        time_t start_time;
        time_t end_time;
        bool stopped = true;
    public:
        Timer();
        void start();
        void stop();
        int elapsed();
};
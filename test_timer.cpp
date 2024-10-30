using namespace std;

#include <iostream>
#include <chrono>
#include <thread>
#include <cassert>
#include "timer.hpp"

int main()
{
    Timer timer;

    assert(timer.elapsed() == 0);
    cout << "Your Time Elapsed: " << timer.elapsed() << endl;

    timer.start();
    auto start = chrono::system_clock::now();

    this_thread::sleep_for(chrono::seconds(5));

    timer.stop();
    auto end = chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;

    assert(timer.elapsed() == 5);
    cout << "Your Time Elapsed: " << timer.elapsed() << endl;
    cout << "System Time Elapsed: " << elapsed_seconds.count() << endl;
    
    timer.start();

    this_thread::sleep_for(chrono::seconds(5));

    timer.start();

    this_thread::sleep_for(chrono::seconds(5));

    timer.stop();

    this_thread::sleep_for(chrono::seconds(5));

    timer.stop();

    assert(timer.elapsed() == 10);
    cout << "Your Time Elapsed: " << timer.elapsed() << endl;

    return 0;
}
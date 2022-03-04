#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <iostream>
#include "cppledc.h"

class Main final
{
public:
    void run(void);
    void setup(void);

    CPPLEDC::CppLedc LEDC;
    CPPLEDC::CppLedcTimer LedcTimer0;

}; // Main Class
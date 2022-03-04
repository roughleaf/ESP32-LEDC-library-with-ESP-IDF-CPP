#include "main.h"

Main App;

void Main::run(void)
{
    std::cout << "Increasing LED Brightness\n";
    for(int i = 0; i < 255; i++)
    {
        LEDC.SetChannelDutyCycle(i);
        vTaskDelay(1);
    }
    std::cout << "Decreasing LED Brightness\n";
    for(int i = 255; i > 0; i--)
    {
        LEDC.SetChannelDutyCycle(i);
        vTaskDelay(1);
    }
}

void Main::setup(void)
{
    LedcTimer0.InitializeDefaults(); // Set timer0 to default values
    LedcTimer0.SetTimerDutyResolution(LEDC_TIMER_8_BIT); // Set Duty Resolution to 10 bits
    LEDC.SetChannelGpio(25); // LED is on pin 25
}

extern "C" void app_main(void)
{
    App.setup();
     while (true)
    {
        App.run();
    }    
}
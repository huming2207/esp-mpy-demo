#include <cstdio>

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include <mpy_main.hpp>

extern "C" void app_main()
{
    mpy_main mpy;
    ESP_ERROR_CHECK(mpy.init(1024*100));
    mpy.start_repl();
    vTaskDelay(portMAX_DELAY);
}
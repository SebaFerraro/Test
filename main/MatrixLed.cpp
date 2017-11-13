#include <esp_log.h>
#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "esp_wifi.h"
#include "esp_system.h"
#include "sdkconfig.h"

static void run() {
    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);
    int level = 0;

    while (true) {
        printf("Hello, world.\n");
        gpio_set_level(GPIO_NUM_2, level);
        level = !level;
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }

}

void MatrixLed(void)
{
	run();
} // app_main

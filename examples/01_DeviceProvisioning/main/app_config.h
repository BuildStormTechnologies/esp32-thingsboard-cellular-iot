/**
 * \copyright Copyright (c) 2021-2024, Buildstorm Pvt Ltd
 *
 * \file app_config.h
 * \brief app_config header file.
 *
 * The app_config Contains macros for the application.
 *
 * The libraries have been tested on the ESP32 modules.
 * Buildstorm explicitly denies responsibility for any hardware failures
 * arising from the use of these libraries, whether directly or indirectly.
 * Please note that files are subject to change without prior notice.
 *
 * EULA LICENSE:
 * This library is licensed under end user license EULA agreement.
 * The EULA is available at https://buildstorm.com/eula/
 * For any support contact us at hello@buildstorm.com
 *
 */

#ifndef _APP_CONFIG_H_
#define _APP_CONFIG_H_

#include <stdbool.h>
#include <stdint.h>

#include "stdbool.h"
#include "stdint.h"
#include "lib_config.h"

#define APP_MODULE_MAIN LIB_MODULE_MAX

//-------------------------APP CONFIG--------------------------/
#define TASK_APP_PRIORITY 4
#define TASK_APP_STACK_SIZE (4 * 1024) // reduce it to 4096

#define APP_VERSION "v1.0.0"

#define TEST_WIFI_SSID "Your SSID"
#define TEST_WIFI_PASSWORD "Wifi Password"

#define THINGSBOARD_URI "mqtt://cloud.thingsboard.io"
#define THINGSBOARD_PORT 1883

#define PROVISION_DEVICE_KEY "Provision Device Key"
#define PROVISION_DEVICE_SECRET "Provision Device Secret"

#define THINGSBOARD_TELEMETRY_TOPIC "v1/devices/me/telemetry"

#define MODEM_POWERKEY_GPIO_PIN 5
#define MODEM_RESETKEY_GPIO_PIN 4
#define MODEM_RX_UART_PIN 16
#define MODEM_TX_UART_PIN 17
#define MODEM_UART_NUM 2

#define APN "airtelgprs.com"
#define USERID ""
#define PASSWORD ""

#endif //_APP_CONFIG_H_

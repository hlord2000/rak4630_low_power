/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/pm/device_runtime.h>
#include <zephyr/pm/device.h>
#include <zephyr/lorawan/lorawan.h>
#include <zephyr/drivers/gpio.h>
#include <radio.h>
#include <sx126x.h>

static const struct device *const i2c0_dev = DEVICE_DT_GET(DT_NODELABEL(i2c0));
static const struct device *const lora_spi_dev = DEVICE_DT_GET(DT_NODELABEL(spi1));

int main(void)
{
    pm_device_action_run(i2c0_dev, PM_DEVICE_ACTION_SUSPEND);
    pm_device_action_run(lora_spi_dev, PM_DEVICE_ACTION_SUSPEND);

    while (true) {
        k_msleep(5000);
    }
} 
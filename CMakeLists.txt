# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(blinky)

include_directories($ENV{ZEPHYR_BASE}/../modules/lib/loramac-node/src/boards)
include_directories($ENV{ZEPHYR_BASE}/../modules/lib/loramac-node/src/mac)
include_directories($ENV{ZEPHYR_BASE}/../modules/lib/loramac-node/src/mac/region)
include_directories($ENV{ZEPHYR_BASE}/../modules/lib/loramac-node/src/system)
include_directories($ENV{ZEPHYR_BASE}/../modules/lib/loramac-node/src/radio)
include_directories($ENV{ZEPHYR_BASE}/../modules/lib/loramac-node/src/radio/sx126x)

target_sources(app PRIVATE src/main.c)

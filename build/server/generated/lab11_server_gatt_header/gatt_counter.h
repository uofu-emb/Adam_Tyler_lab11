
// clang-format off
// /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build/server/generated/lab11_server_gatt_header/gatt_counter.h generated from /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/include/gatt_counter.gatt for BTstack
// it needs to be regenerated when the .gatt file is updated. 

// To generate /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build/server/generated/lab11_server_gatt_header/gatt_counter.h:
// /Users/tyler/.pico-sdk/sdk/2.0.0/lib/btstack/tool/compile_gatt.py /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/include/gatt_counter.gatt /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build/server/generated/lab11_server_gatt_header/gatt_counter.h

// att db format version 1

// binary attribute representation:
// - size in bytes (16), flags(16), handle (16), uuid (16/128), value(...)

#include <stdint.h>

// Reference: https://en.cppreference.com/w/cpp/feature_test
#if __cplusplus >= 200704L
constexpr
#endif
const uint8_t profile_data[] =
{
    // ATT DB Version
    1,

    // 0x0001 PRIMARY_SERVICE-GAP_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x28, 0x00, 0x18, 
    // 0x0002 CHARACTERISTIC-GAP_DEVICE_NAME - READ
    0x0d, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x28, 0x02, 0x03, 0x00, 0x00, 0x2a, 
    // 0x0003 VALUE CHARACTERISTIC-GAP_DEVICE_NAME - READ -'Chicken BLT'
    // READ_ANYBODY
    0x13, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x2a, 0x43, 0x68, 0x69, 0x63, 0x6b, 0x65, 0x6e, 0x20, 0x42, 0x4c, 0x54, 
    // add Battery Service


    // #import <battery_service.gatt> -- BEGIN
    // Specification Type org.bluetooth.service.battery_service
    // https://www.bluetooth.com/api/gatt/xmlfile?xmlFileName=org.bluetooth.service.battery_service.xml
    // Battery Service 180F
    // 0x0004 PRIMARY_SERVICE-ORG_BLUETOOTH_SERVICE_BATTERY_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00, 0x28, 0x0f, 0x18, 
    // 0x0005 CHARACTERISTIC-ORG_BLUETOOTH_CHARACTERISTIC_BATTERY_LEVEL - DYNAMIC | READ | NOTIFY
    0x0d, 0x00, 0x02, 0x00, 0x05, 0x00, 0x03, 0x28, 0x12, 0x06, 0x00, 0x19, 0x2a, 
    // 0x0006 VALUE CHARACTERISTIC-ORG_BLUETOOTH_CHARACTERISTIC_BATTERY_LEVEL - DYNAMIC | READ | NOTIFY
    // READ_ANYBODY
    0x08, 0x00, 0x02, 0x01, 0x06, 0x00, 0x19, 0x2a, 
    // 0x0007 CLIENT_CHARACTERISTIC_CONFIGURATION
    // READ_ANYBODY, WRITE_ANYBODY
    0x0a, 0x00, 0x0e, 0x01, 0x07, 0x00, 0x02, 0x29, 0x00, 0x00, 
    // #import <battery_service.gatt> -- END
    // 0x0008 PRIMARY_SERVICE-GATT_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x28, 0x01, 0x18, 
    // 0x0009 CHARACTERISTIC-GATT_DATABASE_HASH - READ
    0x0d, 0x00, 0x02, 0x00, 0x09, 0x00, 0x03, 0x28, 0x02, 0x0a, 0x00, 0x2a, 0x2b, 
    // 0x000a VALUE CHARACTERISTIC-GATT_DATABASE_HASH - READ -''
    // READ_ANYBODY
    0x18, 0x00, 0x02, 0x00, 0x0a, 0x00, 0x2a, 0x2b, 0xb3, 0x79, 0x8a, 0x49, 0xe5, 0xd4, 0x90, 0x9e, 0xd4, 0x48, 0x8a, 0x2f, 0x1a, 0x6e, 0x82, 0x4f, 
    // Counter Service
    // 0x000b PRIMARY_SERVICE-0000FF10-0000-1000-8000-00805F9B34FB
    0x18, 0x00, 0x02, 0x00, 0x0b, 0x00, 0x00, 0x28, 0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x10, 0xff, 0x00, 0x00, 
    // Counter Characteristic, with read, write and notify
    // 0x000c CHARACTERISTIC-0000FF11-0000-1000-8000-00805F9B34FB - READ | WRITE | NOTIFY | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x0c, 0x00, 0x03, 0x28, 0x1a, 0x0d, 0x00, 0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x11, 0xff, 0x00, 0x00, 
    // 0x000d VALUE CHARACTERISTIC-0000FF11-0000-1000-8000-00805F9B34FB - READ | WRITE | NOTIFY | DYNAMIC
    // READ_ANYBODY, WRITE_ANYBODY
    0x16, 0x00, 0x0a, 0x03, 0x0d, 0x00, 0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x11, 0xff, 0x00, 0x00, 
    // 0x000e CLIENT_CHARACTERISTIC_CONFIGURATION
    // READ_ANYBODY, WRITE_ANYBODY
    0x0a, 0x00, 0x0e, 0x01, 0x0e, 0x00, 0x02, 0x29, 0x00, 0x00, 
    //here is the service added
    // 0x000f PRIMARY_SERVICE-ORG_BLUETOOTH_SERVICE_DEVICE_INFORMATION
    0x0a, 0x00, 0x02, 0x00, 0x0f, 0x00, 0x00, 0x28, 0x0a, 0x18, 
    // 0x0010 CHARACTERISTIC-ORG_BLUETOOTH_CHARACTERISTIC_TEMPERATURE_CELSIUS - READ | DYNAMIC
    0x0d, 0x00, 0x02, 0x00, 0x10, 0x00, 0x03, 0x28, 0x02, 0x11, 0x00, 0x1f, 0x2a, 
    // 0x0011 VALUE CHARACTERISTIC-ORG_BLUETOOTH_CHARACTERISTIC_TEMPERATURE_CELSIUS - READ | DYNAMIC
    // READ_ANYBODY
    0x08, 0x00, 0x02, 0x01, 0x11, 0x00, 0x1f, 0x2a, 
    // END
    0x00, 0x00, 
}; // total size 145 bytes 


//
// list service handle ranges
//
#define ATT_SERVICE_GAP_SERVICE_START_HANDLE 0x0001
#define ATT_SERVICE_GAP_SERVICE_END_HANDLE 0x0003
#define ATT_SERVICE_GAP_SERVICE_01_START_HANDLE 0x0001
#define ATT_SERVICE_GAP_SERVICE_01_END_HANDLE 0x0003
#define ATT_SERVICE_ORG_BLUETOOTH_SERVICE_BATTERY_SERVICE_START_HANDLE 0x0004
#define ATT_SERVICE_ORG_BLUETOOTH_SERVICE_BATTERY_SERVICE_END_HANDLE 0x0007
#define ATT_SERVICE_ORG_BLUETOOTH_SERVICE_BATTERY_SERVICE_01_START_HANDLE 0x0004
#define ATT_SERVICE_ORG_BLUETOOTH_SERVICE_BATTERY_SERVICE_01_END_HANDLE 0x0007
#define ATT_SERVICE_GATT_SERVICE_START_HANDLE 0x0008
#define ATT_SERVICE_GATT_SERVICE_END_HANDLE 0x000a
#define ATT_SERVICE_GATT_SERVICE_01_START_HANDLE 0x0008
#define ATT_SERVICE_GATT_SERVICE_01_END_HANDLE 0x000a
#define ATT_SERVICE_0000FF10_0000_1000_8000_00805F9B34FB_START_HANDLE 0x000b
#define ATT_SERVICE_0000FF10_0000_1000_8000_00805F9B34FB_END_HANDLE 0x000e
#define ATT_SERVICE_0000FF10_0000_1000_8000_00805F9B34FB_01_START_HANDLE 0x000b
#define ATT_SERVICE_0000FF10_0000_1000_8000_00805F9B34FB_01_END_HANDLE 0x000e
#define ATT_SERVICE_ORG_BLUETOOTH_SERVICE_DEVICE_INFORMATION_START_HANDLE 0x000f
#define ATT_SERVICE_ORG_BLUETOOTH_SERVICE_DEVICE_INFORMATION_END_HANDLE 0x0011
#define ATT_SERVICE_ORG_BLUETOOTH_SERVICE_DEVICE_INFORMATION_01_START_HANDLE 0x000f
#define ATT_SERVICE_ORG_BLUETOOTH_SERVICE_DEVICE_INFORMATION_01_END_HANDLE 0x0011

//
// list mapping between characteristics and handles
//
#define ATT_CHARACTERISTIC_GAP_DEVICE_NAME_01_VALUE_HANDLE 0x0003
#define ATT_CHARACTERISTIC_ORG_BLUETOOTH_CHARACTERISTIC_BATTERY_LEVEL_01_VALUE_HANDLE 0x0006
#define ATT_CHARACTERISTIC_ORG_BLUETOOTH_CHARACTERISTIC_BATTERY_LEVEL_01_CLIENT_CONFIGURATION_HANDLE 0x0007
#define ATT_CHARACTERISTIC_GATT_DATABASE_HASH_01_VALUE_HANDLE 0x000a
#define ATT_CHARACTERISTIC_0000FF11_0000_1000_8000_00805F9B34FB_01_VALUE_HANDLE 0x000d
#define ATT_CHARACTERISTIC_0000FF11_0000_1000_8000_00805F9B34FB_01_CLIENT_CONFIGURATION_HANDLE 0x000e
#define ATT_CHARACTERISTIC_ORG_BLUETOOTH_CHARACTERISTIC_TEMPERATURE_CELSIUS_01_VALUE_HANDLE 0x0011

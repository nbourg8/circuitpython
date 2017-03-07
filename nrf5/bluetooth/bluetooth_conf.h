#ifndef BLUETOOTH_CONF_H__
#define BLUETOOTH_CONF_H__

// SD specific configurations.

#if (BLUETOOTH_SD == 100)

#define MICROPY_PY_BLE                  (1)
#define MICROPY_PY_BLE_6LOWPAN          (1)
#define MICROPY_PY_USOCKET              (1)
#define MICROPY_PY_NETWORK              (1)

#elif (BLUETOOTH_SD == 110)

#define MICROPY_PY_BLE                  (1)
#define MICROPY_PY_BLE_NUS              (0)
#define MICROPY_PY_UBLUEPY              (1)
#define MICROPY_PY_UBLUEPY_PERIPHERAL   (1)

#elif (BLUETOOTH_SD == 132)

#define MICROPY_PY_BLE                  (1)
#define MICROPY_PY_BLE_NUS              (0)
#define MICROPY_PY_UBLUEPY              (1)
#define MICROPY_PY_UBLUEPY_PERIPHERAL   (1)

#else
#error "SD not supported"
#endif

// Default defines.

#ifndef MICROPY_PY_BLE_6LOWPAN
#define MICROPY_PY_BLE_6LOWPAN          (0)
#endif

#ifndef MICROPY_PY_BLE
#define MICROPY_PY_BLE                  (0)
#endif

#ifndef MICROPY_PY_BLE_NUS
#define MICROPY_PY_BLE_NUS              (0)
#endif

#endif
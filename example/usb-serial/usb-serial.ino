/*
Sample code to use the esp32-usb-serial library
*/

#include <Arduino.h>

#include "esp32_usb_serial.h"

#define ESP_USB_SERIAL_BAUDRATE "115200"
#define ESP_USB_SERIAL_DATA_BITS (8)
#define ESP_USB_SERIAL_PARITY \
  (0)  // 0: 1 stopbit, 1: 1.5 stopbits, 2: 2 stopbits
#define ESP_USB_SERIAL_STOP_BITS \
  (0)  // 0: None, 1: Odd, 2: Even, 3: Mark, 4: Space

#define ESP_USB_SERIAL_RX_BUFFER_SIZE 512
#define ESP_USB_SERIAL_TX_BUFFER_SIZE 128
#define ESP_USB_SERIAL_TASK_SIZE 4096
#define ESP_USB_SERIAL_TASK_CORE 1
#define ESP_USB_SERIAL_TASK_PRIORITY 10

void setup() {
  Serial.begin(115200);
  if (ESP_OK!=usb_serial_init()){
    Serial.println("Initialisation failed");
  } else {
	if(ESP_OK!=usb_serial_create_task())
	{
		Serial.println("Task Creation failed");
	} else {
    Serial.println("Success");
	}
  }
}

void loop() {
 /* usb_serial_loop();
  if (usb_serial_available()) {
    uint8_t data = usb_serial_read();
    usb_serial_write(data);
  }
    */
}

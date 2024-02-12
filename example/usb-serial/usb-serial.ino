/*
Sample code to use the esp32-usb-serial library
*/

#include <Arduino.h>

#include "esp32_usb_serial.h"

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

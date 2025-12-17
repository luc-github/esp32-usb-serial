# esp32-usb-serial ![Version](https://img.shields.io/badge/dynamic/json?label=Version&query=$.version&url=https://raw.githubusercontent.com/luc-github/esp32-usb-serial/refs/heads/main/info.json)
Arduino Library to use USB as OTG on ESP32 capable devices based on espressif IDF components

The code use the following versions of the components:
```
## IDF Component Manager Manifest File
dependencies:
  usb_host_ch34x_vcp: "^2"
  usb_host_cp210x_vcp: "^2"
  usb_host_ftdi_vcp: "^2"
  usb_host_vcp: "^1"
  idf: ">=5.1.0"
```

It support the following USB to Serial chips:
- CH34X
- CP210x
- FTDI FT23x 

The library is based on the IDF USB Host VCP component and it is a wrapper to use it on Arduino IDE.

Tested on ESP32S3, but should work on S2 based devices.

The sample code is a simple USB<->Serial bridge, it reads from the USB and writes to the Serial and viceversa.

Tested with [![IDF 5.1.4](https://img.shields.io/badge/IDF-v5.1.4-blue?style=plastic&label=IDF&logo=espressif)](https://github.com/espressif/esp-idf)

> [!WARNING]
>### Disclaimer
> The software is provided 'as is,' without any warranty of any kind, expressed or implied, including but not limited to the warranties of merchantability, fitness for a particular purpose, and non-infringement. In no event shall the authors or copyright holders be liable for any claim, damages, or other liability, whether in an action of contract, tort, or otherwise, arising from, out of, or in connection with the software or the use or other dealings in the software.
>It is essential that you carefully read and understand this disclaimer before using this software and its components. If you do not agree with any part of this disclaimer, please refrain from using the software.  

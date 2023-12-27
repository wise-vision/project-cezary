# Soil moisture system using grove capicty moisture sensor, Wio E5 dev board and Wio E5 mini board
## Introduction
Soil moisture system includes:
* Reading soil mositure level via ADC on mini board.
* Sending data about mositure level via Lora to dev board.
* Dev board recive this data and send order to mini board about, what color rgb led, should lights.
## Technologies
Project is created with:
* Zephyr: 3.5.0
* West: 1.2.0
## Preparation
1. It is necessary to have Zephyr already installed to build or flash application.                                                          
## E5 dev board setup             
To build versions for the e5 dev board, you need an unlocked board(this shows how to unlock board https://wisevision.tech/docs/LoRa/LoRa-e5-dev-board-unprotect-memory), connected via UART and st-link.
1. You need to copy Source code from github into zephyrpoject directory:
$ git clone https://github.com/wise-vision/project-cezary.git
2. You need to set the path to the code file:
$ cd /zephyrpoject/project-cezary/boards/e5_dev_board
3. Build source code:
$ west build -b lora_e5_dev_board
4. Upload your build to board:
$ west flash
## E5 mini board setup
To build versions for the e5 mini board, you need an unlocked board(this shows how to unlock board https://wisevision.tech/docs/LoRa/LoRa-e5-dev-board-unprotect-memory), connected via UART and st-link.
1. You need to copy Source code from github into zephyrpoject directory:
$ git clone https://github.com/wise-vision/project-cezary.git
2. You need to set the path to the code file:
$ cd /zephyrpoject/project-cezary/boards/e5_mini
3. Build source code:
$ west build -b lora_e5_dev_board
4. Upload your build to board:
$ west flash
## Code of E5 dev board
### prj.conf
```c
CONFIG_LOG=y
CONFIG_SPI=y
CONFIG_GPIO=y
CONFIG_LORA=y
CONFIG_PRINTK=y
CONFIG_CBPRINTF_FP_SUPPORT=y
```
These configurations help customize the Zephyr OS for specific hardware and functionality requirements.



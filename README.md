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
## E5 dev board setup
To build versions for the e5 dev board, you need an unlocked board(this shows how to unlock board https://wisevision.tech/docs/LoRa/LoRa-e5-dev-board-unprotect-memory), connected via UART and st-link.
1. You need to set the path to the code file:
$ cd /path_to_your_source_code/e5_dev_board
2. Build source code:
$ west build -b lora_e5_dev_board
3. Upload your build to board:
$ west flash
## E5 mini board setup
To build versions for the e5 mini board, you need an unlocked board(this shows how to unlock board https://wisevision.tech/docs/LoRa/LoRa-e5-dev-board-unprotect-memory), connected via UART and st-link.
1. You need to set the path to the code file:
$ cd /path_to_your_source_code/e5_mini_board
2. Build source code:
$ west build -b lora_e5_dev_board
3. Upload your build to board:
$ west flash


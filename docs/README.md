# Hardware preparation for soil moisture system on Wio E5 dev board and Wio E5 mini board
## Wio E5 dev board preparation
### Flashing
* For flashing the board you have to unlock board like here (https://wisevision.tech/docs/LoRa/LoRa-e5-dev-board-unprotect-memory). If you have problem with connection via StLink, you should update your ST-Link programmer software.
* After this operation st-link should be still connected to your pc and board. Diagram below shows how to connect board to St-Link v2
![Connection diagram](st-link.png) 
* Your lora antenna should be connected to board.
* Remember if you want fo flash your board you have to build your code firstly na you have to connect you board to power it. You could do it by uart connection.
## Wio E5 mini board.
### Flashing
Do every step from Wio E5 dev board and:
#### Connections
![Wio E5 mini board pinout](lora-e5_mini_pinout.png) 
##### Moisture sensor connections:
![GROVE moisture capicity sensor pinout](pin_out_moisture_grove.jpg) 
* GND to system GND
* VCC to 3v3
* SIG to A3
##### RGB led connections:
![RGB pin out](rgb_pin_out.png) 
* GND to system GND
* R to D0
* G to D10


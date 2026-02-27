## I made a hackboard based on the pretty well known Sayo Device. 

---

My Hackboard has a rotary encoder for volume control, 3 keys for macros/inputs. Currently in the QMK firmware it's been coded so the left key will press W on the keyboard, the middle key will do copy, and the right key will do paste. To make this Hackboard yourself you will need all the electronics in BOM plus get the custom PCB board made, the files for that are in gerbers in the production folder. After that you will need to 3d print all 3 of the parts for the case. Next you assemble the PCB board by sautering all of the pieces together. Finally you flash the Firmware into the RP2040 micro-controller and assemble the case for the sayo device.

---

Currently all of my electrical experiences have been as a senior electrical member on our FRC team. After seeing the blueprint project I felt like it would be fun to expand this passion I have for circuts and electronics into my house. Sadly I saw that blueprint would be ending in a month which is not enough time for the projects I had in mind as school keeps me busy... So I decided to start out with a more simple project like the guided Hackboard which looked really fun to make. Also recently I have been getting into Geometry Dash in my spare time so I thought why not make a custom Sayo device!

---

# CAD MODEL:
<img width="1920" height="879" alt="image" src="https://github.com/user-attachments/assets/7296311a-326d-42ee-b406-f11db2110955" />
<img width="1920" height="871" alt="image" src="https://github.com/user-attachments/assets/44c87a9c-ebd0-46d0-b8ab-b0a720b08386" />
As far as I'm aware everything will work with 6 screws 4 for the lid and 2 for the board. Potentially if I use 2 screws for the lid and 2 for the board I will only need 4 M3 bolts

---

# PCB:
<img width="1381" height="839" alt="image" src="https://github.com/user-attachments/assets/d7d16a16-68fd-40a8-a7a1-0b17bd742707" />
Schematic made in KiCad

<img width="893" height="632" alt="image" src="https://github.com/user-attachments/assets/53b66718-d8d1-429b-8d91-b371283c5eac" />
PCB also made in KiCad

---

# Firmware:
I used QMK with the first key as W for jump in GD, and the other 2 keys are copy and paste.
Pressing the rotary encoder will mute and scrolling up and down will make volume go up and down.

---

# BOM:

* 3x Cherry MX Switches

* 3x DSA Keycaps
   
* 4x M3x12mm SHCS Bolts
  
* 2x M3x6mm SHCS Bolts
  
* 1x 0.91" 128x32 OLED Display
  
* 1x EC11 Rotary Encoder
  
* 1x Seeed XIAO RP2040
* 
* 1x Case {3 printed parts} (I have a 3d printer at home so I can get this myself)

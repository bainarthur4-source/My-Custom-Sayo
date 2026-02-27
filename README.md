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

[Item,Quantity,Unit Price ($),Total Price ($),URL
"0.91"" 128x32 OLED Display",1,4.19,4.19,https://www.robotshop.com/products/091-inch-128x32-i2c-oled-display-blueLink
EC11 Rotary Encoder,1,4.49,4.49,https://www.digikey.com/en/products/detail/alps-alpine/EC11E15244G1/21721550Link
1x Seeed XIAO RP2040,1,3.99,3.99,https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html?srsltid=AfmBOorylSUVHAx-EGUnlCGFg4XevzRIABXc1V5slbQOezMUfysipypL
M3x6mm SHCS Bolts,2,1.24,2.48,https://us.misumi-ec.com/vona2/detail/221000551365/?HissuCode=CSHSM-SUS-M3-6&gad_source=1&gad_campaignid=19817031019&gbraid=0AAAAADtMMx-NIiWfGx4ddFV54JqUoQiQR&gclid=CjwKCAiAnoXNBhAZEiwAnItcG34oMqhBsJpe0Y5fftf5huFeCXPZVQnps9lRdSFpEWnmxzYjYgHWLBoCfCoQAvD_BwE&seriesCode=221000551365&tab=productInformation&Page=1
Cherry MX Keycap,3,1.05,3.15,https://www.sparkfun.com/cherry-mx-keycap-r2-opaque-black.html?gad_source=1&gad_campaignid=17479024039&gbraid=0AAAAADsj4ERfI_hmYifNxlzE7bCVZP6oR&gclid=CjwKCAiAnoXNBhAZEiwAnItcG8GQ8f800L8u5SWy_DAdA9nJvNtbmVoa0BNZ40OJn6Pm9cRXvq-JHBoCS2cQAvD_BwE
Cherry MX Switch,3,1.1,3.3,https://www.sparkfun.com/cherry-mx-switch.html#content-overview
M3x12mm SHCS Bolts,4,0.11,0.44,https://us.misumi-ec.com/vona2/detail/221000551376/?HissuCode=CSHCS-316L-M3-12&gad_source=4&gad_campaignid=19817031019&gbraid=0AAAAADtMMx99qsEtck0w1r-x3EfNhwXL7&gclid=CjwKCAiAnoXNBhAZEiwAnItcG3CGA2wAc2PKwcxiYjYAeDyd2uYz4ok5NSG27nl_Vu0cNHnMUtybxRoCjRcQAvD_BwE&seriesCode=221000551376&tab=productInformation&Page=1]([PASTE_THE_RAW_URL_HERE](https://raw.githubusercontent.com/bainarthur4-source/My-Custom-Sayo/refs/heads/main/Sayo%20BOM%20-%20Sheet1%20(1).csv))

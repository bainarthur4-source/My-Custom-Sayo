#pragma once

#define MATRIX_ROWS 1
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { D0, D1, D2 }
#define MATRIX_COL_PINS { }
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { D8 }
#define ENCODERS_PAD_B { D9 }

#define ENCODER_RESOLUTION 4

#define OLED_DISPLAY_128X64
#define I2C1_SDA_PIN D4
#define I2C1_SCL_PIN D5
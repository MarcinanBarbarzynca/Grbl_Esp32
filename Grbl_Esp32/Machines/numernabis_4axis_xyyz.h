/*
    numernabis_4axis_xyyz.h
    Part of Grbl_ESP32

    Pin assignments for a 4 axis flat cnc
    Board is still in testing. I will publish it when its done

    Now it uses transistor/darlington array to comunicate with stepper driver.

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/

#define MACHINE_NAME "numernabis_4axis_xyyz" //now based on "ESPDUINO_32"


#define X_STEP_PIN              GPIO_NUM_18
#define X_DIRECTION_PIN         GPIO_NUM_5

#define Y_STEP_PIN              GPIO_NUM_17
#define Y_DIRECTION_PIN         GPIO_NUM_16

#define Z_STEP_PIN              GPIO_NUM_4
#define Z_DIRECTION_PIN         GPIO_NUM_0

#define A_STEP_PIN              GPIO_NUM_2
#define A_DIRECTION_PIN         GPIO_NUM_15

#define SPINDLE_TYPE SPINDLE_TYPE_RELAY //SPINDLE_TYPE_PWM
#define SPINDLE_OUTPUT_PIN         GPIO_NUM_26 //DAC //PWM //ON_OFF

#define X_LIMIT_PIN             GPIO_NUM_36 //A //I will just connect both limit switches to one input :/
#define Y_LIMIT_PIN             GPIO_NUM_39 //B   //As PinMode(Y_LIMIT_PIN,IMPUT);
#define Z_LIMIT_PIN             GPIO_NUM_34 //C    //As PinMode(Z_LIMIT_PIN,IMPUT);

//BONUS LIMIT SWITCHES
//#define D_LIMIT_PIN             GPIO_NUM_35 //D    //As PinMode(D_LIMIT_PIN,IMPUT);
//#define E_LIMIT_PIN             GPIO_NUM_32 //E    //As PinMode(E_LIMIT_PIN,IMPUT);
//#define F_LIMIT_PIN             GPIO_NUM_33 //F    //As PinMode(F_LIMIT_PIN,IMPUT);
//#define G_LIMIT_PIN             GPIO_NUM_25 //G    //As PinMode(G_LIMIT_PIN,IMPUT);
//#define H_LIMIT_PIN             GPIO_NUM_27 //H    //As PinMode(H_LIMIT_PIN,IMPUT);

//BONUS ALARM SWITCHES
//#define X_ALARM_PIN             GPIO_NUM_23     //As PinMode(X_ALARM_PIN,IMPUT_PULLUP);
//#define Y_ALARM_PIN             GPIO_NUM_22     //As PinMode(Y_ALARM_PIN,IMPUT_PULLUP);
//#define Z_ALARM_PIN             GPIO_NUM_21     //As PinMode(Z_ALARM_PIN,IMPUT_PULLUP);
//#define R_ALARM_PIN             GPIO_NUM_19     //As PinMode(R_ALARM_PIN,IMPUT_PULLUP);

/*//ENABLE EXTERNALS
#define COOLANT_MIST_PIN        GPIO_NUM_8  // labeled Mist
#define COOLANT_FLOOD_PIN       GPIO_NUM_7  // labeled Flood
#define PROBE_PIN               GPIO_NUM_13  // labeled Probe

#define CONTROL_RESET_PIN       GPIO_NUM_35 //PinMode(CONTROL_RESET_PIN,IMPUT);
#define CONTROL_FEED_HOLD_PIN   GPIO_NUM_32 //PinMode(CONTROL_FEED_HOLD_PIN,IMPUT);
#define CONTROL_CYCLE_START_PIN GPIO_NUM_33 //PinMode(CONTROL_CYCLE_START_PIN,IMPUT);
*/

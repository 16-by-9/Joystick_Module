# Joystick Module Interface 🎮  

This project demonstrates how to **interface a joystick module** with an **Arduino** to read **X and Y axis values** and detect **button presses**. The joystick can be used for **robotics, game controls, motor direction, and more**.

## 🛠 Features  
- **Analog X & Y Axis Control** – Read joystick movements as **analog values** (0-1023).  
- **Push Button Input** – Detect button press when joystick is pressed down.  
- **Serial Monitor Output** – Display real-time X/Y values and button states.  
- **Expandable** – Can be used for **robot control, servo movement, or game input**.  

## 🔧 Hardware Requirements  
- 🎮 **Joystick Module** (with X, Y, and button outputs)  
- 💻 **Arduino Board** (Uno, Mega, Nano, etc.)  
- 🔌 **Jumper Wires**  

## 🚀 Wiring Guide  
| Joystick Pin  | Arduino Pin |
|--------------|------------|
| **VCC**      | 5V         |
| **GND**      | GND        |
| **X-Axis**   | A0         |
| **Y-Axis**   | A1         |
| **Button**   | D2         |

## 📜 Code Overview:  

const int LRpin = A0;
const int UDpin = A1;

int LR;
int UD;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
LR = analogRead(LRpin);
UD = analogRead(UDpin);

Serial.print("LR: ");
Serial.print(LR);
Serial.print(" UD: ");
Serial.println(UD);
delay(500);
}
import pyautogui as p
import time
import serial

ser = serial.Serial('COM7', 9600)

time.sleep(4)

while True:
    try:
        line = ser.readline().decode('utf-8').strip()
        if "FIRE DETECTED" in line:
            p.typewrite("Fire!")
            p.press("enter")
    except Exception as e:
        print(f"Error: {e}")

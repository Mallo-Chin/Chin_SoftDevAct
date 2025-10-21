import serial
import time

arduino = serial.Serial(port="COM3", baudrate=9600, timeout=1)
time.sleep(2)

while True:
    receivedData = input("Enter your command: ")

    if receivedData == "exit":
        break
    elif receivedData.isalnum():
        arduino.write(f"{receivedData}\n".encode())
        print("command sent")
    else:
        print("Invalid command. Try again.")

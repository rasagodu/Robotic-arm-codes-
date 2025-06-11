import serial
import time     


arduino = serial.Serial('COM10', 9600)
time.sleep(2)
answer=input("do you want to move the servos?(Please type yes or no)").lower()
if answer=="no":
    print("Okay!")
else:
 
 
 current_angle=[0,0,0,0,0,0] 
 while True :
    angle=[]
    servo_to_move=[]
    i=0
    while i<6:
       servo_to_move.append(input(f"Do you want to move servo {i+1}?").lower())

       
       if servo_to_move[i]=="yes":
          angle.append(input(f"What angle do you want servo {i+1} to move?"))
          current_angle[i]=angle[i]
       elif servo_to_move[i]=="no":
           angle.append(str(current_angle[i])) 
           
       i+=1  

          

    #angle_1=angle[0]   
    #angle_2=angle[1]
    #angle_3=angle[2]
    #angle_4=angle[3]
    #angle_5=angle[4]
    #angle_6=angle[5]
    
    #arduino.write(("servo" +"," + angle_1 +angle_2 + angle_3 + angle_4 + angle_5 + angle_6 + '\n').encode())
    arduino.write(("servo," + ",".join(angle) + "\n").encode())

    time.sleep(2)

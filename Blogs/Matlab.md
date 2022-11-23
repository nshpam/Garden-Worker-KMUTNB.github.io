# Matlab 
Connecting Matlab and ESP32 and process data in board to gui


## 
ไปที่หน้า Home > Add-ons ของโปรแกรม Matlab   

<img width="1246" alt="Screenshot 2565-11-15 at 11 12 07" src="https://user-images.githubusercontent.com/109753614/201826088-29ba31c3-d9f1-4f39-ba75-dbc3601d6615.png">                   
        

จากนั้นกด Get Hardware Support Packages                               
<img width="246" alt="Screenshot 2565-11-15 at 11 15 46" src="https://user-images.githubusercontent.com/109753614/201825597-0746e15d-a515-4d3a-ad1b-e320429b4c12.png">               

#
เลือกไปที่ MATLAB Support Packages for Arduino Hardware
 
<img width="1095" alt="Screenshot 2565-11-15 at 11 28 59" src="https://user-images.githubusercontent.com/109753614/201826499-0c7d7e6c-14dc-4452-8ffc-f59ea6fc4a1c.png">

<img width="1105" alt="Screenshot 2565-11-15 at 11 26 46" src="https://user-images.githubusercontent.com/109753614/201826399-da8c8dc4-cf56-4d36-874c-73c34899da1e.png">

<img width="1098" alt="Screenshot 2565-11-15 at 17 26 40" src="https://user-images.githubusercontent.com/109753614/201901586-8595b787-fcb5-4948-930b-8d79c3c9da61.png">

<img width="548" alt="Screenshot 2565-11-15 at 17 26 57" src="https://user-images.githubusercontent.com/109753614/201901604-c3960142-48e0-4181-8089-a83ab72021e2.png">

#
เมื่อทำการติดตั้งเสร็จให้กดที่ SETUP NOW หรืออีกทางคือการไป Apps > Arduino Explorer

กด Setup Now เพื่อ ไปหน้า Hardware Setup               
 
<img width="561" alt="Screenshot 2565-11-15 at 17 41 38" src="https://user-images.githubusercontent.com/109753614/201901624-a97fb9b1-1ada-4fd4-bccd-a5851764ccf4.png">

ไปที่หน้า Apps > Arduino Explorer และกด Manage Hardware

<img width="1243" alt="Screenshot 2565-11-15 at 17 49 05" src="https://user-images.githubusercontent.com/109753614/201901664-31d1bbaa-d478-4f17-bde7-3e5826826c1a.png">

#
จากนั้น เมื่อกดแล้วจะมาที่หน้า Hardware Setup ให้เลือกที่ USB แบะกด Next

![image](https://user-images.githubusercontent.com/109753614/201911675-76cb0211-a791-4f9b-be30-65a241e8f986.png)

เลือก board เป็น ESP32-WROOM-DevKitC และเลือก Port ของบอร์ดที่ต้องการเชื่อม
และกดที่ Program เพื่ออัพโหลด Library ESP32 board              

![image](https://user-images.githubusercontent.com/109753614/201911715-d06abdbc-b136-4064-89f3-ff415bd12975.png)

#
เมื่ออัพโหลดเสร็จ
ให้คลิก Test Connection โดย ESP32 จะมีให้กด BOOT ทุกครั้งที่ Test Connection และเมื่อ เชื่อมต่อสำเร็จให้กด NEXT                             

![image](https://user-images.githubusercontent.com/109753614/201912458-59a57ecb-44f8-4294-b603-9874c683b31f.png)
![image](https://user-images.githubusercontent.com/109753614/201912653-151802d4-6c93-4d17-8c5d-1f4d5505119d.png)

จะไปที่หน้า Arduino Explorer ให้เลือกบอร์ด ESP32-WEOOM-DevKitC และเลือก Port ของตัวบอร์ดและตั้งชื่อ จากนั้นกด Confirm Parameters  

![image](https://user-images.githubusercontent.com/109753614/201912828-57119780-4136-4a82-8e50-525f9dea3485.png)

และ Hardware ที่เราตั้งค่าก็จะมาปรากฏใน Arduino Explorer จากนั้นคลิปไปที่ Hardware ที่เราสร้างก็จะไปดูข้อมูลในบอร์ดของเราได้            

![image](https://user-images.githubusercontent.com/109753614/201913200-228773af-4c4c-40eb-ae42-7467d33e90e8.png)

#
จากนั้นเราก็จะสามารถดูข้อมูลตัว Module ที่เราใช้ได้โดยคลิก digital pin ที่เราเสียบเชื่อมกับตัว ESP32 เช่น D14 และเปิด Mode ของ pin:D14 เป็น Analog Input(Read) 

![image](https://user-images.githubusercontent.com/109753614/201913609-0c39baad-340e-4283-93b5-d3801cf39ce0.png)

#

# Library and Extension
## Map function ใช้สำหรับ map ค่าความชื้น ให้ออกมาเป็น Humidity % 
![image](https://user-images.githubusercontent.com/109753614/202749400-ea194553-70a9-45e5-9dcc-1f4807d1c364.png)


#
Matlap designer
![image](https://user-images.githubusercontent.com/109753614/201928713-5a090427-c06e-4164-94f8-1a192780ad8e.png)            
![image](https://user-images.githubusercontent.com/109753614/201928745-45295569-e64c-4e90-9ff4-5a3f3b3e9fb1.png)


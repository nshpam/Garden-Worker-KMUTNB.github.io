# Beginning-for-arduino
My beginning blog with First time Arduino


## การดาวน์โหลด โปรแกรม Arduino IDE 1.8.19
เริ่มจากการดาวโหลด โดนเข้าไปที่เว็บไซต์ https://www.arduino.cc/en/software
จากนั้นกดโหลดไปที่ Arduino IDE version 1.8.19
![image](https://user-images.githubusercontent.com/109753614/199952667-b6eae59e-ff06-4587-a7ca-649afe79fdec.png)
#
เมื่อทำการโหลดเสร็จ ให้ทำการ install Arduino IDE                                            
![image](https://user-images.githubusercontent.com/109753614/199952905-f626828d-585b-4900-9ec4-bbf3b295dad2.png)

![image](https://user-images.githubusercontent.com/109753614/199952963-8ff71f2f-08ef-4a43-b1f2-580954c01282.png)                       
![image](https://user-images.githubusercontent.com/109753614/199953108-cd09ba33-e07c-4f89-a244-1fc809b3abe1.png) 

จากนั้นเลือกที่อยู่ของไฟล์ แล้วกด Install
#
เมื่อทำการ Install เสร็จสิ้น
ก็สามารถเข้าไปที่โปรแกรม Arduino IDE ได้เลย 

![image](https://user-images.githubusercontent.com/109753614/199953915-65591d95-66d8-436f-a886-9d6b7f68829a.png)

## การใช้งาน NODEMCU Esp32 ในโปรแกรม Arduino IDE
ไปที่ File และกดไปที่ Preferences หรือกด Ctrl + Comma

![image](https://user-images.githubusercontent.com/109753614/199955950-30015684-020a-46b0-8b9b-3f247cbe4d20.png)

จากนั้น ไปที่ Additional Boards Manager URLs: แล้วกรอกค่านี้ลงไปในช่อง   

https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_dev_index.json

เมื่อกรอกเสร็จให้มำการ กดปุ่ม ok

![image](https://user-images.githubusercontent.com/109753614/199956674-125acdcf-417b-481d-b5c2-5abca1fd4b37.png)
#
จากนั้นให้ไปที่ Tools > Board และเลือกที่ Boards Manager 

![image](https://user-images.githubusercontent.com/109753614/199956939-0dabd064-9a21-425c-a17e-d814582d3ff3.png)                           
ค้นหาคำว่า ESP จากนั้นก็ทำการโหลด Board ESP32 by Espressif Systems    

![image](https://user-images.githubusercontent.com/109753614/199957111-9f01f87b-9c10-4bba-9410-bb5eb490ae24.png)       
<img width="796" alt="Screenshot 2565-11-11 at 21 55 22" src="https://user-images.githubusercontent.com/109753614/201365894-12ad1c16-3b3d-4655-a7d2-8628f38f4ed1.png">

#
เมื่อติดตั้งเสร็จให้ไปที่ Tools > Boards ESP32 Arduino และทำการเลือก EPS32 Dev Module

![image](https://user-images.githubusercontent.com/109753614/202262806-df00d202-af9f-43a4-8b3b-e05cd67af47c.png)

และ เลือก Port usb ที่อยู่ของตัว บอร์ด ESP32
![image](https://user-images.githubusercontent.com/109753614/202263166-7d00eb2a-8501-43ea-83c7-37d6c94df14c.png)








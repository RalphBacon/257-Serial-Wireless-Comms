# Video #257: Serial Wireless Comms for Arduino (et al)
Want to see the Serial Monitor output remotely? Easy!

![257 Thumbnail-00014 (Phone)](https://user-images.githubusercontent.com/20911308/211820221-39f5489b-c8cc-4591-9cd3-2f5f177112ee.png)
### Video link: https://youtu.be/tiuYPqh9sz0  
<br>  

[![PCBWayPrototype the easy way](https://user-images.githubusercontent.com/20911308/185422574-52a4e7db-c680-4dd2-87be-1f1dd1db6a65.gif "PCBWay - up to 20% Discount on 4 & 6-layer PCBs")](https://pcbway.com/)  

I want to send everything my project Arduino (or ESP32 etc) sends out on the TX pin to another Arduino on my workbench so I can see what's going on - remotely!  

Easy enough but there are some caveats if you want to take full advantage of these little Serial Wireless Transceivers. Luckily for us, there are only 5 wires needed: two for power,two for the data and one control wire (which you might not need).

In fact, in my project I'm using just three wires: VCC, GND and TX! So simple. You'll see this module in the opening shots of the video. And you can do this right out of the box if you are happy with the 9,600bps transmission rate.

<br>  

## M-BK2461 module  

M-BK2461U serial wireless transceiver pdf manual  
PLEASE NOTE: this module is 3v3 limited - don't apply 5v  
https://bit.ly/3Gv6xgy  
https://bit.ly/3Zi4RiS  

Full manual pdf for the BK2461 chip used in this module  
https://www.mikrocontroller.net/attachment/381910/BT-WiFi-52rf5541.pdf  

<br>  

## JDY-040/JDY-041 module  

JDY-040 module Serial Wireless transceiver info  
PLEASE NOTE: this module is 3v3 limited - don't apply 5v  
https://sudonull.com/post/48570-Radio-modules-for-arduino-JDY-40  
https://w.electrodragon.com/w/images/0/05/EY-40_English_manual.pdf  

JDY-041 where to buy (almost identical to JDY-040)  
https://bit.ly/3izz9Ns  
https://www.aliexpress.com/i/1005001593967277.html  

Someone who had more luck with me regarding AT commands on the JDY-040:  
NB: This video is in Russian but you can switch on English (translated) subtitles - worth watching!  
https://www.youtube.com/watch?v=TANjVgaHy5o&t=611s   

<br>  

## HC-12 module

HC-12 433MHz Serial Transceiver information (with Arduino sketch examples)  
https://bit.ly/3XiKMaj (wolles-elektronikkiste.de)  
https://bit.ly/3QqpA05 (blackfalconelectronics.com/)  
https://bit.ly/3ZBvU9c (howtomechanics.com)  
https://bit.ly/3VUykwB (allaboutcircuits.com)  

HC-12 (two units) that I bought from AliExpress  
(PLEASE NOTE: this module has a wider voltage range of 3v3 to 5v5)  
(New Model B is less than $2 each and comes with spiral antenna)  
https://www.aliexpress.com/item/32832783022.html   

► List of all my videos
(Special thanks to Michael Kurt Vogel for compiling this)  
http://bit.ly/YouTubeVideoList-RalphBacon  

► If you like this video please give it a thumbs up, share it and if you're not already subscribed please consider doing so and joining me on my Arduinite (and other μControllers) journey  

My channel, GitHub and blog are here:  
\------------------------------------------------------------------  
• https://www.youtube.com/RalphBacon  
• https://ralphbacon.blog  
• https://github.com/RalphBacon  
• https://buymeacoffee.com/ralphbacon  
\------------------------------------------------------------------

My ABOUT page with email address: https://www.youtube.com/c/RalphBacon/about


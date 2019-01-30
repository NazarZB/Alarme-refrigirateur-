# **Alarme réfrigérateur**

Ce projet à été réalisé par @Nazar.ZB @orokronos

### **Vidéo** 

[![video](https://img.youtube.com/vi/egfw8r3Ng3o/0.jpg)](https://www.youtube.com/watch?v=egfw8r3Ng3o)

## **Branchements**

![Schéma](https://image.noelshack.com/fichiers/2019/05/2/1548766483-shema.png)





## **Matériels utilisés**

- [Arduino **Uno**](https://store.arduino.cc/arduino-uno-rev3) : 

![Arduino](https://store-cdn.arduino.cc/uni/catalog/product/cache/1/image/520x330/604a3538c15e081937dbfbd20aa60aad/a/0/a000066_featured_1_.jpg)

- [Buzzer passifs](https://www.amazon.fr/Cylewet-bornes-%C3%A9lectronique-%C3%A9lectromagn%C3%A9tique-imp%C3%A9dance/dp/B073XH1HCB/ref=sr_1_1?ie=UTF8&qid=1548766677&sr=8-1&keywords=buzzer+passif)

![Buzzer](https://images-na.ssl-images-amazon.com/images/I/51tFUdRMyZL._SL1100_.jpg)

- [Capteur de luminosité](https://www.amazon.fr/Photor%C3%A9sistance-Photoresistor-Capteur-lumi%C3%A8re-Arduino/dp/B00RQX3R6I/ref=sr_1_3?s=electronics&ie=UTF8&qid=1548767379&sr=1-3&keywords=Capteur+de+lumiere+photor%C3%A9sistance)

![Capteur de luminosité](https://images-na.ssl-images-amazon.com/images/I/41Yd6kjhiZL.jpg)

- [Résistances 10Kw](https://images-na.ssl-images-amazon.com/images/I/612J%2BlZiRrL._SL1100_.jpg)  

![Résistances](https://images-na.ssl-images-amazon.com/images/I/612J%2BlZiRrL._SL1100_.jpg)




# **CODE**

- On déclare une variable que l'on nommera "temps"  

``` c++
int temps = 0;
```

- On initialise la vitesse de transmission puis on déclare les pin de notre **buzzer**

``` c++
void setup() {

Serial.begin(9600);
pinMode(8, OUTPUT);
}
``` 
- On récupère l'intensité de la lumière : 

``` c++
int value = analogRead(0);
```
- On ajoute une première condition pour ajouter +1 a notre variable "temps" (en ajoutant un "delay" avant notre condition) 

``` c++
 delay (1000);   
if(value > 5){
    
    temps++;
    
    }
```
```

- On ajoute ensuite la condition qui permettra de faire sonner le buzzer au bout de 30 secondes :

``` c++
 if(temps > 30){ 
  digitalWrite(8,HIGH);
   }

  else {    
   digitalWrite(8,LOW);
   }
``` 
Pour finir, on ajoute une condition afin de mettre fin  au signal d’alarme :

``` c++
if(value ==0){  
   digitalWrite(8, LOW);
    temps=0;
             }
}

``` 

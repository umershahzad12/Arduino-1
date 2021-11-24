Primer error de Arduino :

avrdude: ser_open(): can't open device "/dev/ttyACM0": Permission denied
![](https://raw.githubusercontent.com/Hanzla55/Arduino/main/eror%20de%20arduino.png)

El error se debe a que no puede acceder al puerto.


### Protoboard


![](https://raw.githubusercontent.com/Hanzla55/Arduino/main/Captura%20de%20pantalla%20de%202021-10-13%2010-48-36(1).png)








# Circuitos eléctricos

![](https://github.com/Hanzla55/Arduino/blob/main/circuito%20electrico%20codigo.png?raw=true)

## Error de programación

El programa avrdude lanzó una excepción y detuvo el programa. Esto por un tema de permisos de usuario.

En Linux hay dos tipos de usuario: El usuario y el superusuario.


## Primeros circuitos

### Circuito simple

Este pese a funcionar y dar luz genera dos problemas: 

- Se calienta y es incómodo de tocar

- Puede fundir el LED

### Circuito en serie

Si desconectamos una parte no funciona

### Circuito en paralelo

Da igual si una parte se deconecta

## Apuntes sobre electricidad

Voltaje --> Altura (Diferencia de potencial)

Intensidad o Amperaje --> cantidad de agua o rotuladores

Resistencia --> Resistencia al paso del agua o rotulador

Intensidad = Voltaje ÷ Resistencia ---> Ley de Ohm

Voltaje = Intesidad x Voltaje 

Resistencia = Voltaje ÷ Intensidad

### Por qué necesitamos resistencias con los LEDs?

Tenemos 2 circuitos 

Circuito 1 : 5V,GND 0V

Circuito 2 : 5V, bombilla, GND 0V

El voltaje de los dos circuitos es 5V.

Y la resistencia? Circuito 1, 1 Ohm Circuito 2 440 Ohms

5V ÷ 441 Ohms = 0,01133 A = 11,33 mA

5V ÷ 1 Ohm = 5 A 

5V ÷ 0 Ohm = ∞ A (Cortocircuito) ---> Evitar




## Código mórse

![](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b5/International_Morse_Code.svg/800px-International_Morse_Code.svg.png)

morse 1  hicimos modificaciones en el codigo para cambiar el tiempo de gillo para eso 

![](https://raw.githubusercontent.com/Hanzla55/Arduino/main/Screenshot%202021-10-19%20at%2009-14-46%20Arduino%20Primera%20prueba%20md%20at%20main%20%C2%B7%20Hanzla55%20Arduino.png)



morse 2  Que hace blink.ino


Morse 3 cuatro sentencias

. Escribí mi nombre: 

![](https://raw.githubusercontent.com/Hanzla55/Arduino/main/Screenshot%202021-10-19%20at%2009-20-32%20Hanzla55%20Arduino.png)

### Com Programmar Arduino




![Banner](https://user-images.githubusercontent.com/57842220/228971035-9a5389d7-1ad3-4fd0-8aa8-6a5f60f779c4.png)

### [English](#en)
### [Portuguese](#pt)

## English <a name="en"></a>
This embedded system using Arduino and a linear transducer is a compact and versatile device designed to efficiently measure objects. The system consists of an Arduino microcontroller and a linear transducer connected to a protoboard.

The linear transducer is a device that converts linear displacement into an electrical signal. It consists of a linear potentiometer or an LVDT (Linear Variable Differential Transformer) that generates an output voltage proportional to the linear displacement of the object being measured. The transducer is connected to the Arduino microcontroller through an analog input pin, and the output voltage is read by the microcontroller.

The Arduino microcontroller is the heart of the system and is responsible for processing the input signals from the linear transducer and performing the necessary calculations to determine the measurements of the object. It also controls output modules to display results or perform other actions.

The system can be used in several applications, such as manufacturing processes, robotics and automation systems. It can measure linear distances, displacements and motions of objects, making it a valuable tool for engineers, technicians and hobbyists alike. The embedded Arduino-based system is affordable, easy to use and can be customized to meet specific measurement requirements.

### ⚙️ How to set and run this project?

To set up this project, you will need the following components:

+ Arduino microcontroller (e.g. Arduino Uno)
+ Linear transducer (e.g. LVDT or linear potentiometer)
+ Protoboard
+ Jumper wires

Here are the steps to set up the project:

1. Connect the linear transducer to the protoboard using jumpers. Be sure to connect the transducer output to an analog input pin on the Arduino.

2. Clone this repository on your computer and open the code using the Arduino IDE.

3. Once the Arduino is programmed, load the code onto the microcontroller and test the system. You should be able to measure linear distances, displacements and motions of objects using the linear transducer, and the results are displayed by the IDE itself.

Note that the exact steps and connection setup may vary depending on the specific components and measurements you are using. It is important to consult the datasheets and manuals of each component and carefully follow the connections for wiring and programming the system.


## Português <a name="pt"></a>
Este sistema embarcado foi construido usando Arduino e um transdutor linear, é um dispositivo compacto e versátil projetado para medir objetos de forma eficiente. O sistema consiste em um microcontrolador Arduino e um transdutor linear conectado a uma placa protoboard.

O transdutor linear é um dispositivo que converte o deslocamento linear em um sinal elétrico. Ele consiste em um potenciômetro linear ou um LVDT (Transformador Diferencial Linear Variável) que gera uma tensão de saída proporcional ao deslocamento linear do objeto sendo medido. O transdutor é conectado ao microcontrolador Arduino por meio de um pino de entrada analógica, e a tensão de saída é lida pelo microcontrolador.

O microcontrolador Arduino é o coração do sistema, sendo responsável por processar os sinais de entrada recebidos pelo transdutor e realizar os cálculos necessários para determinar as medições do objeto. Ele também controla os módulos de saída para exibir resultados ou realizar outras ações.

O sistema pode ser utilizado em diversas aplicações, como processos de fabricação, robótica e sistemas de automação. Ele pode medir distâncias lineares, deslocamentos e movimentos de objetos, tornando-se uma ferramenta valiosa para engenheiros, técnicos e entusiastas. O sistema embutido baseado em Arduino é acessível, fácil de usar e pode ser personalizado para atender a requisitos específicos de medição.

### ⚙️ Como montar e rodar este projeto?

Para configurar este projeto, você precisará dos seguintes componentes:

+ Microcontrolador Arduino (por exemplo, Arduino Uno)
+ Transdutor linear (por exemplo, LVDT ou potenciômetro linear)
+ Protoboard
+ Jumpers

Aqui estão os passos para configurar o projeto:

1. Conecte o transdutor linear ao protoboard usando jumpers. Certifique-se de conectar a saída do transdutor a um pino de entrada analógico no Arduino.

2. Clone este repositório em seu computador e abra o código usando o Arduino IDE.

3. Depois que o Arduino estiver programado, carregue o código no microcontrolador e teste o sistema. Você deverá ser capaz de medir distâncias lineares, deslocamentos e movimentos de objetos usando o transdutor linear, e os resultados são exibibidos pela própria IDE.

Observe que os passos exatos e a configuração de conexão podem variar dependendo dos componentes específicos e das medições que você está usando. É importante consultar as fichas técnicas e os manuais de cada componente e seguir cuidadosamente as conexões para fiação e programação do sistema.

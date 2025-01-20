Controle de LEDs e Buzzer com Raspberry Pi Pico
Este projeto utiliza um Raspberry Pi Pico (com RP2040) e a biblioteca Arduino para controlar três LEDs e um buzzer. A comunicação entre o microcontrolador e o usuário é feita via UART (porta serial), permitindo enviar comandos para controlar os LEDs e acionar o buzzer.

Materiais Necessários
Raspberry Pi Pico (ou qualquer outra placa baseada no RP2040)
3 LEDs RGB (ou 3 LEDs individuais: verde, azul e vermelho)
1 Buzzer
Fios para conexão
Esquema de Conexão
LEDs:

LED Verde: Pino GPIO 11
LED Azul: Pino GPIO 12
LED Vermelho: Pino GPIO 13
Buzzer: Pino GPIO 21

Funcionalidade
O código permite ao usuário enviar comandos via comunicação serial (UART) para controlar os LEDs e acionar o buzzer. Os comandos disponíveis são:

LED_GREEN: Acende o LED verde.
LED_BLUE: Acende o LED azul.
LED_RED: Acende o LED vermelho.
LED_WHITE: Acende todos os LEDs (verde, azul e vermelho).
LED_OFF: Desliga todos os LEDs.
BUZZ_ON: Aciona o buzzer por 2 segundos.
Requisitos
Arduino IDE com suporte para RP2040.
Biblioteca RP2040 instalada no Arduino IDE.
Conectar o Raspberry Pi Pico ao computador para programação.
Instruções de Uso
Configuração Inicial:

Conecte os LEDs e o buzzer aos pinos GPIO mencionados no código.
Abra o Arduino IDE e selecione a placa Raspberry Pi Pico.
Compile e faça o upload do código para o Raspberry Pi Pico.
Controle via Serial:

Após carregar o código, abra o Monitor Serial no Arduino IDE.
Envie um dos seguintes comandos para controlar os LEDs e buzzer:
LED_GREEN - Acende o LED verde.
LED_BLUE - Acende o LED azul.
LED_RED - Acende o LED vermelho.
LED_WHITE - Acende todos os LEDs.
LED_OFF - Desliga todos os LEDs.
BUZZ_ON - Aciona o buzzer por 2 segundos.
Modo de Teste:

O código irá esperar por comandos via porta serial e executar a ação correspondente para cada comando.
Se um comando inválido for digitado, a mensagem "Comando não reconhecido!" será exibida.
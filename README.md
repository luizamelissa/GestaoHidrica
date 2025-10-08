# GestaoHidrica

💧 Gestão Hídrica com Arduino

Este projeto implementa um sistema de gerenciamento hídrico automatizado utilizando um Arduino. O sistema é projetado para otimizar o uso da água em um cenário de irrigação, levando em consideração a umidade do solo, os níveis de água em uma caixa d'água e em uma cisterna, e a previsão de chuva.


⚡ Funcionalidades

O sistema possui duas funcionalidades principais:

1.
Irrigação Inteligente: A irrigação é ativada somente quando o solo está seco e não há previsão de chuva. Isso evita o desperdício de água, irrigando apenas quando necessário.

2.
Transferência de Água: A água da cisterna é transferida para a caixa d'água principal quando o nível desta está baixo, garantindo que sempre haja água disponível para consumo e irrigação.

⚙️ Componentes

O circuito é composto pelos seguintes componentes:

• Arduino Uno

• Sensor de umidade do solo

• Sensor de nível de água (x2)

• Sensor de chuva

• LEDs para indicar o estado da irrigação e da transferência de água

• Resistores

🧠 Lógica de Funcionamento

O loop principal do código lê os valores dos sensores e toma decisões com base nas seguintes condições:

•
Transferência: Se o nível da caixa d'água estiver abaixo de um limite mínimo e houver água na cisterna, a transferência é iniciada.

•
Irrigação: Se o nível da caixa d'água for suficiente, o solo estiver seco e não houver previsão de chuva, a irrigação é ativada.

O sistema também envia informações sobre o estado dos sensores e as ações tomadas para o monitor serial, permitindo o acompanhamento em tempo real do seu funcionamento.

🤓 Maquete do Circuito

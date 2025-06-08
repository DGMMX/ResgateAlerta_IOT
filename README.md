#📱 Projeto ResgateAlerta
Arquiteturas Disruptivas: IoT, IoB e IA Generativa

##🎯 Descrição do Projeto
O AlertaClima é uma solução mobile que tem como propósito reduzir os impactos de desastres naturais no Brasil, como enchentes, queimadas, deslizamentos e secas.

A aplicação utiliza inteligência artificial, dados climáticos oficiais, geolocalização e colaboração entre usuários para oferecer respostas rápidas e eficazes em situações de emergência.

Com base em tecnologias de IoT, sensores ambientais e automação, o sistema realiza monitoramento em tempo real e aciona alertas visuais e digitais com base em condições climáticas críticas.

##🧠 Tecnologias Utilizadas
📦 Hardware
ESP32 – Microcontrolador principal

Sensor DHT22 – Leitura de temperatura e umidade

LED – Alerta visual de temperatura

Resistores e Jumpers – Conexões eletrônicas básicas

##💻 Software e Linguagens
C++ / Arduino – Linguagem de programação do firmware

Wokwi – Plataforma de simulação do circuito

Corretor MQTT (test.mosquitto.org) – Comunicação entre dispositivos

PubSubClient – Biblioteca MQTT

DHTesp – Biblioteca para leitura do sensor DHT22

##⚙️ Funcionalidades
Função	Descrição
🔍 Leitura Ambiental com Precisão	Captura de temperatura e umidade através do sensor DHT22
📡 Publicação via MQTT	Envio automático de dados para um corretor MQTT público
🚨 Alerta Visual Inteligente	Acionamento de LED quando a temperatura ultrapassa 30°C
🧩 Código Modular	Estrutura de código simples e fácil de adaptar para aplicações reais
🌐 Simulação Online	Testes e simulações via Wokwi, sem necessidade de hardware físico
📱 Alertas Inteligentes via App	Notificações baseadas na localização e tipo de evento climático

##🔗 Acesse o Projeto
👉 Simulação Wokwi:
[https://wokwi.com/projects/432936098760846337](https://wokwi.com/projects/433210825129542657)

###🚀 Próximos Passos
Desenvolvimento do MVP funcional, com testes reais de APIs e notificações push.

Integração com banco de dados e criação de rotas seguras, com base em mapas e histórico de eventos climáticos.

Parcerias com a Defesa Civil e órgãos públicos locais para validação do sistema em campo.

Campanhas de engajamento comunitário, incentivando o uso colaborativo da aplicação.

Versões offline e inclusivas, garantindo acessibilidade e alcance em áreas remotas ou com baixa conectividade.

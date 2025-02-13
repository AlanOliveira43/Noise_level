# Generated CMake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# == Configuração do SDK Raspberry Pi Pico ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()

set(sdkVersion 2.1.0)
set(toolchainVersion 13_3_Rel1)
set(picotoolVersion 2.1.0)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)

if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()

set(PICO_BOARD pico_w CACHE STRING "Board type")

# Importa o SDK do Raspberry Pi Pico
include(pico_sdk_import.cmake)

# Nome do projeto
project(Noise_level C CXX ASM)

# Inicializa o SDK do Pico
pico_sdk_init()

# Adiciona arquivos do projeto
add_executable(Noise_level 
    src/main.c
    src/http_client.c
    src/calibracao.c
    src/leds.c
    src/botoes.c
    src/temporizador.c
    src/lcd.c
    src/wifi.c
)

# Nome e versão do programa
pico_set_program_name(Noise_level "Noise_level")
pico_set_program_version(Noise_level "0.1")

# Habilita saída via USB/UART para debugging
pico_enable_stdio_uart(Noise_level 1)
pico_enable_stdio_usb(Noise_level 1)

# Diretórios dos cabeçalhos
target_include_directories(Noise_level PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/inc
)

# Adiciona bibliotecas essenciais
target_link_libraries(Noise_level
        pico_stdlib
        pico_cyw43_arch_lwip_sys  # Wi-Fi (para HTTP)
        pico_cyw43_arch_lwip_mqtt # Alternativa para MQTT
        hardware_spi
        hardware_i2c
        hardware_dma
        hardware_pio
        hardware_interp
        hardware_timer
        hardware_watchdog
        hardware_clocks
)

# Gera saídas extras (hex, bin, uf2)
pico_add_extra_outputs(Noise_level)

cmake_minimum_required (VERSION 3.15)

project(MCU2Depricated VERSION 0.0.1 LANGUAGES C CXX ASM)

find_package(Qul)

qul_add_target(MCU2Depricated)
qul_target_qml_sources(MCU2Depricated MCU2Depricated.qml)
app_target_setup_os(MCU2Depricated)
app_target_default_entrypoint(MCU2Depricated MCU2Depricated)


target_sources(MCU2Depricated
    PRIVATE
    main.cpp
    test1.cpp
    test1.h
)

qul_target_generate_interfaces(MCU2Depricated test1.h)

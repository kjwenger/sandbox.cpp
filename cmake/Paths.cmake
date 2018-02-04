set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
if (DEFINED CMAKE_TOOLCHAIN_FILE)
    get_filename_component(CMAKE_TOOLCHAIN ${CMAKE_TOOLCHAIN_FILE} NAME_WE)
    if (NOT DEFINED CMAKE_PREFIX_PATH)
        set(CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/staging.${CMAKE_TOOLCHAIN})
    endif (NOT DEFINED CMAKE_PREFIX_PATH)
else(DEFINED CMAKE_TOOLCHAIN_FILE)
    if (NOT DEFINED CMAKE_PREFIX_PATH)
        set(CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/staging)
    endif (NOT DEFINED CMAKE_PREFIX_PATH)
endif(DEFINED CMAKE_TOOLCHAIN_FILE)
#if (NOT DEFINED CMAKE_INSTALL_PREFIX)
    set(CMAKE_INSTALL_PREFIX ${CMAKE_PREFIX_PATH})
#endif (NOT DEFINED CMAKE_INSTALL_PREFIX)

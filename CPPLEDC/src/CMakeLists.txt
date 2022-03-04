set(SOURCES main.cpp
            CPPLEDC/cppledc.cpp
            CPPLEDC/cppledctimer.cpp)
            
idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS .  ../include/CPPLEDC)
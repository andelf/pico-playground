add_executable(epd
  epd.c
  )

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(epd pico_stdlib hardware_spi)

# create map/bin/hex file etc.
pico_add_extra_outputs(epd)

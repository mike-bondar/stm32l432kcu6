openocd -f ./openocd/stlink.cfg -f ./openocd/stm32l4x.cfg -c "program ../build/basic.elf verify reset exit"

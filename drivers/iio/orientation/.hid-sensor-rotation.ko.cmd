cmd_drivers/iio/orientation/hid-sensor-rotation.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/orientation/hid-sensor-rotation.ko drivers/iio/orientation/hid-sensor-rotation.o drivers/iio/orientation/hid-sensor-rotation.mod.o ;  true
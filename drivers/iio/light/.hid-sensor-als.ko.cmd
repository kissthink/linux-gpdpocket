cmd_drivers/iio/light/hid-sensor-als.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/light/hid-sensor-als.ko drivers/iio/light/hid-sensor-als.o drivers/iio/light/hid-sensor-als.mod.o ;  true
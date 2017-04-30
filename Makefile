# debug flags
CC:=-O0 -g3
# release flags
# CC:=-O3

CC:=gcc -std=c11 -mpopcnt -msse4.2 $(CC)
LIBFLAGS:=-shared -fPIC -lc -o libvtrb.so

libvtrb.so : metric.c lookup.c history_buffer.c error_buffer.c bit.c convolutional.c decode.c encode.c
	$(CC) $(LIBFLAGS) $^

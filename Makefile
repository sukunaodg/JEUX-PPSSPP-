TARGET = SUKUNAODG_PSP
BUILD_DIR = build
CC = psp-gcc

CFLAGS = -O2 -G0 -Wall -Iinclude

SRC = src/main.c src/combat.c src/mission.c

all:
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRC) -o $(BUILD_DIR)/$(TARGET).elf

clean:
	rm -rf $(BUILD_DIR)

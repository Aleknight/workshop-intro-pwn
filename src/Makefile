TARGETS=addition login repeat repeat-nx play

.PHONY: clean

all: $(TARGETS)

addition: addition.c
	$(CC) -o $@ $^

login: login.c
	$(CC) -o $@ $^

repeat: repeat.c
	$(CC) -o $@ -fno-stack-protector -no-pie -z execstack $^

repeat-nx: repeat.c
	$(CC) -o $@ -fno-stack-protector -no-pie -static $^

play: play.c
	$(CC) -g -o $@ $^

clean:
	rm -rf $(TARGETS)

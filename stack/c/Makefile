#
# Build Stack
#

CC=gcc
src=src/*.c
bin=stack
build_stack: $(src)
	$(CC) $(src) -o $(bin)
test: $(bin)
	echo 10 | ./$(bin)
clean:
	rm -f $(bin)

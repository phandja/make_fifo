# make_fifo
A simple example of a regular pipe (also called a FIFO for its behavior)
It can be used to connect two unrelated processes and exists independently of the processes;
meaning it can exist even if no one is using it. A FIFO is created using the mkfifo() library function.

# Use gcc to compile:
    - gcc -o writer writer.c
    - gcc -o reader reader.c

# Then execute writer before reader:
    - ./writer
    - ./reader

It should work ! \0/

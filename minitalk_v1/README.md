*This project has been created as part of the 42 curriculum by pking*
# minitalk

## Description:
minitalk is a program where we create a client and server program that communicate using Unix signals (SIGUSR1 and SIGUSR2). 

This project is about translating strings to binary (in the client process) and sending signals to another process (via its PID) to reconstruct the string and print it on the terminal (on the server process terminal).
## Instructions:
- Compile this using `make`
- Use `make re` to remake
- Use `make clean` to partial clean
- Use `make fclean` to full clean

First start the server with `./server`. It will print its PID, and enter a loop waiting for signals. 

Then, run the client program with `./client <PID> <MESSAGE>`. Use the server's PID. The message (argv[2]) will appear on the server!
## Resources:

### YouTube:
- https://www.youtube.com/watch?v=83M5-NPDeWs&list=PL9LZM-hWdUvsqXxqghK5H1fF07nCV9MyF
- https://www.youtube.com/watch?v=XqhY9WHahJQ

### LLMs Used:
- Claude


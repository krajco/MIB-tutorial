# MIB-tutorial


### Copy MIB to snmp mibs dir
```
sudo cp IOT-MIB.txt /usr/local/share/snmp/mibs/
```

### Export MIB
```
export MIBS=+IOT-MIB
```

### Translate MIB
```
snmptranslate -Tp -IR agentxIOT
```

### Generate snmp sub agent with makefile
```
mib2c -c mib2c.scalar.conf agentxIOT
mib2c -c mfd-makefile.m2m agentxIOT
mib2c -c subagent.m2c agentxIOT
mib2c -c mib2c.mfd.conf iotUserTable
```
#### Init scalars objects agent code
##### Create global variables in afentxIOT.c
```
extern char ROStringVar[80];
extern int  ROIntegerVar;
```
##### Create access to global variables
```
char ROStringVar[80] = "";
int  ROIntegerVar = 0;
```

# MIB-tutorial


### Copy MIB to snmp mibs dir
```
cp IOT-MIB /usr/share/local/snmp/mibs
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
```
#### Init scalars objects agent code
##### Create global variables in afentxIOT.c
```
extern char ROStringVar[80];
extern char RWStringVar[80];
extern int ROIntegerVar;
extern int RWIntegerVar;
```
##### Create access to global variables
```
char ROStringVar[80] = "";
char RWStringVar[80] = "";
int ROIntegerVar = 0;
int RWIntegerVar = 0;
```

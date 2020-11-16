# MIB-tutorial

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

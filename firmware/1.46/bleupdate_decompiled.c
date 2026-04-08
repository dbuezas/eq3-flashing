/* EQ3 CC-RT-BLE v1.46 bleupdate.bin decompilation
 * Base: 0x002007F0, Size: 19116, Instructions: 8888
 * Functions: 47, Named: 1, Strings: 135
 */

/* === ROM CALLS (15) === */
extern void ROM_0001B698(); // called 4x
extern void ROM_0001B7DC(); // called 2x
extern void ROM_0001B8E6(); // called 2x
extern void ROM_00026DFA(); // called 1x
extern void ROM_00026F6E(); // called 1x
extern void ROM_000447F2(); // called 1x
extern void ROM_00044832(); // called 1x
extern void ROM_00044B1A(); // called 1x
extern void ROM_00129290(); // called 1x
extern void ROM_002E9ADC(); // called 1x
extern void ROM_002E9BF4(); // called 1x
extern void ROM_002EAB24(); // called 1x
extern void ROM_006EB828(); // called 1x
extern void ROM_00AEDD14(); // called 1x
extern void ROM_00AF5E0C(); // called 1x

/* === STRINGS === */
// 0x0020091D: "n`(F"
// 0x00200D3F: "@$*#"
// 0x00200E08: "`pG~H"
// 0x00201013: "Enc info: LTK"
// 0x00201023: "master id"
// 0x0020102F: "pairing method, Both Input"
// 0x00201067: "&IH`pG%H@h"
// 0x00201247: "!H"I"
// 0x00202018: " TU "
// 0x0020211F: "?H<I"
// 0x0020214F: "/H@h"
// 0x00202165: "HP.H"
// 0x00202295: ""  t"
// 0x00202BD9: ":0eH"
// 0x00203DA3: "x@pG"
// 0x002041DE: "$*CC-RT-BLE"
// 0x00204362: "CC-RT-BLE"
// 0x00204376: "1.00"
// 0x00204446: "bad length:%d handle:%04x"
// 0x00204460: "handle:%02x val:%04x"
// 0x00204475: "write len:%d handle:%02x"
// 0x0020448E: "don't notify handle:%02x"
// 0x002044A7: "not connected handle:%02x"
// 0x002044C1: "wait confirmation handle:%02x"
// 0x002044DF: "indicate len:%d handle=%02x"
// 0x002044FB: "notify len:%d handle:%02x"
// 0x00204515: "An Interrupt occured! Value: %02x"
// 0x00204537: "ADV stop!!!!"
// 0x00204544: "trv_ble_connection_down(void)"
// 0x00204562: "connection DOWN handler started!"
// 0x00204583: "connection_down:handle:%d"
// 0x0020459D: "ADV start: %08x%04x"
// 0x002045B1: "PK transmission!"
// 0x002045C2: "Content %x"
// 0x002045CD: "Attention! FC or FD in checksum byte 1 detected!"
// 0x002045FE: "Attention! FC or FD in checksum byte 2 detected!"
// 0x0020462F: "Transmitted Payload %x"
// 0x00204646: "CRC-Register %x"
// 0x00204659: "create()"
// 0x00204665: " puart_initialization()"
// 0x0020467D: "PassKey read from NVRAM: %x, %x, %x"
// 0x002046A1: "First run read from NVRAM: %x rb: %x"
// 0x002046C6: "Generated Random Number: %x"
// 0x002046E2: "Generated Passkey: %x %x %x"
// 0x002046FE: "Generated Pin: %u"
// 0x00204710: "Pack ADV Field perform"
// 0x00204727: "Pairing Active set to %x in Advertising!"
// 0x00204750: "Transmittetd SN: %x %x %x"
// 0x0020476A: "Statusinfo N/ACK with Party detected"
// 0x0020478F: "Statusinfo N/ACK detected"
// 0x002047A9: "N/Ack without Statusinfo detected"
// 0x002047CB: "Ack with CFG Week Program Day detected"
// 0x002047F2: "Week program response detected"
// 0x00204811: "Transmission of Internals detected"
// 0x00204834: "Transmission of PAIRING detected"
// 0x00204855: "0xA0+0x11 sent to peer"
// 0x0020486C: "0xA1+0x33 sent to peer (NACK)"
// 0x0020488A: "0xA1+0x44 sent to peer BL-Finished!"
// 0x002048AE: "Status Info Response"
// 0x002048C3: "TimeInfoRequest detected!"
// 0x002048DD: "FD+CC received from BCM2 , scanmode may start"
// 0x0020490B: "Activate Testmode"
// 0x0020491D: "Sent 0xFD+0xFF"
// 0x0020492C: "written SN to BCM2: %x"
// 0x00204943: "Pairing active set to one in Testrunnermode! HIGH Advertisements"
// 0x00204984: "PK request"
// 0x0020498F: "Unknown MessageType"
// 0x002049A3: "PartyFlag Active"
// 0x002049B4: "Data Read Flag Active"
// 0x002049CA: "pos = %x"
// 0x002049D3: "shift_reg = %x"
// 0x002049E2: "CRC-Check successful"
// 0x002049F7: "Notification sent to smartphone"
// 0x00204A17: "SN1: %x %x %x"
// 0x00204A25: "SN2: %x %x %x"
// 0x00204A33: "SN3: %x %x %x %x"
// 0x00204A44: "g_firstRun set to 0"
// 0x00204A58: "Entering deep sleep."
// 0x00204A6D: "First Run Set to 1 in NVram wb: %x"
// 0x00204A90: "ADV-Mode set to HIGH_UNDIRECTED_DISCOVERABLE"
// 0x00204ABD: "ADV-Mode set to LOW_UNDIRECTED_DISCOVERABLE"
// 0x00204AE9: "CRC-Check FAILED"
// 0x00204AFA: "ble_control[0]= %x"
// 0x00204B0D: "ble_control[1]= %x"
// 0x00204B20: "ble_control[2]= %x"
// 0x00204B33: "ble_control[3]= %x"
// 0x00204B46: "ble_control[4]= %x"
// 0x00204B59: "ble_control[5]= %x"
// 0x00204B6C: "ble_control[6]= %x"
// 0x00204B7F: "ble_control[7]= %x"
// 0x00204B92: "ble_control[8]= %x"
// 0x00204BA5: "ble_control[9]= %x"
// 0x00204BB8: "ble_control[10]= %x"
// 0x00204BCC: "ble_control[11]= %x"
// 0x00204BE0: "ble_control[12]= %x"
// 0x00204BF4: "ble_control[13]= %x"
// 0x00204C08: "ble_control[14]= %x"
// 0x00204C1C: "ble_control[15]= %x"
// 0x00204C30: "ble_control[16]= %x"
// 0x00204C44: "ble_control[17]= %x"
// 0x00204C58: "ble_control[18]= %x"
// 0x00204C83: "NVRAM write:%04x"
// 0x00204C94: "encryption CHANGED handler started!"
// 0x00204CB8: "encryption changed %08x%04x"
// 0x00204CD4: "trv_ble_connection_up(void)"
// 0x00204D26: "scr[1].len = %x"
// 0x00204D36: "scr[1].val = %x"
// 0x00204D46: "scr[1].data[0] (pairing_active) = %x"
// 0x00204D6B: "SN in ADV part 1: %x %x %x %x %x"
// 0x00204D8C: "SN in ADV part 2: %x %x %x %x %x"
// 0x00204DAD: "smp_bond_result handler started!"
// 0x00204DCE: "smp_bond_result %02x"
// 0x00204DE3: "evt->data[%x] = %x"
// 0x00204DF6: "Test successful, Addresses in ADV and saved are equal!"
// 0x00204E2D: "Sent 0xFD+0xFE"
// 0x00204E3C: "GPIO: TRUE"
// 0x00204E47: "GPIO: FALSE"
// 0x00204E53: "attrPtr[1] = %x"
// 0x00204E63: "((attrPtr[1]&0xc0) >> 6) = %x"
// 0x00204E81: "Message Type undefined"
// 0x00204E98: "Dummy Notification sent to smartphone to start OTAU"
// 0x00204ECF: "INDICATION handler started!"
// 0x00204EEB: "on_write_generic_access_reconnection_address handler started!"
// 0x00204F29: "Notification Handler started"
// 0x00204F47: "ws_verify rcvd:%x calculated:%x"
// 0x00204F68: "send_status failed"
// 0x00204F7C: "send_status %d"
// 0x00204F8C: "Command:%d State:%d"
// 0x00204FA1: "Bad Download len:%d"
// 0x00204FB6: "state:%d total_len:%d"
// 0x00204FCD: "Bad Verify len:%d"
// 0x00204FE0: "Too much data offsets:%d + %d total:%d len:%d"
// 0x0020500F: "ws_upgrade_init: DS:%04x SS:%04x"
// 0x0020510E: "Active: 0x%08X, Upgrade: 0x%08X, UG length: 0x%08X"
// 0x00205141: "Could not write new SS!"

/* === FUNCTIONS === */

/* ---- sub_00200982 @ 0x00200982 ---- */
void sub_00200982() {
    00200982:  push     {r4, r5, r6, r7, lr}           
    00200984:  asrs     r3, r7, #3                     
    00200986:  lsls     r5, r7, #2                     
    00200988:  ldrd     r4, r4, [r0, #0x2ec]!          
    0020098C:  uxtb     r6, r6                         
    0020098E:  lsls     r0, r7, #3                     
    00200990:  movs     r3, #0xf0                      
    00200992:  lsrs     r4, r7, #0x13                  
    00200994:  lsrs     r6, r6, #0xb                   
    00200996:  stm      r0!, {r0, r1, r3, r4, r5, r7}  
    00200998:  asrs     r4, r3, #4                     
    0020099A:  ldr      r6, [r6, r7]                   
    0020099C:  lsrs     r3, r7, #0x13                  
    0020099E:  ble      #0x20098e                      
    002009A0:  lsls     r2, r7, #2                     
    002009A2:  lsls     r0, r0, #0x10                  
    002009A4:  lsrs     r1, r2, #3                     
    002009A6:  lsls     r1, r5, #1                     
    002009A8:  lsls     r7, r0, #0x18                  
    002009AA:  cmp      r0, #0xd0                      
    002009AC:  subs     r6, r6, #3                     
    002009AE:  lsls     r2, r7, #0xa                   
    002009B0:  lsls     r0, r5, #4                     
    002009B2:  lsls     r1, r2, #3                     
    002009B4:  bls      #0x200998                      
    002009B6:  asrs     r5, r7, #3                     
    002009B8:  cmp      r0, #0xbd                      
    002009BA:  subs     r6, r6, r3                     
    002009BC:  lsls     r2, r7, #2                     
    002009BE:  pop      {pc}                           
    002009C0:  asrs     r0, r5, #3                     
    002009C2:  lsls     r0, r0, #1                     
    002009C4:  cmp      r0, #0xf0                      
    002009C6:  asrs     r6, r7, #2                     
    002009C8:  ldrb     r5, [r6, r6]                   
    002009CA:  lsls     r1, r1, #0x1d                  
    002009CC:  lsrs     r0, r4, #0x20                  
    002009CE:  lsls     r6, r6, #1                     
    002009D0:  b        #0x2005b4                      
    002009D2:  asrs     r4, r7, #3                     
    002009D4:  strb     r5, [r7, #2]                   
    002009D6:  ldrh     r5, [r6, r2]                   
    002009D8:  lsls     r2, r1, #5                     
    002009DA:  str      r4, [sp, #0xa4]                
    002009DC:  ldrb     r0, [r5, #0x19]                
    002009DE:  lsls     r1, r2, #7                     
    002009E0:  stc2     p8, c5, [r8], #-0x344          
    002009E4:  beq      #0x200a78                      
    002009E6:  ldr      r0, [r7, r3]                   
    002009E8:  ldr      r7, [r3, r0]                   
    002009EA:  asrs     r2, r1, #5                     
    002009EC:  beq      #0x200ab0                      
    002009EE:  ldr      r0, [r7, r3]                   
    002009F0:  ldrsb    r7, [r7, r4]                   
    002009F2:  asrs     r2, r1, #0xd                   
    002009F4:  ldrsb    r0, [r4, r5]                   
    002009F6:  asrs     r2, r1, #0x15                  
    002009F8:  ldr      r0, [r5, #0x74]                
    002009FA:  asrs     r3, r6, #7                     
    002009FC:  asrs     r5, r0, #0x14                  
    002009FE:  asrs     r0, r4, #0x15                  
    00200A00:  strb     r0, [r5, r5]                   
    00200A02:  adds     r6, #0x4e                      
    00200A04:  cmp      r0, sp                         
    00200A06:  lsls     r2, r5, #0x1b                  
    00200A08:  asrs     r5, r0, #0x14                  
    00200A0A:  strh     r0, [r4, r5]                   
    00200A0C:  asrs     r2, r1, #9                     
    00200A0E:  stm      r0!, {r3, r5, r6}              
    00200A10:  str      r0, [r7, #0x4c]                
    00200A12:  strh     r4, [r5, r0]                   
    00200A14:  asrs     r2, r1, #9                     
    00200A16:  stm      r0!, {r3, r5, r6}              
    00200A18:  bhi      #0x200a0c                      
    00200A1A:  movs     r5, #0x2c                      
    00200A1C:  ldr      r7, [pc, #0x1f0]                 // = 0x80F3C060
    00200A1E:  stm      r0!, {r2, r4, r5, r6, r7}      
    00200A20:  asrs     r4, r0, #0x1c                  
    00200A22:  cmp      r6, #0x2d                      
    00200A24:  ldr      r7, [pc, #0x344]                 // = 0x130F2CF0
    00200A26:  lsls     r2, r1, #1                     
    00200A28:  ldm      r0!, {r1, r2, r4, r5, r6, r7}  
    00200A2A:  asrs     r0, r0, #9                     
    00200A2C:  rsbs     r0, r5, #0                     
    00200A2E:  ldr      r5, [pc, #0x180]                 // = 0x68002011
    00200A30:  asrs     r2, r1, #9                     
    00200A32:  rsbs     r0, r5, #0                     
    00200A34:  ldr      r5, [pc, #0x184]                 // = 0x74002011
    00200A36:  asrs     r2, r1, #9                     
    00200A38:  strh     r0, [r5, #0x12]                
    00200A3A:  ldr      r4, [pc, #0x180]                 // = 0x74002011
    00200A3C:  asrs     r2, r1, #9                     
    00200A3E:  strh     r0, [r5, #0x12]                
    00200A40:  ldr      r4, [pc, #0x184]                 // = 0x80002011
    00200A42:  asrs     r2, r1, #9                     
    00200A44:  lsls     r0, r5, #9                     
    00200A46:  ldr      r3, [pc, #0x180]                 // = 0x80002011
    00200A48:  asrs     r2, r1, #9                     
    00200A4A:  lsls     r0, r5, #9                     
    00200A4C:  ldr      r3, [pc, #0x184]                 // = 0x90002011
    00200A4E:  asrs     r2, r1, #9                     
    00200A50:  stm      r0!, {r3, r5, r6}              
    00200A52:  adds     r0, #0xf8                      
    00200A54:  ldr      r2, [pc, #0x8c]                  // = 0x0940C8F6
    00200A56:  asrs     r2, r1, #9                     
    00200A58:  stm      r2!, {r3, r5, r6}              
    00200A5A:  ldr      r1, [pc, #0x180]                 // = 0x18002011
    00200A5C:  asrs     r2, r1, #9                     
    00200A5E:  stm      r0!, {r3, r5, r6}              
    00200A60:  cmp      r4, #0xf8                      
    00200A62:  stm      r0!, {r0, r1, r5}              
    00200A64:  str      r0, [sp, #0x3e0]               
    00200A66:  bx       r2                             
    00200A68:  lsrs     r1, r1, #5                     
    00200A6A:  b        #0x200d3e                      
    00200A6C:  bx       ip                             
    00200A6E:  lsrs     r1, r1, #5                     
    00200A70:  stm      r4!, {r3, r5, r6}              
    00200A72:  ldrb     r0, [r7, #0x13]                
    00200A74:  bx       r2                             
    00200A76:  strb     r2, [r6, r7]                   
    00200A78:  stm      r4!, {r0, r4, r6}              
    00200A7A:  adds     r0, r7, r3                     
    00200A7C:  ldr      r0, [pc, #0x48]                  // = 0xC4680949
    00200A7E:  cmp      r7, #0xf6                      
    00200A80:  cmp      r3, #1                         
    00200A82:  cmn      r0, r4                         
    00200A84:  lsls     r1, r1, #1                     
    00200A86:  ldm      r0!, {r1, r2, r4, r5, r6, r7}  
    00200A88:  lsrs     r0, r0, #5                     
    00200A8A:  adcs     r0, r5                         
    00200A8C:  adcs     r0, r4                         
    00200A8E:  lsrs     r1, r1, #5                     
    00200A90:  adcs     r0, r5                         
    00200A92:  eors     r1, r4                         
    00200A94:  lsrs     r1, r1, #5                     
    00200A96:  strh     r0, [r5, #0xa]                 
    00200A98:  eors     r0, r4                         
    00200A9A:  lsrs     r1, r1, #5                     
    00200A9C:  strh     r0, [r5, #0xa]                 
    00200A9E:  subs     r7, #0x61                      
    00200AA0:  lsrs     r1, r1, #5                     
    00200AA2:  lsls     r0, r5, #5                     
    00200AA4:  lsls     r0, r4, #9                     
    00200AA6:  subs     r6, #0x61                      
    00200AA8:  lsrs     r1, r1, #5                     
    00200AAA:  stm      r0!, {r3, r5, r6}              
    00200AAC:  adds     r0, #0xf8                      
    00200AAE:  subs     r5, #0x13                      
    00200AB0:  lsrs     r1, r1, #5                     
    00200AB2:  stm      r1!, {r3, r5, r6}              
    00200AB4:  subs     r5, #0x60                      
    00200AB6:  lsrs     r1, r1, #5                     
    00200AB8:  stm      r0!, {r3, r5, r6}              
    00200ABA:  cmp      r4, #0xf8                      
    00200ABC:  stm      r0!, {r0, r1, r4}              
    00200ABE:  str      r0, [sp, #0x3e0]               
    00200AC0:  subs     r3, #0x32                      
    00200AC2:  lsrs     r1, r1, #5                     
    00200AC4:  b        #0x200d98                      
    00200AC6:  subs     r2, #0x60                      
    00200AC8:  lsrs     r1, r1, #5                     
    00200ACA:  stm      r4!, {r3, r5, r6}              
    00200ACC:  ldrb     r0, [r7, #0x13]                
    00200ACE:  ldr      r1, [pc, #0x44]                  // = 0x09492E1E
    00200AD0:  strb     r2, [r6, r7]                   
    00200AD2:  stm      r4!, {r0, r4, r6}              
    00200AD4:  adds     r0, r7, r3                     
    00200AD6:  ldr      r0, [pc, #0x48]                  // = 0x14F8C468
    00200AD8:  adds     r3, #0xf6                      
    00200ADA:  movs     r1, r0                         
    00200ADC:  cmp      r4, #0xe0                      
    00200ADE:  lsls     r0, r4, #7                     
    00200AE0:  adds     r5, #0x61                      
    00200AE2:  adr      r0, #0x124                     
    00200AE4:  ldm      r0!, {r1, r2, r4, r5, r6, r7}  
    00200AE6:  lsrs     r0, r0, #5                     
    00200AE8:  stm      r0!, {r3, r5, r6}              
    00200AEC:  adds     r3, #0x1d                      
    00200AEE:  lsrs     r1, r1, #5                     
    00200AF0:  stm      r0!, {r3, r5, r6}              
    00200AF2:  ldrd     r3, r2, [r8], #0x70            
    00200AF6:  lsrs     r1, r1, #5                     
    00200AF8:  stm      r0!, {r3, r5, r6}              
    00200AFA:  b        #0x200cee                      
    00200AFC:  adds     r1, #0x1f                      
    00200AFE:  lsrs     r1, r1, #5                     
    00200B00:  stm      r0!, {r3, r5, r6}              
    00200B02:  adds     r0, #0xf8                      
    00200B04:  adds     r0, #0x1c                      
    00200B06:  lsrs     r1, r1, #5                     
    00200B08:  stm      r0!, {r3, r5, r6}              
    00200B0A:  cmp      r4, #0xf8                      
    00200B0C:  cmp      r7, #0x1c                      
    00200B0E:  lsrs     r1, r1, #5                     
    00200B10:  stm      r0!, {r3, r5, r6}              
    00200B12:  bgt      #0x200b06                      
    00200B14:  cmp      r6, #0x1e                      
    00200B16:  lsrs     r1, r1, #5                     
    00200B18:  stm      r0!, {r3, r5, r6}              
    00200B1A:  b        #0x20050e                      
    00200B1C:  cmp      r5, #0x1e                      
    00200B1E:  lsls     r0, r1, #1                     
    00200B20:  stm      r4!, {r3, r5, r6}              
    00200B22:  asrs     r0, r7, #0x13                  
    00200B24:  cmp      r4, #2                         
    00200B26:  lsls     r0, r1, #1                     
    00200B28:  b        #0x200bfc                      
    00200B2A:  cmp      r3, #0x66                      
    00200B2C:  lsls     r0, r1, #1                     
    00200B2E:  stm      r4!, {r3, r5, r6}              
    00200B32:  ldr      r7, [pc, #0xc]                   // = 0x2C002031
    00200B34:  lsls     r0, r6, #7                     
    00200B36:  strb     r0, [r0]                       
    00200B38:  lsls     r5, r7, #2                     
    00200B3A:  strb     r0, [r4]                       
    00200B3C:  lsls     r5, r7, #2                     
    00200B3E:  ands     r0, r0                         
    00200B40:  movs     r0, #0x31                      
    00200B42:  cmp      r4, #0                         
    00200B44:  movs     r0, #0x22                      
    00200B46:  movs     r0, r0                         
    00200B48:  adds     r1, #0xf0                      
    00200B4A:  adds     r0, #0                         
    00200B4C:  movs     r0, #0x11                      
    00200B4E:  str      r0, [r0]                       
    00200B50:  movs     r0, #0x11                      
    00200B52:  subs     r0, #0                         
    00200B54:  adds     r1, #0x8a                      
    00200B56:  ldr      r4, [sp]                       
    00200B58:  movs     r0, #0x11                      
    00200B5A:  lsrs     r0, r0, #0x20                  
    00200B5C:  movs     r0, #0x11                      
    00200B5E:  str      r0, [r0, r0]                   
    00200B60:  movs     r0, #0x11                      
    00200B62:  lsrs     r0, r0, #0x10                  
    00200B64:  movs     r0, #0x11                      
    00200B66:  asrs     r0, r0, #0x20                  
    00200B68:  movs     r0, #0x11                      
    00200B6A:  asrs     r0, r0, #0x10                  
    00200B6C:  movs     r0, #0x11                      
    00200B6E:  adds     r0, r0, r0                     
    00200B70:  movs     r0, #0x11                      
    00200B72:  adds     r0, r0, #0                     
    00200B74:  movs     r0, #0x11                      
    00200B76:  movs     r0, #0                         
    00200B78:  movs     r0, #0x11                      
    00200B7A:  movs     r4, #0                         
    00200B7C:  movs     r0, #0x11                      
    00200B7E:  cmp      r0, #0                         
    00200B80:  movs     r0, #0x11                      
    00200B82:  cmp      r4, #0                         
    00200B84:  movs     r0, #0x11                      
    00200B86:  adds     r4, #0                         
    00200B88:  movs     r0, #0x11                      
    00200B8A:  subs     r0, #0                         
    00200B8C:  movs     r0, #0x11                      
    00200B8E:  subs     r4, #0                         
    00200B90:  movs     r0, #0x11                      
    00200B92:  ands     r0, r0                         
    00200B94:  movs     r0, #0x11                      
    00200B96:  add      r0, r0                         
    00200B98:  movs     r0, #0x11                      
    00200B9A:  ldr      r0, [pc, #0]                     // = 0x4C002011
    00200B9C:  movs     r0, #0x11                      
    00200B9E:  ldr      r4, [pc, #0]                     // = 0x54002011
    00200BA0:  movs     r0, #0x11                      
    00200BA2:  strb     r0, [r0, r0]                   
    00200BA4:  movs     r0, #0x11                      
    00200BA6:  ldr      r0, [r0, r0]                   
    00200BA8:  movs     r0, #0x11                      
    00200BAA:  ldrb     r0, [r0, r0]                   
    00200BAC:  movs     r0, #0x11                      
    00200BAE:  str      r0, [r0, #0x40]                
    00200BB0:  movs     r0, #0x11                      
    00200BB2:  ldr      r0, [r0]                       
    00200BB4:  movs     r0, #0x11                      
    00200BB6:  ldr      r0, [r0, #0x40]                
    00200BB8:  movs     r0, #0x11                      
    00200BBA:  strb     r0, [r0]                       
    00200BBC:  movs     r0, #0x11                      
    00200BBE:  strb     r0, [r0, #0x10]                
    00200BC0:  movs     r0, #0x11                      
    00200BC2:  ldrb     r0, [r0]                       
    00200BC4:  movs     r0, #0x11                      
    00200BC6:  ldrb     r0, [r0, #0x10]                
    00200BC8:  movs     r0, #0x11                      
    00200BCA:  strh     r0, [r0]                       
    00200BCC:  movs     r0, #0x11                      
    00200BCE:  strh     r0, [r0, #0x20]                
    00200BD0:  movs     r0, #0x11                      
    00200BD2:  ldrh     r0, [r0]                       
    00200BD4:  movs     r0, #0x11                      
    00200BD6:  str      r0, [sp]                       
    00200BD8:  movs     r0, #0x11                      
    00200BDA:  str      r4, [sp]                       
    00200BDC:  movs     r0, #0x11                      
    00200BDE:  adds     r0, r0, r0                     
    00200BE0:  movs     r5, #0xb5                      
    00200BE2:  rsbs     r3, r1, #0                     
    00200BE4:  stm      r3!, {r1, r3, r4}              
    00200BE6:  lsls     r0, r7, #3                     
    00200BE8:  lsls     r0, r2, #3                     
    00200BEA:  asrs     r3, r3, #0xa                   
    00200BEC:  movs     r3, #0x1f                      
    00200BEE:  ldrb     r4, [r6, #3]                   
    00200BF0:  lsls     r3, r0, #0xd                   
    00200BF2:  strb     r5, [r6, #3]                   
    00200BF4:  movs     r3, #0x43                      
    00200BF6:  lsrs     r0, r6                         
    00200BF8:  muls     r3, r0, r3                     
    00200BFA:  strh     r0, [r6, #6]                   
    00200BFC:  lsls     r3, r2, #0xd                   
    00200BFE:  lsls     r1, r6, #3                     
    00200C00:  lsls     r3, r0, #1                     
    00200C02:  ldrh     r3, [r2, #4]                   
    00200C04:  lsls     r2, r0, #9                     
    00200C06:  mvns     r0, r3                         
    00200C08:  strh     r4, [r6, #6]                   
    00200C0A:  lsls     r0, r4, #5                     
    00200C0C:  movs     r3, #0xe0                      
    00200C0E:  strh     r4, [r6, #6]                   
    00200C10:  stm      r0!, {r5, r6}                  
    00200C12:  strh     r3, [r6, #6]                   
    00200C14:  stm      r1!, {r0, r5}                  
    00200C16:  lsls     r1, r6, #7                     
    00200C18:  str      r1, [r0, #0x10]                
    00200C1A:  blt      #0x200c04                      
    00200C1C:  stm      r0!, {r5, r6}                  
    00200C1E:  stm      r0!, {r0, r1, r4, r5, r6, r7}  
    00200C20:  str      r1, [r4, #0x14]                
    00200C22:  ldrb     r3, [r6, r7]                   
    00200C24:  stm      r2!, {r4, r5, r6}              
    00200C26:  lsrs     r3, r6, #7                     
    00200C28:  str      r1, [r6, #0x10]                
    00200C2A:  lsrs     r3, r6, #7                     
    00200C2E:  ldr      r2, [pc, #0x3cc]                 // = 0x18002006
    00200C30:  str      r1, [r0, #0x10]                
    00200C32:  subs     r3, r6, r3                     
    00200C34:  lsls     r0, r0, #1                     
    00200C36:  adds     r0, r2, r2                     
    00200C38:  subs     r0, #0xbd                      
    00200C3A:  lsls     r5, r6, #0xa                   
    00200C3C:  movs     r1, #0x46                      
    00200C3E:  lsls     r0, r6, #7                     
    00200C40:  movs     r2, #0                         
    00200C42:  lsls     r0, r6, #7                     
    00200C44:  cmp      r1, #5                         
    00200C48:  ldm      r2, {r0, r1, r2, r4, r5, r6, r7}
    00200C4A:  lsrs     r7, r7, #0xb                   
    00200C4C:  lsls     r4, r1, #1                     
    00200C4E:  ldr      r0, [r2, #0x18]                
    00200C50:  cmp      r0, #0x46                      
    00200C52:  str      r6, [r0, #0x24]                
    00200C54:  movs     r7, #0x68                      
    00200C56:  strb     r6, [r6, #0xf]                 
    00200C58:  str      r7, [r7, #0xc]                 
    00200C5A:  eors     r0, r5                         
    00200C5C:  str      r4, [r3]                       
    00200C5E:  subs     r0, #0x60                      
    00200C60:  asrs     r5, r7, #0xe                   
    00200C62:  lsls     r5, r6, #0x12                  
    00200C64:  lsls     r4, r1, #5                     
    00200C66:  str      r1, [r5, #0x28]                
    00200C68:  movs     r7, #0x68                      
    00200C6A:  ldr      r6, [r6, #0x1c]                
    00200C6C:  str      r7, [r7, #0xc]                 
    00200C6E:  eors     r0, r5                         
    00200C70:  str      r4, [r3]                       
    00200C72:  adds     r0, r4, #1                     
    00200C74:  lsls     r5, r7, #2                     
    00200C78:  movs     r0, #0x54                      
    00200C7A:  cmp      r5, #0                         
    00200C7E:  lsrs     r1, r0, #0x15                  
    00200C80:  lsls     r6, r0, #0x11                  
    00200C82:  asrs     r6, r0, #0x19                  
    00200C84:  subs     r6, r0, #5                     
    00200C86:  lsrs     r6, r0, #1                     
    00200C88:  cmp      r0, #0x21                      
    00200C8A:  muls     r6, r0, r6                     
    00200C8C:  ldr      r6, [r6, r7]                   
    00200C8E:  subs     r3, #0xff                      
    00200C90:  adds     r2, #0x46                      
    00200C92:  cmp      r1, #0x46                      
    00200C94:  movs     r0, #0x46                      
    00200C96:  pop      {r1, r2, r6, pc}               
    00200C9A:  lsrs     r1, r0, #9                     
    00200C9C:  str      r6, [r6, r3]                   
    00200C9E:  subs     r0, #0xbc                      
    00200CA0:  lsls     r5, r6, #0x16                  
    00200CA2:  movs     r6, #0x46                      
    00200CA4:  lsls     r1, r4, #0x12                  
    00200CA6:  lsrs     r0, r4, #4                     
    00200CA8:  strh     r6, [r6, #0x16]                
    00200CAA:  vtbl.8   d18, {d15}, d16                
    00200CAE:  ldr      r0, [r6, #0x14]                
    00200CB0:  lsls     r6, r0, #0x11                  
    00200CB2:  movs     r6, #0x20                      
    00200CB4:  str      r6, [r6, #0x2c]                
    00200CB6:  ldr      r1, [r7, #0x1c]                
    00200CB8:  lsls     r6, r0, #9                     
    00200CBA:  lsrs     r0, r4, #4                     
    00200CBC:  ldrb     r6, [r6, #3]                   
    00200CBE:  lsls     r7, r7, #3                     
    00200CC0:  lsrs     r4, r4, #0x20                  
    00200CC2:  cmp      r0, #0xe0                      
    00200CC4:  ldr      r5, [r3, #0x14]                
    00200CC6:  movs     r6, #0x46                      
    00200CC8:  ldr      r6, [r6, r3]                   
    00200CCA:  ldr      r1, [r7, #0x1c]                
    00200CCC:  lsls     r6, r0, #9                     
    00200CCE:  lsrs     r0, r4, #4                     
    00200CD0:  ldr      r6, [r6, #0x6c]                
    00200CD2:  str      r7, [r7, #0x4c]                
    00200CD4:  ldr      r4, [r3]                       
    00200CD6:  strh     r0, [r7, #2]                   
    00200CD8:  adr      r0, #0x70                      
    00200CDA:  movw     r8, #0x23d8                    
    00200CDE:  strb     r5, [r7, #2]                   
    00200CE0:  lsls     r5, r6, #0x16                  
    00200CE2:  adds     r6, r0, r1                     
    00200CE4:  lsls     r0, r1, #1                     
    00200CE6:  lsls     r0, r5, #1                     
    00200CE8:  adds     r0, r5, #4                     
    00200CEA:  asrs     r0, r2, #0x1f                  
    00200CEC:  lsls     r4, r1, #1                     
    00200CEE:  b        #0x200d32                      
    00200CF0:  ble.w    #0x170d34                      
    00200CF4:  str      r2, [sp, #0x1c0]               
    00200CF6:  movs     r0, #0x20                      
    00200CF8:  lsls     r1, r6, #5                     
    00200CFA:  str      r0, [r4]                       
    00200CFC:  b        #0x2011e2                      
    00200CFE:  ands     r0, sp, #0x28400000            
    00200D02:  movs     r6, #0x1c                      
    00200D04:  strb     r6, [r6, #0x17]                
    00200D06:  lsls     r3, r7, #0x1b                  
    00200D08:  adr      r0, #0x118                     
}

/* ---- sub_00200D0A @ 0x00200D0A ---- */
// Called by: app_create
void sub_00200D0A() {
    00200D0A:  lsls     r1, r6, #0x19                  
    00200D0C:  lsls     r1, r4, #4                     
    00200D0E:  stm      r0!, {r0, r1, r3, r5, r6, r7}  
    00200D10:  str      r0, [r0]                       
    00200D12:  ldr      r5, [pc, #0x1c0]                 // = 0x4D0070F8
    00200D14:  lsls     r1, r6, #6                     
    00200D16:  lsls     r5, r5, #4                     
    00200D18:  lsls     r0, r2, #0xb                   
    00200D1A:  lsls     r5, r5, #0xc                   
    00200D1C:  cmp      r1, #0xd1                      
    00200D1E:  movs     r0, #0x46                      
    00200D20:  movs     r5, #0x46                      
    00200D22:  ldm      r3!, {r1, r2, r4, r5, r6, r7}  
    00200D24:  adds     r0, #0xf8                      
    00200D26:  strb     r6, [r0, #1]                   
    00200D28:  movs     r0, #0xbd                      
    00200D30:  add      r7, sp, #0x39c                 
    00200D32:  strh     r2, [r6, r7]                   
    00200D34:  lsls     r0, r0, #0x18                  
    00200D36:  stm      r1!, {r0, r3, r6}              
    00200D38:  cmp      r4, #0xf8                      
    00200D3A:  strb     r1, [r0]                       
    00200D3C:  lsls     r7, r0, #1                     
    00200D3E:  ands     r0, r0                         
    00200D40:  cmp      r2, #0x24                      
    00200D42:  movs     r3, r4                         
    00200D44:  movs     r0, r0                         
    00200D46:  ldr      r4, [pc, #0]                     // = 0xCC00202D
    00200D48:  movs     r0, #0x2d                      
    00200D4C:  movs     r0, #0x3e                      
    00200D4E:  add      sp, #0                         
    00200D50:  movs     r0, #0x2b                      
    00200D52:  strb     r0, [r0]                       
    00200D54:  lsls     r5, r6, #0x12                  
    00200D56:  lsrs     r6, r0, #0x15                  
    00200D58:  asrs     r6, r0, #1                     
    00200D5A:  lsrs     r6, r0, #0x1d                  
    00200D5C:  ldr      r6, [r6, r7]                   
    00200D5E:  lsls     r0, r7, #0x17                  
    00200D60:  lsls     r0, r6, #3                     
    00200D62:  lsls     r1, r0, #0x11                  
    00200D64:  lsls     r0, r6, #0xb                   
    00200D66:  asrs     r2, r0, #4                     
    00200D68:  asrs     r3, r0, #0x19                  
    00200D6A:  asrs     r1, r2, #0x13                  
    00200D6C:  cmp      r4, #0xf0                      
    00200D6E:  asrs     r7, r1, #0xc                   
    00200D70:  cmp      r4, #0xd0                      
    00200D72:  lsls     r0, r0, #0x11                  
    00200D74:  asrs     r0, r0, #0x11                  
    00200D76:  lsrs     r0, r6, #0x13                  
    00200D78:  lsrs     r7, r1, #0x18                  
    00200D7A:  adr      r1, #0x344                     
    00200D7C:  lsrs     r6, r0, #0x10                  
    00200D7E:  lsrs     r5, r2                         
    00200D80:  lsrs     r6, r0, #8                     
    00200D82:  lsrs     r5, r2, #0xf                   
    00200D84:  pop      {r1, r2, r4, r5, r6, r7}       
    00200D86:  lsls     r2, r7, #0x17                  
    00200D88:  lsrs     r0, r6                         
    00200D8A:  lsrs     r1, r0, #0x20                  
    00200D8C:  lsls     r3, r0, #9                     
    00200D8E:  ldr      r7, [pc, #0x340]                 // = 0x09880048
    00200D90:  lsls     r0, r6, #3                     
    00200D92:  strb     r0, [r0, #1]                   
    00200D94:  lsls     r5, r7, #0xa                   
    00200D96:  strb     r0, [r1, #1]                   
    00200D98:  lsls     r5, r7, #2                     
    00200D9A:  strb     r0, [r4]                       
    00200D9C:  lsls     r5, r7, #2                     
    00200D9E:  lsls     r0, r0, #0x14                  
    00200DA0:  movs     r0, r0                         
    00200DA2:  asrs     r0, r0, #2                     
    00200DA4:  subs     r5, r6, r6                     
    00200DA6:  ldr      r5, [pc, #0x3d8]                 // = 0xFB4808FE
    00200DA8:  lsrs     r3, r7, #3                     
    00200DAA:  subs     r1, r6, r2                     
    00200DAC:  blo      #0x200d9c                      
    00200DAE:  lsls     r4, r7, #3                     
    00200DB0:  pop      {r0, r5, pc}                   
    00200DB2:  asrs     r0, r5, #3                     
    00200DB4:  ldr      r7, [pc, #0x100]                 // = 0x8068284D
    00200DB6:  str      r6, [sp, #0x3d0]               
    00200DB8:  lsls     r2, r4, #0x15                  
    00200DBA:  asrs     r0, r4, #8                     
    00200DBE:  ldrh     r1, [r7, #0x34]                
    00200DC0:  lsls     r0, r1, #1                     
    00200DC2:  str      r0, [sp, #0x1a0]               
    00200DC4:  strb     r0, [r7, #3]                   
    00200DC6:  strb     r0, [r0]                       
    00200DC8:  asrs     r7, r0, #1                     
    00200DCA:  movs     r1, r5                         
    00200DCC:  asrs     r1, r3, #3                     
    00200DCE:  lsrs     r1, r4, #8                     
    00200DD0:  lsls     r6, r0, #5                     
    00200DD2:  ldrh     r6, [r0, #0x12]                
    00200DD4:  muls     r0, r1, r0                     
    00200DD6:  ldrh     r6, [r6, #0x2e]                
    00200DD8:  asrs     r6, r7, #2                     
    00200DDA:  movs     r1, r5                         
    00200DDC:  asrs     r1, r3, #3                     
    00200DDE:  lsrs     r1, r4, #8                     
    00200DE0:  lsls     r6, r0, #5                     
    00200DE2:  strh     r6, [r0, #0x3a]                
    00200DE4:  muls     r0, r1, r0                     
    00200DE6:  strh     r6, [r6, #0x2e]                
    00200DE8:  strh     r6, [r7, #0x3c]                
    00200DEA:  lsls     r0, r1, #1                     
    00200DEC:  lsls     r0, r5, #1                     
    00200DEE:  movs     r0, #0xf0                      
    00200DF0:  strb     r0, [r0]                       
    00200DF2:  strh     r7, [r0, #0x22]                
    00200DF4:  lsls     r0, r1, #5                     
    00200DF6:  movs     r1, #0x68                      
    00200DF8:  movs     r0, #0xf0                      
    00200DFA:  lsls     r1, r0, #4                     
    00200DFC:  strb     r0, [r4, #1]                   
    00200DFE:  strh     r7, [r0, #0xa]                 
    00200E00:  lsls     r0, r1, #5                     
    00200E02:  adcs     r0, r5                         
    00200E04:  movs     r0, #0xf0                      
    00200E06:  lsls     r1, r0, #4                     
    00200E08:  strb     r0, [r4, #1]                   
    00200E0A:  ldrb     r7, [r0, #0x19]                
    00200E0C:  lsls     r0, r1, #1                     
    00200E0E:  lsls     r0, r5, #1                     
    00200E10:  lsrs     r0, r6                         
    00200E12:  strb     r0, [r0]                       
    00200E14:  ldrb     r7, [r0, #0x11]                
    00200E16:  lsls     r0, r1, #5                     
    00200E18:  movs     r1, #0x68                      
    00200E1A:  lsrs     r0, r6                         
    00200E1C:  lsls     r1, r0, #4                     
    00200E1E:  strb     r0, [r4, #1]                   
    00200E20:  ldrb     r7, [r0, #5]                   
    00200E22:  lsls     r0, r1, #5                     
    00200E24:  adcs     r0, r5                         
    00200E26:  lsrs     r0, r6                         
    00200E28:  lsls     r1, r0, #4                     
    00200E2A:  strb     r0, [r4, #1]                   
    00200E2C:  strb     r7, [r0, #1]                   
    00200E2E:  strb     r5, [r6, #0xa]                 
    00200E30:  lsls     r0, r1, #0x11                  
    00200E32:  movs     r5, #0x68                      
    00200E34:  adds     r5, #0x78                      
    00200E36:  strb     r1, [r7, #0xa]                 
    00200E38:  lsls     r0, r1, #0x19                  
    00200E3A:  lsls     r2, r4, #0x10                  
    00200E3C:  lsrs     r1, r6, #0xb                   
    00200E3E:  lsrs     r1, r0, #0x20                  
    00200E40:  orrs     r0, r7                         
    00200E42:  ldrsb    r6, [r6, r7]                   
    00200E44:  str      r6, [r7, #0xc]                 
    00200E46:  movs     r0, #0x7c                      
    00200E48:  b        #0x200fae                      
    00200E4A:  asrs     r2, r7, #1                     
    00200E4C:  lsls     r1, r6, #0x16                  
    00200E4E:  adr      r0, #0x80                      
    00200E50:  subs     r0, r6, #1                     
    00200E52:  movs     r0, #0xe0                      
    00200E54:  eors     r3, r7                         
    00200E56:  lsls     r7, r0, #0x14                  
    00200E58:  adr      r0, #0x350                     
    00200E5A:  eors     r4, r7                         
    00200E5C:  lsls     r7, r0, #8                     
    00200E5E:  lsls     r4, r2, #7                     
    00200E60:  adr      r0, #0x80                      
    00200E62:  lsrs     r0, r6, #0x19                  
    00200E64:  movs     r0, #0xe0                      
    00200E66:  adr      r1, #0x1f0                     
    00200E68:  lsls     r2, r7, #0x11                  
    00200E6A:  lsls     r0, r5, #0x1c                  
    00200E6C:  lsls     r4, r3, #0x13                  
    00200E6E:  lsls     r1, r5, #0x14                  
    00200E70:  str      r4, [r3, #0x6c]                
    00200E72:  lsls     r2, r1, #1                     
    00200E74:  strh     r3, [r5, #6]                   
    00200E76:  asrs     r0, r0, #0x20                  
    00200E78:  eors     r4, r0                         
    00200E7A:  adr      r0, #0x170                     
    00200E7C:  adr      r0, #0x1c0                     
    00200E7E:  lsls     r0, r7, #5                     
    00200E80:  lsls     r0, r5, #0x10                  
    00200E82:  adr      r0, #0x344                     
    00200E84:  movs     r0, #0x7c                      
    00200E86:  lsls     r0, r6, #0x13                  
    00200E88:  adr      r0, #0                         
    00200E8A:  lsls     r4, r6, #0x11                  
    00200E8C:  lsls     r0, r4, #0x17                  
    00200E8E:  lsls     r0, r5, #8                     
    00200E90:  asrs     r1, r2, #3                     
    00200E92:  ldrh     r1, [r4, r0]                   
    00200E94:  lsls     r0, r1, #5                     
    00200E96:  ldrh     r0, [r4, r3]                   
    00200E98:  asrs     r0, r1, #1                     
    00200E9A:  pop      {r0, r5, pc}                   
    00200E9C:  strb     r0, [r5, #3]                   
    00200E9E:  lsrs     r0, r0, #0x11                  
    00200EA0:  str      r7, [sp, #0x3d8]               
    00200EA2:  strb     r7, [r7, #2]                   
    00200EA4:  lsls     r5, r6, #6                     
    00200EA6:  movs     r4, r4                         
    00200EA8:  strh     r0, [r6, #0x3e]                
    00200EAA:  movs     r0, #0xf9                      
    00200EAC:  lsls     r1, r6, #0x1a                  
    00200EAE:  lsrs     r0, r4, #0x10                  
    00200EB0:  lsls     r6, r6, #0x1f                  
    00200EB2:  lsls     r2, r7, #3                     
    00200EB4:  strb     r0, [r4]                       
    00200EB6:  str      r5, [r7, r2]                   
    00200EB8:  cmp      r0, #0x4d                      
    00200EBA:  strh     r0, [r5, #2]                   
    00200EBC:  lsls     r0, r7, #0x15                  
    00200EBE:  asrs     r0, r5, #4                     
    00200EC2:  adr      r3, #0x3dc                     
    00200EC4:  asrs     r7, r7, #0xb                   
    00200EC6:  lsls     r0, r4, #3                     
    00200EC8:  lsls     r4, r4, #0xc                   
    00200ECA:  lsrs     r0, r4, #0x10                  
    00200ECE:  cmp      r1, #0xf9                      
    00200ED0:  lsls     r0, r5, #1                     
    00200ED2:  strh     r0, [r4, #8]                   
    00200ED4:  strb     r0, [r7, #3]                   
    00200ED6:  ldr      r5, [pc, #0]                     // = 0x09680148
    00200ED8:  lsls     r0, r1, #5                     
    00200EDA:  lsrs     r0, r5, #5                     
    00200EDC:  lsls     r1, r6, #0x12                  
    00200EDE:  ldrh     r0, [r4]                       
    00200EE0:  movs     r0, #0x47                      
    00200EE2:  strb     r6, [r0, #1]                   
    00200EE4:  lsls     r5, r7, #6                     
    00200EE6:  lsls     r0, r5, #0x10                  
    00200EEA:  ldrb     r7, [r6, #0x1b]                
    00200EEC:  lsls     r7, r7, #3                     
    00200EEE:  blx      #0x129290                        // ROM
    00200EF2:  lsrs     r7, r4, #0x17                  
    00200EF4:  ldr      r3, [pc, #0x3d8]                 // = 0xF800200E
    00200EF8:  asrs     r7, r4, #3                     
    00200EFA:  lsls     r5, r6, #0x12                  
    00200EFC:  cmp      r6, r8                         
    00200EFE:  lsrs     r0, r4, #0x12                  
    00200F00:  adr      r2, #0x3d8                     
    00200F02:  str      r1, [r7, #0xc]                 
    00200F04:  lsrs     r4, r3, #0x10                  
    00200F06:  ldr      r4, [sp, #0x3d8]               
    00200F08:  lsls     r0, r7, #3                     
    00200F0A:  asrs     r0, r4, #0x20                  
    00200F0C:  asrs     r5, r7, #2                     
    00200F0E:  lsls     r5, r6, #0x12                  
    00200F10:  add      r6, r8                         
    00200F12:  lsrs     r0, r4, #0x12                  
    00200F14:  ldr      r0, [sp, #0x3d8]               
    00200F16:  push     {r0, r3, r4, r5, r6, r7}       
    00200F18:  lsls     r0, r7, #7                     
    00200F1A:  b        #0x200f3e                      
    00200F1C:  lsrs     r4, r3, #0x10                  
    00200F1E:  stm      r7!, {r1, r2, r4, r5, r6, r7}  
    00200F20:  lsls     r0, r7, #7                     
    00200F22:  lsrs     r0, r4, #0x14                  
    00200F24:  subs     r0, #0xf6                      
    00200F26:  lsls     r1, r7, #3                     
    00200F28:  asrs     r0, r4, #0x20                  
    00200F2A:  adds     r5, r7, #2                     
    00200F2C:  lsls     r5, r6, #6                     
    00200F2E:  ldrh     r0, [r4, #0x28]                
    00200F30:  lsls     r0, r7, #3                     
    00200F32:  adds     r1, #0                         
    00200F34:  lsls     r0, r1, #0x19                  
    00200F36:  lsls     r2, r4, #4                     
    00200F38:  lsrs     r0, r5, #0x15                  
    00200F3A:  lsls     r1, r6, #7                     
    00200F3C:  lsrs     r0, r0, #8                     
    00200F3E:  lsrs     r1, r6, #0x10                  
    00200F40:  muls     r6, r0, r6                     
    00200F42:  bvc      #0x200f32                      
    00200F44:  cmp      r7, #0xfd                      
    00200F46:  lsls     r0, r1, #0x19                  
    00200F48:  movs     r1, #0x22                      
    00200F4A:  lsrs     r6, r0, #1                     
    00200F4C:  orrs     r0, r7                         
    00200F4E:  bne      #0x200f3e                      
    00200F50:  lsls     r5, r7, #0x1f                  
    00200F52:  ldr      r1, [r4]                       
    00200F54:  lsrs     r6, r0, #0x11                  
    00200F56:  add      r0, sp, #0x3d8                 
    00200F58:  adds     r1, r7, #3                     
    00200F5A:  movs     r7, #0xbd                      
    00200F5C:  lsls     r0, r1, #1                     
    00200F5E:  strh     r0, [r5, #0xa]                 
    00200F60:  ldrh     r0, [r7, r1]                   
    00200F62:  lsls     r0, r6, #0x18                  
    00200F64:  lsrs     r1, r5, #4                     
    00200F66:  svc      #0xd2                          
    00200F68:  lsls     r0, r5, #7                     
    00200F6A:  lsrs     r0, r6, #3                     
    00200F6C:  lsls     r6, r0, #0x18                  
    00200F6E:  lsls     r6, r0, #0xc                   
    00200F70:  cmp      r7, #6                         
    00200F72:  lsrs     r0, r4, #0x12                  
    00200F74:  ldr      r6, [r6, #0xc]                 
    00200F76:  lsrs     r1, r7, #0x12                  
    00200F78:  subs     r5, #0xf6                      
    00200F7A:  strb     r1, [r7, #2]                   
    00200F7C:  asrs     r7, r0, #1                     
    00200F7E:  subs     r5, r6, #2                     
    00200F80:  movs     r0, #0x4c                      
    00200F82:  str      r0, [sp, #0x1a0]               
    00200F84:  strb     r0, [r7, #3]                   
    00200F86:  lsls     r0, r2, #0x10                  
    00200F88:  asrs     r1, r5, #0x10                  
    00200F8A:  lsls     r1, r2, #7                     
    00200F8C:  str      r1, [sp, #0x1e0]               
    00200F8E:  strh     r1, [r7, #0xc]                 
    00200F90:  lsls     r0, r7, #0xd                   
    00200F92:  lsrs     r1, r5, #0x14                  
    00200F94:  lsls     r1, r2, #3                     
    00200F96:  strb     r1, [r6, #7]                   
    00200F98:  asrs     r1, r0, #0x20                  
    00200F9A:  ldrh     r2, [r4, r0]                   
    00200F9C:  orrs     r0, r6                         
    00200F9E:  add      r1, sp, #0x3d8                 
    00200FA0:  movs     r0, #0xfd                      
    00200FA2:  lsls     r0, r5, #0x19                  
    00200FA4:  strh     r1, [r4]                       
    00200FA6:  strb     r0, [r7, #3]                   
    00200FA8:  movs     r0, r2                         
    00200FAA:  ldrh     r1, [r4, r0]                   
    00200FAC:  lsrs     r0, r6, #0x10                  
    00200FB0:  lsls     r2, r7, #7                     
    00200FB2:  asrs     r0, r4, #0x20                  
    00200FB4:  lsls     r5, r7, #2                     
    00200FB6:  asrs     r0, r4, #0x20                  
    00200FB8:  asrs     r5, r7, #0xa                   
    00200FBA:  lsrs     r1, r1, #0x11                  
    00200FBC:  lsrs     r1, r7, #0x20                  
    00200FBE:  strb     r0, [r4, #1]                   
    00200FC0:  lsrs     r7, r0, #0x19                  
    00200FC2:  lsls     r0, r1, #1                     
    00200FC4:  strh     r0, [r5, #2]                   
    00200FC6:  lsls     r0, r7, #0xd                   
    00200FC8:  lsls     r0, r5, #0x14                  
    00200FCA:  lsrs     r1, r2, #0x17                  
    00200FCC:  lsrs     r0, r1, #0x11                  
    00200FCE:  movs     r0, r7                         
    00200FD0:  lsls     r0, r5, #1                     
    00200FD2:  movs     r0, r5                         
    00200FD4:  lsls     r0, r2, #3                     
    00200FD6:  strb     r7, [r0, #1]                   
    00200FD8:  lsrs     r7, r0, #1                     
    00200FDA:  lsls     r5, r6, #0x16                  
    00200FDC:  ldrh     r1, [r4, #0x28]                
    00200FDE:  lsls     r0, r7, #3                     
    00200FE0:  ldrh     r0, [r2, #0x28]                
    00200FE2:  lsls     r0, r7, #7                     
    00200FE4:  lsls     r0, r0, #8                     
    00200FE6:  ldr      r1, [r4]                       
    00200FE8:  lsrs     r6, r0, #0x11                  
    00200FEA:  ldrsh    r6, [r6, r3]                   
    00200FEC:  lsrs     r1, r7, #3                     
    00200FEE:  lsls     r0, r1, #5                     
    00200FF0:  lsls     r0, r5, #1                     
    00200FF2:  lsls     r1, r5, #4                     
    00200FF4:  lsls     r0, r2, #3                     
    00200FF6:  ldrh     r0, [r4]                       
    00200FF8:  lsrs     r7, r0, #1                     
    00200FFA:  add      r4, sp, #0x2f4                 
    00200FFC:  movs     r0, #6                         
    00200FFE:  adds     r0, r0, r0                     
    00201000:  movs     r0, #0x55                      
    00201002:  bhi      #0x201006                      
    00201004:  movs     r0, #0x54                      
    00201006:  add      sp, #0                         
    00201008:  movs     r0, #6                         
    0020100A:  ands     r0, r0                         
    0020100C:  lsls     r3, r4, #0x12                  
    00201010:  movs     r0, #6                         
    00201012:  cmp      r0, r0                         
    00201014:  str      r6, [r5, #0x34]                
    00201016:  ldr      r0, [r4, #0x10]                
    00201018:  str      r6, [r5, #0x64]                
    0020101A:  subs     r2, #0x6f                      
    0020101C:  ldr      r4, [pc, #0x80]                  // = 0x70600A68
    0020101E:  ldr      r3, [pc, #0x150]                 // = 0x08FEBCF5
    00201020:  movs     r0, r0                         
    00201022:  ldr      r0, [r0, #0x50]                
    00201024:  strb     r1, [r4, #0xd]                 
    00201026:  str      r4, [r6, #0x54]                
    00201028:  movs     r0, #0x72                      
    0020102A:  str      r1, [r5, #0x44]                
    0020102C:  movs     r0, r0                         
    0020102E:  strb     r0, [r0]                       
    00201030:  ldr      r1, [r4, #0x14]                
    00201032:  ldr      r2, [r6, #0x14]                
    00201034:  str      r6, [r5, #0x74]                
    00201036:  ldr      r0, [r4, #0x50]                
    00201038:  strb     r5, [r4, #0x11]                
    0020103A:  ldr      r0, [r5, #0x74]                
    0020103C:  cmp      r4, #0x64                      
    0020103E:  tst      r0, r4                         
    00201040:  strb     r7, [r5, #0x11]                
    00201042:  movs     r0, #0x68                      
    00201044:  ldr      r1, [r1, #0x64]                
    00201046:  strb     r0, [r6, #0x15]                
    00201048:  lsls     r4, r6, #1                     
    0020104A:  cmp      r5, #0                         
    0020104C:  ldrh     r1, [r1, #2]                   
    0020104E:  strb     r0, [r4, #1]                   
    00201050:  asrs     r7, r0, #1                     
    00201052:  lsls     r5, r6, #0x12                  
    00201054:  stm      r0!, {r1, r2, r6}              
    00201056:  subs     r4, #0x78                      
    00201058:  lsls     r0, r5, #0xc                   
    0020105A:  cmp      r1, #0xd1                      
    0020105C:  strh     r0, [r1, #2]                   
    0020105E:  lsls     r0, r5, #1                     
    00201060:  strh     r1, [r6, #4]                   
    00201062:  movs     r0, #0x47                      
    00201064:  asrs     r6, r0, #1                     
    00201066:  movs     r6, #0xbd                      
    00201068:  ldr      r0, [pc, #0x124]                 // = 0x93002054
    0020106A:  strb     r0, [r4, #1]                   
    0020106C:  movs     r5, #0x47                      
    0020106E:  eors     r0, r1                         
    00201070:  lsls     r0, r5, #1                     
    00201072:  movs     r0, r5                         
    00201074:  lsls     r0, r2, #3                     
    00201076:  strb     r7, [r0, #1]                   
    00201078:  movs     r3, #0x47                      
    0020107A:  strb     r0, [r1, #1]                   
    0020107C:  asrs     r7, r0, #1                     
    0020107E:  lsls     r5, r6, #6                     
    00201080:  lsls     r6, r0, #0x19                  
    00201082:  movs     r0, #0x22                      
    00201084:  muls     r0, r1, r0                     
    00201086:  adds     r5, #0xf6                      
    00201088:  lsls     r5, r7, #0x1b                  
    0020108A:  subs     r2, r4, #0                     
    0020108C:  subs     r1, r1, #5                     
    0020108E:  muls     r0, r1, r0                     
    00201090:  adds     r0, #0xf6                      
    00201092:  subs     r5, r7, #3                     
    00201094:  lsls     r1, r1, #5                     
    00201096:  lsrs     r0, r4, #0x20                  
    00201098:  asrs     r0, r6, #1                     
    0020109A:  adds     r5, r7, r6                     
    0020109C:  lsls     r1, r1, #9                     
    0020109E:  lsrs     r6, r0, #1                     
    002010A0:  lsrs     r0, r5, #9                     
    002010A2:  strb     r0, [r4, #1]                   
    002010A4:  strb     r7, [r0, #1]                   
    002010A6:  lsls     r5, r6, #0x12                  
    002010A8:  lsrs     r6, r0, #5                     
    002010AA:  rors     r6, r6                         
    002010AC:  lsls     r7, r7, #0x17                  
    002010AE:  movs     r0, #0x46                      
    002010B0:  lsrs     r0, r7, #0x1d                  
    002010B2:  asrs     r0, r5, #0x14                  
    002010B4:  asrs     r1, r2, #0x1f                  
    002010B6:  lsls     r1, r1, #1                     
    002010B8:  lsrs     r0, r4, #0x20                  
    002010BA:  adr      r0, #0x1c0                     
    002010BC:  adr      r0, #0x220                     
    002010BE:  strh     r5, [r6, #6]                   
    002010C0:  lsls     r1, r4, #0x19                  
    002010C2:  lsrs     r1, r7, #0x14                  
    002010C4:  adr      r0, #0x344                     
    002010C6:  ldr      r0, [r7, r1]                   
    002010C8:  lsrs     r1, r6, #6                     
    002010CA:  add      r3, sp, #0x3d8                 
    002010CC:  adds     r6, r7, r3                     
    002010CE:  asrs     r1, r6, #6                     
    002010D0:  lsls     r0, r1, #1                     
    002010D2:  lsrs     r0, r1, #6                     
    002010D6:  asrs     r6, r7, #0xb                   
    002010D8:  lsrs     r0, r4, #0xc                   
    002010DA:  cmp      r3, #0xf6                      
    002010DC:  lsrs     r1, r7, #0xb                   
    002010DE:  strh     r6, [r6, r7]                   
    002010E0:  lsrs     r2, r7, #3                     
    002010E2:  lsls     r0, r1, #5                     
    002010E4:  lsrs     r0, r5, #5                     
    002010E6:  movs     r0, #0xb1                      
    002010E8:  ldrh     r6, [r0, #2]                   
    002010EA:  cmp      r0, #0x47                      
    002010EC:  strb     r6, [r0, #1]                   
    002010EE:  lsrs     r5, r7, #0xa                   
    002010F0:  lsls     r0, r1, #1                     
    002010F2:  lsls     r0, r7, #1                     
    002010F4:  lsls     r0, r5, #0xc                   
    002010F6:  add      r7, sp, #0x340                 
    002010F8:  strb     r2, [r6, r7]                   
    002010FA:  lsrs     r0, r0, #0x20                  
    002010FC:  lsls     r0, r4, #9                     
    002010FE:  strb     r0, [r4]                       
    00201100:  lsls     r7, r0, #1                     
    00201104:  movs     r0, #0x54                      
    00201106:  ldrb     r0, [r0]                       
    00201108:  movs     r0, #6                         
    0020110C:  movs     r0, #0xd                       
    0020110E:  subs     r1, #0                         
    00201110:  movs     r0, #6                         
    00201112:  subs     r3, #0                         
    00201114:  movs     r0, #6                         
    00201116:  tst      r0, r0                         
    00201118:  movs     r0, #6                         
    0020111A:  subs     r5, #0                         
    0020111C:  movs     r0, #6                         
    0020111E:  adds     r0, #0                         
    00201120:  ble      #0x20108e                      
    00201122:  lsls     r1, r5, #0xf                   
    00201124:  ldrh     r5, [r0, #2]                   
    00201126:  asrs     r2, r0, #0x15                  
    00201128:  lsls     r0, r3, #0xb                   
    0020112A:  asrs     r0, r5, #0xc                   
    0020112C:  ldr      r7, [pc, #0x34c]                 // = 0x052C00D1
    0020112E:  ldr      r0, [pc, #0x3d0]                 // = 0x18F8DC00
    00201130:  strh     r0, [r4, #0xa]                 
    00201132:  lsrs     r2, r0, #0x1d                  
    00201134:  uxtb     r0, r3                         
    00201138:  lsrs     r7, r7, #0x11                  
    0020113A:  strh     r2, [r2, r3]                   
    0020113C:  str      r4, [r3, r4]                   
    0020113E:  cbz      r3, #0x201152                  
    00201140:  strh     r3, [r5, #0x1e]                
    00201142:  lsls     r7, r1, #0x1c                  
    00201144:  lsrs     r2, r3, #0xb                   
    00201146:  lsls     r3, r5, #0x14                  
    00201148:  strh     r3, [r2, #0x1e]                
    0020114A:  lsls     r2, r0, #0xd                   
    0020114C:  add      r4, sp, #0x360                 
    0020114E:  lsls     r2, r0, #5                     
    00201150:  lsls     r0, r3, #7                     
    00201152:  adds     r0, #0x20                      
    00201154:  lsls     r5, r7, #2                     
    00201156:  adds     r0, #0x20                      
    00201158:  lsls     r5, r7, #0x1e                  
    0020115A:  strb     r0, [r4]                       
    0020115C:  lsls     r7, r0, #0x1d                  
    0020115E:  strb     r0, [r4]                       
    00201160:  lsls     r7, r0, #1                     
    00201162:  asrs     r0, r0, #0x20                  
    00201164:  lsrs     r5, r6, #0xa                   
    00201166:  movs     r0, #0x4c                      
    00201168:  lsls     r0, r7, #1                     
    0020116A:  lsrs     r0, r5, #0x18                  
    0020116C:  lsrs     r1, r2, #7                     
    00201170:  pop      {r0, r2, r4, r5, r6, r7}       
    00201172:  lsrs     r6, r7, #3                     
    00201174:  lsrs     r0, r1, #5                     
    00201176:  lsls     r1, r1, #1                     
    00201178:  ldm      r0!, {r3, r5, r6}              
    0020117A:  lsrs     r0, r4, #1                     
    0020117E:  pop      {r0, r2, r4, r5, r6, r7}       
    00201180:  lsrs     r6, r7, #3                     
}

/* ---- sub_00201184 @ 0x00201184 ---- */
void sub_00201184() {
    00201184:  push     {r0, r2, r4, r5, r6, r7, lr}   
    00201186:  lsls     r6, r7, #7                     
    00201188:  movs     r0, #0x20                      
    0020118A:  asrs     r0, r6, #1                     
    0020118C:  lsls     r5, r7, #2                     
    0020118E:  and      r0, r0, #0xd4000               
    00201192:  str      r3, [sp]                       
    00201194:  movs     r2, r2                         
    00201196:  movs     r0, #0                         
    00201198:  movs     r0, #4                         
    0020119A:  ldrh     r0, [r0, #0x20]                
    0020119C:  movs     r0, #0x17                      
    0020119E:  movs     r1, #0                         
    002011A0:  movs     r2, r2                         
    002011A2:  stc      p0, c0, [r0, #-0x44]           
    002011A6:  lsls     r0, r0, #4                     
    002011A8:  lsls     r0, r1, #1                     
    002011AA:  strb     r0, [r7, #1]                   
    002011AC:  lsls     r7, r0, #1                     
    002011AE:  add.w    r0, r0, #0xd4000               
    002011B2:  asrs     r0, r0, #8                     
    002011B4:  lsrs     r1, r1, #1                     
    002011B6:  strb     r0, [r6, #1]                   
    002011B8:  asrs     r7, r0, #9                     
    002011BA:  asrs     r0, r1, #9                     
    002011BC:  lsls     r1, r1, #1                     
    002011BE:  lsrs     r0, r5, #5                     
    002011C0:  lsls     r0, r7, #9                     
    002011C2:  lsls     r0, r7, #5                     
    002011C4:  lsls     r2, r5, #4                     
    002011C6:  lsrs     r1, r2                         
    002011C8:  lsls     r3, r7, #1                     
    002011CA:  stm      r0!, {r5, r6, r7}              
    002011CC:  ldrh     r4, [r7, #2]                   
    002011CE:  lsls     r2, r0, #5                     
    002011D0:  lsls     r2, r2, #0x1b                  
    002011D2:  strb     r0, [r4]                       
    002011D4:  lsls     r7, r0, #1                     
    002011D6:  strb     r0, [r4]                       
    002011D8:  lsrs     r7, r0, #9                     
    002011DA:  lsls     r0, r1, #1                     
    002011DC:  lsls     r0, r5, #5                     
    002011DE:  lsls     r0, r7, #1                     
    002011E0:  ldrd     r0, r1, [r1, #8]!              
    002011E4:  lsls     r1, r5, #4                     
    002011E6:  lsrs     r1, r2                         
    002011E8:  lsls     r3, r7, #1                     
    002011EA:  stm      r0!, {r5, r6, r7}              
    002011EC:  asrs     r4, r7, #1                     
    002011EE:  lsls     r0, r5, #0x10                  
    002011F0:  stm      r0!, {r1, r4, r6, r7}          
    002011F2:  asrs     r1, r6, #3                     
    002011F4:  asrs     r1, r0, #0x20                  
    002011F6:  muls     r4, r0, r4                     
    002011F8:  adr      r3, #0x3d8                     
    002011FA:  strb     r4, [r7, #2]                   
    002011FC:  lsls     r7, r0, #1                     
    002011FE:  adr      r4, #0                         
    00201200:  movs     r0, #6                         
    00201202:  add      r4, sp, #0                     
    00201204:  movs     r0, #6                         
    00201206:  addw     r0, r0, #0xa54                 
    0020120A:  cmp      r5, #0                         
    0020120E:  cmp      r3, #0x47                      
    00201210:  ldr      r7, [pc, #0x120]                 // = 0x511C4922
    00201212:  ldr      r0, [pc, #0x3d0]                 // = 0x824610D8
    00201214:  lsls     r5, r2, #0x10                  
    00201216:  cmp      r0, #0x68                      
    00201218:  lsls     r1, r5, #1                     
    0020121A:  movs     r7, r4                         
    0020121C:  lsrs     r0, r6, #0x1f                  
    0020121E:  lsls     r0, r0, #8                     
    00201220:  lsls     r0, r5, #8                     
    00201222:  lsls     r0, r2, #3                     
    00201224:  cmp      r0, #0x20                      
    00201226:  ldr      r4, [r4, #4]                   
    00201228:  svc      #0x64                          
    0020122A:  ldr      r0, [sp, #0x3e0]               
    0020122C:  svc      #0x80                          
    0020122E:  ldr      r0, [sp, #0x3e0]               
    00201230:  bhi      #0x201154                      
    00201232:  lsls     r0, r7, #3                     
    00201234:  subs     r0, #0                         
    00201236:  bls      #0x2011ac                      
    00201238:  lsls     r0, r7, #3                     
    0020123A:  adr      r0, #0                         
    0020123C:  lsls     r2, r0, #0xd                   
    0020123E:  movs     r2, #0xd1                      
    00201240:  lsls     r0, r1, #1                     
    00201242:  stm      r0!, {r3, r5, r6}              
    00201244:  adds     r5, #3                         
    00201246:  movs     r1, #0xd4                      
    00201248:  movs     r2, #0x48                      
    0020124A:  lsls     r1, r1, #1                     
    0020124C:  lsrs     r0, r5, #5                     
    0020124E:  movs     r1, #0x78                      
    00201250:  lsrs     r6, r1, #1                     
    00201252:  asrs     r3, r0, #5                     
    00201254:  cmp      r0, #0xd0                      
    00201256:  lsls     r1, r5, #1                     
    00201258:  lsrs     r0, r6, #0x1f                  
    0020125A:  lsls     r0, r0, #8                     
    0020125C:  lsls     r0, r5, #8                     
    0020125E:  lsls     r0, r2, #0xb                   
    00201260:  movs     r5, #0x20                      
    00201262:  ldr      r0, [sp, #0x3d8]               
    00201264:  ldrd     r6, r4, [lr], #0x1a0           
    00201268:  ands     r1, r4                         
    0020126A:  ldr      r0, [pc, #0x70]                  // = 0xF80004C2
    0020126C:  subs     r3, r0, r5                     
    0020126E:  cbz      r1, #0x201284                  
    00201272:  rors     r0, r6                         
    00201274:  adds     r1, #0x1c                      
    00201276:  asrs     r0, r4, #0x11                  
    00201278:  movs     r7, #0xe0                      
    0020127A:  ldrh     r6, [r6, #0x3e]                
    0020127C:  adds     r5, r7, r3                     
    0020127E:  adds     r0, r1, r1                     
    00201280:  lsls     r1, r1, #1                     
    00201282:  lsrs     r0, r5, #5                     
    00201284:  ldr      r0, [pc, #0x1a0]                 // = 0x144A64D2
    00201286:  asrs     r3, r0, #0x1d                  
    00201288:  lsrs     r1, r1, #5                     
    0020128A:  lsls     r0, r1, #2                     
    0020128C:  lsls     r3, r7, #7                     
    0020128E:  asrs     r2, r6, #0x1b                  
    00201290:  lsls     r1, r1, #1                     
    00201292:  strh     r3, [r5, #6]                   
    00201294:  lsrs     r0, r2, #4                     
    00201296:  eors     r0, r5                         
    00201298:  sxth     r0, r0                         
    0020129A:  b.w      #0x7fc482                      
    002012A0:  adds     r2, #0xf0                      
    002012A2:  stm      r5!, {r5, r6}                  
    002012A4:  ldr      r4, [sp, #0x3e0]               
    002012A6:  adds     r0, #0                         
    002012A8:  ldr      r0, [r5, #4]                   
    002012AA:  ldm      r0!, {r1, r5, r6}              
    002012AC:  lsls     r0, r7, #3                     
    002012AE:  ldm      r1!, {r4, r5, r6}              
    002012B0:  lsls     r0, r7, #3                     
    002012B2:  pop      {r6, pc}                       
    002012B6:  lsls     r7, r0, #0x1a                  
    002012B8:  lsrs     r1, r1, #1                     
    002012BA:  strb     r0, [r6, #1]                   
    002012BC:  lsls     r7, r0, #1                     
    002012BE:  lsrs     r0, r0, #0x20                  
    002012C0:  movs     r0, #0xe                       
    002012C2:  beq      #0x2012c6                      
    002012C4:  movs     r0, #0xc                       
    002012C6:  bmi      #0x2012ca                      
    002012C8:  movs     r0, #0xc                       
    002012CA:  add      sp, #0                         
    002012CC:  movs     r0, #0xc                       
    002012CE:  asrs     r0, r0, #0x20                  
    002012D0:  movs     r0, #0xe                       
    002012D4:  movs     r0, #0x54                      
    002012D8:  movs     r0, #0x10                      
    002012DC:  lsls     r2, r0, #0x13                  
    002012DE:  strb.w   r2, [r0, r0, lsl #1]           
    002012E2:  b        #0x2012e6                      
    002012E4:  movs     r0, #0x10                      
    002012E6:  ldrh     r0, [r0, #0x20]                
    002012E8:  movs     r0, #0xc                       
    002012EC:  movs     r0, #0x10                      
    002012EE:  ldrb     r0, [r0, #0x1c]                
    002012F0:  ldr      r7, [pc, #0x2d4]                 // = 0x70002055
    002012F2:  ldr      r0, [pc, #0x3d0]                 // = 0x04FA0724
    002012F4:  bhs      #0x20131c                      
    002012F6:  stm      r0!, {r3, r4, r5, r6, r7}      
    002012FA:  ldr      r6, [pc, #0x1c]                  // = 0x252000D1
    002012FC:  adr      r0, #0x340                     
    002012FE:  str      r1, [sp, #0x120]               
    00201300:  lsls     r2, r5, #1                     
    00201302:  lsrs     r0, r5, #5                     
    00201304:  ldr      r7, [pc, #0x1c]                  // = 0x111A0868
    00201306:  lsls     r0, r6, #3                     
    00201308:  lsls     r5, r0, #0xc                   
    0020130A:  lsls     r5, r2, #3                     
    0020130C:  movs     r2, #0x20                      
    0020130E:  blo      #0x2012fe                      
    00201310:  subs     r2, #0xfb                      
    00201312:  asrs     r0, r4, #7                     
    00201314:  strh     r2, [r5, #0xa]                 
    00201316:  lsls     r2, r0, #0xd                   
    00201318:  lsls     r1, r2, #3                     
    0020131A:  movs     r5, #0x20                      
    0020131C:  add      r7, sp, #0x3d8                 
    0020131E:  adds     r3, #0xfc                      
    00201320:  ldr      r0, [sp, #0x380]               
    00201322:  lsrs     r1, r1, #5                     
    00201324:  lsrs     r0, r5, #1                     
    00201326:  asrs     r2, r3, #4                     
    00201328:  lsls     r1, r5, #5                     
    0020132A:  lsrs     r0, r6, #0x1f                  
    0020132C:  lsls     r1, r0, #8                     
    0020132E:  lsrs     r1, r5, #0x18                  
    00201330:  bne      #0x2012d6                      
    00201332:  str      r0, [r5, #0x44]                
    00201334:  ldr      r1, [pc, #0x88]                  // = 0x10477020
    00201336:  str      r4, [r3, r4]                   
    00201338:  adr      r1, #0x10c                     
    0020133A:  lsls     r3, r7, #3                     
    0020133C:  lsls     r2, r0, #4                     
    0020133E:  lsls     r3, r7, #0x17                  
    00201340:  movs     r1, r4                         
    00201342:  ldr      r7, [pc, #0x8c]                  // = 0x0B2800FF
    00201344:  asrs     r4, r6, #0x1b                  
    00201346:  muls     r2, r4, r2                     
    00201348:  strh     r6, [r6, #0x36]                
    0020134A:  lsls     r3, r7, #0x13                  
    0020134C:  asrs     r6, r0, #0x19                  
    0020134E:  ldrh     r0, [r4, #0x2e]                
    00201350:  ldrh     r1, [r1, #0x3a]                
    00201352:  lsrs     r4, r1, #5                     
    00201354:  movs     r4, #0x68                      
    00201356:  adr      r1, #0x1a0                     
    00201358:  lsls     r3, r7, #3                     
    0020135A:  lsls     r2, r0, #4                     
    0020135C:  lsls     r3, r7, #0x17                  
    0020135E:  ldrh     r1, [r4, #0x10]                
    00201360:  cmp      r3, #0x4a                      
    00201362:  asrs     r6, r0, #9                     
    00201364:  str      r0, [r5, #0x24]                
    00201366:  muls     r3, r0, r3                     
    00201368:  strb     r6, [r6, #0x1b]                
    0020136A:  lsls     r3, r7, #0x13                  
    0020136C:  lsls     r0, r0, #0x18                  
    0020136E:  lsls     r0, r2, #0xb                   
    00201370:  movs     r0, #0xa9                      
    00201372:  movs     r5, #0x46                      
    00201374:  ldrh     r6, [r6, #0x3e]                
    00201376:  lsls     r3, r7, #0xb                   
    00201378:  movs     r5, #0xa8                      
    0020137A:  subs     r2, #0xf6                      
    0020137C:  movs     r0, #0xfc                      
    0020137E:  movs     r2, #0x46                      
    00201380:  ldr      r2, [sp, #0x3d8]               
    00201382:  movs     r0, #0xfb                      
    00201384:  subs     r3, #0x46                      
    00201386:  asrs     r6, r6, #0xf                   
    00201388:  ldr      r7, [pc, #0x3e0]                 // = 0x2C00200E
    0020138A:  blx      #0xaf5e0c                        // ROM
    0020138E:  lsls     r1, r5, #3                     
    00201390:  lsls     r5, r0, #4                     
    00201392:  ldrb     r6, [r0, #0x1d]                
    00201394:  lsls     r0, r1, #5                     
    00201396:  lsls     r0, r4, #5                     
    00201398:  sbcs     r1, r3                         
    0020139A:  ldrb     r0, [r4, #0x1d]                
    0020139C:  asrs     r5, r7, #2                     
    0020139E:  ldrb     r5, [r6, #0x16]                
    002013A0:  cmp      r0, #0x48                      
    002013A2:  add      r3, sp, #0x3d8                 
    002013A4:  ldrb     r1, [r7, #0x1b]                
    002013A6:  ldrb     r1, [r1, #0x11]                
    002013A8:  ldr      r0, [pc, #0x120]                 // = 0x43701AD1
    002013AA:  ldrb     r1, [r4, #0x15]                
    002013AC:  ldr      r7, [pc, #0x124]                 // = 0x42280100
    002013B0:  lsrs     r0, r6, #1                     
    002013B2:  asrs     r0, r0, #2                     
    002013B4:  ldrb     r5, [r7, #0x12]                
    002013B6:  lsls     r0, r1, #1                     
    002013B8:  lsrs     r0, r7, #1                     
    002013BA:  lsls     r1, r6, #6                     
    002013BC:  strb     r0, [r4]                       
    002013BE:  lsls     r7, r0, #0xd                   
    002013C0:  strb     r0, [r4]                       
    002013C2:  asrs     r7, r0, #1                     
    002013C4:  ldrb     r5, [r6, #2]                   
    002013C6:  lsls     r0, r1, #1                     
    002013C8:  lsls     r0, r7, #1                     
    002013CA:  lsrs     r0, r5, #0x1c                  
    002013CC:  subs     r2, #0xd1                      
    002013D0:  lsls     r7, r7, #3                     
    002013D2:  lsrs     r0, r5, #0xc                   
    002013D4:  strb     r0, [r2, #0x17]                
    002013D6:  lsls     r0, r1, #1                     
    002013D8:  eors     r0, r5                         
    002013DA:  lsls     r7, r0, #0xc                   
    002013DC:  pop      {r0, r2, r4, r6, r7, pc}       
    002013DE:  asrs     r0, r5, #3                     
    002013E0:  cmp      r0, #0x40                      
    002013E2:  ble      #0x2013d2                      
    002013E4:  pop      {r1, r3, r4, r5, r7, pc}       
    002013E6:  asrs     r0, r5, #3                     
    002013E8:  movs     r5, #0x40                      
    002013EA:  adds     r1, #0xf6                      
    002013EC:  asrs     r6, r7, #2                     
    002013EE:  cmp      r5, #0xbd                      
    002013F2:  lsls     r1, r0, #0x15                  
    002013F4:  lsls     r6, r0, #1                     
    002013F8:  ldrh     r5, [r6, #0x26]                
    002013FA:  strh     r2, [r7, #6]                   
    002013FE:  ldrh     r5, [r6, #0x26]                
    00201400:  ldr      r7, [pc, #0x3e8]                 // = 0x132B00D0
    00201402:  ldr      r0, [pc, #0x3d0]                 // = 0x022A10D0
    00201404:  lsls     r0, r2, #4                     
    00201406:  lsls     r1, r5, #5                     
    00201408:  lsrs     r0, r6, #0x1f                  
    0020140A:  lsls     r1, r0, #8                     
    0020140C:  movs     r1, #0x29                      
    0020140E:  str      r0, [r2, #0x5c]                
    00201410:  str      r3, [r1, #0x74]                
    00201412:  str      r6, [r1, #0x74]                
    00201414:  cmp      r1, sb                         
    00201416:  subs     r1, r7, r2                     
    00201418:  ldrh     r0, [r7, r1]                   
    0020141A:  str      r3, [r7, #0x68]                
    0020141C:  adds     r2, #0x4f                      
    0020141E:  subs     r7, #0x68                      
    00201420:  subs     r2, #0x78                      
    00201422:  lsrs     r4, r0, #0x1d                  
    00201424:  rev16    r0, r5                         
    00201426:  movs     r4, #0x42                      
    00201428:  str      r2, [r2, #0x4c]                
    0020142A:  asrs     r2, r1, #0x11                  
    0020142C:  lsls     r0, r5, #5                     
    0020142E:  lsrs     r4, r5, #4                     
    00201430:  str      r1, [r2, #0x3c]                
    00201432:  str      r4, [r1, #0x34]                
    00201434:  movs     r4, #0x4f                      
    00201436:  subs     r7, #0x68                      
    00201438:  subs     r4, #0x68                      
    0020143A:  lsrs     r4, r0, #0x1d                  
    0020143C:  pop      {r3, r5, r6}                   
    0020143E:  lsrs     r2, r0, #1                     
    00201440:  lsls     r0, r3, #0xb                   
    00201442:  asrs     r4, r4, #0x10                  
    00201444:  lsrs     r0, r4, #5                     
    00201446:  lsls     r0, r5, #5                     
    00201448:  adds     r1, #0x22                      
    0020144A:  subs     r0, r4, r1                     
    0020144C:  lsls     r0, r6, #1                     
    0020144E:  stm      r1!, {r0, r5}                  
    00201450:  lsls     r1, r4, #0x11                  
    00201452:  lsrs     r0, r4                         
    00201454:  pop      {r1, r2, r6, pc}               
    00201456:  bl       #0x2e9adc                        // ROM
    0020145A:  str      r5, [r6, #0x1c]                
    0020145C:  stm      r1!, {r1, r3, r4, r5, r7}      
    0020145E:  lsls     r1, r5, #5                     
    00201460:  stc2     p9, c4, [sb], #-0x344          
    00201464:  lsrs     r1, r1, #5                     
    00201466:  adcs     r0, r5                         
    00201468:  stm      r2!, {r0, r5, r6}              
    0020146A:  lsls     r1, r4, #5                     
    0020146C:  strh     r4, [r4, #8]                   
    0020146E:  lsls     r1, r5, #1                     
    00201470:  stc2     p0, c4, [sb], #-0x344          
    00201476:  strh     r5, [r6, r7]                   
    00201478:  lsls     r2, r7, #3                     
    0020147A:  lsls     r5, r5, #0x1c                  
    0020147C:  lsls     r1, r2, #3                     
    0020147E:  lsls     r4, r5, #0x14                  
    00201480:  pop      {r4, r6, r7, pc}               
    00201484:  eors     r1, r0                         
    00201486:  bgt      #0x20146e                      
    00201488:  movs     r5, #0x50                      
    0020148A:  ldm      r2, {r1, r2, r4, r5, r6, r7}   
    0020148C:  pop      {r2, r3, r4, r5, r7, pc}       
    00201490:  cmp      r5, #0x81                      
    00201492:  bl       #0x2eab24                        // ROM
    00201496:  subs     r5, #0xf5                      
    00201498:  strh     r2, [r7, #0xe]                 
    0020149C:  subs     r5, #0xf5                      
    0020149E:  ldr      r7, [pc, #0x3e8]                 // = 0x00000000
    002014A0:  ldr      r0, [pc, #0x3d0]                 // = 0x00000000
    002014A2:  bgt      #0x2014de                      
    002014A4:  asrs     r0, r7, #3                     
    002014A6:  subs     r7, #0                         
    002014A8:  lsls     r3, r1, #1                     
    002014AA:  lsrs     r0, r6, #0x1f                  
    002014AC:  movs     r0, r0                         
    002014AE:  lsls     r2, r4, #8                     
    002014B0:  lsls     r0, r5, #4                     
    002014B2:  subs     r1, r2, r3                     
    002014B4:  strh     r0, [r6, r5]                   
    002014B6:  adds     r0, r4, r3                     
    002014B8:  lsls     r0, r7, #1                     
    002014BA:  str      r0, [r5, r0]                   
    002014BC:  bgt      #0x201460                      
    002014BE:  adds     r0, r7, r3                     
    002014C0:  lsls     r0, r0, #4                     
    002014C2:  lsls     r0, r5, #0x14                  
    002014C4:  bgt      #0x20146a                      
    002014C6:  adds     r0, r7, r3                     
    002014C8:  lsls     r0, r0, #4                     
    002014CA:  lsls     r0, r5, #4                     
    002014CC:  subs     r1, r2, r3                     
    002014CE:  muls     r0, r6, r0                     
    002014D0:  bgt      #0x201494                      
    002014D2:  adds     r0, r7, r3                     
    002014D4:  lsls     r0, r0, #4                     
    002014D6:  tst      r0, r5                         
    002014D8:  bgt      #0x20148e                      
    002014DA:  asrs     r0, r7, #3                     
    002014DC:  movs     r0, r0                         
    002014DE:  lsrs     r0, r6, #0x1f                  
    002014E0:  lsls     r0, r0, #8                     
    002014E2:  subs     r4, #0x28                      
    002014E4:  adds     r5, #0xd0                      
    002014E6:  cmp      r3, #0x4c                      
    002014E8:  movs     r0, #0x4f                      
    002014EA:  svc      #0x68                          
    002014EC:  ldm      r0!, {r3, r4, r5, r6, r7}      
    002014EE:  subs     r7, #0x80                      
    002014F0:  lsls     r7, r3, #8                     
    002014F2:  lsls     r0, r5, #0x14                  
    002014F4:  subs     r2, #0xd1                      
    002014F6:  lsls     r0, r6, #0xd                   
    002014F8:  movs     r0, #0x20                      
    002014FA:  lsls     r0, r4, #5                     
    002014FC:  ldrh     r0, [r4]                       
    002014FE:  lsls     r0, r7, #3                     
    00201500:  bgt      #0x201504                      
    00201502:  adds     r0, r7, r3                     
    00201504:  adds     r0, #0x10                      
    00201506:  subs     r0, #0x4e                      
    00201508:  mov      r0, pc                         
    0020150A:  movs     r0, #0xf8                      
    0020150C:  ands     r0, r2                         
    0020150E:  stm      r0!, {r2, r3, r4}              
    00201510:  lsrs     r2, r6, #0xa                   
    00201512:  add      sp, #0x84                      
    00201516:  lsls     r5, r6, #7                     
    00201518:  asrs     r3, r7, #0x17                  
    0020151A:  subs     r0, #0                         
    0020151C:  ldm      r4, {r4, r5, r6}               
    0020151E:  adds     r0, r7, #3                     
    00201520:  subs     r0, r4, r0                     
    00201522:  movs     r0, #0x70                      
    00201524:  lsls     r0, r5, #0xd                   
    00201526:  lsls     r0, r5, #0x18                  
    00201528:  subs     r0, #0xd1                      
    0020152A:  add      r0, sp, #0x1e0                 
    0020152C:  cmp      r0, #0xb9                      
    0020152E:  movs     r2, #0x20                      
    00201530:  ldrh     r0, [r4, #2]                   
    00201532:  lsls     r0, r7, #3                     
    00201534:  movs     r0, r0                         
    00201536:  ldrb     r0, [r4, #3]                   
    00201538:  asrs     r1, r7, #0xe                   
    0020153A:  lsls     r3, r1, #1                     
    0020153C:  subs     r0, r4, r0                     
    0020153E:  ldrsb    r0, [r4, r1]                   
    00201540:  movs     r0, #0xf8                      
    00201542:  adds     r0, r4, #0                     
    00201544:  eors     r0, r5                         
    00201546:  movs     r2, #0x1c                      
    00201548:  subs     r4, r0, r1                     
    0020154A:  lsrs     r0, r4, #9                     
    0020154E:  str      r3, [r3, r3]                   
    00201550:  add      sp, #0x74                      
    00201554:  adds     r0, r6, r3                     
    00201556:  lsls     r0, r4, #9                     
    00201558:  lsls     r0, r4, #7                     
    0020155A:  subs     r2, #0x20                      
    0020155C:  strh     r6, [r6, #0x16]                
    0020155E:  ldr      r0, [pc, #0x3fc]                 // = 0x0000BD70
    00201560:  pop      {r1, r2, r6, pc}               
    00201562:  bl       #0x2e9bf4                        // ROM
    00201566:  blt      #0x201554                      
    00201568:  ldr      r7, [pc, #0x2e4]                 // = 0x00000000
    0020156A:  ldr      r0, [pc, #0x3d0]                 // = 0x60084817
    0020156C:  movs     r0, r2                         
    0020156E:  lsls     r1, r5, #1                     
    00201570:  lsrs     r0, r6, #0x1f                  
    00201572:  lsls     r0, r0, #8                     
    00201574:  lsls     r0, r5, #8                     
    00201576:  lsls     r0, r2, #0xb                   
    00201578:  movs     r5, #0x20                      
    0020157A:  lsrs     r6, r6, #0x13                  
    0020157C:  strb     r5, [r7, #2]                   
    0020157E:  bgt      #0x201610                      
    00201580:  movs     r0, #0xc                       
    00201582:  b        #0x200d86                      
    00201584:  movs     r0, #0xc                       
    00201588:  movs     r0, #0x10                      
    0020158A:  b        #0x20158e                      
    0020158C:  movs     r0, #0x10                      
    0020158E:  strb.w   r2, [r0, r0, lsl #1]           
    00201592:  movs     r0, r0                         
    00201594:  lsls     r1, r4, #3                     
    00201596:  lsls     r0, r4, #3                     
    00201598:  movs     r0, #0x55                      
    0020159A:  strh     r0, [r0, #8]                   
    0020159C:  movs     r0, #0x4f                      
    0020159E:  add      r0, sp, #0                     
    002015A0:  movs     r0, #0x22                      
    002015A2:  add      sp, #0                         
    002015A4:  movs     r0, #0xc                       
    002015A6:  ble      #0x2015aa                      
    002015A8:  movs     r0, #0x10                      
    002015AC:  movs     r0, #0xc                       
    002015AE:  b        #0x200db2                      
    002015B0:  movs     r0, #0x10                      
    002015B4:  movs     r0, #0x10                      
    002015B6:  bgt      #0x2015ba                      
    002015B8:  movs     r0, #0x10                      
    002015BC:  movs     r0, #0x10                      
    002015BE:  and      r0, r0, #0x10001000            
    002015C2:  and      r0, r0, #0x90000               
    002015C6:  cmp      r0, #0                         
    002015C8:  movs     r0, #0x55                      
    002015CA:  strb     r0, [r0]                       
    002015CC:  lsrs     r5, r6, #0x12                  
    002015CE:  adds     r6, r0, #5                     
    002015D0:  lsls     r6, r0, #1                     
    002015D2:  lsrs     r3, r4, #0x18                  
    002015D4:  asrs     r1, r1, #1                     
    002015D6:  strh     r0, [r4, #0x16]                
    002015D8:  lsrs     r2, r0, #0x15                  
    002015DA:  cbz      r1, #0x201612                  
}

/* ---- sub_002015DC @ 0x002015DC ---- */
// Called by: app_create
void sub_002015DC() {
    002015DC:  lsls     r0, r7, #0x17                  
    002015DE:  movs     r0, #0x20                      
    002015E0:  adr      r2, #0x118                     
    002015E2:  lsls     r2, r0, #1                     
    002015E4:  asrs     r0, r3, #3                     
    002015E6:  strh     r6, [r0, #0x12]                
    002015E8:  bne      #0x201550                      
    002015EA:  lsls     r0, r7, #7                     
    002015EC:  cmp      r0, #0x10                      
    002015EE:  adds     r6, r0, #5                     
    002015F0:  udf      #0xf6                          
    002015F2:  cmp      r3, #0xf9                      
    002015F4:  lsls     r1, r3, #0xc                   
    002015F6:  ldm      r1!, {r5, r6, r7}              
    002015F8:  lsrs     r5, r3, #8                     
    002015FA:  vselgt.f64 d30, d8, d26                 
    002015FE:  adds     r1, r2, r3                     
    00201600:  strb     r6, [r0, #1]                   
    00201602:  add      r7, sp, #0x2f4                 
    00201604:  subs     r3, #0xf2                      
    00201606:  lsls     r0, r0, #8                     
    00201608:  lsrs     r1, r1, #1                     
    0020160A:  strb     r0, [r4, #1]                   
    0020160C:  lsls     r7, r0, #1                     
    00201610:  movs     r0, #0x54                      
    00201612:  adds     r0, r0, r0                     
    00201614:  movs     r0, #0xa                       
    00201616:  asrs     r0, r0, #0x20                  
    00201618:  lsls     r5, r6, #0x1e                  
    0020161A:  lsls     r1, r1, #9                     
    0020161C:  lsrs     r5, r3, #0xc                   
    0020161E:  adds     r3, #0x68                      
    00201620:  lsls     r1, r6, #2                     
    00201622:  uxth     r0, r1                         
    00201624:  lsls     r0, r7, #7                     
    00201626:  stm      r0!, {r4}                      
    00201628:  bhs      #0x201668                      
    0020162A:  ldr      r0, [sp, #0x70]                
    0020162C:  lsls     r7, r0, #5                     
    0020162E:  lsrs     r0, r4, #0x1b                  
    00201630:  lsrs     r6, r6, #7                     
    00201632:  lsls     r3, r7, #3                     
    00201634:  asrs     r0, r4, #0x20                  
    00201638:  movs     r0, #6                         
    0020163A:  cmp      r5, #0                         
    0020163C:  stc2l    p0, c8, [sb], #0x11c           
    00201640:  lsls     r6, r0, #1                     
    00201642:  cmp      r0, #0x25                      
    00201644:  movs     r5, #0x46                      
    00201646:  subs     r6, r6, r3                     
    00201648:  ldr      r0, [pc, #0x3ec]                 // = 0x30324913
    0020164A:  lsls     r0, r1, #1                     
    0020164C:  lsls     r0, r7, #1                     
    0020164E:  ldrb     r0, [r5, #0x14]                
    00201650:  svc      #0xd0                          
    00201652:  adds     r0, r7, #3                     
    00201654:  lsls     r1, r2, #6                     
    00201658:  lsls     r1, r6, #3                     
    0020165A:  subs     r6, #0xf                       
    0020165C:  ldr      r1, [sp, #0x340]               
    0020165E:  subs     r6, #0xf8                      
    00201660:  ldr      r0, [pc, #0x40]                  // = 0x211020F8
    00201662:  ldr      r1, [pc, #0x118]                 // = 0x2400200B
    00201664:  lsls     r1, r6                         
    00201666:  strb     r2, [r6, #7]                   
    0020166A:  blt.w    #0x23cc50                      
    0020166E:  ldr      r2, [pc, #0x238]                 // = 0xF000F938
    00201670:  ldr      r7, [pc, #0x10c]                 // = 0x0000200B
    00201672:  ldm      r0!, {r2, r4, r5, r6, r7}      
    00201674:  sxtb     r1, r4                         
    00201678:  subs     r6, #0xf6                      
    0020167A:  strh     r1, [r1, #0xa]                 
    0020167C:  ldrh     r6, [r0, #0x12]                
    0020167E:  lsrs     r6, r0, #0x11                  
    00201680:  adds     r0, r5, r1                     
    00201682:  b        #0x201a46                      
    00201684:  movs     r0, #0x7a                      
    00201686:  lsls     r7, r3, #4                     
    00201688:  asrs     r1, r5, #0xc                   
    0020168A:  strh     r1, [r2, #0x16]                
    0020168C:  lsls     r3, r7, #0x1d                  
    0020168E:  lsls     r2, r7, #0xb                   
    00201690:  lsrs     r1, r6, #0x17                  
    00201692:  ldr      r1, [sp, #0x10c]               
    00201694:  subs     r6, #0xf8                      
    00201696:  str      r0, [r2, #0x10]                
    00201698:  lsls     r1, r6, #6                     
    0020169A:  ldrh     r0, [r5, #0x12]                
    0020169C:  lsls     r2, r5, #1                     
    0020169E:  str      r0, [sp, #0x84]                
    002016A0:  subs     r0, #0x47                      
    002016A2:  str      r0, [sp, #0x2c4]               
    002016A4:  movs     r0, #0xf8                      
    002016A6:  movs     r1, #0x10                      
    002016A8:  sbcs     r1, r6                         
    002016AA:  adds     r1, #0x8b                      
    002016AC:  adcs     r4, r0                         
    002016AE:  movs     r0, #0x83                      
    002016B0:  lsls     r6, r6, #0x1b                  
    002016B2:  movs     r4, #0xfc                      
    002016B4:  strb     r0, [r5, r1]                   
    002016B6:  b        #0x200f44                      
    002016B8:  ldrb     r1, [r2, #0x17]                
    002016BA:  ldr      r1, [r6, #0x18]                
    002016BC:  eors     r6, r0                         
    002016BE:  movs     r5, #0x46                      
    002016C0:  ldrd     r0, r1, [r6, #0x3e4]!          
    002016C4:  lsls     r4, r4, #0x1c                  
    002016C6:  lsls     r2, r7, #0x13                  
    002016C8:  cmp      r0, #0xf0                      
    002016CA:  lsls     r2, r0, #0xd                   
    002016CC:  ldr      r0, [r2, #0x1c]                
    002016CE:  movs     r0, #0x46                      
    002016D0:  movs     r5, #0x46                      
    002016D2:  pop      {r1, r2, r4, r5, r6, r7, pc}   
    002016D4:  str      r2, [r7, #0x4c]                
    002016D6:  lsls     r4, r3, #0xc                   
    002016D8:  bic      r1, ip, #0x69800               
    002016DC:  adr      r5, #0x3d8                     
    002016DE:  bls      #0x2016d4                      
    002016E0:  adds     r0, r7, #3                     
    002016E2:  ldr      r5, [pc, #0]                     // = 0x46F44F46
    002016E4:  ldr      r7, [pc, #0x118]                 // = 0x06060E0E
    002016E6:  mov      ip, lr                         
    002016E8:  ldr      r0, [sp, #0x50]                
    002016EA:  sbcs     r1, r6                         
    002016EC:  lsls     r5, r7, #9                     
    002016EE:  asrs     r1, r5, #0x20                  
    002016F0:  bmi      #0x201696                      
    002016F2:  push     {r3, r4, r5, r6, r7}           
    002016F4:  strh     r5, [r2]                       
    002016F6:  stm      r1!, {r0, r1, r3, r4, r5, r6}  
    002016F8:  lsls     r3, r6, #7                     
    002016FA:  ldr      r6, [r2, #0x20]                
    002016FC:  adds     r1, #0x46                      
    002016FE:  movs     r5, #0x46                      
    00201700:  subs     r6, r6, #7                     
    00201702:  lsls     r2, r7, #3                     
    00201704:  ldr      r0, [r3, #0x18]                
    00201706:  lsls     r6, r0, #1                     
    00201708:  lsls     r0, r6, #0xf                   
    0020170A:  movs     r0, r0                         
    0020170C:  adds     r0, #0x90                      
    0020170E:  movs     r5, #0x46                      
    00201710:  ldr      r6, [sp, #0x3d8]               
    00201712:  lsls     r2, r7, #3                     
    00201716:  strd     r1, r7, [r1], #-0x180          
    0020171A:  lsls     r0, r1, #5                     
    0020171C:  strh     r0, [r5, #0xa]                 
    0020171E:  lsls     r2, r0, #5                     
    00201720:  movs     r1, #0xd0                      
    00201722:  movs     r4, #0xf6                      
    00201724:  movs     r0, #0xf9                      
    00201726:  sub      sp, #0x1d8                     
    00201728:  asrs     r6, r7, #0x13                  
    0020172A:  lsrs     r1, r1, #1                     
    0020172C:  ldrh     r0, [r5, #2]                   
    0020172E:  lsls     r2, r0, #9                     
    00201730:  lsls     r0, r2, #3                     
    00201732:  movs     r0, #0x1f                      
    00201734:  add      lr, lr                         
    00201736:  asrs     r6, r7, #7                     
    00201738:  lsls     r0, r1, #5                     
    0020173A:  strh     r0, [r5, #0xa]                 
    0020173C:  lsls     r2, r0, #0xd                   
    0020173E:  movs     r0, #0xd0                      
    00201740:  cmp      r1, #0xf6                      
    00201742:  movs     r0, #0xfb                      
    00201744:  udf      #0xf6                          
    00201746:  subs     r0, #0xfa                      
    00201748:  b        #0x20178c                      
    0020174A:  lsls     r0, r4, #1                     
    0020174C:  lsrs     r0, r4, #0xf                   
    0020174E:  str      r5, [sp, #0x380]               
    00201750:  subs     r3, #0xf8                      
    00201752:  lsls     r0, r0, #4                     
    00201754:  lsls     r0, r5, #0x1c                  
    00201756:  lsrs     r1, r2, #0xb                   
    00201758:  lsls     r0, r1, #0xd                   
    0020175A:  lsrs     r0, r1, #0xa                   
    0020175C:  lsls     r0, r1, #9                     
    0020175E:  lsls     r0, r7, #9                     
    00201760:  asrs     r0, r4, #4                     
    00201762:  movs     r0, #0x46                      
    00201764:  strh     r6, [r6, #0x16]                
    00201766:  pop      {r3, r4, r5, r6, r7, pc}       
    00201768:  stc2l    p13, c14, [r8], #0x21c         
    0020176C:  movs     r0, #0xe                       
    0020176E:  cmp      r4, #0                         
    00201770:  movs     r0, #0x22                      
    00201772:  asrs     r0, r0, #0x10                  
    00201774:  movs     r0, #0xb                       
    00201776:  adds     r0, r0, #0                     
    00201778:  movs     r0, #0xb                       
    0020177A:  cmp      r4, #0                         
    0020177C:  movs     r0, #0xb                       
    0020177E:  movs     r4, #0                         
    00201780:  movs     r0, #0xb                       
    00201782:  movs     r0, r0                         
    00201784:  movs     r0, #0xb                       
    00201786:  add.w    r0, r0, #0xa000a00             
    0020178A:  strb     r0, [r0]                       
    0020178C:  lsls     r5, r6, #0x12                  
    0020178E:  str      r6, [r0, #0x14]                
    00201790:  eors     r0, r5                         
    00201792:  lsrs     r0, r1, #0x16                  
    00201794:  cmp      r2, #0x7b                      
    00201796:  str      r6, [r6, #0x3c]                
    00201798:  lsls     r4, r7, #7                     
    0020179A:  subs     r6, r4, r0                     
    0020179C:  lsls     r5, r5, #0x18                  
    0020179E:  cmp      r0, #0xd8                      
    002017A0:  str      r1, [r6, #0x18]                
    002017A2:  lsls     r0, r5, #1                     
    002017A4:  lsrs     r0, r6, #7                     
    002017A6:  lsrs     r0, r7, #3                     
    002017A8:  lsls     r1, r6, #2                     
    002017AA:  lsls     r6, r4, #0xc                   
    002017AC:  lsls     r0, r4, #3                     
    002017AE:  str      r1, [r4]                       
    002017B0:  subs     r6, #0x68                      
    002017B2:  ldrd     r3, r0, [r6], #0x3e4           
    002017B6:  strb     r6, [r0, #1]                   
    002017B8:  strb     r5, [r7, #2]                   
    002017BA:  lsls     r5, r6, #0x12                  
    002017BC:  lsls     r6, r0, #5                     
    002017BE:  movs     r0, r4                         
    002017C0:  str      r4, [sp, #0x94]                
    002017C2:  add      r4, sp, #0x3e0                 
    002017C4:  cmp      r3, #0x20                      
    002017C6:  strh     r6, [r0, r1]                   
    002017C8:  lsrs     r1, r6, #0x1e                  
    002017CA:  lsrs     r2, r5, #0x20                  
    002017CC:  lsls     r0, r2, #7                     
    002017CE:  lsls     r2, r5, #0x18                  
    002017D0:  lsrs     r0, r2, #0x1b                  
    002017D2:  lsls     r2, r5, #0x10                  
    002017D4:  asrs     r0, r2, #3                     
    002017D6:  lsls     r2, r5, #8                     
    002017D8:  lsls     r0, r2, #0x1f                  
    002017DA:  movs     r2, r5                         
    002017DC:  lsls     r0, r2, #7                     
    002017DE:  adr      r2, #0x8c                      
    002017E0:  strh     r6, [r1, r2]                   
    002017E2:  adds     r7, r0, r4                     
    002017E4:  str      r4, [sp, #0x354]               
    002017E6:  stm      r1!, {r3, r4, r5, r6, r7}      
    002017E8:  lsls     r0, r4, #4                     
    002017EA:  lsls     r2, r5, #4                     
    002017EC:  lsls     r0, r2, #3                     
    002017EE:  asrs     r3, r5, #0xc                   
    002017F0:  lsrs     r0, r2, #7                     
    002017F2:  ldrh     r4, [r7, #0xa]                 
    002017F4:  lsrs     r6, r3, #0x10                  
    002017F6:  lsls     r1, r5, #0x1c                  
    002017F8:  svc      #0xd2                          
    002017FA:  lsls     r0, r5, #7                     
    002017FC:  lsrs     r0, r6, #0x1b                  
    002017FE:  lsrs     r6, r1, #0x18                  
    00201800:  lsrs     r6, r1, #0x18                  
    00201802:  lsls     r6, r0, #0x18                  
    00201804:  lsrs     r6, r0, #0x18                  
    00201806:  lsls     r6, r1, #0x18                  
    00201808:  subs     r5, #0xe                       
    0020180A:  asrs     r2, r4, #4                     
    0020180C:  movs     r0, #0x46                      
    0020180E:  subs     r6, #0x46                      
    00201810:  beq      #0x201800                      
    00201812:  strh     r3, [r7, #0x26]                
    00201814:  add      r4, sp, #0x3e0                 
    00201816:  lsls     r0, r2, #1                     
    00201818:  strb     r0, [r4]                       
    0020181A:  lsls     r5, r7, #6                     
    0020181C:  bics     r5, r6                         
    0020181E:  ldr      r6, [r6, #0x1c]                
    00201820:  lsls     r1, r7, #7                     
    00201822:  pop      {r0, r2, r3, r4, r5, r7, pc}   
    00201824:  strb     r6, [r6, r3]                   
    00201826:  movs     r0, r4                         
    00201828:  movs     r2, r0                         
    0020182A:  lsls     r6, r7, #3                     
    0020182C:  movs     r0, r0                         
    0020182E:  movs     r0, r0                         
    00201830:  movs     r0, r0                         
    00201832:  lsrs     r0, r0, #8                     
    00201834:  lsls     r0, r3, #1                     
    00201836:  strb     r4, [r0, r3]                   
    00201838:  movs     r0, r4                         
    0020183A:  movs     r0, r0                         
    0020183C:  movs     r0, r0                         
    0020183E:  movs     r0, r0                         
    00201840:  movs     r0, r0                         
    00201842:  movs     r0, r0                         
    00201844:  movs     r0, r0                         
    00201846:  movs     r0, r0                         
    00201848:  movs     r0, r0                         
    0020184A:  movs     r0, r0                         
    0020184C:  movs     r0, r0                         
    0020184E:  lsls     r2, r2, #0x13                  
    00201850:  movs     r0, r0                         
    00201852:  movs     r0, r0                         
    00201854:  movs     r0, r0                         
    00201856:  movs     r0, r0                         
    00201858:  movs     r0, r0                         
    0020185A:  movs     r0, r0                         
    0020185C:  movs     r0, r0                         
    0020185E:  movs     r0, r0                         
    00201860:  movs     r0, r0                         
    00201862:  movs     r0, r0                         
    00201864:  movs     r0, r0                         
    00201866:  movs     r0, r0                         
    00201868:  movs     r0, r0                         
    0020186A:  movs     r0, r0                         
    0020186C:  asrs     r7, r0, #0x20                  
    0020186E:  movs     r0, r0                         
    00201870:  movs     r0, r0                         
    00201872:  movs     r0, r0                         
    00201874:  movs     r0, r0                         
    00201876:  movs     r0, r0                         
    00201878:  movs     r0, r0                         
    0020187A:  str      r7, [r0, r1]                   
    0020187C:  movs     r0, r4                         
    0020187E:  movs     r0, r0                         
    00201880:  movs     r0, r0                         
    00201882:  movs     r0, r0                         
    00201884:  movs     r0, r0                         
    00201886:  movs     r0, r0                         
    00201888:  movs     r0, r0                         
    0020188A:  movs     r0, r0                         
    0020188C:  movs     r0, r0                         
    0020188E:  lsrs     r2, r1, #0x20                  
    00201890:  str      r0, [r0, r0]                   
    00201892:  movs     r0, #0x55                      
    00201894:  subs     r0, r0, #0                     
    00201896:  ldrh     r7, [r1, #0x2e]                
    00201898:  lsrs     r1, r0, #8                     
    0020189A:  lsls     r4, r6, #0x10                  
    0020189C:  strb     r0, [r3, r5]                   
    0020189E:  movs     r0, r4                         
}

/* ---- app_create @ 0x002018A0 ---- */
void app_create() {
    002018A0:  push     {r4, r5, r6, lr}               
    002018A2:  ldr      r0, [pc, #0xbc]                  // = 0x00205518
    002018A4:  ldr      r1, [pc, #0xbc]                  // = 0x00000038
    002018A6:  bl       #0x44b1a                         // ROM
    002018AA:  bl       #0x201b20                      
    002018AE:  ldr      r1, [pc, #0xb8]                  // -> 0x0020455C
    002018B0:  movs     r0, #1                         
    002018B2:  strb     r0, [r1]                       
    002018B4:  ldr      r0, [pc, #0xb4]                  // -> 0x002015F8
    002018B6:  movs     r6, #0                         
    002018B8:  strb     r6, [r0]                       
    002018BA:  movw     r0, #0xf01                     
    002018BE:  mov.w    r4, #0x600000                  
    002018C2:  str.w    r0, [r4, #0x214]               
    002018C6:  ldr      r1, [pc, #0xa8]                  // -> 0x00201120
    002018C8:  movw     r0, #0x882f                    
    002018CC:  str      r0, [r1]                       
    002018CE:  ldr      r1, [pc, #0xa4]                  // -> 0x00201150
    002018D0:  str      r0, [r1]                       
    002018D2:  ldr      r1, [pc, #0xa4]                  // -> 0x00201124
    002018D4:  movw     r0, #0x8214                    
    002018D8:  str      r0, [r1]                       
    002018DA:  ldr      r1, [pc, #0xa0]                  // -> 0x00201154
    002018DC:  str      r0, [r1]                       
    002018DE:  ldr      r1, [pc, #0xa0]                  // -> 0x00201194
    002018E0:  movw     r0, #0xc78                     
    002018E4:  str      r0, [r1]                       
    002018E6:  ldr      r1, [pc, #0x9c]                  // -> 0x0020118C
    002018E8:  movw     r0, #0x9555                    
    002018EC:  str      r0, [r1]                       
    002018EE:  mov.w    r0, #0x320000                  
    002018F2:  ldr      r1, [r0, #0x7c]                
    002018F4:  bic      r1, r1, #0x20000               
    002018F8:  str      r1, [r0, #0x7c]                
    002018FA:  mov.w    r5, #0x390000                  
    002018FE:  ldr      r0, [r5, #0x40]                
    00201900:  lsls     r0, r0, #0x1f                  
    00201902:  beq      #0x201922                      
    00201904:  movs     r0, #0                         
    00201906:  bl       #0x26f6e                         // ROM
    0020190A:  ldr      r0, [r4, #0xe0]!               
    0020190E:  bic      r0, r0, #0x80                  
    00201912:  str      r0, [r4]                       
    00201914:  ldr      r0, [r5, #0x40]                
    00201916:  bic      r0, r0, #3                     
    0020191A:  str      r0, [r5, #0x40]                
    0020191C:  movs     r0, #0x32                      
    0020191E:  bl       #0x26dfa                         // ROM
    00201922:  ldr      r0, [pc, #0x64]                  // -> 0x00200C0C
    00201924:  strb     r6, [r0]                       
    00201926:  bl       #0x200d0a                      
    0020192A:  bl       #0x201c58                      
    0020192E:  ldr      r1, [pc, #0x60]                  // -> 0x00204538
    00201930:  ldr      r0, [pc, #0x58]                  // "create()"
    00201932:  str      r0, [r1]                       
    00201934:  ldr      r1, [pc, #0x60]                  // -> 0x00200C5C
    00201936:  ldr      r0, [pc, #0x5c]                  // = 0x00205554
    00201938:  str      r0, [r1]                       
    0020193A:  ldr      r1, [pc, #0x64]                  // = 0x0020070C
    0020193C:  ldr      r0, [pc, #0x5c]                  // -> 0x002049E5
    0020193E:  str      r0, [r1]                       
    00201940:  ldr      r1, [pc, #0x60]                  // -> 0x002010E8
    00201942:  movs     r0, #2                         
    00201944:  str      r0, [r1]                       
    00201946:  bl       #0x2015dc                      
    0020194A:  ldr      r0, [pc, #0x60]                  // -> 0x00202BB0
    0020194C:  ldr      r1, [pc, #0x58]                  // -> 0x00204667
    0020194E:  str.w    r1, [r0, #0x164]               
    00201952:  ldr      r1, [pc, #0x5c]                  // -> 0x00204E9D
    00201954:  str      r1, [r0, #0x2c]                
    00201956:  ldr      r1, [pc, #0x5c]                  // = 0x0020541D
    00201958:  str.w    r1, [r0, #0x140]               
    0020195C:  pop      {r4, r5, r6, pc}               
    0020195E:  movs     r0, r0                         
    00201960:  strb     r0, [r3, r4]                   
    00201962:  movs     r0, r4                         
    00201964:  movs     r0, r7                         
    00201966:  movs     r0, r0                         
    00201968:  cmp      r4, fp                         
    0020196A:  movs     r0, r4                         
    0020196C:  asrs     r0, r7, #0x17                  
    0020196E:  movs     r0, r4                         
    00201970:  asrs     r0, r4, #4                     
    00201972:  movs     r0, r4                         
    00201974:  asrs     r0, r2, #5                     
    00201976:  movs     r0, r4                         
    00201978:  asrs     r4, r4, #4                     
    0020197A:  movs     r0, r4                         
    0020197C:  asrs     r4, r2, #5                     
    0020197E:  movs     r0, r4                         
    00201980:  asrs     r4, r2, #6                     
    00201982:  movs     r0, r4                         
    00201984:  asrs     r4, r1, #6                     
    00201986:  movs     r0, r4                         
    00201988:  lsrs     r4, r1, #0x10                  
    0020198A:  movs     r0, r4                         
    0020198C:  mov      r1, fp                         
    0020198E:  movs     r0, r4                         
    00201990:  cmp      r0, r7                         
    00201992:  movs     r0, r4                         
    00201994:  strb     r4, [r2, r5]                   
    00201996:  movs     r0, r4                         
    00201998:  lsrs     r4, r3, #0x11                  
    0020199A:  movs     r0, r4                         
    0020199C:  ldr      r1, [pc, #0x394]                 // = 0x0095FFFF
    0020199E:  movs     r0, r4                         
    002019A0:  lsls     r4, r1, #0x1c                  
    002019A2:  movs     r0, r4                         
    002019A4:  asrs     r0, r5, #3                     
    002019A6:  movs     r0, r4                         
    002019A8:  mov      r7, ip                         
    002019AA:  movs     r0, r4                         
    002019AC:  cmp      r3, #0xb0                      
    002019AE:  movs     r0, r4                         
    002019B0:  ldr      r6, [pc, #0x274]                 // = 0x00040171
    002019B2:  movs     r0, r4                         
    002019B4:  strb     r5, [r3, r0]                   
    002019B6:  movs     r0, r4                         
}

/* ---- sub_002019B8 @ 0x002019B8 ---- */
// Called by: sub_00201C58
void sub_002019B8() {
    002019B8:  ldr      r0, [pc, #0xc]                   // = 0x00041A1D
    002019BA:  ldr      r1, [pc, #8]                     // -> 0x00204569
    002019BC:  adds     r0, #0x80                      
    002019BE:  b.w      #0x200c12                      
    002019C2:  movs     r0, r0                         
    002019C4:  cmp      r1, sp                         
    002019C6:  movs     r0, r4                         
    002019C8:  subs     r5, r3, r0                     
    002019CA:  movs     r4, r0                         
}

/* ---- sub_002019CC @ 0x002019CC ---- */
// Called by: sub_00201C58
void sub_002019CC() {
    002019CC:  ldr      r0, [pc, #0xc]                   // = 0x00015793
    002019CE:  ldr      r1, [pc, #8]                     // -> 0x00204579
    002019D0:  adds     r0, #0x8a                      
    002019D2:  b.w      #0x200c12                      
    002019D6:  movs     r0, r0                         
    002019D8:  cmp      r1, pc                         
    002019DA:  movs     r0, r4                         
    002019DC:  ldrsb    r3, [r2, r6]                   
    002019DE:  movs     r1, r0                         
}

/* ---- sub_002019E0 @ 0x002019E0 ---- */
// Called by: sub_00201C58
void sub_002019E0() {
    002019E0:  ldr      r0, [pc, #0xc]                   // = 0x000113C7
    002019E2:  ldr      r1, [pc, #8]                     // -> 0x00204591
    002019E4:  addw     r0, r0, #0x25e                 
    002019E8:  b.w      #0x200c12                      
    002019EC:  cmp      sb, r2                         
    002019EE:  movs     r0, r4                         
    002019F0:  asrs     r7, r0, #0xf                   
    002019F2:  movs     r1, r0                         
}

/* ---- sub_002019F4 @ 0x002019F4 ---- */
// Called by: sub_00201C58
void sub_002019F4() {
    002019F4:  ldr      r0, [pc, #0xc]                   // = 0x0000E4E3
    002019F6:  ldr      r1, [pc, #8]                     // -> 0x00204A35
    002019F8:  adds     r0, #0x4a                      
    002019FA:  b.w      #0x200c12                      
    002019FE:  movs     r0, r0                         
    00201A00:  ldr      r2, [pc, #0xd4]                  // = 0x0000ECC3
    00201A02:  movs     r0, r4                         
    00201A04:  b        #0x2013ce                      
    00201A06:  movs     r0, r0                         
}

/* ---- sub_00201A08 @ 0x00201A08 ---- */
// Called by: sub_00201C58
void sub_00201A08() {
    00201A08:  ldr      r0, [pc, #0x58]                  // = 0x00012071
    00201A0A:  ldr      r1, [pc, #0x54]                  // -> 0x00204599
    00201A0C:  adds     r0, #0x5c                      
    00201A0E:  b.w      #0x200c12                      
}

/* ---- sub_00201A12 @ 0x00201A12 ---- */
// Called by: sub_00201C58
void sub_00201A12() {
    00201A12:  ldr      r0, [pc, #0x58]                  // = 0x00012163
    00201A14:  ldr      r1, [pc, #0x50]                  // -> 0x002045AD
    00201A16:  adds     r0, #0x2e                      
    00201A18:  b.w      #0x200c12                      
}

/* ---- sub_00201A1C @ 0x00201A1C ---- */
// Called by: sub_00201C58
void sub_00201A1C() {
    00201A1C:  ldr      r1, [pc, #0x50]                  // -> 0x00204B8B
    00201A1E:  ldr      r0, [pc, #0x54]                  // = 0x000122A9
    00201A20:  b.w      #0x200c12                      
}

/* ---- sub_00201A24 @ 0x00201A24 ---- */
// Called by: sub_00201C58
void sub_00201A24() {
    00201A24:  ldr      r0, [pc, #0x54]                  // = 0x000122C3
    00201A26:  ldr      r1, [pc, #0x50]                  // -> 0x002045C7
    00201A28:  adds     r0, r0, #2                     
    00201A2A:  b.w      #0x200c12                      
}

/* ---- sub_00201A2E @ 0x00201A2E ---- */
// Called by: sub_00201C58
void sub_00201A2E() {
    00201A2E:  ldr      r1, [pc, #0x50]                  // -> 0x00204BBD
    00201A30:  ldr      r0, [pc, #0x50]                  // = 0x00011C79
    00201A32:  b.w      #0x200c12                      
}

/* ---- sub_00201A36 @ 0x00201A36 ---- */
// Called by: sub_00201C58
void sub_00201A36() {
    00201A36:  ldr      r0, [pc, #0x54]                  // = 0x00010FEB
    00201A38:  ldr      r1, [pc, #0x4c]                  // -> 0x002045CF
    00201A3A:  adds     r0, #0x32                      
    00201A3C:  b.w      #0x200c12                      
}

/* ---- sub_00201A40 @ 0x00201A40 ---- */
// Called by: sub_00201C58
void sub_00201A40() {
    00201A40:  ldr      r0, [pc, #0x50]                  // = 0x00010EE7
    00201A42:  ldr      r1, [pc, #0x4c]                  // -> 0x00204BED
    00201A44:  adds     r0, r0, #2                     
    00201A46:  b.w      #0x200c12                      
}

/* ---- sub_00201A4A @ 0x00201A4A ---- */
// Called by: sub_00201C58
void sub_00201A4A() {
    00201A4A:  ldr      r0, [pc, #0x50]                  // = 0x000112FD
    00201A4C:  ldr      r1, [pc, #0x48]                  // -> 0x002045E1
    00201A4E:  adds     r0, #0x28                      
    00201A50:  b.w      #0x200c12                      
}

/* ---- sub_00201A54 @ 0x00201A54 ---- */
// Called by: sub_00201C58
void sub_00201A54() {
    00201A54:  ldr      r0, [pc, #0x4c]                  // = 0x00010F53
    00201A56:  ldr      r1, [pc, #0x48]                  // -> 0x002045F3
    00201A58:  adds     r0, r0, #2                     
    00201A5A:  b.w      #0x200c12                      
    00201A5E:  movs     r0, r0                         
    00201A60:  cmp      sb, r3                         
    00201A62:  movs     r0, r4                         
    00201A64:  movs     r0, #0x71                      
    00201A66:  movs     r1, r0                         
    00201A68:  cmp      sp, r5                         
    00201A6A:  movs     r0, r4                         
    00201A6C:  movs     r1, #0x63                      
    00201A6E:  movs     r1, r0                         
    00201A70:  ldr      r3, [pc, #0x22c]                 // = 0xF7FFFF21
    00201A72:  movs     r0, r4                         
    00201A74:  movs     r2, #0xa9                      
    00201A76:  movs     r1, r0                         
    00201A78:  cmp      pc, r8                         
    00201A7A:  movs     r0, r4                         
    00201A7C:  movs     r2, #0xc3                      
    00201A7E:  movs     r1, r0                         
    00201A80:  ldr      r3, [pc, #0x2f4]                 // = 0xFFFF0060
    00201A82:  movs     r0, r4                         
    00201A84:  adds     r1, r7, #1                     
    00201A86:  movs     r1, r0                         
    00201A88:  cmp      pc, sb                         
    00201A8A:  movs     r0, r4                         
    00201A8C:  lsrs     r3, r5, #0x1f                  
    00201A8E:  movs     r1, r0                         
    00201A90:  ldr      r3, [pc, #0x3b4]                 // = 0xB000FFFF
    00201A92:  movs     r0, r4                         
    00201A94:  lsrs     r7, r4, #0x1b                  
    00201A96:  movs     r1, r0                         
    00201A98:  cmp      sb, ip                         
    00201A9A:  movs     r0, r4                         
    00201A9C:  asrs     r5, r7, #0xb                   
    00201A9E:  movs     r1, r0                         
    00201AA0:  cmp      fp, lr                         
    00201AA2:  movs     r0, r4                         
    00201AA4:  lsrs     r3, r2, #0x1d                  
    00201AA6:  movs     r1, r0                         
}

/* ---- sub_00201AA8 @ 0x00201AA8 ---- */
// Called by: sub_00201C58
void sub_00201AA8() {
    00201AA8:  ldr      r1, [pc, #0x18]                  // -> 0x002045F9
    00201AAA:  ldr      r0, [pc, #0x1c]                  // = 0x0000F2C9
    00201AAC:  b.w      #0x200c12                      
}

/* ---- sub_00201AB0 @ 0x00201AB0 ---- */
// Called by: sub_00201C58
void sub_00201AB0() {
    00201AB0:  ldr      r0, [pc, #0x1c]                  // = 0x0000F37D
    00201AB2:  ldr      r1, [pc, #0x18]                  // -> 0x00204605
    00201AB4:  adds     r0, #0x28                      
    00201AB6:  b.w      #0x200c12                      
}

/* ---- sub_00201ABA @ 0x00201ABA ---- */
// Called by: sub_00201C58
void sub_00201ABA() {
    00201ABA:  ldr      r0, [pc, #0x1c]                  // = 0x0000ECC3
    00201ABC:  ldr      r1, [pc, #0x14]                  // -> 0x00204611
    00201ABE:  adds     r0, r0, #2                     
    00201AC0:  b.w      #0x200c12                      
    00201AC4:  cmp      sb, pc                         
    00201AC6:  movs     r0, r4                         
    00201AC8:  movt     r0, #0x9000                    
    00201ACC:  mov      r5, r0                         
    00201ACE:  movs     r0, r4                         
    00201AD2:  movs     r0, r0                         
    00201AD4:  mov      r1, r2                         
    00201AD6:  movs     r0, r4                         
    00201AD8:  stcl     p0, c0, [r3], {0}              
}

/* ---- sub_00201ADC @ 0x00201ADC ---- */
// Called by: sub_00201C58
void sub_00201ADC() {
    00201ADC:  ldr      r1, [pc, #0x18]                  // -> 0x00204DB1
    00201ADE:  ldr      r0, [pc, #0x1c]                  // = 0x000410A5
    00201AE0:  b.w      #0x200c12                      
}

/* ---- sub_00201AE4 @ 0x00201AE4 ---- */
// Called by: sub_00201C58
void sub_00201AE4() {
    00201AE4:  ldr      r1, [pc, #0x18]                  // -> 0x00204DEB
    00201AE6:  ldr      r0, [pc, #0x1c]                  // = 0x00028211
    00201AE8:  b.w      #0x200c12                      
}

/* ---- sub_00201AEC @ 0x00201AEC ---- */
// Called by: sub_00201C58
void sub_00201AEC() {
    00201AEC:  ldr      r0, [pc, #0x1c]                  // = 0x00028233
    00201AEE:  ldr      r1, [pc, #0x18]                  // -> 0x00204619
    00201AF0:  adds     r0, r0, #2                     
    00201AF2:  b.w      #0x200c12                      
    00201AF6:  movs     r0, r0                         
    00201AF8:  ldr      r5, [pc, #0x2c4]                 // = 0xFFFF0060
    00201AFA:  movs     r0, r4                         
    00201AFC:  asrs     r5, r4, #2                     
    00201AFE:  movs     r4, r0                         
    00201B00:  ldr      r5, [pc, #0x3ac]                 // = 0xFFFF0031
    00201B02:  movs     r0, r4                         
    00201B04:  strh     r1, [r2, #0x10]                
    00201B06:  movs     r2, r0                         
    00201B08:  mov      r1, r3                         
    00201B0A:  movs     r0, r4                         
    00201B0C:  strh     r3, [r6, #0x10]                
    00201B0E:  movs     r2, r0                         
}

/* ---- sub_00201B10 @ 0x00201B10 ---- */
// Called by: sub_00201C58
void sub_00201B10() {
    00201B10:  ldr      r1, [pc, #4]                     // -> 0x00204DF5
    00201B12:  ldr      r0, [pc, #8]                     // = 0x000012C5
    00201B14:  b.w      #0x200c12                      
    00201B18:  ldr      r5, [pc, #0x3d4]                 // = 0x1500FFFF
    00201B1A:  movs     r0, r4                         
    00201B1C:  asrs     r5, r0, #0xb                   
    00201B1E:  movs     r0, r0                         
}

/* ---- sub_00201B20 @ 0x00201B20 ---- */
// Called by: app_create
void sub_00201B20() {
    00201B20:  push     {r4, lr}                       
    00201B22:  bl       #0x201b46                      
    00201B26:  ldr      r1, [pc, #0x9c]                  // = 0x002054F5
    00201B28:  strb     r0, [r1]                       
    00201B2A:  uxtb     r0, r0                         
    00201B2C:  cmp      r0, #1                         
    00201B2E:  bne      #0x201b44                      
    00201B30:  ldr      r0, [pc, #0x94]                  // = 0x00205550
    00201B32:  ldr      r0, [r0]                       
    00201B34:  movs     r1, #1                         
    00201B36:  cmp.w    r1, r0, lsr #24                
    00201B3A:  beq      #0x201b44                      
    00201B3C:  pop.w    {r4, lr}                       
    00201B40:  b.w      #0x2b08c                       
    00201B44:  pop      {r4, pc}                       
}

/* ---- sub_00201B46 @ 0x00201B46 ---- */
// Called by: sub_00201B20
void sub_00201B46() {
    00201B46:  push.w   {r4, r5, r6, r7, r8, lr}       
    00201B4A:  mov.w    r5, #0x100                     
    00201B4E:  mov      r4, r5                         
    00201B50:  movs     r1, #0xf                       
    00201B52:  movs     r0, #1                         
    00201B54:  bl       #0x1b7dc                         // ROM
    00201B58:  mov      r7, r0                         
    00201B5A:  lsls     r6, r5, #2                     
    00201B5C:  movs     r3, #0                         
    00201B5E:  mov      r2, r6                         
    00201B60:  movs     r1, #0xf                       
    00201B62:  movs     r0, #1                         
    00201B64:  bl       #0x1b698                         // ROM
    00201B68:  subs     r4, r4, #1                     
    00201B6A:  bhs      #0x201b68                      
    00201B6C:  movs     r1, #0xf                       
    00201B6E:  movs     r0, #1                         
    00201B70:  bl       #0x1b8e6                         // ROM
    00201B74:  mov      r4, r0                         
    00201B76:  movs     r3, #0                         
    00201B78:  mov      r2, r7                         
    00201B7A:  movs     r1, #0xf                       
    00201B7C:  movs     r0, #1                         
    00201B7E:  bl       #0x1b698                         // ROM
    00201B82:  cbz      r4, #0x201b8a                  
    00201B84:  movs     r0, #0                         
    00201B86:  pop.w    {r4, r5, r6, r7, r8, pc}       
    00201B8A:  movs     r1, #0xe                       
    00201B8C:  movs     r0, #1                         
    00201B8E:  bl       #0x1b7dc                         // ROM
    00201B92:  mov      r4, r0                         
    00201B94:  movs     r3, #0                         
    00201B96:  mov      r2, r6                         
    00201B98:  movs     r1, #0xe                       
    00201B9A:  movs     r0, #1                         
    00201B9C:  bl       #0x1b698                         // ROM
    00201BA0:  subs     r5, r5, #1                     
    00201BA2:  bhs      #0x201ba0                      
    00201BA4:  movs     r1, #0xe                       
    00201BA6:  movs     r0, #1                         
    00201BA8:  bl       #0x1b8e6                         // ROM
    00201BAC:  mov      r5, r0                         
    00201BAE:  movs     r3, #0                         
    00201BB0:  mov      r2, r4                         
    00201BB2:  movs     r1, #0xe                       
    00201BB4:  movs     r0, #1                         
    00201BB6:  bl       #0x1b698                         // ROM
    00201BBA:  cbz      r5, #0x201bc0                  
    00201BBC:  movs     r0, #1                         
    00201BBE:  b        #0x201b86                      
    00201BC0:  movs     r0, #2                         
    00201BC2:  b        #0x201b86                      
    00201BC4:  strb     r5, [r6, r3]                   
    00201BC6:  movs     r0, r4                         
    00201BC8:  strb     r0, [r2, r5]                   
    00201BCA:  movs     r0, r4                         
}

/* ---- sub_00201BCC @ 0x00201BCC ---- */
// Called by: sub_00201C58
void sub_00201BCC() {
    00201BCC:  ldr      r0, [pc, #0x14]                  // = 0x00010C25
    00201BCE:  ldr      r1, [pc, #0x10]                  // -> 0x0020461D
    00201BD0:  adds     r0, #0x14                      
    00201BD2:  b.w      #0x200c12                      
}

/* ---- sub_00201BD6 @ 0x00201BD6 ---- */
// Called by: sub_00201C58
void sub_00201BD6() {
    00201BD6:  ldr      r0, [pc, #0x14]                  // = 0x00010B79
    00201BD8:  ldr      r1, [pc, #0xc]                   // -> 0x00204629
    00201BDA:  adds     r0, #0x70                      
    00201BDC:  b.w      #0x200c12                      
    00201BE0:  mov      r5, r3                         
    00201BE2:  movs     r0, r4                         
    00201BE4:  lsrs     r5, r4, #0x10                  
    00201BE6:  movs     r1, r0                         
    00201BE8:  mov      r1, r5                         
    00201BEA:  movs     r0, r4                         
    00201BEC:  lsrs     r1, r7, #0xd                   
    00201BEE:  movs     r1, r0                         
}

/* ---- sub_00201BF0 @ 0x00201BF0 ---- */
// Called by: sub_00201C58
void sub_00201BF0() {
    00201BF0:  ldr      r1, [pc, #0x20]                  // -> 0x00205055
    00201BF2:  ldr      r0, [pc, #0x24]                  // = 0x0002CA1D
    00201BF4:  b.w      #0x200c12                      
}

/* ---- sub_00201BF8 @ 0x00201BF8 ---- */
// Called by: sub_00201C58
void sub_00201BF8() {
    00201BF8:  ldr      r1, [pc, #0x20]                  // -> 0x00205081
    00201BFA:  ldr      r0, [pc, #0x24]                  // = 0x000400F5
    00201BFC:  b.w      #0x200c12                      
}

/* ---- sub_00201C00 @ 0x00201C00 ---- */
// Called by: sub_00201C58
void sub_00201C00() {
    00201C00:  ldr      r1, [pc, #0x20]                  // -> 0x00205123
    00201C02:  ldr      r0, [pc, #0x24]                  // = 0x00040171
    00201C04:  b.w      #0x200c12                      
}

/* ---- sub_00201C08 @ 0x00201C08 ---- */
// Called by: sub_00201C58
void sub_00201C08() {
    00201C08:  ldr      r0, [pc, #0x24]                  // = 0x0002CA2D
    00201C0A:  ldr      r1, [pc, #0x20]                  // -> 0x00204635
    00201C0C:  adds     r0, #0x48                      
    00201C0E:  b.w      #0x200c12                      
    00201C12:  movs     r0, r0                         
    00201C14:  str      r5, [r2, r1]                   
    00201C16:  movs     r0, r4                         
    00201C18:  ldm      r2, {r0, r2, r3, r4}           
    00201C1A:  movs     r2, r0                         
    00201C1C:  str      r1, [r0, r2]                   
    00201C1E:  movs     r0, r4                         
    00201C20:  lsls     r5, r6, #3                     
    00201C22:  movs     r4, r0                         
    00201C24:  str      r3, [r4, r4]                   
    00201C26:  movs     r0, r4                         
    00201C28:  lsls     r1, r6, #5                     
    00201C2A:  movs     r4, r0                         
    00201C2C:  mov      r5, r6                         
    00201C2E:  movs     r0, r4                         
    00201C30:  ldm      r2, {r0, r2, r3, r5}           
    00201C32:  movs     r2, r0                         
}

/* ---- sub_00201C34 @ 0x00201C34 ---- */
// Called by: sub_00201C58
void sub_00201C34() {
    00201C34:  ldr      r0, [pc, #0xc]                   // = 0x00013727
    00201C36:  ldr      r1, [pc, #8]                     // -> 0x00204651
    00201C38:  adds     r0, r0, #2                     
    00201C3A:  b.w      #0x200c12                      
    00201C3E:  movs     r0, r0                         
    00201C40:  mov      r1, sl                         
    00201C42:  movs     r0, r4                         
    00201C44:  adds     r7, #0x27                      
    00201C46:  movs     r1, r0                         
    00201C48:  ldr      r1, [pc, #4]                     // = 0x002052CD
    00201C4A:  ldr      r0, [pc, #8]                     // = 0x00027749
    00201C4C:  b.w      #0x200c12                      
    00201C50:  strh     r5, [r1, r3]                   
    00201C52:  movs     r0, r4                         
    00201C54:  strb     r1, [r1, #0x1d]                
    00201C56:  movs     r2, r0                         
}

/* ---- sub_00201C58 @ 0x00201C58 ---- */
// Called by: app_create
void sub_00201C58() {
    00201C58:  push     {r4, lr}                       
    00201C5A:  bl       #0x2019b8                      
    00201C5E:  bl       #0x2019cc                      
    00201C62:  bl       #0x2019e0                      
    00201C66:  bl       #0x2019f4                      
    00201C6A:  bl       #0x201a08                      
    00201C6E:  bl       #0x201a12                      
    00201C72:  bl       #0x201a1c                      
    00201C76:  bl       #0x201a24                      
    00201C7A:  bl       #0x201a2e                      
    00201C7E:  bl       #0x201a36                      
    00201C82:  bl       #0x201a40                      
    00201C86:  bl       #0x201a4a                      
    00201C8A:  bl       #0x201a54                      
    00201C8E:  bl       #0x201aa8                      
    00201C92:  bl       #0x201ab0                      
    00201C96:  bl       #0x201aba                      
    00201C9A:  bl       #0x201adc                      
    00201C9E:  bl       #0x201ae4                      
    00201CA2:  bl       #0x201aec                      
    00201CA6:  bl       #0x201b10                      
    00201CAA:  bl       #0x201bcc                      
    00201CAE:  bl       #0x201bd6                      
    00201CB2:  bl       #0x201bf0                      
    00201CB6:  bl       #0x201bf8                      
    00201CBA:  bl       #0x201c00                      
    00201CBE:  bl       #0x201c08                      
    00201CC2:  bl       #0x201c34                      
    00201CC6:  pop.w    {r4, lr}                       
    00201CCA:  b.w      #0x201c48                      
    00201CCE:  movs     r0, r0                         
    00201CD0:  lsls     r3, r1, #0x10                  
    00201CD2:  ldr      r0, [r0, r0]                   
    00201CD4:  movs     r0, #0x55                      
    00201CD8:  lsls     r4, r7, #0xc                   
    00201CDA:  movs     r0, r2                         
    00201CDC:  lsls     r0, r4, #1                     
    00201CE2:  movs     r0, r1                         
    00201CE4:  movs     r0, r0                         
    00201CE6:  movs     r0, r7                         
    00201CE8:  lsls     r0, r4, #1                     
    00201CEC:  vshr.u64 d16, d0, #1                    
    00201CF0:  movs     r0, r0                         
    00201CF2:  lsls     r4, r5, #1                     
    00201CF4:  lsls     r0, r4, #1                     
    00201CFA:  movs     r7, r1                         
    00201CFC:  movs     r0, r0                         
    00201CFE:  lsls     r4, r4, #4                     
    00201D00:  lsls     r0, r4, #1                     
    00201D06:  lsls     r5, r2, #1                     
    00201D08:  movs     r0, r0                         
    00201D0A:  lsls     r0, r5, #4                     
    00201D0C:  lsls     r0, r4, #1                     
    00201D12:  lsls     r1, r7, #1                     
    00201D14:  movs     r0, r0                         
    00201D16:  lsls     r4, r5, #4                     
    00201D18:  lsls     r0, r4, #1                     
    00201D1E:  movs     r4, r0                         
    00201D20:  movs     r0, r0                         
    00201D22:  lsls     r0, r6, #4                     
    00201D24:  lsls     r0, r4, #1                     
    00201D28:  vshr.u32 q8, q3, #1                     
    00201D2C:  movs     r0, r0                         
    00201D2E:  lsls     r4, r6, #4                     
    00201D30:  lsls     r0, r4, #1                     
    00201D34:  vshr.u64 d16, d5, #1                    
    00201D38:  movs     r0, r0                         
    00201D3A:  lsls     r0, r7, #4                     
    00201D3C:  lsls     r0, r4, #1                     
    00201D42:  lsls     r5, r2, #1                     
    00201D44:  movs     r0, r0                         
    00201D46:  lsls     r4, r7, #4                     
    00201D48:  lsls     r0, r4, #1                     
    00201D4E:  lsls     r1, r7, #1                     
    00201D50:  movs     r0, r0                         
    00201D52:  lsls     r0, r0, #5                     
    00201D54:  lsls     r0, r4, #1                     
    00201D5A:  movs     r4, r0                         
    00201D5C:  movs     r0, r0                         
    00201D5E:  lsls     r4, r0, #5                     
    00201D60:  lsls     r0, r4, #1                     
    00201D64:  vshr.u32 q8, q3, #1                     
    00201D68:  movs     r0, r0                         
    00201D6A:  lsls     r0, r1, #5                     
    00201D6C:  lsls     r0, r4, #1                     
    00201D70:  vshr.u64 d16, d5, #1                    
    00201D74:  movs     r0, r0                         
    00201D76:  lsls     r4, r0, #6                     
    00201D78:  lsls     r0, r4, #1                     
    00201D7E:  lsls     r0, r0, #6                     
    00201D80:  movs     r0, r0                         
    00201D82:  lsls     r4, r2, #6                     
    00201D84:  lsls     r0, r4, #1                     
    00201D8A:  lsrs     r1, r3, #5                     
    00201D8C:  movs     r0, r0                         
    00201D8E:  lsls     r0, r7, #6                     
    00201D90:  lsls     r0, r4, #1                     
    00201D96:  lsls     r0, r0, #2                     
    00201D98:  movs     r0, r0                         
    00201D9A:  lsls     r0, r4, #7                     
    00201D9C:  lsls     r0, r4, #1                     
    00201DA2:  lsls     r0, r4, #1                     
    00201DA4:  movs     r0, r0                         
    00201DA6:  lsls     r4, r1, #8                     
    00201DA8:  lsls     r0, r4, #1                     
    00201DAE:  b        #0x201db2                      
    00201DB0:  movs     r0, r0                         
    00201DB2:  lsls     r0, r3, #8                     
    00201DB4:  lsls     r0, r4, #1                     
    00201DBA:  str      r5, [sp, #0x154]               
    00201DBC:  movs     r0, r0                         
    00201DBE:  lsls     r4, r3, #8                     
    00201DC0:  lsls     r0, r4, #1                     
    00201DC6:  lsls     r0, r5, #0x1a                  
    00201DC8:  movs     r0, r0                         
    00201DCA:  lsls     r0, r4, #8                     
    00201DCC:  lsls     r0, r4, #1                     
    00201DD2:  lsrs     r0, r6, #2                     
    00201DD4:  movs     r0, r0                         
    00201DD6:  lsls     r4, r4, #8                     
    00201DD8:  lsls     r0, r4, #1                     
    00201DDE:  lsls     r0, r5, #0x1a                  
    00201DE0:  movs     r0, r0                         
    00201DE2:  lsls     r4, r0, #0xb                   
    00201DE4:  lsls     r0, r4, #1                     
    00201DE8:  vshr.u32 d16, d1, #1                    
    00201DEC:  movs     r0, r0                         
    00201DEE:  lsls     r0, r6, #0xb                   
    00201DF0:  lsls     r0, r4, #1                     
    00201DF6:  bx       r0                             
    00201DF8:  movs     r0, r0                         
    00201DFA:  lsls     r4, r6, #0xb                   
    00201DFC:  lsls     r0, r4, #1                     
    00201E02:  movs     r1, r0                         
    00201E04:  movs     r0, r0                         
    00201E06:  lsls     r4, r2, #0xc                   
    00201E08:  lsls     r0, r4, #1                     
    00201E0E:  subs     r7, #0                         
    00201E10:  movs     r0, r0                         
    00201E12:  lsls     r4, r3, #0xc                   
    00201E14:  lsls     r0, r4, #1                     
    00201E18:  vshr.u32 d16, d0, #1                    
    00201E1C:  movs     r0, r0                         
    00201E1E:  lsls     r4, r0, #0xd                   
    00201E20:  lsls     r0, r4, #1                     
    00201E24:  vshr.u32 d16, d16, #1                   
    00201E28:  movs     r0, r0                         
    00201E2A:  lsls     r4, r6, #0xf                   
    00201E2C:  lsls     r0, r4, #1                     
    00201E30:  vcvt.f16.u16 q8, q12, #1                
    00201E34:  movs     r0, r0                         
    00201E36:  ldc2     p0, c0, [r0], #-0xc4           
    00201E3E:  lsls     r7, r5, #0x11                  
    00201E40:  movs     r0, r0                         
    00201E42:  ldc2     p0, c0, [ip], #-0xc4           
    00201E4A:  add      sp, #0                         
    00201E4C:  movs     r0, r0                         
    00201E4E:  mrrc2    p0, #3, r0, r8, c1             
    00201E54:  vrshr.u64 d22, d8, #1                   
    00201E58:  movs     r0, r0                         
    00201E5A:  mrrc2    p0, #3, r0, ip, c1             
    00201E62:  movs     r2, r0                         
    00201E64:  movs     r0, r0                         
    00201E66:  stc2l    p0, c0, [r4], #-0xc4           
    00201E6C:  vshr.u32 d18, d15, #1                   
    00201E70:  movs     r0, r0                         
    00201E72:  stc2l    p0, c0, [r8], {0x31}           
    00201E78:  vrshr.u32 d24, d0, #1                   
    00201E7C:  movs     r0, r0                         
    00201E7E:  stc2l    p0, c0, [ip], {0x31}           
    00201E86:  ands     r0, r5                         
    00201E88:  movs     r0, r0                         
    00201E8A:  ldc2l    p0, c0, [r0], {0x31}           
    00201E90:  vtbl.8   d28, {d15, d16}, d9            
    00201E94:  movs     r0, r0                         
    00201E96:  ldc2l    p0, c0, [r4], {0x31}           
    00201EA0:  movs     r0, r0                         
    00201EA2:  ldc2l    p0, c0, [ip], {0x31}           
    00201EA8:  vtbl.8   d28, {d15}, d8                 
    00201EAC:  movs     r0, r0                         
    00201EAE:  stc2l    p0, c0, [r0], #0xc4            
    00201EB6:  stm      r7!, {r0, r1, r2}              
    00201EB8:  movs     r0, r0                         
    00201EBA:  stc2l    p0, c0, [r4], #0xc4            
    00201EC0:  vtbx.8   d24, {d15}, d10                
    00201EC4:  movs     r0, r0                         
    00201EC6:  stc2l    p0, c0, [r8], #0xc4            
    00201ECC:  vtbl.8   d28, {d15}, d13                
    00201ED0:  movs     r0, r0                         
    00201ED2:  stc2     p0, c0, [r0, #-0xc4]           
    00201EDA:  adr      r2, #0                         
    00201EDC:  movs     r0, r0                         
    00201EDE:  stc2l    p0, c0, [ip, #0xc4]            
    00201EE6:  strh     r0, [r0]                       
    00201EE8:  movs     r0, r0                         
    00201EEA:  ldc2l    p0, c0, [r0, #0xc4]!           
    00201EF2:  asrs     r0, r0, #0x14                  
    00201EF4:  movs     r0, r0                         
    00201EF6:  ldc2l    p0, c0, [r4, #0xc4]!           
    00201EFE:  lsls     r6, r4, #1                     
    00201F00:  movs     r0, r0                         
    00201F02:  ldc2l    p0, c0, [r8, #0xc4]!           
    00201F0A:  cmp      r1, r5                         
    00201F0C:  movs     r0, r0                         
    00201F0E:  mcr2     p0, #5, r0, c12, c1, #1        
    00201F16:  subs     r1, #0xea                      
    00201F18:  movs     r0, r0                         
    00201F1A:  mrc2     p0, #6, r0, c12, c1, #1        
    00201F22:  lsls     r1, r6, #0xb                   
    00201F24:  movs     r0, r0                         
    00201F26:  vqadd.u32 d0, d8, d17                   
    00201F2C:  vtbx.8   d16, {d15}, d2                 
    00201F30:  movs     r0, r0                         
    00201F32:  vqadd.u64 d0, d4, d17                   
    00201F38:  vrshr.u32 d22, d6, #1                   
    00201F3C:  movs     r0, r0                         
    00201F3E:  vqadd.u64 d0, d8, d17                   
    00201F46:  movs     r1, #0x8d                      
    00201F48:  movs     r0, r0                         
    00201F4A:  vqadd.u16 d16, d8, d17                  
    00201F52:  lsls     r4, r4, #7                     
    00201F54:  movs     r0, r0                         
    00201F56:  vqadd.u32 d16, d12, d17                 
    00201F5E:  lsls     r7, r4, #3                     
    00201F60:  movs     r0, r0                         
    00201F62:  vqadd.u64 d16, d0, d17                  
    00201F68:  vrsra.u32 d16, d11, #1                  
    00201F6C:  movs     r0, r0                         
    00201F6E:  vqadd.u64 d16, d4, d17                  
    00201F76:  lsls     r2, r5, #0xf                   
    00201F78:  movs     r0, r0                         
    00201F7A:  vqadd.u64 d16, d8, d17                  
    00201F82:  lsls     r3, r1, #1                     
    00201F84:  movs     r0, r0                         
    00201F86:  vqadd.u64 d16, d12, d17                 
    00201F8E:  movs     r0, r1                         
    00201F90:  movs     r0, r0                         
    00201F92:  vmvn.i32 d0, #0x81                      
    00201F98:  vrsra.u32 q8, q13, #1                   
    00201F9C:  movs     r0, r0                         
    00201F9E:  vmvn.i32 d0, #0xc1                      
    00201FA6:  movs     r6, r1                         
    00201FA8:  movs     r0, r0                         
    00201FAA:  vshr.u8  d0, d17, #8                    
    00201FB2:  lsls     r7, r0, #0xe                   
    00201FB4:  movs     r0, r0                         
    00201FB6:  vshr.u8  d0, d17, #4                    
    00201FBE:  movs     r0, r0                         
    00201FC0:  movs     r0, r0                         
    00201FC2:  vshr.u16 d0, d17, #0x10                 
    00201FCA:  lsls     r7, r4, #0xc                   
    00201FCC:  movs     r0, r0                         
    00201FCE:  vshr.u16 d0, d17, #0xc                  
    00201FD6:  lsls     r4, r4, #1                     
    00201FD8:  movs     r0, r0                         
    00201FDA:  vshr.u32 d16, d17, #0x20                
    00201FE0:  vtbl.8   d20, {d15}, d13                
    00201FE4:  movs     r0, r0                         
    00201FE6:  vshr.u32 d16, d17, #0x18                
    00201FEE:  movs     r2, r1                         
    00201FF0:  movs     r0, r0                         
    00201FF2:  vshr.u32 d16, d17, #8                   
    00201FF8:  vrshr.u32 d24, d4, #1                   
    00201FFC:  movs     r0, r0                         
    00201FFE:  lsls     r4, r2, #8                     
    00202000:  lsls     r0, r4, #1                     
    00202006:  lsrs     r1, r0, #0x1c                  
    00202008:  movs     r0, r0                         
    0020200A:  ldc2l    p0, c0, [r8], {0x31}           
    00202012:  ldrh     r3, [r6]                       
    00202014:  movs     r0, r0                         
    00202016:  stm      r2!, {r1, r3}                  
    00202018:  strb     r0, [r4, r0]                   
    0020201A:  movs     r0, #0x55                      
    0020201C:  lsls     r0, r0, #0x1c                  
    0020201E:  lsls     r5, r6, #0x1a                  
    00202020:  lsls     r0, r1, #0x19                  
    00202022:  lsls     r3, r1, #0x1d                  
    00202024:  lsls     r2, r1, #1                     
    00202026:  lsls     r0, r2, #0x1e                  
    00202028:  adds     r0, r1, r5                     
    0020202A:  lsls     r0, r1, #6                     
    0020202C:  lsls     r0, r2, #0xa                   
    0020202E:  ldr      r1, [r6, #0x1c]                
    00202030:  lsls     r3, r0, #0x14                  
    00202032:  lsrs     r0, r1, #1                     
    00202034:  add      r3, sp, #0x3d8                 
    00202036:  lsrs     r7, r7, #0x1b                  
    00202038:  asrs     r5, r7, #0x12                  
    0020203A:  movs     r0, #0x76                      
    0020203C:  add      r0, r0                         
    0020203E:  movs     r0, #0x76                      
    00202040:  strh     r0, [r0]                       
    00202042:  movs     r0, #0x78                      
    00202044:  cbnz     r0, #0x202048                  
    00202046:  movs     r0, #0x5c                      
    00202048:  mov      r0, r0                         
    0020204A:  movs     r0, #0x76                      
    0020204C:  movs     r0, r0                         
    0020204E:  lsrs     r0, r6, #0x13                  
    00202050:  pop      {r3, r4, r5, r6, r7, pc}       
    00202054:  lsrs     r1, r0, #0xa                   
    00202056:  ldr      r6, [r6, #0x7c]                
    00202058:  lsrs     r4, r7, #7                     
    0020205A:  push     {r1, r2, r4, r5, r6, r7}       
    0020205C:  lsls     r5, r7, #0x13                  
    0020205E:  bvc      #0x20204e                      
    00202060:  pop      {r3, r4, r5, r7, pc}           
    00202062:  strb     r0, [r5, #3]                   
    00202064:  lsls     r0, r0, #1                     
    00202066:  str      r0, [r6, #0x2c]                
    00202068:  cmp      r5, #0xb9                      
    0020206C:  asrs     r1, r0, #0x19                  
    0020206E:  lsls     r2, r1, #0x11                  
    00202070:  asrs     r6, r0, #5                     
    00202072:  lsls     r0, r5, #1                     
    00202074:  ldm      r0!, {r1, r2, r5}              
    00202076:  lsls     r3, r7, #5                     
    00202078:  movs     r0, r5                         
    0020207A:  lsrs     r1, r2, #0x13                  
    0020207C:  movs     r0, #0xb9                      
    0020207E:  lsls     r3, r0, #9                     
    00202080:  lsrs     r1, r2, #0x13                  
    00202082:  pop      {r5, pc}                       
    00202086:  b        #0x20218c                      
    00202088:  asrs     r2, r6, #2                     
    0020208A:  vhadd.u8 d25, d13, d23                  
    0020208E:  ldm      r0!, {r1, r2, r6}              
    00202090:  lsls     r3, r6, #5                     
    00202092:  asrs     r0, r5, #0x10                  
    00202094:  cmp      r3, #0xd1                      
    00202098:  ldr      r7, [r7, r3]                   
    0020209A:  lsls     r1, r6, #6                     
    0020209C:  cmp      r2, #0x20                      
    002020A0:  ldr      r3, [r7, #0xc]                 
    002020A2:  vmax.u32 d16, d4, d24                   
    002020A6:  lsls     r1, r2, #3                     
    002020A8:  bhi      #0x2020ec                      
    002020AA:  lsls     r0, r7, #3                     
    002020AC:  lsrs     r0, r2, #0x14                  
    002020AE:  ldm      r0!, {r1, r2, r5}              
    002020B0:  lsls     r3, r6, #0xd                   
    002020B2:  ldr      r0, [r4, #0x7c]                
    002020B4:  movs     r0, #0x64                      
    002020B6:  cmp      r3, #0x46                      
    002020B8:  adr      r1, #0x3d8                     
    002020BA:  adds     r0, #0xfa                      
    002020BC:  b        #0x20234c                      
    002020BE:  ldr      r7, [r4, #0xc]                 
    002020C0:  cmp      r2, #0x6c                      
    002020C2:  str      r6, [r6, r3]                   
    002020C6:  lsls     r7, r4, #3                     
    002020C8:  bgt      #0x2020cc                      
    002020CA:  movs     r0, #0xd                       
    002020CC:  b        #0x2020d0                      
    002020CE:  movs     r0, #0x33                      
    002020D0:  cmp      r5, #0                         
    002020D4:  lsls     r1, r0, #1                     
    002020D6:  ldrb     r0, [r6, #3]                   
    002020D8:  ldr      r4, [pc, #0x3e0]                 // = 0x3BD02C28
    002020DA:  lsls     r6, r1, #1                     
    002020DC:  b        #0x20212a                      
    002020DE:  ldr      r4, [pc, #0x2c4]                 // = 0x0179E080
    002020E0:  stm      r0!, {r3, r6}                  
    002020E2:  lsrs     r0, r5, #1                     
    002020E4:  adds     r3, #0xb1                      
    002020E6:  strb     r6, [r6, #0x17]                
    002020E8:  adds     r0, #0xf9                      
    002020EA:  lsls     r0, r7, #1                     
    002020EC:  asrs     r0, r5, #8                     
    002020EE:  ldr      r1, [pc, #0x344]                 // = 0x29221E4D
    002020F0:  lsls     r0, r1, #1                     
    002020F2:  lsls     r0, r5, #1                     
    002020F4:  lsrs     r0, r5, #0x18                  
    002020F8:  lsls     r4, r1, #5                     
    002020FA:  b        #0x201f4c                      
    002020FC:  mov      r4, lr                         
    002020FE:  movs     r0, #0x49                      
    00202100:  subs     r6, r0, #5                     
    00202102:  str      r6, [r6, #0x4c]                
    00202104:  ldrb     r5, [r7, #0x1f]                
    00202106:  adr      r0, #0x80                      
    00202108:  b        #0x201bf4                      
    0020210A:  adr      r5, #0x1cc                     
    0020210C:  movs     r0, #0x73                      
    0020210E:  subs     r6, r0, #5                     
    00202110:  b        #0x202700                      
    00202112:  adds     r7, #0xfc                      
    00202114:  pop      {r4, r5, r6, pc}               
    00202118:  adds     r0, #0x81                      
    0020211A:  lsls     r0, r7, #1                     
    0020211E:  subs     r7, #0xd0                      
    00202120:  subs     r4, #0x48                      
    00202122:  lsls     r1, r1, #1                     
    00202124:  ldrh     r0, [r5, #2]                   
    00202126:  adc      r8, r2, #0x688000              
    0020212A:  subs     r6, r0, #5                     
    0020212C:  ldc2l    p5, c3, [r6], #0x3f8           
    00202130:  orns     r0, r0, #0xe700e7              
    00202136:  ldm      r4, {r0, r1, r2, r4, r5, r6, r7}
    00202138:  adds     r4, #0xff                      
    0020213A:  strh     r0, [r1, #2]                   
    0020213C:  lsls     r0, r5, #1                     
    0020213E:  lsls     r0, r5, #8                     
    00202140:  pop      {r4, r6, r7, pc}               
    00202142:  asrs     r0, r5, #3                     
    00202144:  lsls     r0, r0, #1                     
    00202146:  asrs     r7, r0, #1                     
    00202148:  asrs     r5, r7, #2                     
    0020214C:  stm      r1!, {r0, r1, r2, r4, r5, r6, r7}
    0020214E:  cmp      r7, #0xff                      
    00202150:  eors     r0, r1                         
    00202152:  lsls     r0, r5, #1                     
    00202154:  lsls     r0, r5, #8                     
    00202156:  pop      {r4, r6, r7, pc}               
    00202158:  asrs     r0, r5, #3                     
    0020215A:  lsls     r0, r0, #1                     
    0020215C:  asrs     r7, r0, #1                     
    0020215E:  strb     r5, [r7, #2]                   
    00202160:  lsls     r5, r6, #0x12                  
    00202162:  add      sp, #0x118                     
    00202164:  ldr      r0, [pc, #0x3e0]                 // = 0x5EF60861
    00202166:  cmp      r6, #0x50                      
    00202168:  lsls     r0, r1, #1                     
    0020216A:  eors     r0, r5                         
    0020216C:  lsrs     r5, r0, #0x18                  
    0020216E:  movs     r6, #0xd4                      
    00202170:  subs     r0, #0xf6                      
    00202172:  cmp      r4, #0xf9                      
    00202174:  add      sp, #0x124                     
    00202178:  ldr      r7, [pc, #0x3c0]                 // = 0x11685BB2
    0020217A:  ldrb     r4, [r6, #0xb]                 
    0020217C:  ldr      r0, [pc, #0x1c4]                 // = 0x03F8B44B
    0020217E:  eors     r3, r0                         
    00202180:  strb     r2, [r6, #7]                   
    00202182:  add      sp, #0x84                      
    00202186:  movs     r0, #0xf0                      
    00202188:  lsls     r0, r6, #7                     
    0020218A:  lsls     r0, r0, #0x14                  
    0020218C:  lsls     r4, r0, #9                     
    0020218E:  b        #0x2021d2                      
    00202190:  adr      r0, #0x1d0                     
    00202192:  movs     r4, #0x7b                      
    00202194:  ldr      r6, [r6, #0x1c]                
    00202196:  mov      pc, pc                         
    00202198:  adds     r0, #8                         
    0020219A:  adr      r1, #0x118                     
    0020219C:  movs     r4, #0x69                      
    002021A0:  push     {r1, r2, r3, r4, r5, r6, r7}   
    002021A2:  ldr      r0, [pc, #0x3e0]                 // = 0xD200403A
    002021A4:  ldrh     r0, [r2]                       
    002021A6:  lsls     r2, r0, #1                     
    002021A8:  adr      r6, #0x364                     
    002021AA:  adr      r0, #0x184                     
    002021AC:  cmp      r0, #0x69                      
    002021AE:  movs     r0, #0x44                      
    002021B0:  ldrb     r0, [r6, #3]                   
    002021B2:  adr      r0, #0x100                     
    002021B4:  movs     r0, #0x61                      
    002021B6:  movs     r1, #0x46                      
    002021B8:  itte     al                             
    002021BA:  lsl      r3, r7, #3                     
    002021BC:  ror      r0, r6                         
    002021BE:  strb     r0, [r7, #3]                   
    002021C0:  asrs     r5, r7, #0xa                   
    002021C2:  str      r2, [r1, r1]                   
    002021C4:  str      r1, [sp, #0x1c0]               
    002021C6:  strb     r0, [r6, #1]                   
    002021C8:  asrs     r7, r0, #1                     
    002021CA:  asrs     r5, r6, #2                     
    002021CC:  str      r2, [r1, r1]                   
    002021CE:  movs     r7, #0x78                      
    002021D0:  asrs     r0, r5, #0x18                  
    002021D2:  ldr      r7, [pc, #0x360]                 // = 0x02EB0348
    002021D4:  str      r4, [r6, #0x4c]                
    002021D6:  movs     r1, r2                         
    002021D8:  lsls     r3, r4, #4                     
    002021DA:  strh     r3, [r5, #6]                   
    002021DC:  stm      r4!, {r2}                      
    002021DE:  lsls     r0, r7, #3                     
    002021E0:  lsls     r2, r6, #0xc                   
    002021E2:  lsls     r1, r1, #4                     
    002021E4:  strh     r3, [r5, #0x1e]                
    002021E6:  bne      #0x2021ec                      
    002021E8:  lsls     r0, r7, #3                     
    002021EA:  movs     r1, r6                         
    002021EC:  lsrs     r0, r6, #0x1f                  
    002021EE:  lsls     r4, r0, #4                     
    002021F0:  movs     r0, r4                         
    002021F2:  lsls     r2, r7, #0x13                  
    002021F4:  lsrs     r1, r6, #0xf                   
    002021F6:  str      r2, [sp, #0x100]               
    002021F8:  ldr      r1, [sp, #0x1e0]               
    002021FA:  subs     r2, r6, r2                     
    002021FC:  lsls     r1, r6, #6                     
    002021FE:  asrs     r1, r6, #2                     
    00202200:  lsls     r5, r7, #2                     
    00202202:  asrs     r0, r4, #0x20                  
    00202204:  lsls     r5, r7, #2                     
    00202208:  asrs     r1, r2, #3                     
    0020220A:  lsls     r5, r7, #2                     
    0020220C:  beq      #0x202210                      
    0020220E:  movs     r0, #0x86                      
    00202210:  bhi      #0x202214                      
    00202212:  movs     r0, #0x38                      
    00202214:  str      r0, [r0, r0]                   
    00202216:  movs     r0, #0x87                      
    00202218:  movs     r0, r0                         
    0020221A:  movs     r0, #0xf                       
    0020221C:  cmp      r4, #0                         
    0020221E:  movs     r0, #0x22                      
    00202222:  movs     r0, #0xd                       
    00202224:  strb     r0, [r0, #0x14]                
    00202226:  cmp      sb, sl                         
    00202228:  asrs     r7, r2, #0x20                  
    0020222A:  adds     r5, #0xb5                      
    0020222C:  lsrs     r1, r1, #9                     
    0020222E:  cmp      r2, #0x68                      
    00202230:  lsls     r1, r6, #6                     
    00202232:  add      r5, sp, #0x84                  
    00202234:  movs     r0, r5                         
    00202236:  lsls     r0, r2, #3                     
    00202238:  lsrs     r1, r4, #0x20                  
    0020223A:  str      r0, [sp, #0x118]               
    0020223C:  cmp      r3, #0x47                      
    0020223E:  asrs     r0, r4, #0x20                  
    00202240:  asrs     r5, r7, #2                     
    00202242:  cmp      r7, #0xb5                      
    00202244:  cmp      r7, #0x49                      
    00202246:  adds     r0, #0x4c                      
    00202248:  lsrs     r0, r1, #9                     
    0020224A:  rev16    r0, r5                         
    0020224C:  lsls     r1, r6, #0xa                   
    0020224E:  add      r2, sp, #0x1a0                 
    00202250:  lsls     r1, r6, #0xa                   
    00202252:  str      r2, [sp, #0x118]               
    00202254:  movs     r7, #0xf8                      
    00202256:  lsls     r0, r4, #4                     
    00202258:  asrs     r2, r5, #0x20                  
    0020225A:  lsls     r0, r2, #0xb                   
    0020225C:  b        #0x2026a4                      
    0020225E:  stm      r2!, {r2, r4, r5, r6}          
    00202260:  b        #0x20275a                      
    00202262:  strh     r3, [r6, #0x12]                
    00202264:  adr      r2, #0x1ec                     
    00202266:  strh     r3, [r6, #2]                   
    00202268:  ldr      r1, [pc, #0x1a4]                 // = 0x01E00260
    0020226A:  movs     r4, #0x68                      
    0020226C:  strh     r6, [r6, #0x1e]                
    0020226E:  adr      r0, #0x3f8                     
    00202270:  movs     r0, #0x61                      
    00202272:  ldr      r0, [r5, r1]                   
    00202274:  movs     r0, #0xb1                      
    00202276:  movs     r1, #0x46                      
    00202278:  ldrsh    r6, [r6, r7]                   
    0020227A:  asrs     r3, r7, #0xf                   
    0020227C:  movs     r0, #0xe0                      
    0020227E:  lsls     r0, r5, #1                     
    00202280:  asrs     r0, r5, #0x18                  
    00202282:  movs     r0, #0xd0                      
    00202284:  pop      {r1, r2, r6, pc}               
    00202286:  asrs     r0, r5, #3                     
    00202288:  subs     r0, r0, #5                     
    0020228A:  ldr      r5, [pc, #0x3d8]                 // = 0xC7F60848
    0020228C:  subs     r6, r7, #6                     
    0020228E:  movs     r0, #0x49                      
    00202290:  subs     r6, r0, #5                     
    00202292:  ldr      r4, [sp, #0x3d8]               
    00202294:  movs     r2, #0xfc                      
    00202296:  movs     r0, #0x20                      
    00202298:  lsls     r4, r6, #1                     
    0020229A:  adr      r0, #0x80                      
    0020229C:  str      r4, [r6, #4]                   
    0020229E:  movs     r0, #0x74                      
    002022A0:  subs     r6, r0, #5                     
    002022A2:  adds     r6, r6, r7                     
    002022A4:  pop      {r2, r3, r4, r5, r6, r7, pc}   
    002022A6:  asrs     r0, r5, #3                     
    002022A8:  add      r5, sp, #0x100                 
    002022AA:  adds     r1, r4, r4                     
    002022AC:  asrs     r0, r1, #5                     
    002022AE:  ldr      r4, [pc, #0x3d8]                 // = 0x04F88D23
    002022B0:  asrs     r2, r7, #2                     
    002022B2:  asrs     r5, r7, #2                     
    002022B4:  lsls     r5, r6, #0x12                  
    002022B6:  lsls     r6, r0, #1                     
    002022B8:  lsls     r5, r7, #5                     
    002022BA:  lsls     r1, r4, #0xc                   
    002022BC:  lsls     r0, r5, #4                     
    002022BE:  lsls     r0, r2, #0x13                  
    002022C0:  lsrs     r0, r5, #0x18                  
    002022C2:  lsls     r1, r2, #3                     
    002022C4:  lsrs     r1, r5, #0x10                  
    002022C6:  lsrs     r0, r2, #0x1b                  
    002022C8:  lsls     r0, r1, #1                     
    002022CA:  lsls     r0, r5, #1                     
    002022CC:  lsrs     r0, r5, #0x20                  
    002022CE:  lsls     r0, r2, #3                     
    002022D0:  lsrs     r1, r4, #0x1c                  
    002022D2:  asrs     r0, r1, #5                     
    002022D4:  subs     r1, #0xf6                      
    002022D6:  movs     r0, #0xfa                      
    002022D8:  pop      {r1, r2, r6, pc}               
    002022DA:  asrs     r0, r5, #3                     
    002022DC:  subs     r0, r0, #5                     
    002022DE:  strb     r6, [r6, #0xb]                 
    002022E0:  asrs     r5, r7, #2                     
    002022E2:  lsls     r5, r7, #2                     
    002022E4:  strb     r0, [r4]                       
    002022E6:  adds     r7, r0, r1                     
    002022E8:  tst      r1, r4                         
    002022EA:  bvc      #0x2022da                      
    002022EC:  lsls     r7, r7, #0x12                  
    002022EE:  asrs     r2, r1, #1                     
    002022F0:  eors     r0, r4                         
    002022F2:  strb     r2, [r6, #7]                   
    002022F4:  cbz      r0, #0x202300                  
    002022F8:  movs     r0, #0xf0                      
    002022FA:  lsls     r0, r6, #7                     
    002022FC:  str      r0, [r0, r0]                   
    002022FE:  strb     r0, [r4, #1]                   
    00202300:  bgt      #0x202392                      
    00202302:  movs     r0, #0x86                      
    00202304:  ldr      r0, [r0]                       
    00202306:  movs     r0, #0x87                      
    00202308:  b        #0x20230c                      
    0020230A:  movs     r0, #0x33                      
    0020230C:  ldr      r4, [pc, #0]                     // = 0x20576100
    0020230E:  movs     r0, #0x79                      
    00202310:  str      r0, [r0, #0x10]                
    00202312:  movs     r0, #0x57                      
    00202314:  cmp      r7, #0                         
    00202316:  lsls     r1, r1, #0x11                  
    00202318:  movs     r0, r5                         
    0020231A:  lsls     r2, r2, #0x13                  
    0020231C:  lsrs     r0, r4, #0x20                  
    0020231E:  strb     r0, [r6, #1]                   
    00202320:  cmp      r4, #0x47                      
    00202322:  lsls     r1, r1, #0x11                  
    00202324:  movs     r0, r5                         
    00202326:  lsls     r2, r2, #0x13                  
    00202328:  ldr      r0, [pc, #0x80]                  // = 0x60D10B28
    0020232A:  strb     r0, [r6, #1]                   
    0020232C:  strb     r7, [r0, #1]                   
    0020232E:  cmp      r2, #0xb5                      
    00202330:  lsrs     r5, r1, #0x11                  
    00202332:  cmp      r1, #0x46                      
    00202334:  ldm      r2!, {r3, r5, r6}              
    00202336:  lsrs     r3, r7, #9                     
    00202338:  lsrs     r1, r7, #6                     
    0020233A:  asrs     r4, r7, #5                     
    0020233C:  lsrs     r1, r6, #0x12                  
    0020233E:  lsls     r1, r4, #4                     
    00202340:  strb     r0, [r6, #1]                   
    00202342:  movs     r4, #0xbd                      
    00202344:  push     {r0, r1, r3, r6}               
    00202346:  lsls     r0, r7, #0xf                   
    00202348:  subs     r0, r2, r0                     
    0020234A:  asrs     r0, r7, #9                     
    0020234C:  str      r1, [sp, #0x98]                
    0020234E:  asrs     r2, r0, #5                     
    00202350:  push     {r0, r1, r4, r6, r7}           
    00202352:  lsls     r0, r7, #0x17                  
    00202354:  sxth     r0, r4                         
    00202356:  strh     r5, [r6, #6]                   
    00202358:  lsrs     r7, r1, #0x11                  
    0020235A:  str      r1, [sp, #0x360]               
    0020235C:  lsrs     r2, r0, #9                     
    0020235E:  movs     r2, #0xd8                      
    00202360:  strh     r4, [r7, r1]                   
    00202362:  lsls     r7, r0, #0x1c                  
    00202364:  b        #0x202908                      
    00202366:  lsls     r1, r7, #9                     
    00202368:  lsls     r2, r5, #4                     
    0020236A:  lsls     r0, r2, #0xf                   
    0020236C:  lsls     r2, r5, #0x10                  
    0020236E:  ldrh     r1, [r2, r3]                   
    00202370:  str      r1, [sp, #0x1e0]               
    00202372:  lsls     r2, r0, #5                     
    00202374:  lsls     r2, r2, #0x1b                  
    00202376:  strb     r0, [r6, #1]                   
    0020237A:  ldrb     r5, [r6, #3]                   
    0020237C:  lsls     r6, r7, #0x1b                  
    00202380:  ldrb     r5, [r6, #3]                   
    00202382:  cmp      r3, #0xfe                      
    00202384:  b        #0x202458                      
    00202386:  bhi      #0x20247c                      
    00202388:  movs     r0, #0x72                      
    0020238A:  adds     r2, r7, r1                     
    0020238C:  movs     r0, #0x73                      
    0020238E:  ldr      r4, [r7, r1]                   
    00202390:  push     {r0, r1, r4, r5, r6}           
    00202392:  lsls     r0, r7, #0xf                   
    00202394:  movs     r0, #0                         
    00202396:  lsls     r0, r6, #7                     
    00202398:  adds     r0, r0, r0                     
    0020239A:  push     {r7}                           
    0020239C:  lsls     r0, r7, #0x17                  
    0020239E:  movs     r0, #0                         
    002023A0:  lsls     r0, r6, #7                     
    002023A2:  ldr      r0, [r0, r0]                   
    002023A4:  b        #0x2024a8                      
    002023A6:  lsls     r1, r7, #5                     
    002023A8:  lsls     r0, r5, #4                     
    002023AA:  lsls     r0, r2, #0x13                  
    002023AC:  lsrs     r0, r5, #0xc                   
    002023AE:  str      r1, [r2, #0xc]                 
    002023B0:  ldr      r0, [sp, #0x1e8]               
    002023B2:  lsls     r2, r6, #0x11                  
    002023B4:  lsrs     r1, r6, #0xb                   
    002023B6:  lsls     r1, r0, #0x18                  
    002023B8:  adds     r2, r4, r0                     
    002023BA:  tst      r5, r3                         
    002023BC:  blxns    lr                             
    002023BE:  cmp      r1, #0xff                      
    002023C0:  lsls     r0, r5, #1                     
    002023C2:  ldrh     r0, [r4]                       
    002023C4:  lsls     r3, r6, #5                     
    002023C6:  str      r0, [r4, #0xc]                 
    002023C8:  ldr      r0, [sp, #0x1f0]               
    002023CA:  adds     r0, #0x73                      
    002023CC:  pop      {r1, r2, r6, pc}               
    002023CE:  strb     r0, [r5, #3]                   
    002023D2:  strh     r5, [r6, r3]                   
    002023D4:  b        #0x201d54                      
    002023D6:  movs     r0, #0x86                      
    002023D8:  bgt      #0x2023dc                      
    002023DA:  movs     r0, #0xd                       
    002023DC:  ldr      r7, [pc, #0]                     // = 0x00477030
    002023DE:  vshr.u32 d23, d16, #0x10                
    002023E2:  lsls     r7, r0, #1                     
    002023E4:  lsrs     r0, r0, #0x18                  
    002023E6:  cmp      r5, #0x4b                      
    002023EA:  lsls     r1, r0, #1                     
    002023EC:  lsrs     r4, r4, #0x14                  
    002023EE:  strh     r7, [r1, #2]                   
    002023F0:  ldrb     r6, [r0, r1]                   
    002023F2:  lsrs     r0, r4, #9                     
    002023F4:  lsls     r6, r4, #0x18                  
    002023F6:  lsls     r3, r7, #0x13                  
    002023F8:  subs     r1, #0xf5                      
    002023FA:  eors     r0, r5                         
    002023FC:  ldr      r1, [pc, #0x118]                 // = 0x86F5B546
    002023FE:  lsls     r1, r3, #0x18                  
    00202400:  tst      r2, r4                         
    00202402:  ldrsh    r6, [r6, r7]                   
    00202404:  cmp      r0, #0xff                      
    00202406:  lsls     r1, r7, #0x1e                  
    00202408:  subs     r3, r1, r5                     
    0020240A:  ldrb     r0, [r5, r5]                   
    0020240C:  lsls     r1, r3, #0x10                  
    0020240E:  ldrb     r3, [r1, r5]                   
    00202410:  lsls     r0, r4, #9                     
    00202412:  lsls     r0, r4, #7                     
    00202414:  lsls     r4, r6, #0x10                  
    00202416:  stc      p1, c0, [ip, #-0x344]!         
    0020241A:  ldr      r3, [r1, r1]                   
    0020241C:  pop      {r3, r5, r6, pc}               
    00202422:  movs     r0, #0x86                      
    00202426:  movs     r0, #0x86                      
    00202428:  subs     r0, #0                         
    0020242A:  lsls     r5, r6, #0x12                  
    0020242E:  bge      #0x202420                      
    00202430:  strb     r7, [r7, #3]                   
    00202432:  lsrs     r1, r7, #0x12                  
    00202434:  subs     r5, r1, #1                     
    00202436:  cmp      r1, #0x22                      
    00202438:  lsls     r0, r5, #5                     
    0020243A:  subs     r1, r6, #3                     
    0020243C:  asrs     r0, r0, #0x10                  
    0020243E:  tst      r1, r6                         
    00202440:  lsls     r6, r6, #0x17                  
    00202442:  cmp      r0, #0xff                      
    00202444:  lsrs     r0, r5, #1                     
    00202446:  movs     r1, #0x4b                      
    00202448:  ldr      r6, [r0, r1]                   
    0020244A:  lsls     r0, r4, #0x19                  
    0020244C:  tst      r2, r4                         
    0020244E:  mrc2     p5, #7, r0, c6, c14, #7        
    00202452:  lsls     r3, r1, #1                     
    00202454:  ldrh     r2, [r4, r4]                   
    00202456:  lsls     r0, r5, #5                     
    00202458:  ldr      r2, [sp, #0x84]                
    0020245A:  bge      #0x202540                      
    0020245C:  adds     r1, r6, r5                     
    0020245E:  ldrh     r2, [r6, r1]                   
    00202460:  subs     r0, #0x72                      
    00202462:  lsls     r5, r7, #2                     
    00202464:  ldm      r4, {r0, r1, r2, r3, r4, r5, r7}
    00202466:  movs     r0, #0x86                      
    0020246A:  movs     r0, #0x86                      
    0020246C:  ands     r0, r0                         
    0020246E:  rors     r2, r6                         
    00202470:  ldr      r0, [sp, #0x4c]                
    00202472:  cmp      r5, #0x42                      
    00202476:  lsls     r1, r0, #0x15                  
    00202478:  lsrs     r6, r0, #0x11                  
    0020247A:  asrs     r6, r0, #0x1d                  
    0020247C:  lsrs     r6, r0, #0x11                  
    0020247E:  lsls     r1, r2, #0x1b                  
    00202480:  lsls     r1, r5, #0x10                  
    00202482:  adds     r4, #0xdd                      
    00202484:  cmp      r2, #0x48                      
    00202486:  lsrs     r6, r0, #1                     
    00202488:  itte     al                             
    0020248A:  lsl      r7, r7, #0x17                  
    0020248C:  lsr      r0, r4, #3                     
    0020248E:  asr      r6, r0, #5                     
    00202490:  lsls     r6, r0, #5                     
    00202492:  bhs      #0x202476                      
    00202494:  lsls     r2, r7, #0x1b                  
    00202496:  lsls     r6, r0, #1                     
    00202498:  lsls     r0, r4, #3                     
    0020249A:  adr      r4, #0x98                      
    0020249C:  lsls     r1, r6, #0xb                   
    0020249E:  blo      #0x2024a8                      
    002024A0:  lsls     r1, r6, #3                     
    002024A2:  ldr      r0, [pc, #0x20]                  // = 0x02EB0348
    002024A4:  lsls     r3, r5, #0xf                   
}

/* ---- sub_002024A6 @ 0x002024A6 ---- */
void sub_002024A6() {
    002024A6:  push     {r3, lr}                       
    002024A8:  lsrs     r5, r6, #3                     
    002024AA:  asrs     r7, r7, #0x11                  
    002024AC:  lsls     r7, r7, #2                     
    002024AE:  lsrs     r3, r4, #0x20                  
    002024B0:  lsls     r0, r6, #7                     
    002024B2:  add      r3, sp, #0xc                   
    002024B4:  cmp      r0, #0xb1                      
    002024B8:  str      r5, [sp, #0x3dc]               
    002024BA:  lsls     r7, r7, #3                     
    002024BC:  cmp      r4, #0x28                      
    002024BE:  subs     r3, #0xd0                      
    002024C0:  ldrb     r0, [r7, #9]                   
    002024C2:  movs     r6, #0x78                      
    002024C4:  lsls     r0, r1, #0xd                   
    002024C6:  lsls     r3, r5, #0xb                   
    002024C8:  movs     r5, #0x22                      
    002024CA:  str      r2, [sp, #0x12c]               
    002024CC:  ldrh     r2, [r6, r6]                   
    002024CE:  asrs     r0, r5, #5                     
    002024D0:  bls      #0x2024e8                      
    002024D2:  ldr      r2, [sp, #0x1c4]               
    002024D4:  ldr      r7, [pc, #0x1c4]                 // = 0x8D2006F8
    002024D6:  lsrs     r4, r6, #3                     
    002024D8:  lsrs     r1, r6, #1                     
    002024DA:  str      r6, [sp, #0x3d8]               
    002024DC:  lsls     r7, r7, #7                     
    002024DE:  subs     r6, r4, r4                     
    002024E0:  lsrs     r0, r4                         
    002024E2:  asrs     r2, r6, #7                     
    002024E4:  ldr      r5, [sp, #0x10c]               
    002024E6:  lsls     r2, r0, #0x19                  
    002024E8:  asrs     r1, r2, #3                     
    002024EA:  lsrs     r4, r5, #8                     
    002024EC:  movs     r0, #0xdc                      
    002024EE:  subs     r1, #0x46                      
    002024F0:  lsls     r6, r0, #5                     
    002024F2:  ldr      r4, [pc, #0x3c0]                 // = 0x027829FF
    002024F4:  lsrs     r1, r7, #0x1f                  
    002024F6:  lsrs     r0, r4                         
    002024F8:  movs     r1, #0xf2                      
    002024FA:  ldr      r5, [sp, #0x10c]               
    002024FC:  lsrs     r2, r0, #0x11                  
    002024FE:  asrs     r1, r2, #3                     
    00202500:  lsls     r4, r5, #0x14                  
    00202502:  asrs     r5, r3, #0x13                  
    00202504:  movs     r1, #0x48                      
    00202506:  cmp      r2, #0x46                      
    00202508:  lsrs     r6, r0, #1                     
    0020250A:  ldrb     r6, [r6, #0x1b]                
    0020250C:  lsls     r7, r7, #0x13                  
    0020250E:  movs     r0, #0xe0                      
    00202510:  subs     r1, #0x46                      
    00202512:  lsls     r6, r0, #5                     
    00202514:  ldr      r1, [sp, #0x3c0]               
    00202516:  lsls     r2, r7, #0x1b                  
}

/* ---- sub_00202518 @ 0x00202518 ---- */
void sub_00202518() {
    00202518:  push     {r1, r2, r6, lr}               
    0020251A:  strh     r5, [r6, #0x36]                
    0020251C:  asrs     r7, r5, #0x11                  
    0020251E:  lsls     r7, r7, #2                     
    00202520:  lsrs     r5, r4, #0x20                  
    00202522:  lsls     r0, r6, #7                     
    00202524:  ldr      r5, [sp, #0x14]                
    00202526:  lsrs     r1, r6, #0x12                  
    0020252A:  ldrb     r7, [r6, r3]                   
    0020252C:  ldrb     r7, [r7, #3]                   
    0020252E:  subs     r3, #0xb1                      
    00202530:  ldrb     r0, [r7, #9]                   
    00202532:  lsrs     r0, r7, #9                     
    00202534:  lsls     r0, r1, #0xd                   
    00202536:  lsls     r3, r5, #0xb                   
    00202538:  lsrs     r2, r4, #4                     
    0020253A:  str      r2, [sp, #0x12c]               
    0020253C:  ldrh     r2, [r6, r6]                   
    0020253E:  asrs     r0, r5, #5                     
    00202540:  ldr      r2, [r1, r4]                   
    00202542:  subs     r2, r6, r1                     
    00202544:  ldr      r7, [pc, #0x1c8]                 // = 0x007820FE
    00202546:  strh     r4, [r6, #0x36]                
    00202548:  lsrs     r1, r4, #1                     
    0020254A:  ldrsh    r6, [r6, r3]                   
    0020254C:  lsls     r7, r7, #7                     
    0020254E:  adds     r0, #0x26                      
    00202550:  pop      {r1, r2, r6, pc}               
    00202554:  ldrb     r1, [r0, #2]                   
    00202556:  movs     r0, #0x79                      
    00202558:  and      r0, r0, #0x86008600            
    0020255C:  str      r2, [sp]                       
    0020255E:  movs     r0, #0x79                      
    00202562:  movs     r0, #0x86                      
    00202564:  adds     r0, #0                         
    00202566:  lsrs     r5, r6, #0x12                  
    00202568:  lsrs     r3, r1, #0x11                  
    0020256A:  subs     r1, r1, r5                     
    0020256C:  lsrs     r0, r1, #2                     
    0020256E:  lsls     r2, r4, #0xc                   
    00202570:  lsls     r4, r6, #3                     
    00202572:  lsls     r5, r0, #1                     
    00202574:  strh     r0, [r6, #6]                   
    00202576:  push     {r2}                           
    00202578:  asrs     r3, r5, #0x17                  
    0020257A:  ldr      r7, [pc, #0xbc]                  // = 0x207AB500
    0020257C:  mvns     r2, r5                         
    0020257E:  adds     r3, r0, r0                     
    00202580:  ldr      r3, [pc, #0x2fc]                 // = 0x01702049
    00202582:  lsls     r0, r0, #5                     
    00202584:  ands     r2, r7                         
    00202586:  bhs      #0x20258a                      
    00202588:  ldr      r3, [sp, #0x2c8]               
    0020258A:  stm      r0!, {r1, r4, r5, r7}          
    0020258C:  lsls     r2, r6, #2                     
    0020258E:  mcr      p1, #1, r0, c10, c1, #6        
    00202592:  asrs     r2, r1, #0xd                   
    00202594:  adds     r0, #0x80                      
    00202596:  lsls     r5, r7, #2                     
    00202598:  bmi      #0x20251a                      
    0020259A:  movs     r0, #0x90                      
    0020259C:  lsls     r0, r0, #0x14                  
    002025A0:  lsls     r7, r7, #0xf                   
    002025A2:  adds     r3, r1, r1                     
    002025A4:  lsls     r0, r7, #1                     
    002025A6:  asrs     r0, r5, #0x10                  
    002025A8:  ldr      r7, [pc, #0x2fc]                 // = 0x01FB54F6
    002025AA:  vshr.u32 d16, d16, #0x10                
    002025AE:  strb     r0, [r4]                       
    002025B2:  movs     r0, #0x86                      
    002025B4:  strb     r0, [r0]                       
    002025B6:  strb     r7, [r0, #1]                   
    002025B8:  lsls     r7, r0, #5                     
    002025BA:  lsls     r6, r0, #5                     
    002025BC:  lsrs     r0, r1, #1                     
    002025BE:  subs     r6, r6, r7                     
    002025C0:  blxns    r7                             
    002025C2:  movs     r0, #0x7a                      
    002025C4:  lsrs     r0, r0, #0x20                  
    002025C6:  lsls     r5, r6, #0x12                  
    002025C8:  lsrs     r0, r1, #1                     
    002025CA:  lsrs     r6, r6, #0xf                   
    002025CC:  lsls     r7, r7, #0xf                   
    002025CE:  lsls     r1, r1, #0xd                   
    002025D0:  pop      {r5, pc}                       
    002025D2:  lsrs     r0, r5, #3                     
    002025D4:  lsrs     r0, r0, #0x1d                  
    002025D6:  strh     r6, [r6, r3]                   
    002025D8:  ldr      r1, [r7, #0x18]                
    002025DA:  movs     r0, #0x7a                      
    002025DC:  and      r0, r0, #0x86008600            
    002025E0:  asrs     r0, r0, #0x20                  
    002025E2:  asrs     r5, r6, #0xa                   
    002025E4:  asrs     r0, r1, #9                     
    002025E6:  lsrs     r4, r1, #1                     
    002025E8:  ldc2l    p2, c1, [r6], #0x3f8           
    002025EC:  lsrs     r0, r1, #1                     
    002025F0:  b        #0x2029f0                      
    002025F2:  asrs     r0, r1, #6                     
    002025F4:  lsrs     r0, r1, #1                     
    002025F6:  vshr.u64 q8, q15, #0xa                  
    002025FA:  lsls     r3, r4, #0xc                   
    002025FC:  movs     r1, #0x20                      
    002025FE:  b        #0x202c8e                      
    00202600:  lsrs     r0, r0, #0x1e                  
    00202602:  subs     r4, #0xf6                      
    00202604:  movs     r1, #0xf9                      
    00202606:  str      r1, [r7, #0x34]                
    00202608:  lsrs     r1, r7, #5                     
    0020260A:  lsls     r4, r0, #4                     
    0020260C:  lsls     r3, r5, #0xf                   
    0020260E:  b        #0x202cd4                      
    00202610:  str      r0, [r7, #0x24]                
    00202612:  lsls     r0, r7, #5                     
    00202614:  lsls     r3, r5, #0xf                   
    00202616:  adr      r3, #0x84                      
    00202618:  lsrs     r0, r7, #1                     
    0020261A:  ldm      r1!, {r3, r6}                  
    0020261C:  movs     r3, #0x18                      
    0020261E:  lsls     r0, r7, #0xd                   
    00202620:  lsls     r3, r5, #0xb                   
    00202622:  pop      {r1, r5, pc}                   
    00202624:  asrs     r0, r5, #3                     
    00202626:  lsrs     r0, r0, #1                     
    00202628:  vshr.s64 d16, d30, #0xa                 
    0020262C:  strb     r7, [r7, #0x1a]                
    0020262E:  movs     r0, #0x7a                      
    00202630:  and      r0, r0, #0x86008600            
    00202634:  str      r4, [sp]                       
    00202636:  movs     r0, #0x7a                      
}

/* ---- sub_00202638 @ 0x00202638 ---- */
void sub_00202638() {
    00202638:  push     {lr}                           
    0020263A:  movs     r0, #0x7a                      
    0020263E:  movs     r0, #0x7a                      
    00202640:  ldrb     r0, [r0, #0x1c]                
    00202642:  lsls     r5, r6, #6                     
    00202644:  lsrs     r1, r4, #0xc                   
    00202646:  ldr      r7, [pc, #0x118]                 // = 0x207AF400
    00202648:  strh     r4, [r6, #6]                   
    0020264A:  lsls     r2, r0, #1                     
    0020264C:  adds     r0, r4, r4                     
    0020264E:  b        #0x20203e                      
    00202650:  rors     r3, r7                         
    00202652:  ldrh     r2, [r6, #6]                   
    00202654:  asrs     r0, r6, #4                     
    00202656:  ldrb     r6, [r6, #0x1b]                
    00202658:  lsrs     r1, r7                         
    0020265A:  lsrs     r0, r1, #1                     
    0020265C:  stm      r2!, {r1, r2, r4, r5, r6, r7}  
    0020265E:  ldr      r5, [sp, #0x3f8]               
    00202660:  lsls     r0, r7, #0x17                  
    00202662:  subs     r7, #0x10                      
    00202664:  lsrs     r0, r1, #1                     
    00202666:  stm      r7!, {r1, r2, r4, r5, r6, r7}  
    00202668:  lsls     r6, r7, #3                     
    0020266A:  subs     r0, r4, r0                     
    0020266C:  ldrb     r6, [r6, r7]                   
    0020266E:  lsls     r6, r7, #3                     
    00202670:  subs     r0, r4, r0                     
    00202672:  ldrh     r6, [r6, r3]                   
    00202674:  lsls     r6, r7, #3                     
    00202676:  subs     r0, r4, r0                     
    00202678:  ldrsb    r6, [r6, r7]                   
    0020267A:  lsls     r6, r7, #3                     
    0020267C:  subs     r0, r4, r0                     
    0020267E:  strb     r6, [r6, r3]                   
    00202680:  ldc2l    p10, c1, [lr, #0x80]!          
    00202684:  str      r6, [r6, r7]                   
    00202686:  str      r0, [sp, #0x3f8]               
    00202688:  ldrh     r3, [r4, #0x28]                
    0020268A:  lsls     r0, r7, #0x13                  
    0020268C:  adds     r5, #0x30                      
    0020268E:  lsls     r3, r1, #1                     
    00202690:  ldrh     r4, [r4, r0]                   
    00202692:  ldrh     r0, [r7, #0x2a]                
    00202694:  lsls     r0, r7, #0x17                  
    00202696:  ldr      r2, [sp, #0x80]                
    00202698:  blt      #0x20278c                      
    0020269A:  ldrh     r0, [r7, #0x2a]                
    0020269C:  lsls     r0, r7, #0x1b                  
    0020269E:  ldrh     r0, [r4, #0x28]                
    002026A0:  lsls     r0, r7, #0x1f                  
    002026A2:  adds     r1, #0x30                      
    002026A4:  ldr      r7, [pc, #0x12c]                 // = 0x032000FB
    002026A8:  subs     r2, r6, r0                     
    002026AA:  lsls     r0, r0, #6                     
    002026AC:  adr      r5, #0x2b8                     
    002026AE:  cmp      r0, #0x5d                      
    002026B2:  ldr      r7, [r6, r3]                   
    002026B4:  cmp      r3, #0xff                      
    002026B6:  blt      #0x2026f4                      
    002026B8:  lsls     r2, r6, #6                     
    002026BA:  ldrh     r3, [r5]                       
    002026BC:  adr      r0, #0x2fc                     
    002026BE:  lsls     r5, r3, #0x11                  
    002026C0:  ldc2l    p10, c1, [r8], {0x20}          
    002026C4:  adds     r1, #0xf6                      
    002026C6:  lsls     r6, r7, #0x17                  
    002026C8:  ldrb     r0, [r6, #0x1f]                
    002026CA:  lsls     r0, r0, #4                     
    002026CC:  subs     r4, r6, r0                     
    002026CE:  cmp      r4, #0xf6                      
    002026D0:  lsls     r6, r7, #0x13                  
    002026D2:  bic.w    r4, ip, r1, lsr #11            
    002026D6:  movs     r0, #0x4c                      
    002026D8:  lsls     r0, r1, #2                     
    002026DA:  lsls     r2, r1, #0xc                   
    002026DC:  blt      #0x20271a                      
    002026DE:  lsls     r2, r6, #6                     
    002026E0:  lsrs     r3, r5, #0xc                   
    002026E2:  ldc2l    p10, c1, [r8], {0x20}          
    002026E6:  movs     r0, #0xf6                      
    002026E8:  movs     r0, #0xfe                      
    002026EA:  stm      r0!, {r3, r7}                  
    002026EC:  lsls     r3, r6, #0x1b                  
    002026EE:  subs     r0, r4, r0                     
    002026F0:  subs     r6, r6, r7                     
    002026F2:  subs     r6, r7, #3                     
    002026F4:  lsrs     r0, r1, #1                     
    002026F6:  strb     r6, [r6, #0x17]                
    002026F8:  lsls     r6, r7, #7                     
    002026FA:  subs     r0, r4, r3                     
    002026FC:  asrs     r6, r6, #0x17                  
    002026FE:  subs     r6, r7, r3                     
    00202700:  movs     r0, #0x4c                      
    00202702:  lsls     r0, r7, #0xd                   
    00202704:  blt      #0x202742                      
    00202706:  lsls     r2, r6, #6                     
    00202708:  lsrs     r3, r5, #0xc                   
    0020270A:  ldc2l    p10, c1, [r8], {0x20}          
    0020270E:  lsrs     r6, r6, #0x13                  
    00202710:  movs     r0, #0xfe                      
    00202712:  lsls     r0, r7, #1                     
    00202714:  ldrb     r0, [r6, #0x1f]                
    00202716:  subs     r0, r0, r0                     
    00202718:  lsls     r6, r6, #0x1f                  
    0020271A:  asrs     r6, r7, #0x17                  
    0020271C:  lsrs     r0, r1, #1                     
    0020271E:  str      r6, [r6, #0x1c]                
    00202720:  lsls     r6, r7, #7                     
    00202722:  subs     r0, r4, r3                     
    00202724:  lsls     r6, r6, #7                     
    00202726:  lsls     r6, r7, #3                     
    00202728:  lsls     r4, r4, #4                     
    0020272A:  b        #0x202a84                      
    0020272C:  asrs     r4, r3, #5                     
    0020272E:  lsls     r0, r1, #5                     
    00202730:  lsrs     r4, r6, #0x20                  
    00202732:  str      r6, [r6, #0x1c]                
    00202734:  lsls     r6, r7, #0x13                  
    00202738:  lsrs     r1, r2, #0xf                   
    0020273A:  lsrs     r3, r1, #0x1d                  
    0020273C:  adds     r0, r1, r5                     
    0020273E:  lsrs     r0, r1, #2                     
    00202740:  ldrh     r6, [r6, r3]                   
    00202742:  lsls     r6, r7, #3                     
    00202744:  lsls     r0, r4, #0xc                   
    00202746:  lsls     r6, r0, #5                     
    00202748:  ldr      r7, [pc, #0x84]                  // = 0xD4F6193F
    0020274A:  strh     r4, [r6, #6]                   
    0020274C:  adds     r2, r0, r5                     
    0020274E:  str      r6, [r6, #0x4c]                
    00202750:  lsrs     r3, r7, #0xb                   
    00202752:  lsls     r0, r1, #0x11                  
    00202754:  pop      {r4, r5, r7, pc}               
    00202756:  strb     r0, [r5, #3]                   
    00202758:  lsrs     r0, r0, #1                     
    0020275A:  mvns     r6, r6                         
    0020275C:  b        #0x202edc                      
    0020275E:  movs     r0, #0x7a                      
    00202760:  and      r0, r0, #0xfa000               
    00202766:  movs     r0, #0x86                      
    00202768:  bmi      #0x20276c                      
    0020276A:  movs     r0, #0x90                      
    0020276C:  vqadd.u8 q1, q0, q13                    
    00202770:  adds     r0, #0                         
    00202772:  movs     r0, #0x7b                      
    00202774:  str      r0, [r0, #0x10]                
    00202776:  movs     r0, #0x7b                      
    00202778:  ldrb     r0, [r0]                       
    0020277A:  movs     r0, #0x7b                      
    0020277C:  ldrh     r0, [r0]                       
    0020277E:  movs     r0, #0x7b                      
    00202780:  adds     r0, #0                         
    00202782:  ldr      r3, [sp, #0x2d4]               
    00202784:  adr      r5, #0x120                     
    00202786:  ldr      r3, [sp, #0x2c0]               
    00202788:  lsrs     r4, r1, #1                     
    0020278A:  cmp      r3, #0xf6                      
    0020278C:  adds     r0, #0xfe                      
    0020278E:  adds     r0, r4, r4                     
    00202790:  str      r2, [sp, #0x3d8]               
    00202792:  movs     r0, #0xfc                      
    00202794:  cmp      r0, #0x68                      
    00202796:  lsrs     r0, r6, #0x20                  
    00202798:  movs     r4, #0xf6                      
    0020279A:  movs     r0, #0xfe                      
    0020279C:  lsrs     r0, r5, #0x1d                  
    0020279E:  ldrb     r6, [r6, r7]                   
    002027A0:  str      r5, [sp, #0x3f4]               
    002027A2:  adds     r3, r1, r1                     
    002027A4:  lsrs     r0, r5, #0x1d                  
    002027A6:  strh     r6, [r6, #0x1e]                
    002027A8:  lsrs     r6, r7, #3                     
    002027AA:  adds     r3, #0xf6                      
    002027AC:  lsls     r3, r7, #3                     
    002027AE:  lsls     r0, r4, #0xc                   
    002027B0:  lsls     r6, r0, #5                     
    002027B2:  ldr      r7, [pc, #0x84]                  // = 0x00FD8FF6
    002027B4:  strh     r4, [r6, #6]                   
    002027B6:  adds     r2, r0, r5                     
    002027B8:  cmp      r7, #0xf6                      
    002027BA:  str      r0, [sp, #0x3ec]               
    002027BC:  lsrs     r0, r1, #1                     
    002027BE:  asrs     r6, r6, #7                     
    002027C0:  ldrh     r6, [r7, #0x3e]                
    002027C2:  str      r0, [sp, #0x120]               
    002027C4:  lsls     r1, r1, #0xd                   
    002027C6:  lsls     r1, r1, #2                     
    002027C8:  orrs     r2, r4                         
    002027CA:  lsrs     r0, r6, #3                     
    002027CC:  movs     r0, #3                         
    002027CE:  lsrs     r0, r7, #3                     
    002027D0:  adds     r7, r7, r4                     
    002027D2:  bmi      #0x2027c2                      
    002027D4:  lsls     r3, r7, #3                     
    002027D6:  lsls     r0, r4, #0xc                   
    002027D8:  lsls     r6, r0, #0xd                   
    002027DA:  ands     r1, r4                         
    002027DC:  lsrs     r2, r6, #0x17                  
    002027DE:  adds     r2, r4, r4                     
    002027E0:  subs     r6, r6, r7                     
    002027E2:  ldrh     r3, [r7, #0xe]                 
    002027E4:  lsrs     r0, r1, #1                     
    002027E6:  ldc2l    p0, c0, [r6, #0x3f4]!          
    002027EA:  asrs     r2, r4, #0xc                   
    002027EC:  movs     r0, #0x46                      
    002027EE:  movs     r1, #0x21                      
    002027F0:  subs     r0, r4, r0                     
    002027F2:  asrs     r6, r6, #0x17                  
    002027F4:  subs     r6, r7, r3                     
    002027F6:  cbz      r6, #0x202876                  
    002027F8:  lsls     r4, r7, #3                     
    002027FA:  lsls     r0, r4, #4                     
    002027FC:  ldr      r7, [pc, #0x118]                 // = 0x0B940194
    002027FE:  asrs     r4, r6, #0x1b                  
    00202800:  subs     r2, r2, r1                     
    00202802:  ldr      r6, [r6, #0x3c]                
    00202804:  subs     r4, r7, r3                     
    00202806:  lsls     r6, r6, #3                     
    0020280A:  stm      r0!, {r0, r2, r4, r5, r6, r7}  
    0020280C:  ldrb     r2, [r7, #0x1f]                
    0020280E:  lsls     r0, r1, #1                     
    00202812:  ldm      r7, {r0, r2, r4, r5, r6, r7}   
    00202814:  ldrb     r2, [r7, #0x1b]                
    00202816:  lsls     r3, r1, #0x11                  
    00202818:  subs     r2, r4, r0                     
    0020281A:  ldrb     r0, [r4, #0x19]                
    0020281C:  lsls     r3, r1, #5                     
    0020281E:  subs     r2, r4, r0                     
    00202820:  adr      r3, #0x180                     
    00202822:  strh     r5, [r6, #6]                   
    00202824:  subs     r3, r4, r1                     
    00202826:  rsbs     r0, r5, #0                     
    00202828:  lsls     r0, r6, #0x13                  
    0020282A:  subs     r2, r0, r0                     
    0020282C:  subs     r0, r4, r1                     
    0020282E:  subs     r6, r6, r3                     
    00202830:  cmp      r0, #0xfd                      
    00202832:  lsrs     r1, r6, #0x16                  
    00202834:  ldrh     r1, [r6, #0x3e]                
    00202836:  subs     r0, r0, r0                     
    00202838:  ldrh     r6, [r6, #0x3e]                
    0020283A:  lsls     r5, r7, #3                     
    0020283E:  strb     r1, [r2, #0x1b]                
    00202840:  strb     r3, [r1, #0x19]                
    00202842:  ldr      r2, [r1, #0x74]                
    00202844:  subs     r5, r1, r1                     
    00202846:  subs     r0, r4, r1                     
    0020284A:  subs     r4, r7, r3                     
    0020284C:  ldm      r4, {r1, r2, r4, r5, r6, r7}   
    0020284E:  adds     r0, #0xfc                      
    00202850:  strb     r1, [r4]                       
    00202852:  strb     r0, [r4, #0xc]                 
    00202854:  lsrs     r2, r1, #0x1d                  
    00202856:  ldr      r2, [sp, #0x3d8]               
    00202858:  asrs     r7, r7, #3                     
    0020285A:  lsls     r1, r4, #0x14                  
    0020285C:  lsrs     r1, r6, #0x1b                  
    0020285E:  movs     r0, #2                         
    00202860:  lsrs     r0, r4, #0x1c                  
    00202862:  str      r4, [sp, #0x3d8]               
    00202864:  ldr      r7, [r7, #0x7c]                
    00202866:  lsls     r4, r1, #0xd                   
    00202868:  movs     r0, #0x46                      
    0020286A:  add      r1, sp, #0x1c0                 
    0020286C:  orns     lr, fp, fp, ror #25            
    00202870:  lsrs     r0, r1, #1                     
    00202872:  bhs      #0x202862                      
    00202874:  ldr      r5, [r7, #0x5c]                
    00202876:  lsrs     r2, r1, #9                     
    00202878:  asrs     r1, r4, #8                     
    0020287A:  lsrs     r0, r4, #0x1c                  
    0020287C:  strh     r6, [r6, #0x3e]                
    0020287E:  ldr      r7, [r7, #0x4c]                
    00202880:  movs     r0, #0x49                      
    00202882:  lsls     r0, r6, #5                     
    00202884:  lsrs     r0, r4, #0x1c                  
    00202886:  str      r6, [r6, #0x5c]                
    00202888:  lsls     r3, r7, #0xb                   
    0020288A:  ldr      r0, [r4, #0x20]                
    0020288C:  lsrs     r1, r1, #0x1d                  
    0020288E:  str      r6, [r6, #0x1c]                
    00202890:  lsls     r3, r7, #0xf                   
    00202892:  ldr      r0, [r4, #0x10]                
    00202894:  lsrs     r1, r1, #0x1d                  
    00202896:  ldrb     r6, [r6, r7]                   
    00202898:  ldr      r3, [r7, #0xc]                 
    0020289A:  lsls     r5, r1, #0x11                  
    0020289C:  ldr      r0, [r4]                       
    0020289E:  lsrs     r1, r1, #0x1d                  
    002028A0:  ldr      r6, [r6, r3]                   
    002028A2:  lsls     r3, r7, #0x17                  
    002028A4:  str      r0, [r4, #0x70]                
    002028A6:  lsrs     r1, r1, #0x1d                  
    002028A8:  strb     r6, [r6, r3]                   
    002028AA:  lsls     r3, r7, #7                     
    002028AC:  asrs     r1, r4, #0x20                  
    002028AE:  cmp      r2, #0x20                      
    002028B0:  lsrs     r6, r0, #0x1d                  
    002028B2:  ldr      r6, [r6, #0x4c]                
    002028B4:  cmp      r1, #0xff                      
    002028B6:  lsls     r0, r7, #9                     
    002028B8:  movs     r0, #0x46                      
    002028BA:  str      r0, [r6, #0x34]                
    002028BC:  lsrs     r0, r1, #1                     
    002028BE:  adr      r4, #0x3d8                     
    002028C0:  lsls     r5, r7, #7                     
    002028C2:  movs     r2, #0x21                      
    002028C4:  movs     r5, #0xa8                      
    002028C6:  str      r4, [sp, #0x3d8]               
    002028C8:  movs     r2, #0xfd                      
    002028CA:  str      r1, [r3, #8]                   
    002028CC:  lsrs     r0, r1, #1                     
    002028CE:  str      r3, [sp, #0x3d8]               
    002028D0:  movs     r2, #0xfd                      
    002028D2:  ldrsh    r3, [r3, r6]                   
    002028D4:  bls      #0x202970                      
    002028D6:  stm      r3!, {r1, r4, r5, r7}          
    002028D8:  lsls     r3, r6, #0x1f                  
    002028DA:  stm      r3!, {r1, r5}                  
    002028DC:  lsls     r3, r6, #0xf                   
    002028DE:  lsrs     r3, r0, #0x1d                  
    002028E0:  str      r3, [r5, #0x10]                
    002028E2:  adr      r2, #0x1c0                     
    002028E4:  b        #0x202fc8                      
    002028E6:  lsls     r0, r6, #5                     
    002028E8:  lsrs     r1, r2, #0x1b                  
    002028EA:  b        #0x202f34                      
    002028EC:  b        #0x202fd0                      
    002028EE:  ldr      r0, [r7, r5]                   
    002028F0:  lsrs     r0, r1, #1                     
    002028F2:  str      r2, [sp, #0x3d8]               
    002028F4:  adr      r1, #0x3f4                     
    002028F6:  b        #0x202fea                      
    002028F8:  lsrs     r0, r7, #5                     
    002028FA:  lsls     r2, r0, #4                     
    002028FC:  lsls     r3, r5, #0xf                   
    002028FE:  str      r1, [r0, #0x34]                
    00202900:  strb     r0, [r7, r5]                   
    00202902:  ldm      r1!, {r3, r6}                  
    00202904:  lsrs     r0, r3, #0x20                  
    00202906:  strb     r6, [r6, #0x1f]                
    0020290A:  ldr      r2, [sp, #0x3dc]               
    0020290C:  lsls     r6, r7, #3                     
    0020290E:  lsls     r0, r4, #0x14                  
    00202910:  asrs     r2, r4, #0x20                  
    00202912:  lsls     r3, r4, #0x1c                  
    00202914:  lsls     r4, r4, #4                     
    00202916:  lsls     r6, r0, #1                     
    00202918:  lsls     r4, r2, #6                     
    0020291A:  lsrs     r4, r2, #0xe                   
    0020291C:  ldr      r1, [pc, #0x3d8]                 // = 0x2A460120
    0020291E:  asrs     r6, r7, #3                     
    00202920:  ldr      r6, [pc, #0x84]                  // = 0x9B4B1530
    00202922:  mcr2     p6, #2, r0, c8, c7, #7         
    00202926:  lsrs     r6, r7, #0x13                  
    00202928:  ldrd     r4, sp, [r6, #0x3e0]!          
    0020292C:  lsrs     r0, r1, #1                     
    0020292E:  ldrd     r4, ip, [r6], #0x3fc           
    00202932:  lsrs     r0, r1, #5                     
    00202934:  add      r6, sp, #0x3d8                 
    00202936:  ldr      r4, [pc, #0x3e4]                 // = 0x023020F8
    00202938:  lsrs     r0, r1, #0xd                   
    0020293A:  bvc      #0x20292a                      
    0020293C:  ldr      r3, [pc, #0x3fc]                 // = 0x0170A870
    0020293E:  lsrs     r0, r1, #0x19                  
    00202940:  adds     r6, r6, r3                     
    00202942:  ldr      r3, [pc, #0x3f0]                 // = 0x6B732A72
    00202944:  asrs     r0, r1, #1                     
    00202946:  b        #0x202d36                      
    00202948:  ldr      r2, [pc, #0x3e8]                 // = 0x6B732A72
    0020294A:  lsrs     r0, r1, #1                     
    0020294C:  ldr      r2, [pc, #0x3d8]                 // = 0x6F722B03
    0020294E:  lsls     r5, r7, #0xb                   
    00202950:  ldrh     r3, [r4, #0x28]                
    00202952:  lsrs     r0, r7, #3                     
    00202954:  lsls     r0, r6, #4                     
    00202956:  ldrh     r3, [r4, #0x28]                
    00202958:  lsrs     r0, r7, #7                     
    0020295A:  ldrh     r0, [r6, #0x28]                
    0020295C:  cmp      r0, #0xf8                      
    0020295E:  lsls     r0, r0, #0x15                  
    00202960:  movs     r4, #0x23                      
    00202962:  cmp      r4, sb                         
    00202964:  asrs     r1, r1, #1                     
    00202966:  ldrh     r2, [r4, #0x28]                
    00202968:  lsrs     r0, r7, #0xb                   
    0020296A:  lsrs     r0, r6, #0x14                  
    0020296C:  cmp      r1, #0xf1                      
    0020296E:  asrs     r0, r0, #4                     
    00202970:  ldrh     r3, [r4, #0x28]                
    00202972:  movs     r7, #0xf8                      
    00202974:  tst      r0, r6                         
    00202976:  ldr      r6, [r6, #0x2c]                
    00202978:  movs     r0, #0xfc                      
    0020297A:  asrs     r0, r5, #0x11                  
    0020297C:  tst      r0, r6                         
    0020297E:  ldr      r1, [sp, #0x3d8]               
    00202980:  movs     r1, #0xfc                      
    00202982:  rsbs     r0, r5, #0                     
    00202984:  bhs      #0x2029c0                      
    00202986:  lsrs     r2, r6, #6                     
    00202988:  ldrh     r3, [r4, #0x28]                
    0020298A:  ldr      r0, [pc, #0x3e0]                 // = 0x20870F00
    0020298C:  asrs     r0, r4, #0x10                  
    0020298E:  lsls     r1, r6, #4                     
    00202990:  lsrs     r2, r7, #0x14                  
    00202992:  ldr      r2, [pc, #0x3c4]                 // = 0x00786B22
    00202994:  ldrh     r0, [r0, #0x28]                
    00202996:  ldr      r1, [pc, #0x3e0]                 // = 0x207CDB00
    00202998:  tst      r0, r6                         
    0020299A:  ldr      r6, [r6, r3]                   
    0020299C:  lsrs     r4, r7, #0x13                  
    0020299E:  ldrh     r3, [r4, #0x28]                
    002029A0:  str      r0, [r7, #0x7c]                
    002029A2:  vabd.f16 d8, d0, d19                    
    002029A6:  ldr      r0, [r7, #0xc]                 
    002029A8:  asrs     r0, r6, #0x14                  
    002029AA:  ldr      r3, [sp, #0x12c]               
    002029AC:  ldrh     r7, [r7, #0x2a]                
    002029AE:  ldr      r0, [r7, #0x1c]                
    002029B0:  movs     r0, r6                         
    002029B2:  str      r3, [r5, #0x30]                
    002029B4:  adds     r0, r2, #7                     
    002029B6:  subs     r3, r1, r1                     
    002029B8:  ldrh     r0, [r7, #0x2a]                
    002029BA:  ldr      r0, [r7, #0x2c]                
    002029BC:  ldrh     r0, [r4, r0]                   
    002029BE:  ldrh     r0, [r7, #0x2a]                
    002029C0:  ldr      r0, [r7, #0x3c]                
    002029C2:  ldr      r2, [sp, #0x80]                
    002029C4:  ldrh     r0, [r7, #0x2a]                
    002029C6:  ldr      r0, [r7, #0x4c]                
    002029C8:  bge      #0x202a0c                      
    002029CA:  ldrh     r0, [r7, #0x2a]                
    002029CC:  ldr      r0, [r7, #0x5c]                
    002029CE:  subs     r0, r4, r0                     
    002029D0:  ldrh     r1, [r7, #0x2a]                
    002029D2:  ldr      r0, [r7, #0x6c]                
    002029D4:  ldrh     r0, [r4, r0]                   
    002029D6:  ldrh     r1, [r7, #0x2a]                
    002029D8:  ldr      r0, [r7, #0x7c]                
    002029DA:  ldr      r2, [sp, #0x80]                
    002029DC:  ldrh     r1, [r7, #0x2a]                
    002029DE:  strb     r0, [r7, #3]                   
    002029E0:  bge      #0x202a24                      
    002029E2:  ldrh     r1, [r7, #0x2a]                
    002029E4:  strb     r0, [r7, #7]                   
    002029E6:  subs     r0, r4, r0                     
    002029E8:  ldrh     r2, [r7, r5]                   
    002029EA:  ldrh     r2, [r7, #0x2a]                
    002029EC:  strb     r0, [r7, #0xb]                 
    002029EE:  ldrsb    r0, [r4, r4]                   
    002029F0:  ldrh     r0, [r4, #0x1e]                
    002029F2:  movs     r0, #0x7b                      
    002029F4:  strb     r0, [r0, r0]                   
    002029F6:  movs     r0, #8                         
    002029F8:  ldrb     r0, [r0, r0]                   
    002029FA:  movs     r0, #8                         
    002029FC:  str      r4, [sp]                       
    002029FE:  movs     r0, #0x7b                      
    00202A00:  and      r0, r0, #0x86008600            
    00202A04:  strh     r0, [r0, #8]                   
    00202A06:  movs     r0, #0x6c                      
    00202A08:  str      r7, [sp]                       
    00202A0A:  movs     r0, #0x7b                      
    00202A0C:  bls      #0x202a10                      
    00202A0E:  movs     r0, #0x5a                      
    00202A10:  ldrh     r0, [r0]                       
    00202A12:  adds     r6, #0                         
    00202A14:  add      r4, sp, #0                     
    00202A16:  adds     r6, #4                         
    00202A18:  adds     r4, #0                         
    00202A1A:  movs     r0, #9                         
    00202A1C:  ldr      r0, [r0, r4]                   
    00202A1E:  movs     r0, #0x60                      
    00202A20:  adr      r3, #0                         
    00202A22:  movs     r0, #0x90                      
    00202A24:  ldr      r2, [sp]                       
    00202A26:  movs     r0, #0x87                      
    00202A28:  add      r7, sp, #0                     
    00202A2A:  movs     r0, #0x7b                      
    00202A2C:  str      r4, [sp]                       
    00202A2E:  movs     r0, #0x8c                      
    00202A30:  stc2     p0, c2, [r0, #-0x1a0]          
    00202A34:  adds     r0, r0, r4                     
    00202A36:  movs     r0, #0x5b                      
    00202A38:  stc2     p0, c2, [r0, #-0x168]          
    00202A3C:  strh     r0, [r0, #0x20]                
    00202A3E:  movs     r0, #0x87                      
    00202A40:  stc      p0, c2, [r0, #-0x168]          
    00202A44:  vqadd.s8 q1, q0, q5                     
    00202A48:  blo      #0x202a4c                      
    00202A4A:  movs     r0, #0x7b                      
    00202A4E:  movs     r0, #0x7b                      
    00202A52:  movs     r0, #0x86                      
    00202A54:  asrs     r0, r0, #0x10                  
    00202A56:  movs     r0, #0x7c                      
    00202A58:  adds     r0, #0                         
    00202A5A:  movs     r0, #0x7c                      
    00202A5C:  cbnz     r0, #0x202a60                  
    00202A5E:  movs     r0, #0x86                      
    00202A60:  cbz      r0, #0x202a64                  
    00202A62:  movs     r0, #0x68                      
    00202A64:  str      r1, [sp]                       
    00202A66:  movs     r0, #0x6b                      
    00202A68:  ldr      r1, [pc, #0]                     // = 0x20680500
    00202A6A:  movs     r0, #0x6b                      
    00202A6C:  lsls     r0, r0, #0x14                  
    00202A6E:  movs     r0, #0x68                      
    00202A70:  add.w    r0, r0, #0x5a005a00            
    00202A74:  tst      r0, r0                         
    00202A76:  movs     r0, #0x7c                      
    00202A78:  add      r0, sp, #0                     
    00202A7A:  movs     r0, #0x86                      
    00202A7C:  ldrh     r0, [r0, #0x28]                
    00202A7E:  ldr      r0, [r7, #0x2c]                
    00202A80:  ldrh     r0, [r6, #0x28]                
    00202A82:  ldr      r0, [r7, #0x3c]                
    00202A84:  ldrh     r0, [r6, #0x28]                
    00202A86:  ldr      r0, [r7, #0x4c]                
    00202A88:  ldrh     r0, [r6, #0x28]                
    00202A8A:  ldr      r0, [r7, #0x5c]                
    00202A8C:  ldrh     r0, [r6, #0x28]                
    00202A8E:  ldr      r0, [r7, #0x6c]                
    00202A90:  ldrh     r0, [r6, #0x28]                
    00202A92:  ldr      r0, [r7, #0x7c]                
    00202A94:  ldrh     r0, [r6, #0x28]                
    00202A96:  strb     r0, [r7, #3]                   
    00202A98:  ldrh     r0, [r6, #0x28]                
    00202A9A:  strb     r0, [r7, #7]                   
    00202A9C:  ldrh     r0, [r6, #0x28]                
    00202A9E:  strb     r0, [r7, #0xb]                 
    00202AA0:  lsls     r0, r6, #8                     
    00202AA2:  lsls     r0, r5, #0xa                   
    00202AA4:  ldrh     r1, [r4, #0x28]                
    00202AA6:  strb     r0, [r7, #0xf]                 
    00202AA8:  lsrs     r0, r6, #0x1c                  
    00202AAA:  ldm      r3!, {r1, r2, r4, r5, r6, r7}  
    00202AAC:  asrs     r0, r7, #0xb                   
    00202AAE:  lsls     r0, r5, #0xa                   
    00202AB0:  lsrs     r1, r4, #0x1c                  
    00202AB2:  ldr      r6, [r6, #0x4c]                
    00202AB4:  asrs     r0, r7, #0xf                   
    00202AB6:  asrs     r3, r1, #0x11                  
    00202AB8:  ldr      r1, [sp, #0x120]               
    00202ABA:  lsrs     r7, r7, #1                     
    00202ABC:  ldr      r4, [sp, #0x3d8]               
    00202ABE:  asrs     r4, r7, #0xf                   
    00202AC0:  asrs     r3, r1, #0xd                   
    00202AC2:  adds     r0, r1, r5                     
    00202AC4:  ldrh     r0, [r7, r1]                   
    00202AC6:  ldr      r3, [sp, #0x1e0]               
    00202AC8:  lsrs     r0, r7, #1                     
    00202ACA:  adr      r6, #0x3d8                     
    00202ACC:  asrs     r4, r7, #7                     
    00202ACE:  lsrs     r0, r1, #0x15                  
    00202AD0:  push     {r1, r2, r4, r5, r6, r7}       
    00202AD2:  lsls     r4, r7, #0x13                  
    00202AD4:  lsrs     r0, r4, #4                     
    00202AD6:  lsls     r6, r6, #0xf                   
    00202AD8:  lsls     r3, r7, #0x13                  
    00202ADA:  lsrs     r0, r4, #4                     
    00202ADC:  ldcl     p14, c0, [r6], #0x3e8          
    00202AE0:  adds     r3, r1, r1                     
    00202AE2:  lsls     r0, r7, #5                     
    00202AE4:  lsrs     r6, r0, #1                     
    00202AE6:  lsls     r1, r6, #0xe                   
    00202AE8:  movs     r0, r4                         
    00202AEA:  lsrs     r1, r4, #0x18                  
    00202AEC:  stm      r7!, {r1, r2, r4, r5, r6, r7}  
    00202AEE:  lsls     r6, r7, #3                     
    00202AF0:  pop      {r4, r5, r6, r7, pc}           
    00202AF2:  lsrs     r7, r7, #0xb                   
    00202AF4:  eors     r0, r1                         
    00202AF6:  stm      r4!, {r1, r2, r4, r5, r6, r7}  
    00202AFC:  lsrs     r3, r7, #3                     
    00202AFE:  stm      r2!, {r1, r2, r4, r5, r6, r7}  
    00202B00:  movs     r5, #0xfb                      
    00202B02:  adds     r0, #0xb0                      
    00202B06:  movs     r0, #0x86                      
    00202B08:  ldr      r0, [r0, r4]                   
    00202B0A:  movs     r0, #0x7c                      
    00202B0C:  str      r4, [sp]                       
    00202B0E:  movs     r0, #0x8c                      
    00202B10:  strh     r0, [r0, #0x10]                
    00202B12:  movs     r0, #0x7c                      
    00202B14:  b        #0x202518                      
    00202B16:  movs     r0, #0x67                      
    00202B18:  strh     r0, [r0, #0x20]                
    00202B1A:  movs     r0, #0x87                      
    00202B1C:  add      r5, sp, #0                     
    00202B1E:  movs     r0, #0x69                      
    00202B20:  cmp      r5, #0                         
    00202B22:  b.w      #0xeebbc4                      
    00202B26:  strh     r4, [r1, #0x2a]                
    00202B28:  asrs     r0, r6, #2                     
    00202B2A:  adr      r1, #0x98                      
    00202B2C:  strb     r6, [r0, #0x11]                
    00202B2E:  ldr      r5, [sp, #0x38c]               
    00202B30:  lsrs     r0, r7, #0x1f                  
    00202B32:  str      r0, [r6, #0x20]                
    00202B34:  stc2l    p2, c2, [fp, #-0xac]!          
    00202B38:  blo      #0x202bc4                      
    00202B3A:  asrs     r7, r6, #5                     
    00202B3C:  lsls     r1, r2, #3                     
    00202B3E:  adds     r3, r4, r0                     
    00202B40:  ldrh     r6, [r0, #0x12]                
    00202B42:  lsls     r1, r1, #5                     
    00202B44:  ldr      r0, [r4, r3]                   
    00202B46:  lsls     r4, r2, #5                     
    00202B48:  cbz      r3, #0x202b98                  
    00202B4A:  ldr      r7, [pc, #0x108]                 // = 0x02FBC6F6
    00202B4C:  lsls     r0, r6, #3                     
    00202B50:  lsls     r1, r2, #7                     
    00202B52:  ldm      r1, {r0, r1, r5}               
    00202B54:  adds     r4, #0xf8                      
    00202B56:  ldrh     r0, [r4, #8]                   
    00202B58:  subs     r0, #0xf8                      
    00202B5A:  ldrh     r0, [r4, #8]                   
    00202B5C:  subs     r1, #0xf8                      
    00202B5E:  ldrh     r0, [r6, r4]                   
    00202B60:  str      r4, [sp, #0x38c]               
    00202B62:  subs     r1, #0xf8                      
    00202B64:  lsls     r0, r6, #5                     
    00202B66:  ands     r7, r5                         
    00202B68:  ldrsb    r0, [r6, r7]                   
    00202B6A:  b        #0x202674                      
    00202B6C:  str      r1, [sp, #0x1fc]               
    00202B6E:  movs     r5, r5                         
    00202B70:  ldrb     r0, [r6, #0xf]                 
    00202B72:  asrs     r1, r0, #0xa                   
    00202B74:  lsls     r0, r3, #0x13                  
    00202B76:  movs     r5, r5                         
    00202B78:  pop      {r4, r5, r6, r7}               
    00202B7A:  lsls     r0, r0, #0x1a                  
    00202B7C:  lsls     r0, r3, #7                     
    00202B7E:  movs     r5, r5                         
    00202B80:  cbz      r0, #0x202c00                  
    00202B82:  lsls     r0, r0, #0xa                   
    00202B84:  ands     r5, r5                         
    00202B86:  strb     r0, [r6, #0x17]                
    00202B88:  adds     r1, r0, r6                     
    00202B8A:  movs     r2, #0xe0                      
    00202B8C:  strb     r5, [r5, #4]                   
    00202B8E:  adds     r3, #0xd0                      
    00202B90:  ldrb     r5, [r5, #0x10]                
    00202B92:  movs     r1, #0xd0                      
    00202B94:  ands     r5, r5                         
    00202B96:  ldr      r0, [r6, #0x5c]                
    00202B98:  adds     r7, #0x81                      
    00202B9A:  ldm      r3!, {r5, r6, r7}              
    00202B9C:  ldr      r4, [pc, #0xb4]                  // = 0x02FBC6F6
    00202B9E:  lsls     r0, r2, #0x17                  
    00202BA0:  adr      r1, #0x360                     
    00202BA2:  ldrb     r5, [r5, #0x10]                
    00202BA4:  cbnz     r0, #0x202c1c                  
    00202BA6:  ands     r5, r5                         
    00202BA8:  str      r0, [r6, #0x4c]                
    00202BAA:  lsls     r1, r0                         
    00202BAC:  bgt      #0x202b70                      
    00202BAE:  adds     r1, #0x2d                      
    00202BB0:  vaddl.u16 q8, d0, d29                   
    00202BB6:  ldm      r4!, {r7}                      
    00202BB8:  ands     r5, r5                         
    00202BBA:  ldrh     r0, [r6, r7]                   
    00202BBC:  ldr      r3, [sp, #0x204]               
    00202BBE:  str      r4, [sp, #0x380]               
    00202BC0:  movs     r0, #0xf8                      
    00202BC2:  adr      r3, #0xc0                      
    00202BC4:  lsls     r1, r6, #7                     
    00202BC6:  tst      r0, r0                         
    00202BC8:  rsbs     r2, r0, #0                     
    00202BCA:  lsls     r3, r5, #3                     
    00202BCC:  strh     r2, [r0, #8]                   
    00202BCE:  lsrs     r3, r5, #0x20                  
    00202BD0:  cmp      r7, r7                         
    00202BD2:  lsls     r0, r6, #7                     
    00202BD4:  subs     r2, #2                         
    00202BD6:  str      r4, [sp, #0x2c4]               
    00202BD8:  subs     r2, #0xf8                      
    00202BDA:  str      r0, [r6, #0x50]                
    00202BDC:  lsls     r0, r1, #1                     
    00202BDE:  ands     r3, r5                         
    00202BE0:  strh     r0, [r6, #0x26]                
    00202BE2:  str      r0, [r0, #0x48]                
    00202BE4:  strh     r0, [r1, #0xa]                 
    00202BE6:  blo      #0x202baa                      
    00202BE8:  lsls     r1, r6, #7                     
    00202BEA:  subs     r0, #2                         
    00202BEC:  lsls     r7, r7, #2                     
    00202BEE:  strh     r2, [r4]                       
    00202BF0:  lsrs     r3, r5, #0x20                  
    00202BF2:  cmp      r7, r7                         
    00202BF4:  lsls     r0, r6, #7                     
    00202BF6:  str      r2, [r0]                       
    00202BF8:  bhs      #0x202c8c                      
    00202BFA:  lsls     r1, r7, #0xa                   
    00202BFC:  ands     r3, r5                         
    00202BFE:  lsrs     r0, r6                         
    00202C00:  ldrsh    r1, [r0, r2]                   
    00202C02:  lsrs     r0, r1, #1                     
    00202C04:  mrc      p4, #7, r0, c6, c11, #7        
    00202C08:  subs     r2, #0x26                      
    00202C0A:  ldrb     r1, [r4, r7]                   
    00202C0C:  lsrs     r0, r1, #1                     
    00202C0E:  ldrd     r1, r1, [r6, #0x3ec]!          
    00202C12:  adds     r5, #0x26                      
    00202C14:  lsls     r1, r4, #3                     
    00202C16:  subs     r1, #0x23                      
    00202C18:  ldrh     r6, [r0, r1]                   
    00202C1A:  cmp      r1, #0x4a                      
    00202C1C:  strh     r0, [r4, #0x20]                
    00202C1E:  subs     r3, #0xf8                      
    00202C20:  lsrs     r0, r6, #0x1c                  
    00202C22:  cbnz     r6, #0x202ca2                  
    00202C24:  ldr      r5, [r7, r3]                   
    00202C26:  lsrs     r0, r1, #1                     
    00202C28:  bgt      #0x202c18                      
    00202C2A:  lsrs     r3, r7, #0x17                  
    00202C2C:  cmp      r0, #0x26                      
    00202C2E:  ldrsb    r1, [r4, r7]                   
    00202C30:  lsrs     r0, r1, #1                     
    00202C32:  bvc      #0x202c22                      
    00202C34:  lsls     r3, r7, #0xf                   
    00202C36:  movs     r3, #0x26                      
    00202C38:  lsls     r1, r4, #0x1b                  
    00202C3A:  movs     r0, r4                         
    00202C3C:  lsls     r2, r4, #4                     
    00202C3E:  ldr      r7, [pc, #0x118]                 // = 0x00786B22
    00202C40:  cmp      r7, #0xf4                      
    00202C42:  lsrs     r3, r6, #1                     
    00202C44:  ldr      r4, [pc, #0x3d8]                 // = 0x94FA05F6
    00202C46:  adr      r0, #0x3e4                     
    00202C48:  b        #0x203292                      
    00202C4A:  str      r7, [r6, r5]                   
    00202C4C:  asrs     r0, r1, #5                     
    00202C4E:  strh     r3, [r4, #0x20]                
    00202C50:  movs     r0, #0xf8                      
    00202C52:  lsrs     r0, r6, #0x20                  
    00202C54:  stm      r6!, {r1, r2, r4, r5, r6, r7}  
    00202C56:  lsls     r3, r7, #0xb                   
    00202C58:  ands     r2, r4                         
    00202C5A:  movs     r1, #0xf2                      
    00202C5C:  muls     r0, r0, r0                     
    00202C5E:  lsrs     r1, r1, #0x1d                  
    00202C60:  adds     r3, #0xf6                      
    00202C62:  cmp      r1, #0xfe                      
    00202C64:  subs     r1, #0x20                      
    00202C66:  bxns     r8                             
    00202C68:  strh     r2, [r1, #0x22]                
    00202C6A:  subs     r3, #0xf8                      
    00202C6C:  lsrs     r0, r6, #0x1d                  
    00202C6E:  str      r5, [sp, #0x3d8]               
    00202C70:  lsrs     r5, r7, #7                     
    00202C72:  adr      r1, #0x380                     
    00202C74:  b        #0x2032be                      
    00202C76:  strh     r7, [r6, #0x22]                
    00202C78:  movs     r0, #0xf8                      
    00202C7A:  eors     r0, r2                         
    00202C7C:  movs     r1, #0xf2                      
    00202C7E:  subs     r3, #0x40                      
    00202C80:  lsls     r1, r1, #9                     
    00202C82:  lsrs     r2, r4, #0x1c                  
    00202C84:  movs     r1, #0xf6                      
    00202C86:  lsls     r6, r7, #3                     
    00202C88:  str      r3, [r4, #0x30]                
    00202C8C:  adr      r1, #0x380                     
    00202C8E:  b        #0x2032d8                      
    00202C90:  eors     r7, r6                         
    00202C92:  adds     r3, #0x48                      
    00202C94:  strh     r3, [r4, #0x20]                
    00202C96:  movs     r0, #0xf8                      
    00202C98:  lsrs     r0, r6, #0x20                  
    00202C9A:  adr      r3, #0x3d8                     
    00202C9C:  ldcl     p8, c12, [fp, #0x39c]!         
    00202CA0:  movs     r1, r4                         
    00202CA2:  asrs     r2, r4                         
    00202CA4:  ldrh     r2, [r6, #6]                   
    00202CA6:  cmp      r0, #0x33                      
    00202CA8:  lsrs     r0, r4, #0x20                  
    00202CAA:  adds     r6, r6, r7                     
    00202CAC:  add      sb, pc                         
    00202CAE:  subs     r1, #0x23                      
    00202CB0:  adds     r4, #0x46                      
    00202CB2:  b        #0x20274a                      
    00202CB4:  cmp      r1, #0x77                      
    00202CB6:  movs     r0, r4                         
    00202CB8:  strh     r5, [r4, #0x20]                
    00202CBA:  movs     r0, #0xf8                      
    00202CBC:  strh     r0, [r6, #0x20]                
    00202CBE:  subs     r3, #0xf8                      
    00202CC0:  lsrs     r0, r2, #0x1d                  
    00202CC2:  ldr      r6, [r6, #0x3c]                
    00202CC4:  adds     r4, #0xfd                      
    00202CC6:  lsrs     r0, r1, #1                     
    00202CC8:  ldrh     r6, [r6, #0x26]                
    00202CCA:  lsrs     r3, r7                         
    00202CCC:  movs     r1, #0xf2                      
    00202CCE:  movs     r7, #0x40                      
    00202CD0:  lsls     r1, r1, #9                     
    00202CD2:  lsrs     r2, r4, #0x1c                  
    00202CD6:  cmp      r0, #0xfd                      
    00202CD8:  subs     r1, #0x46                      
    00202CDA:  ldr      r7, [pc, #0x118]                 // = 0x3BFA99F6
    00202CDC:  strh     r4, [r6, #6]                   
    00202CDE:  subs     r3, #0x42                      
    00202CE0:  adds     r6, r0, r5                     
    00202CE2:  ldr      r2, [sp, #0x3d8]               
    00202CE4:  str      r0, [r7, #0x5c]                
    00202CE6:  ldm      r3!, {r0, r1, r5, r6}          
    00202CE8:  cmp      r4, #0xe0                      
    00202CEA:  lsrs     r0, r1, #1                     
    00202CEC:  ldrb     r6, [r6, #0xb]                 
    00202CEE:  asrs     r3, r7, #3                     
    00202CF0:  stm      r6!, {r1, r2, r5}              
    00202CF2:  cmp      r3, #0xe0                      
    00202CF4:  cbnz     r0, #0x202d0a                  
    00202CF6:  lsls     r0, r4, #3                     
    00202CF8:  lsls     r0, r4, #4                     
    00202CFA:  cmp      r2, #0x46                      
    00202CFC:  lsrs     r5, r1, #0x19                  
    00202CFE:  bkpt     #0xf6                          
    00202D00:  cmp      r1, #0xfd                      
    00202D02:  lsrs     r0, r1, #1                     
    00202D04:  ldr      r6, [r6, #0x6c]                
    00202D06:  lsls     r3, r7, #3                     
    00202D08:  ldr      r0, [r4, #0x70]                
    00202D0A:  ldr      r0, [r6, #0x7c]                
    00202D0C:  strh     r3, [r0, #0x20]                
    00202D0E:  subs     r1, #0xf8                      
    00202D10:  add      r3, sp, #0                     
    00202D12:  lsls     r7, r6, #5                     
    00202D16:  ldr      r7, [r6, #0x74]                
    00202D18:  mvns     r0, r6                         
    00202D1A:  strh     r3, [r0, #0x28]                
    00202D1C:  movs     r0, #0xf8                      
    00202D1E:  lsls     r0, r6, #8                     
    00202D20:  strh     r3, [r4, #0x28]                
    00202D22:  movs     r1, #0xf8                      
    00202D24:  ldr      r0, [r6, #0x70]                
    00202D26:  asrs     r0, r6, #0x1f                  
    00202D28:  cmp      r3, #3                         
    00202D2A:  ldr      r2, [r6, #0x74]                
    00202D2C:  movs     r1, #0xf0                      
    00202D2E:  lsls     r2, r0, #0xc                   
    00202D32:  ldr      r0, [r6, #0x34]                
    00202D34:  cmp      r2, #0x72                      
    00202D36:  ldr      r3, [r6, #0x34]                
    00202D38:  cmp      r0, #0x73                      
    00202D3A:  ldr      r0, [r6, #4]                   
    00202D3C:  add      r0, sp, #0x1c0                 
    00202D3E:  lsls     r0, r6, #5                     
    00202D40:  lsrs     r6, r0, #1                     
    00202D42:  bpl      #0x202d32                      
    00202D44:  cmp      r3, #0xfe                      
    00202D46:  ldr      r2, [r7, #0x14]                
    00202D48:  ldr      r2, [r7, #0x24]                
    00202D4A:  add      r7, sp, #0x1ec                 
    00202D4C:  muls     r0, r7, r0                     
    00202D4E:  lsls     r2, r5, #7                     
    00202D50:  cmp      r3, #0x21                      
    00202D52:  cmp      r0, #0x7b                      
    00202D54:  muls     r0, r7, r0                     
    00202D56:  lsls     r2, r5, #0xb                   
    00202D58:  ldr      r2, [r4, #0x30]                
    00202D5A:  lsls     r0, r7, #1                     
    00202D5C:  ldc      p1, c0, [r7, #0x1e0]           
    00202D60:  lsrs     r5, r2, #2                     
    00202D64:  ldrh     r6, [r7, #0x26]                
    00202D66:  lsls     r0, r4, #3                     
    00202D6A:  movs     r0, #0x86                      
    00202D6C:  lsrs     r0, r0, #0x1c                  
    00202D6E:  movs     r0, #0x87                      
    00202D70:  ldr      r4, [sp]                       
    00202D72:  movs     r0, #0x7c                      
    00202D76:  movs     r0, #0x7c                      
    00202D78:  blt      #0x202d7c                      
    00202D7A:  movs     r0, #0x7c                      
    00202D7C:  stc2     p0, c2, [r0, #-0x1f0]          
    00202D80:  movs     r4, #0                         
    00202D82:  movs     r0, #0x7d                      
    00202D84:  cmp      r3, #0                         
    00202D86:  movs     r0, #0x87                      
    00202D88:  orrs     r0, r0                         
    00202D8A:  movs     r0, #0x7d                      
    00202D8C:  str      r0, [r0, #0x60]                
    00202D8E:  movs     r0, #0x7d                      
    00202D90:  strh     r0, [r0, #0x38]                
    00202D92:  movs     r0, #0x7d                      
    00202D94:  ldr      r6, [sp]                       
    00202D96:  movs     r0, #0x7d                      
    00202D9A:  movs     r0, #0x7d                      
    00202D9C:  b        #0x202da0                      
    00202D9E:  movs     r0, #0x7d                      
    00202DA0:  add.w    r0, r0, #0xfd000               
    00202DA6:  movs     r0, #4                         
    00202DA8:  lsrs     r0, r0, #0x1c                  
    00202DAA:  movs     r0, #0x7e                      
    00202DAC:  movs     r0, r0                         
    00202DAE:  cmp      r0, #0x20                      
    00202DB0:  subs     r2, #0xf6                      
}

/* ---- sub_00202DB2 @ 0x00202DB2 ---- */
void sub_00202DB2() {
    00202DB2:  push     {r0, r2, r3, r4, r5, r6, r7, lr}
    00202DB4:  lsrs     r0, r1, #1                     
    00202DB6:  asrs     r6, r6, #0x17                  
    00202DB8:  lsls     r3, r7, #7                     
    00202DBA:  lsrs     r1, r4, #0xc                   
    00202DBC:  ldr      r7, [pc, #0x118]                 // = 0x3AF88423
    00202DBE:  strh     r4, [r6, #6]                   
    00202DC0:  svc      #0x42                          
    00202DC2:  adds     r4, #0xf8                      
    00202DC4:  lsls     r3, r6, #2                     
    00202DC6:  strh     r0, [r4, #0x20]                
    00202DC8:  subs     r4, #0xf8                      
    00202DCA:  ldr      r7, [pc, #0x40]                  // = 0xB3A000F8
    00202DCC:  lsls     r0, r6, #0xb                   
    00202DCE:  adds     r2, r1, r4                     
    00202DD0:  movs     r3, #0xf6                      
    00202DD2:  add      r6, sp, #0x3e0                 
    00202DD4:  add      r6, sp, #0x13c                 
    00202DD6:  asrs     r0, r1, #1                     
    00202DD8:  pop      {r1, r2, r4, r5, r6, r7, pc}   
    00202DDA:  ldc2l    p11, c12, [sp, #0x80]!         
    00202DDE:  lsls     r0, r7, #3                     
    00202DE0:  subs     r0, r4, r2                     
    00202DE2:  adr      r2, #0x3d8                     
    00202DE4:  subs     r3, #0xfa                      
    00202DE6:  vcgt.u32 d20, d8, d16                   
    00202DEA:  lsrs     r2, r5, #0xb                   
    00202DEC:  subs     r3, #3                         
    00202DEE:  ldm      r3!, {r5, r6}                  
    00202DF0:  lsls     r0, r7, #3                     
    00202DF2:  subs     r0, r4, r2                     
    00202DF4:  ldr      r1, [sp, #0x3d8]               
    00202DF6:  subs     r3, #0xfa                      
    00202DF8:  adr      r6, #0x1a0                     
    00202DFA:  muls     r0, r1, r0                     
    00202DFC:  lsrs     r2, r5, #0xb                   
    00202DFE:  subs     r3, #3                         
    00202E00:  lsrs     r0, r4, #1                     
    00202E04:  adr      r4, #0x3e8                     
    00202E06:  asrs     r0, r1, #1                     
    00202E08:  adr      r5, #0x3d8                     
    00202E0A:  ldm      r3, {r0, r2, r3, r4, r5, r6, r7}
    00202E0C:  lsls     r0, r7, #3                     
    00202E0E:  cbz      r0, #0x202e7a                  
    00202E10:  subs     r0, r4, r0                     
    00202E12:  ldrh     r6, [r6, #0x16]                
    00202E14:  subs     r3, #0xfa                      
    00202E16:  svc      #0x68                          
    00202E1A:  bics     r2, r0                         
    00202E1C:  lsrs     r2, r5, #0xb                   
    00202E1E:  subs     r3, #3                         
    00202E20:  lsls     r0, r4, #1                     
    00202E22:  ldm      r3!, {r0, r2, r5}              
    00202E24:  lsls     r0, r7, #3                     
    00202E26:  asrs     r0, r4, #0x16                  
    00202E28:  lsrs     r0, r7, #3                     
    00202E2A:  subs     r0, r0, r0                     
    00202E2C:  ldrb     r6, [r6, #0x17]                
    00202E2E:  subs     r3, #0xfa                      
    00202E30:  ldr      r2, [sp, #0x1a0]               
    00202E32:  muls     r0, r1, r0                     
    00202E34:  lsls     r0, r6, #0xb                   
    00202E36:  subs     r3, #3                         
    00202E38:  asrs     r0, r4, #0x15                  
    00202E3A:  lsrs     r0, r7, #3                     
    00202E3C:  lsrs     r0, r2, #0x20                  
    00202E3E:  blt      #0x202e2e                      
    00202E40:  lsls     r2, r7, #7                     
    00202E42:  asrs     r5, r6                         
    00202E44:  ldrh     r2, [r6, #6]                   
    00202E46:  asrs     r0, r6, #0x20                  
    00202E48:  strh     r6, [r6, #0x2e]                
    00202E4A:  lsrs     r5, r7, #0xb                   
    00202E4E:  str      r4, [sp, #0x344]               
    00202E50:  lsrs     r0, r1, #1                     
    00202E52:  stm      r7!, {r1, r2, r4, r5, r6, r7}  
    00202E54:  lsls     r2, r7, #7                     
    00202E56:  lsls     r3, r4, #0x10                  
    00202E58:  movs     r0, r4                         
    00202E5A:  adr      r3, #0x84                      
    00202E5C:  lsrs     r7, r6, #0x19                  
    00202E5E:  lsrs     r6, r6, #0x1b                  
    00202E60:  lsls     r5, r7, #3                     
    00202E62:  strh     r3, [r4, #0x20]                
    00202E64:  subs     r1, #0xf8                      
    00202E66:  lsrs     r0, r6, #0xc                   
    00202E68:  ldrh     r0, [r4, #0x36]                
    00202E6A:  lsrs     r0, r1, #1                     
    00202E6C:  revsh    r6, r6                         
    00202E6E:  lsls     r2, r7, #0xb                   
    00202E70:  lsls     r6, r4, #0x18                  
    00202E72:  ldrh     r0, [r4, #0x2e]                
    00202E74:  lsrs     r0, r1, #1                     
}

/* ---- sub_00202E76 @ 0x00202E76 ---- */
void sub_00202E76() {
    00202E76:  push     {r1, r2, r4, r5, r6, r7, lr}   
    00202E78:  lsls     r2, r7, #3                     
    00202E7A:  strh     r3, [r4, #0x20]                
    00202E7C:  subs     r1, #0xf8                      
    00202E80:  b        #0x2034d0                      
    00202E82:  ldr      r2, [sp, #0x1fc]               
    00202E84:  bhs      #0x202ec0                      
    00202E86:  lsls     r2, r6, #6                     
    00202E88:  ands     r2, r5                         
    00202E8A:  beq      #0x202e72                      
    00202E8C:  vaddl.u8 q0, d1, d30                    
    00202E90:  ldm      r5, {r4, r5, r6, r7}           
    00202E92:  adr      r3, #0x204                     
    00202E94:  ldm      r3!, {r0, r4, r5, r6, r7}      
    00202E96:  ldr      r2, [pc, #4]                     // = 0x082B2202
    00202E98:  rsbs     r2, r0, #0                     
    00202E9A:  lsls     r3, r5, #7                     
    00202E9C:  movs     r2, #2                         
    00202E9E:  lsrs     r3, r5, #0x20                  
    00202EA0:  cmp      r7, r7                         
    00202EA2:  lsls     r0, r6, #7                     
    00202EA4:  subs     r2, r0, r0                     
    00202EA6:  adds     r3, #0xb9                      
    00202EA8:  lsls     r3, r5, #4                     
    00202EAA:  adr      r1, #0x340                     
    00202EAC:  lsls     r3, r5, #0x10                  
    00202EAE:  ldrb     r1, [r2, #0x1f]                
    00202EB0:  lsls     r3, r1, #1                     
    00202EB2:  strh     r2, [r4, #0x18]                
    00202EB4:  subs     r1, #0xf8                      
    00202EB6:  cbnz     r0, #0x202ec2                  
    00202EB8:  str      r4, [sp, #0x384]               
    00202EBA:  movs     r1, #0xf8                      
    00202EBC:  lsls     r0, r4, #8                     
    00202EBE:  lsls     r0, r6, #0xf                   
    00202EC0:  lsls     r2, r0, #8                     
    00202EC2:  lsrs     r2, r5, #0x20                  
    00202EC4:  lsls     r1, r2, #0xb                   
    00202EC6:  lsls     r3, r5, #0x18                  
    00202EC8:  lsls     r1, r2, #7                     
    00202ECA:  ldrb     r3, [r4, #4]                   
    00202ECC:  strh     r0, [r1, #0x22]                
    00202ECE:  subs     r2, #0xf8                      
    00202ED0:  lsrs     r0, r6, #0x20                  
    00202ED2:  strh     r6, [r6, #0x3e]                
    00202ED4:  lsls     r2, r7, #0xb                   
    00202ED6:  lsls     r0, r4, #3                     
    00202ED8:  strh     r3, [r4, #0x20]                
    00202EDA:  subs     r2, #0xf8                      
    00202EDC:  str      r0, [r6, #0x10]                
    00202EDE:  str      r3, [r5, #0x34]                
    00202EE0:  bhi      #0x202f14                      
    00202EE2:  ldc2l    p3, c0, [pc], #-0xa0           
    00202EE6:  lsls     r1, r2, #7                     
    00202EE8:  strh     r3, [r4, #0x20]                
    00202EEA:  subs     r0, #0xf8                      
    00202EEC:  movs     r3, #0x30                      
    00202EEE:  str      r4, [sp, #0x380]               
    00202EF0:  subs     r0, #0xf8                      
    00202EF2:  lsls     r0, r4, #4                     
    00202EF4:  lsrs     r2, r5, #0x18                  
    00202EF6:  lsls     r1, r2, #7                     
    00202EF8:  str      r1, [r6]                       
    00202EFA:  ldrb     r0, [r6, #0x1f]                
    00202EFC:  lsls     r0, r0, #4                     
    00202EFE:  bhi      #0x202f6e                      
    00202F00:  lsls     r7, r6, #1                     
    00202F02:  cbz      r3, #0x202f0e                  
    00202F04:  strh     r2, [r0, #0x22]                
    00202F06:  subs     r0, #0xf8                      
    00202F08:  str      r0, [r6, #0x10]                
    00202F0A:  cmp      r0, #0x63                      
    00202F0C:  strh     r7, [r7, #0x24]                
    00202F0E:  subs     r5, #0xf8                      
    00202F10:  asrs     r0, r4, #4                     
    00202F12:  lsls     r3, r2, #0x17                  
    00202F14:  cbz      r0, #0x202f50                  
    00202F16:  lsrs     r2, r0, #5                     
    00202F18:  lsls     r1, r2, #7                     
    00202F1A:  strh     r3, [r4, #0x20]                
    00202F1C:  subs     r5, #0xf8                      
    00202F1E:  movs     r0, r6                         
    00202F20:  str      r3, [r4, #0x40]                
    00202F22:  strh     r0, [r1, #0x22]                
    00202F24:  subs     r1, #0xf8                      
    00202F26:  lsrs     r0, r6, #0x20                  
    00202F28:  ldrb     r6, [r6, r3]                   
    00202F2A:  lsls     r2, r7, #0x13                  
    00202F2C:  lsls     r0, r4, #7                     
    00202F2E:  str      r1, [r6, #0x20]                
    00202F30:  str      r0, [r1, #0x14]                
    00202F32:  lsrs     r3, r4, #1                     
    00202F34:  str      r6, [r6, #0xc]                 
    00202F36:  str      r4, [sp, #0x3e8]               
    00202F38:  subs     r5, #0xf8                      
    00202F3A:  movs     r0, r6                         
    00202F3C:  movs     r3, r5                         
    00202F3E:  ldr      r0, [r6, #0x4c]                
    00202F40:  ldrsh    r1, [r0, r2]                   
    00202F42:  lsls     r3, r1, #1                     
    00202F44:  ldr      r7, [pc, #0x94]                  // = 0x94716B30
    00202F46:  vsri.32  d24, d18, #0x10                
    00202F4A:  subs     r5, #0xf8                      
    00202F4C:  subs     r0, r2, r1                     
    00202F4E:  ldrb     r0, [r0, r2]                   
    00202F50:  lsrs     r7, r1, #1                     
    00202F52:  strd     pc, pc, [r0], #0x174           
    00202F56:  lsls     r7, r6, #0x1b                  
    00202F58:  ldr      r3, [r7, r3]                   
    00202F5A:  ldrh     r2, [r1, r1]                   
    00202F5C:  asrs     r0, r1, #5                     
    00202F5E:  lsrs     r0, r1, #2                     
    00202F60:  ldr      r2, [pc, #0x3d8]                 // = 0x8C2A1603
    00202F62:  lsls     r2, r7, #7                     
}

/* ---- sub_00202F64 @ 0x00202F64 ---- */
void sub_00202F64() {
    00202F64:  push     {r0, r2, r4, r5, lr}           
    00202F66:  orr      r4, r2, #0x1b20                
    00202F6A:  subs     r3, r1, r5                     
    00202F6C:  lsls     r0, r1, #2                     
    00202F6E:  ands     r3, r5                         
    00202F72:  strb     r0, [r0, r6]                   
    00202F74:  lsrs     r0, r1, #1                     
    00202F76:  adds     r5, #0xf6                      
    00202F78:  b        #0x203770                      
    00202F7A:  cbz      r7, #0x202fdc                  
    00202F7C:  bgt      #0x202f62                      
    00202F7E:  adds     r7, r0, r0                     
    00202F80:  lsls     r7, r7, #6                     
    00202F82:  cbnz     r7, #0x202fce                  
    00202F84:  lsrs     r3, r5, #0x10                  
    00202F86:  lsls     r7, r7, #2                     
    00202F88:  lsls     r7, r4, #0x1c                  
    00202F8A:  lsls     r0, r6, #7                     
    00202F8E:  ldr      r6, [r0, #0x74]                
    00202F90:  str      r1, [sp, #0x2c4]               
    00202F92:  movs     r3, r5                         
    00202F94:  bls      #0x202f78                      
    00202F96:  str      r0, [r0, #0x28]                
    00202F98:  eors     r3, r5                         
    00202F9A:  movs     r1, #0xf2                      
    00202F9C:  lsls     r0, r0, #5                     
    00202F9E:  ldr      r0, [pc, #0xe8]                  // = 0x207E3DE0
    00202FA0:  lsrs     r1, r1, #0x1d                  
    00202FA2:  str      r2, [sp, #0x3d8]               
    00202FA4:  ldr      r1, [pc, #0x3f0]                 // = 0x0978A321
    00202FA6:  lsrs     r0, r1, #1                     
    00202FA8:  adds     r6, r6, #3                     
    00202FAA:  ldm      r7, {r1, r3, r4, r5, r6, r7}   
    00202FAC:  bgt      #0x202f70                      
    00202FAE:  ands     r3, r5                         
    00202FB0:  adr      r5, #0x3c0                     
    00202FB2:  blx      r0                             
    00202FB4:  str      r4, [sp, #0x134]               
    00202FB6:  movs     r1, #0xf8                      
    00202FB8:  lsrs     r0, r6, #8                     
    00202FBA:  cmp      r3, #0x21                      
    00202FBC:  str      r4, [sp, #0x1c0]               
    00202FBE:  movs     r2, #0xf8                      
    00202FC0:  cmp      r2, #0x30                      
    00202FC2:  ldr      r6, [r0, #0x34]                
    00202FC4:  str      r4, [sp, #0x1c0]               
    00202FC6:  movs     r3, #0xf8                      
    00202FC8:  asrs     r0, r6, #8                     
    00202FCA:  add      r3, sp, #0x80                  
    00202FCC:  str      r4, [sp, #0x1c0]               
    00202FCE:  movs     r4, #0xf8                      
    00202FD2:  str      r4, [sp, #0x1c0]               
    00202FD4:  movs     r5, #0xf8                      
    00202FD6:  cmp      r3, #0x30                      
    00202FD8:  str      r4, [sp, #0x1c4]               
    00202FDA:  movs     r6, #0xf8                      
    00202FDC:  ldr      r0, [r6, #0x30]                
    00202FDE:  str      r4, [sp, #0x1c4]               
    00202FE0:  movs     r7, #0xf8                      
    00202FE2:  add      r3, sp, #0xc0                  
    00202FE4:  str      r4, [sp, #0x1c4]               
    00202FE6:  cmp      r0, #0xf8                      
    00202FEA:  str      r4, [sp, #0x1c4]               
    00202FEC:  cmp      r1, #0xf8                      
    00202FEE:  cmp      r3, #0x30                      
    00202FF0:  str      r4, [sp, #0x1c8]               
    00202FF2:  cmp      r2, #0xf8                      
    00202FF4:  ldr      r0, [r6, #0x30]                
    00202FF6:  lsrs     r2, r6, #0x1d                  
    00202FF8:  beq      #0x202fe8                      
    00202FFA:  cmp      r1, #0xfb                      
    00202FFC:  ldr      r0, [r7, #0x24]                
    00202FFE:  add      r3, sp, #0x1e0                 
    00203000:  adds     r4, #0x78                      
    00203002:  lsrs     r0, r1, #1                     
    00203004:  lsrs     r6, r6, #7                     
    00203006:  ldrd     r2, sl, [sl, #0x1e0]!          
    0020300A:  ldr      r1, [r7, #0x34]                
    0020300C:  adds     r2, #0x79                      
    0020300E:  lsrs     r0, r1, #1                     
    00203010:  lsls     r6, r6, #0xf                   
    00203012:  ldr      r2, [r7, #0xc]                 
    00203014:  add      r1, sp, #0x1e8                 
    00203016:  orns     fp, sb, sb, ror #9             
    0020301A:  lsls     r2, r7, #1                     
    0020301C:  cmp      r7, #0x90                      
    0020301E:  lsrs     r0, r1, #1                     
    00203020:  lsls     r6, r6, #0x17                  
    00203022:  str      r4, [sp, #0x3e8]               
    00203024:  movs     r0, #0xf8                      
    00203026:  lsls     r0, r2, #5                     
    00203028:  cmp      r2, #0x2d                      
    0020302A:  subs     r3, #0xd1                      
    0020302C:  subs     r0, #0x46                      
    0020302E:  lsls     r6, r0, #0xd                   
    00203030:  lsrs     r1, r4, #4                     
    00203032:  adds     r2, r4, r0                     
    00203036:  cmp      r2, #0xfe                      
    00203038:  cmp      r1, #0x4a                      
    0020303A:  asrs     r6, r0, #0x1d                  
    0020303C:  asrs     r0, r6, #1                     
    0020303E:  lsrs     r0, r4, #0x1c                  
    00203040:  add      r4, sp, #0x3d8                 
    00203042:  cmp      r0, #0xfb                      
    00203044:  lsrs     r0, r1, #1                     
    00203046:  ldm      r5, {r1, r2, r4, r5, r6, r7}   
    00203048:  movs     r7, #0xf9                      
    0020304A:  lsrs     r0, r1, #1                     
    0020304C:  ldm      r2, {r1, r2, r4, r5, r6, r7}   
    0020304E:  movs     r7, #0xf9                      
    00203050:  movs     r7, #0x4b                      
    00203052:  str      r2, [r1, #4]                   
    00203054:  adds     r1, r4, #4                     
    00203056:  ldrsh    r0, [r6, r5]                   
    00203058:  ldr      r7, [sp, #0x1c0]               
    0020305A:  svc      #0x70                          
    0020305C:  subs     r0, r6, #5                     
    0020305E:  asrs     r1, r6, #5                     
    00203060:  ldr      r0, [r6, #0x74]                
    00203062:  str      r0, [r6, r7]                   
    00203064:  str      r1, [r0, r4]                   
    00203066:  lsrs     r0, r6, #9                     
    00203068:  str      r1, [sp, #0x84]                
    0020306A:  bvc      #0x20314e                      
    0020306C:  subs     r0, #0x70                      
    0020306E:  ldrb     r6, [r0, r5]                   
    00203070:  subs     r1, #0x71                      
    00203072:  ldr      r7, [pc, #0x118]                 // = 0x24F894F9
    00203074:  strh     r4, [r6, #6]                   
    00203076:  subs     r3, #0x62                      
    00203078:  adds     r6, r0, r1                     
    0020307A:  ldm      r6, {r1, r2, r4, r5, r6, r7}   
    0020307E:  ldrh     r5, [r6, r7]                   
    00203080:  adds     r6, r7, #3                     
    00203082:  lsls     r3, r1, #5                     
    00203084:  subs     r2, r4, r0                     
    00203086:  str      r0, [r6, #0x14]                
    00203088:  subs     r5, #0xe0                      
    0020308A:  movs     r0, #0x7e                      
    0020308C:  add      r4, sp, #0                     
    0020308E:  adds     r6, #0                         
    00203090:  adr      r0, #0                         
    00203092:  lsls     r6, r0, #6                     
    00203094:  ldr      r7, [pc, #0]                     // = 0x030D4000
    00203096:  movs     r0, #0x7e                      
    00203098:  ands     r0, r0                         
    0020309A:  lsls     r5, r1, #0xc                   
    0020309C:  ldrsh    r0, [r0, r0]                   
    0020309E:  movs     r0, #0x7e                      
    002030A0:  strb     r0, [r0, #0x14]                
    002030A2:  movs     r0, #0x7e                      
    002030A6:  movs     r0, #0x7e                      
    002030AA:  movs     r0, #0x7e                      
    002030AC:  and      r0, r0, #0x86008600            
    002030B0:  bpl      #0x2030b4                      
    002030B2:  movs     r0, #0x7e                      
    002030B4:  b        #0x202cb8                      
    002030B6:  movs     r0, #0x7e                      
    002030BA:  movs     r0, #0x7e                      
    002030BC:  bmi      #0x2030c0                      
    002030BE:  movs     r0, #0x90                      
    002030C0:  lsrs     r0, r0, #0x1c                  
    002030C2:  movs     r0, #0x87                      
    002030C4:  lsls     r0, r0, #0x14                  
    002030C6:  movs     r0, #0x7f                      
    002030C8:  asrs     r0, r0, #0x10                  
    002030CA:  movs     r0, #0x7f                      
    002030CC:  cmp      r1, #0                         
    002030CE:  movs     r0, #0x7f                      
    002030D0:  str      r4, [sp]                       
    002030D2:  movs     r0, #0x8c                      
    002030D4:  ldr      r1, [pc, #0]                     // = 0x207F5700
    002030D6:  movs     r0, #0x7f                      
    002030D8:  ldrsb    r0, [r0, r4]                   
    002030DA:  movs     r0, #0x7f                      
    002030DC:  str      r0, [r0, #0x50]                
    002030DE:  movs     r0, #0x7f                      
    002030E0:  strh     r0, [r0, #0x20]                
    002030E2:  movs     r0, #0x87                      
    002030E4:  strb     r0, [r0, #0x18]                
    002030E6:  movs     r0, #0x7f                      
    002030E8:  ldrh     r0, [r0, #0x10]                
    002030EA:  movs     r0, #0x7f                      
    002030EC:  movs     r4, #0                         
    002030EE:  movs     r0, #4                         
    002030F0:  movs     r6, #0                         
    002030F2:  movs     r0, #9                         
    002030F6:  movs     r0, #0x86                      
    002030F8:  ldrh     r0, [r0]                       
    002030FA:  adds     r6, #0                         
    002030FC:  cbnz     r0, #0x203140                  
    002030FE:  movs     r1, #0x2b                      
    00203100:  str      r4, [sp, #0x344]               
    00203102:  movs     r0, #0xf8                      
    00203104:  lsls     r0, r2, #5                     
    00203106:  lsrs     r5, r5, #0x1c                  
    00203108:  ldr      r5, [pc, #0x344]                 // = 0xFF4038E8
    0020310A:  cmp      r1, #0x4a                      
    0020310C:  asrs     r6, r0, #0x15                  
    0020310E:  asrs     r0, r6, #1                     
    00203110:  lsrs     r0, r4, #0x1c                  
    00203112:  mvns     r6, r6                         
    00203114:  lsls     r3, r7, #7                     
    00203116:  ldr      r3, [pc, #0x118]                 // = 0x5A601A22
    00203118:  lsrs     r0, r1, #1                     
    0020311A:  ldr      r6, [r6, #0x5c]                
    0020311C:  ldr      r2, [pc, #0x3e4]                 // = 0x8D785A20
    0020311E:  lsrs     r0, r1, #1                     
    00203120:  str      r6, [r6, #0xc]                 
    00203122:  lsls     r1, r7, #0x13                  
    00203124:  subs     r1, #0x20                      
    00203126:  lsls     r6, r0, #0x15                  
    00203128:  strh     r0, [r4, #0x2e]                
    0020312A:  ldr      r0, [pc, #0x2e4]                 // = 0x14FA35F6
    0020312C:  lsrs     r0, r1, #1                     
    0020312E:  ldr      r6, [r6, r7]                   
    00203132:  lsls     r1, r1, #0xd                   
    00203134:  lsrs     r0, r4, #0x18                  
    00203136:  adr      r2, #0x3d8                     
    00203138:  mov      fp, pc                         
    0020313A:  cmp      r1, #0x48                      
    0020313C:  adr      r5, #0x118                     
    0020313E:  lsrs     r7, r6, #1                     
    00203140:  ldrh     r6, [r6, r3]                   
    00203142:  lsls     r1, r7, #0xf                   
    00203144:  str      r1, [sp, #0x380]               
    00203146:  lsls     r3, r5, #4                     
    0020314A:  ldrb     r7, [r6, #0xb]                 
    0020314C:  lsls     r2, r7, #3                     
    0020314E:  str      r3, [r4, #0x30]                
    00203150:  str      r3, [r4, #0x24]                
    00203152:  lsls     r0, r4, #3                     
    00203154:  ands     r3, r4                         
    00203156:  str      r0, [r1, #0x34]                
    00203158:  lsrs     r3, r4, #1                     
    0020315A:  mvns     r6, r6                         
    0020315C:  b        #0x203552                      
    0020315E:  subs     r7, #0x7f                      
    00203160:  lsrs     r0, r1, #1                     
    00203162:  ldr      r1, [pc, #0x3d8]                 // = 0x9DFF5CF6
    00203164:  str      r4, [sp, #0x3e4]               
    00203166:  movs     r0, #0xf8                      
    00203168:  subs     r5, #0x10                      
    0020316A:  lsrs     r0, r1, #1                     
    0020316C:  add      lr, lr                         
    0020316E:  str      r4, [sp, #0x3e4]               
    00203170:  movs     r1, #0xf8                      
    00203172:  subs     r4, #0x10                      
    00203174:  lsrs     r0, r1, #1                     
    00203176:  subs     r7, #0xf6                      
    00203178:  str      r4, [sp, #0x3e4]               
    0020317A:  movs     r2, #0xf8                      
    0020317C:  subs     r2, #0x10                      
    0020317E:  lsrs     r0, r1, #1                     
    00203180:  subs     r2, #0xf6                      
    00203182:  str      r4, [sp, #0x3e4]               
    00203184:  movs     r3, #0xf8                      
    00203186:  subs     r1, #0x10                      
    00203188:  lsrs     r0, r1, #1                     
    0020318A:  adds     r5, #0xf6                      
    0020318C:  str      r4, [sp, #0x3e4]               
    0020318E:  movs     r4, #0xf8                      
    00203190:  adds     r7, #0x10                      
    00203192:  lsrs     r0, r1, #1                     
    00203194:  adds     r0, #0xf6                      
    00203196:  str      r4, [sp, #0x3e4]               
    00203198:  movs     r5, #0xf8                      
    0020319A:  adds     r6, #0x10                      
    0020319C:  lsrs     r0, r1, #1                     
    0020319E:  cmp      r3, #0xf6                      
    002031A0:  str      r4, [sp, #0x3e4]               
    002031A2:  movs     r6, #0xf8                      
    002031A4:  adds     r4, #0x10                      
    002031A6:  lsrs     r0, r1, #1                     
    002031A8:  movs     r6, #0xf6                      
    002031AA:  str      r4, [sp, #0x3e4]               
    002031AC:  movs     r7, #0xf8                      
    002031AE:  adds     r3, #0x10                      
    002031B0:  lsrs     r0, r1, #1                     
    002031B2:  movs     r1, #0xf6                      
    002031B4:  str      r4, [sp, #0x3e4]               
    002031B6:  cmp      r0, #0xf8                      
    002031B8:  adds     r1, #0x10                      
    002031BA:  lsrs     r0, r1, #1                     
    002031BC:  adds     r6, r6, #3                     
    002031BE:  str      r4, [sp, #0x3e4]               
    002031C0:  cmp      r1, #0xf8                      
    002031C2:  adds     r0, #0x10                      
    002031C4:  lsrs     r0, r1, #1                     
    002031C6:  asrs     r6, r6, #0x1f                  
    002031C8:  str      r4, [sp, #0x3e4]               
    002031CA:  cmp      r2, #0xf8                      
    002031CC:  cmp      r6, #0x10                      
    002031CE:  lsrs     r0, r1, #1                     
    002031D0:  asrs     r6, r6, #0xb                   
    002031D2:  str      r4, [sp, #0x3e4]               
    002031D4:  cmp      r3, #0xf8                      
    002031D6:  cmp      r5, #0x10                      
    002031D8:  lsrs     r0, r1, #1                     
    002031DA:  lsrs     r6, r6, #0x17                  
    002031DC:  str      r4, [sp, #0x3e4]               
    002031DE:  cmp      r4, #0xf8                      
    002031E0:  cmp      r3, #0x10                      
    002031E2:  lsrs     r0, r1, #1                     
    002031E4:  lsrs     r6, r6, #3                     
    002031E6:  str      r4, [sp, #0x3e4]               
    002031E8:  cmp      r5, #0xf8                      
    002031EA:  cmp      r2, #0x10                      
    002031EC:  lsrs     r0, r1, #1                     
    002031EE:  lsls     r6, r6, #0xf                   
    002031F0:  str      r4, [sp, #0x3e4]               
    002031F2:  cmp      r6, #0xf8                      
    002031F4:  cmp      r0, #0x10                      
    002031F6:  lsrs     r0, r1, #1                     
    002031F8:  mrc2     p4, #7, sb, c6, c8, #7         
    002031FC:  cmp      r7, #0xf8                      
    002031FE:  movs     r7, #0x10                      
    00203200:  lsrs     r0, r1, #1                     
    00203204:  str      r4, [sp, #0x3e0]               
    00203206:  adds     r0, #0xf8                      
    00203208:  movs     r5, #0x10                      
    0020320A:  lsrs     r0, r1, #1                     
    0020320C:  b.w      #0xff2f9c00                    
    00203210:  adds     r1, #0xf8                      
    00203212:  movs     r4, #0x10                      
    00203214:  lsrs     r0, r1, #1                     
    00203218:  subs     r0, r7, r3                     
    0020321A:  movs     r4, #0xf6                      
    0020321C:  adds     r0, #0xf8                      
    0020321E:  lsrs     r1, r6, #0x16                  
    00203220:  lsrs     r1, r6, #0x1f                  
    00203222:  subs     r0, r0, r0                     
    00203224:  ldr      r1, [sp, #0x3d8]               
    00203226:  lsls     r0, r7, #3                     
    00203228:  ldrb     r0, [r5, #0x1c]                
    0020322A:  strh     r4, [r6, #0xe]                 
    0020322C:  subs     r4, r5, #2                     
    0020322E:  lsls     r3, r1, #0x11                  
    00203230:  subs     r2, r4, r0                     
    00203232:  ldrh     r0, [r4, r1]                   
    00203234:  rsbs     r2, r5, #0                     
    00203236:  lsls     r0, r6, #0x13                  
    00203238:  ldrh     r2, [r0, r0]                   
    0020323A:  lsls     r2, r4, #0x15                  
    0020323C:  pop      {r4, r5, r7, pc}               
    0020323E:  blo.w    #0x22bb60                      
    00203242:  movs     r0, #0x87                      
    00203244:  ldr      r7, [sp]                       
    00203246:  movs     r0, #0x7f                      
    0020324A:  movs     r0, #0x7f                      
    0020324E:  movs     r0, #0x7f                      
    00203250:  and      r0, r0, #0x86008600            
    00203254:  ldr      r0, [r0, r4]                   
    00203256:  movs     r0, #0x7c                      
    00203258:  subs     r0, r0, r4                     
    0020325A:  movs     r0, #0x80                      
    0020325C:  cmp      r4, #0                         
    0020325E:  movs     r0, #0x80                      
    00203260:  subs     r7, #0                         
    00203262:  movs     r0, #0x80                      
    00203264:  strh     r0, [r0, r0]                   
    00203266:  movs     r0, #0x80                      
    00203268:  str      r0, [r0, #0x50]                
    0020326A:  movs     r0, #0x80                      
    0020326C:  ldrb     r0, [r0]                       
    0020326E:  movs     r0, #0x80                      
    00203270:  ldrh     r0, [r0, #0x18]                
    00203272:  movs     r0, #0x80                      
    00203274:  ldr      r6, [sp]                       
    00203276:  movs     r0, #0x80                      
    00203278:  cbz      r0, #0x20327c                  
    0020327A:  movs     r0, #0x80                      
    0020327E:  movs     r0, #0x80                      
    00203280:  bvc      #0x203284                      
    00203282:  movs     r0, #0x80                      
    00203284:  and.w    r0, r0, r0, lsl #10            
    00203288:  cdp2     p0, #0, c2, c0, c0, #4         
    0020328C:  asrs     r0, r0, #8                     
    0020328E:  movs     r0, #0x81                      
    00203290:  movs     r6, #0                         
    00203292:  movs     r0, #0x81                      
    00203294:  subs     r2, #0                         
    00203296:  movs     r0, #0x81                      
    00203298:  ldr      r6, [pc, #0]                     // = 0x20816200
    0020329A:  movs     r0, #0x81                      
    0020329C:  str      r0, [r0, #0x20]                
    0020329E:  movs     r0, #0x81                      
    002032A0:  strb     r0, [r0, #0x18]                
    002032A2:  movs     r0, #0x81                      
    002032A4:  ldrh     r0, [r0, #0x10]                
    002032A6:  movs     r0, #0x81                      
    002032A8:  ldrh     r0, [r0]                       
    002032AA:  adds     r6, #0                         
    002032AC:  subs     r0, #0                         
    002032AE:  lsls     r5, r6, #0x12                  
    002032B0:  asrs     r6, r0, #0x15                  
    002032B2:  ldrh     r6, [r0, #0xa]                 
    002032B4:  lsls     r2, r6, #0x12                  
    002032B6:  movs     r2, #0x48                      
    002032B8:  lsrs     r6, r0, #1                     
    002032BA:  adr      r6, #0x3d8                     
    002032BC:  adr      r1, #0x3e0                     
    002032BE:  cmp      r0, #0xb2                      
    002032C0:  pop      {r1, r2, r6, pc}               
    002032C2:  subs     r0, #0xe8                      
    002032C4:  lsrs     r0, r0, #1                     
    002032C6:  ldm      r6, {r1, r2, r4, r5, r6, r7}   
    002032C8:  ldr      r6, [sp, #0x2e0]               
    002032CA:  movs     r0, #0x81                      
    002032CC:  strb     r0, [r0]                       
    002032CE:  lsls     r5, r6, #0x16                  
    002032D0:  lsrs     r6, r0, #0x15                  
    002032D2:  ldm      r6, {r1, r2, r4, r5, r6, r7}   
    002032D4:  lsls     r1, r7, #0x1b                  
    002032D6:  cmp      r0, #0x46                      
    002032D8:  lsrs     r6, r0, #0x15                  
    002032DA:  ldr      r1, [pc, #0x3d8]                 // = 0xB0F6184E
    002032DC:  lsls     r1, r7, #0x13                  
    002032DE:  cmp      r0, #0x46                      
    002032E0:  lsrs     r6, r0, #0x15                  
    002032E2:  ldrh     r6, [r6, #0x16]                
    002032E4:  lsls     r1, r7, #3                     
    002032E6:  bmi      #0x203342                      
    002032E8:  lsls     r7, r7, #2                     
    002032EA:  lsls     r3, r4, #4                     
    002032EC:  ldr      r7, [pc, #0x8c]                  // = 0x04FB0CF6
    002032EE:  lsls     r6, r6, #0xb                   
    002032F0:  str      r6, [sp, #0x1c8]               
    002032F2:  asrs     r2, r0, #0x11                  
    002032F4:  lsls     r7, r7, #2                     
    002032F6:  lsls     r3, r4, #0xc                   
    002032F8:  lsls     r0, r6, #7                     
    002032FA:  lsls     r3, r0, #0x14                  
    002032FC:  subs     r6, r0, r5                     
    002032FE:  movs     r1, #0xb1                      
    00203300:  lsls     r6, r0, #1                     
    00203302:  strb     r0, [r6, r3]                   
    00203304:  movs     r3, #0xfc                      
    00203306:  adr      r4, #0x380                     
    00203308:  lsls     r1, r6, #0xb                   
    0020330A:  bgt      #0x203326                      
    0020330C:  lsls     r1, r6, #3                     
    0020330E:  orrs     r3, r0                         
    00203310:  lsrs     r3, r5, #0x13                  
    00203312:  ldr      r7, [pc, #0xc]                   // = 0x02B11B03
    00203314:  lsls     r6, r6, #0xf                   
    00203316:  str      r6, [sp, #0x1c8]               
    00203318:  asrs     r2, r0, #0x11                  
    0020331A:  lsls     r7, r7, #2                     
    0020331C:  lsls     r3, r4, #0xc                   
    0020331E:  lsls     r0, r6, #7                     
    00203320:  subs     r3, r0, r4                     
    00203322:  lsls     r1, r6, #0xa                   
    00203324:  movs     r1, r4                         
    00203326:  b        #0x20390a                      
    00203328:  asrs     r4, r7, #7                     
    0020332A:  ldr      r7, [pc, #0x380]                 // = 0x084280F4
    0020332C:  lsls     r6, r6, #0x17                  
    0020332E:  stm      r3!, {r0, r1, r4, r5, r6}      
    00203330:  lsls     r3, r5, #0x1b                  
    00203332:  str      r6, [r1, #0x20]                
    00203334:  udf      #0x1e                          
    00203336:  lsls     r1, r6, #3                     
    00203338:  orrs     r3, r0                         
    0020333A:  lsrs     r3, r5, #0x1b                  
    0020333C:  asrs     r3, r0, #0x18                  
    0020333E:  ldrh     r2, [r5, #0x20]                
    00203340:  lsls     r7, r7, #2                     
    00203342:  lsls     r3, r4, #0xc                   
    00203344:  lsls     r0, r6, #7                     
    00203346:  asrs     r3, r0, #0xc                   
    00203348:  movs     r1, #0xb1                      
    0020334A:  lsls     r6, r0, #1                     
    0020334C:  ble      #0x203330                      
    0020334E:  adds     r0, #0xfc                      
    00203350:  movs     r1, #0x46                      
    00203352:  cmp      r2, #0x46                      
    00203356:  ldrh     r7, [r6, #0x16]                
    00203358:  lsrs     r0, r7                         
    0020335A:  adds     r0, #0xb1                      
    0020335C:  strb     r1, [r4]                       
    0020335E:  lsls     r0, r4, #0x10                  
    00203360:  lsrs     r2, r1, #0x1d                  
    00203362:  subs     r6, r6, r7                     
    00203364:  lsls     r2, r7, #7                     
    00203366:  lsls     r6, r0, #0xd                   
    00203368:  lsrs     r0, r1, #1                     
    0020336A:  cmp      lr, lr                         
    0020336C:  lsls     r0, r7, #3                     
    0020336E:  strb     r0, [r4]                       
    00203370:  adr      r3, #0x2f4                     
    00203372:  movs     r0, #0x90                      
}

/* ---- sub_00203374 @ 0x00203374 ---- */
void sub_00203374() {
    00203374:  push     {lr}                           
    00203376:  movs     r0, #0x81                      
    00203378:  asrs     r0, r0, #0x20                  
    0020337A:  lsrs     r5, r6, #6                     
    0020337C:  lsrs     r6, r6, #0x13                  
    0020337E:  lsls     r3, r7, #0x13                  
    00203380:  lsrs     r6, r0, #0x19                  
    00203382:  lsrs     r0, r1, #1                     
    00203384:  cmp      r6, #0xf6                      
    00203386:  movs     r1, #0xf8                      
    00203388:  str      r1, [r7, #0x34]                
    0020338A:  lsrs     r1, r7, #5                     
    0020338C:  lsls     r4, r0, #4                     
    0020338E:  lsls     r3, r5, #0xf                   
    00203390:  b        #0x203a56                      
    00203392:  str      r0, [r7, #0x24]                
    00203394:  lsls     r0, r7, #5                     
    00203396:  lsls     r3, r5, #0xf                   
    00203398:  adr      r3, #0x84                      
    0020339A:  lsrs     r0, r7, #5                     
    0020339C:  ldm      r1!, {r3, r6}                  
    0020339E:  movs     r3, #0x18                      
    002033A0:  lsls     r0, r7, #0xd                   
    002033A2:  lsls     r3, r5, #0xb                   
    002033A4:  lsrs     r2, r4, #0x20                  
    002033A6:  adds     r0, #0xf6                      
    002033A8:  cmp      r0, #0xf8                      
    002033AA:  ldm      r0!, {r5}                      
    002033AC:  movs     r1, r4                         
    002033AE:  asrs     r2, r4                         
    002033B0:  ldrh     r2, [r6, #6]                   
    002033B2:  pop      {r0, r1, r4, r5, pc}           
    002033B4:  asrs     r0, r5, #3                     
    002033B6:  lsls     r0, r0, #0x1d                  
    002033B8:  str      r2, [sp, #0x3d8]               
    002033BA:  lsls     r5, r7, #2                     
    002033BC:  stm      r6!, {r0, r1, r2, r3, r4, r5, r7}
    002033BE:  movs     r0, #0x81                      
    002033C0:  and.w    r0, r0, r1, lsl #10            
    002033C4:  subs     r0, #0                         
    002033C6:  movs     r4, #0xb5                      
    002033C8:  lsls     r5, r1, #1                     
    002033CA:  movs     r4, #0x24                      
    002033CC:  add      r4, sp, #0x120                 
    002033CE:  lsrs     r7, r6, #1                     
    002033D0:  lsrs     r6, r6, #3                     
    002033D2:  lsrs     r0, r7, #7                     
    002033D4:  sub      sp, #0x1d8                     
    002033D6:  ldrd     r0, sb, [sl], #0x200           
    002033DA:  bne      #0x2033ca                      
    002033DC:  lsls     r2, r7, #0x1b                  
    002033DE:  lsls     r2, r4, #4                     
    002033E0:  cmp      r0, #0x46                      
    002033E2:  adcs     r6, r0                         
    002033E4:  adds     r3, #0xf6                      
    002033E6:  cmp      r1, #0xff                      
    002033E8:  ldr      r1, [r7, #0x34]                
    002033EA:  lsrs     r1, r7, #5                     
    002033EC:  lsls     r4, r0, #4                     
    002033EE:  lsls     r3, r5, #0xf                   
    002033F0:  sbc.w    sl, r1, r8, ror #25            
    002033F4:  lsls     r0, r7, #5                     
    002033F6:  lsls     r3, r5, #0xf                   
    002033F8:  add      r3, sp, #0x84                  
    002033FA:  adds     r0, r7, r5                     
    002033FC:  ldm      r1!, {r3, r6}                  
    002033FE:  cmp      r3, #0x18                      
    00203400:  lsls     r0, r7, #0xd                   
    00203402:  lsls     r3, r5, #0xb                   
    00203404:  cmp      r3, #0x22                      
    00203406:  lsrs     r6, r0, #1                     
    00203408:  lsls     r6, r6, #0x1f                  
    0020340A:  movs     r0, #0xf8                      
    0020340C:  movs     r1, #0x46                      
    0020340E:  lsrs     r6, r0, #0x19                  
    00203410:  adds     r5, #0xf6                      
    00203412:  asrs     r2, r7, #0x13                  
    00203414:  subs     r3, r1, r5                     
    00203416:  str      r3, [sp, #0x1a0]               
    00203418:  cmp      r6, #0xf8                      
    0020341A:  adds     r0, r0, #1                     
    0020341C:  pop      {r0, r4, r5, r7, pc}           
    0020341E:  subs     r0, #0xe8                      
    00203420:  lsrs     r0, r0, #0xd                   
    00203422:  ldrd     r0, sb, [r6], #0x2e4           
    00203426:  add      r3, sp, #0x3d8                 
    00203428:  lsls     r2, r7, #0x1b                  
    0020342A:  lsls     r2, r4, #4                     
    0020342C:  lsrs     r6, r0, #0x19                  
    0020342E:  adcs     r0, r1                         
    00203430:  lsrs     r6, r6, #0x17                  
    00203432:  lsrs     r7, r7, #0x1b                  
    00203434:  adds     r0, #0x4a                      
    00203436:  strh     r1, [r4, #0x10]                
    00203438:  cmp      r6, #0xf8                      
    0020343A:  strh     r0, [r0, #0x12]                
    0020343C:  cmp      r7, #0xf8                      
    0020343E:  strb     r0, [r0, #1]                   
    00203440:  lsrs     r0, r4, #0x1c                  
    00203442:  add      r3, sp, #0x3d8                 
    00203444:  lsls     r1, r7, #7                     
    00203446:  lsrs     r6, r0, #9                     
    00203448:  lsls     r0, r1, #0x1d                  
    0020344A:  bpl      #0x20343a                      
    0020344C:  movs     r0, #0xff                      
    0020344E:  pop      {r1, r2, r6, pc}               
    00203450:  subs     r0, #0xe8                      
    00203454:  str      r1, [sp, #0x3dc]               
    00203456:  lsls     r7, r7, #2                     
    0020345A:  movs     r0, #0x86                      
    0020345C:  lsls     r0, r0, #0x18                  
    0020345E:  movs     r0, #0x82                      
    00203460:  movs     r2, #0                         
    00203462:  movs     r0, #0x82                      
    00203464:  strb     r0, [r0, r0]                   
    00203466:  movs     r0, #8                         
    0020346A:  movs     r0, #0x90                      
    0020346C:  adr      r3, #0                         
    0020346E:  movs     r0, #0x90                      
    00203470:  mov      r0, r0                         
    00203472:  movs     r0, #0x82                      
    00203474:  asrs     r0, r0, #0x20                  
    00203476:  adr      r2, #0x2d4                     
    00203478:  lsls     r0, r6, #2                     
    0020347A:  ands     r0, r5                         
    0020347C:  uxtb     r0, r6                         
    0020347E:  ldrh     r0, [r0, r2]                   
    00203480:  lsls     r0, r1, #0x1d                  
    00203482:  add      r7, sp, #0x3d8                 
    00203484:  lsls     r7, r7, #0xb                   
    00203486:  ldrh     r3, [r4, #0x28]                
    00203488:  lsrs     r0, r7, #3                     
    0020348A:  lsls     r0, r6, #4                     
    0020348C:  ldrh     r3, [r4, #0x28]                
    0020348E:  lsrs     r0, r7, #7                     
    00203490:  lsls     r0, r6, #0x14                  
    00203492:  ldrh     r3, [r4, #0x28]                
    00203494:  lsrs     r0, r7, #0xb                   
    00203496:  strb     r0, [r6, r4]                   
    00203498:  asrs     r3, r1, #5                     
    0020349A:  str      r3, [sp, #0x88]                
    0020349C:  subs     r4, #0xf8                      
    0020349E:  lsls     r0, r2, #0x1c                  
    002034A0:  ldrh     r3, [r4, #0x28]                
    002034A2:  movs     r7, #0xf8                      
    002034A4:  ldrh     r0, [r4, #0x28]                
    002034A6:  cmp      r0, #0xf8                      
    002034A8:  lsrs     r0, r6, #0x14                  
    002034AA:  cmp      r1, #0xf1                      
    002034AC:  asrs     r0, r0, #4                     
    002034AE:  str      r1, [r7, r2]                   
    002034B0:  asrs     r1, r1, #1                     
    002034B2:  lsls     r2, r4, #4                     
    002034B4:  ldr      r7, [pc, #0x380]                 // = 0x022400FD
    002034B6:  lsrs     r1, r1, #9                     
    002034B8:  ldr      r7, [pc, #0x88]                  // = 0x57F60748
    002034BA:  adcs     r4, r1                         
    002034BC:  stm      r7!, {r1, r2, r4, r5, r6, r7}  
    002034BE:  movs     r0, #0xfe                      
    002034C0:  asrs     r0, r5, #0x11                  
    002034C2:  asrs     r0, r6                         
    002034C6:  movs     r1, #0xfe                      
    002034C8:  rsbs     r0, r5, #0                     
    002034CA:  bhs      #0x203506                      
    002034CC:  lsrs     r2, r6, #6                     
    002034CE:  ldrh     r3, [r4, #0x28]                
    002034D0:  ldr      r0, [pc, #0x3e0]                 // = 0x1E2EA14A
    002034D2:  asrs     r0, r4, #0x10                  
    002034D4:  lsls     r1, r6, #4                     
    002034D6:  lsrs     r2, r7, #0x14                  
    002034D8:  ldr      r2, [pc, #0x3c4]                 // = 0x017040F8
    002034DA:  ldrh     r0, [r0, #0x28]                
    002034DC:  ldr      r1, [pc, #0x3e0]                 // = 0x41F892B1
    002034DE:  asrs     r0, r6                         
}

/* ---- sub_002034E0 @ 0x002034E0 ---- */
void sub_002034E0() {
    002034E0:  push     {r1, r2, r4, r5, r6, r7, lr}   
    002034E4:  ldrh     r3, [r4, #0x28]                
    002034E6:  ldr      r0, [r7, #0xc]                 
    002034E8:  ands     r0, r6                         
    002034EA:  lsrs     r3, r1, #0x11                  
    002034EC:  ldr      r3, [sp, #0x84]                
    002034EE:  ldrh     r7, [r7, #0x2a]                
    002034F0:  str      r0, [r7, #0x7c]                
    002034F2:  ldrh     r0, [r2, #0x28]                
    002034F4:  ldr      r0, [r7, #0x1c]                
    002034F6:  movs     r0, r6                         
    002034F8:  ldr      r2, [pc, #0xac]                  // = 0x70F88D30
    002034FA:  subs     r6, #0xd0                      
    002034FC:  subs     r7, #0x4b                      
    002034FE:  subs     r0, r1, r1                     
    00203500:  ldrh     r0, [r7, #0x2a]                
    00203502:  ldr      r0, [r7, #0x2c]                
    00203504:  ldrh     r0, [r4, r0]                   
    00203506:  ldrh     r0, [r7, #0x2a]                
    00203508:  ldr      r0, [r7, #0x3c]                
    0020350A:  ldr      r2, [sp, #0x80]                
    0020350C:  ldrh     r0, [r7, #0x2a]                
    0020350E:  ldr      r0, [r7, #0x4c]                
    00203510:  bge      #0x203554                      
    00203512:  ldrh     r0, [r7, #0x2a]                
    00203514:  ldr      r0, [r7, #0x5c]                
    00203516:  subs     r0, r4, r0                     
    00203518:  ldrh     r1, [r7, #0x2a]                
    0020351A:  ldr      r0, [r7, #0x6c]                
    0020351C:  ldrh     r0, [r4, r0]                   
    0020351E:  ldrh     r1, [r7, #0x2a]                
    00203520:  ldr      r0, [r7, #0x7c]                
    00203522:  ldr      r2, [sp, #0x80]                
    00203524:  ldrh     r1, [r7, #0x2a]                
    00203526:  strb     r0, [r7, #3]                   
    00203528:  bge      #0x20356c                      
    0020352A:  ldrh     r1, [r7, #0x2a]                
    0020352C:  strb     r0, [r7, #7]                   
    0020352E:  subs     r0, r4, r0                     
    00203530:  ldrh     r2, [r7, r5]                   
    00203532:  ldrh     r2, [r7, #0x2a]                
    00203534:  strb     r0, [r7, #0xb]                 
    00203536:  ldrh     r0, [r4, #0x28]                
    00203538:  strb     r0, [r7, #0xf]                 
    0020353A:  lsls     r0, r6, #0x1c                  
    0020353C:  ldrb     r6, [r6, r3]                   
    0020353E:  ldr      r5, [sp, #0x3fc]               
    00203540:  ldr      r0, [r7, #0xc]                 
    00203542:  cmp      r7, #0x10                      
    00203544:  lsls     r0, r1, #0x1d                  
    00203546:  ldrsb    r6, [r6, r7]                   
    00203548:  ldr      r5, [sp, #0x3fc]               
    0020354A:  ldr      r0, [r7, #0x1c]                
    0020354C:  cmp      r5, #0x10                      
    0020354E:  lsls     r0, r1, #0x1d                  
    00203550:  strh     r6, [r6, r3]                   
    00203552:  ldr      r5, [sp, #0x3fc]               
    00203554:  ldr      r0, [r7, #0x5c]                
    00203556:  ldr      r5, [sp]                       
    00203558:  ldr      r0, [r7, #0x2c]                
    0020355A:  movs     r0, r2                         
    0020355C:  ldr      r5, [sp, #0x240]               
    0020355E:  ldr      r0, [r7, #0x6c]                
    00203560:  ldr      r5, [sp]                       
    00203562:  ldr      r0, [r7, #0x3c]                
    00203564:  ldr      r5, [sp, #0x80]                
    00203566:  ldr      r0, [r7, #0x4c]                
    00203568:  lsls     r0, r6, #4                     
    0020356A:  movs     r7, #0x90                      
    0020356C:  lsls     r0, r1, #0x1d                  
    0020356E:  ldr      r6, [r6, #0x3c]                
    00203570:  ldr      r5, [sp, #0x3fc]               
    00203572:  strb     r0, [r7, #0xb]                 
    00203574:  ldr      r5, [sp]                       
    00203576:  ldr      r0, [r7, #0x7c]                
    00203578:  movs     r0, r2                         
    0020357A:  ldr      r5, [sp, #0x240]               
    0020357C:  strb     r0, [r7, #0xf]                 
    0020357E:  ldr      r5, [sp]                       
    00203580:  strb     r0, [r7, #3]                   
    00203582:  lsls     r0, r4, #4                     
    00203584:  ldr      r5, [sp, #0x240]               
    00203586:  strb     r0, [r7, #7]                   
    00203588:  movs     r0, #0x30                      
    0020358A:  lsls     r0, r1, #0x1d                  
    0020358C:  ldrb     r6, [r6, r3]                   
    0020358E:  asrs     r7, r7, #0xf                   
    00203590:  ldrh     r0, [r4, #0x2e]                
    00203592:  ldr      r0, [r7, #0x2c]                
    00203594:  ldrh     r0, [r6, #0x28]                
    00203596:  ldr      r0, [r7, #0x3c]                
    00203598:  ldrh     r0, [r6, #0x28]                
    0020359A:  ldr      r0, [r7, #0x4c]                
    0020359C:  ldrh     r0, [r6, #0x28]                
    0020359E:  ldr      r0, [r7, #0x5c]                
    002035A0:  ldrh     r0, [r6, #0x28]                
    002035A2:  ldr      r0, [r7, #0x6c]                
    002035A4:  ldrh     r0, [r6, #0x28]                
    002035A6:  ldr      r0, [r7, #0x7c]                
    002035A8:  ldrh     r0, [r6, #0x28]                
    002035AA:  strb     r0, [r7, #3]                   
    002035AC:  ldrh     r0, [r6, #0x28]                
    002035AE:  strb     r0, [r7, #7]                   
    002035B0:  ldrh     r0, [r6, #0x28]                
    002035B2:  strb     r0, [r7, #0xb]                 
    002035B4:  ldrh     r0, [r6, #0x28]                
    002035B6:  strb     r0, [r7, #0xf]                 
    002035B8:  lsrs     r0, r6, #0x10                  
    002035BA:  ldr      r1, [sp, #0x12c]               
    002035BC:  str      r3, [sp, #0x1fc]               
    002035BE:  subs     r6, #0xf8                      
    002035C0:  str      r1, [sp, #0x80]                
    002035C2:  lsls     r2, r0, #9                     
    002035C4:  str      r3, [sp, #0x344]               
    002035C6:  subs     r4, #0xf8                      
    002035C8:  ldrh     r0, [r6, r4]                   
    002035CA:  lsls     r1, r6, #0xa                   
    002035CC:  lsls     r0, r5, #0xa                   
    002035CE:  lsrs     r1, r4, #0x18                  
    002035D0:  subs     r0, #0xf6                      
    002035D2:  asrs     r3, r7, #0xb                   
    002035D4:  lsls     r0, r5, #0xa                   
    002035D6:  lsrs     r1, r4, #0x18                  
    002035D8:  bls      #0x2035c8                      
    002035DA:  lsls     r2, r7, #0x13                  
    002035DC:  ldr      r2, [sp, #0x12c]               
    002035DE:  strh     r7, [r7, #0x1a]                
    002035E0:  subs     r6, #0xf8                      
    002035E2:  movs     r2, #0x20                      
    002035E4:  asrs     r0, r6, #2                     
    002035E6:  lsls     r5, r7, #2                     
    002035E8:  cmp      r7, r7                         
    002035EA:  movs     r0, #0x7c                      
    002035EC:  and      r0, r0, #0x86008600            
    002035F0:  add      r0, sp, #0                     
    002035F2:  movs     r0, #0x86                      
    002035F4:  str      r4, [sp]                       
    002035F6:  movs     r0, #0x8c                      
    002035F8:  strb     r0, [r0, r0]                   
    002035FA:  movs     r0, #8                         
    002035FC:  ldr      r0, [r0, r0]                   
    002035FE:  movs     r0, #0x82                      
    00203600:  ldr      r0, [r0]                       
    00203602:  movs     r0, #0x82                      
    00203604:  ldrb     r0, [r0]                       
    00203606:  movs     r0, #0x82                      
    00203608:  ldr      r5, [sp]                       
    0020360A:  movs     r0, #0x82                      
    0020360C:  bkpt     #0                             
    0020360E:  movs     r0, #0x82                      
    00203610:  asrs     r0, r0, #0x20                  
    00203612:  lsls     r5, r6, #0x12                  
    00203614:  lsrs     r6, r0, #0x11                  
    00203616:  lsls     r0, r1, #0x1d                  
    00203618:  b        #0x203008                      
    0020361A:  lsrs     r6, r7, #0x13                  
    0020361C:  movs     r1, #0x48                      
    0020361E:  lsls     r6, r0, #0x1d                  
    00203622:  lsls     r6, r7, #0xf                   
    00203624:  lsrs     r4, r5, #0x18                  
    00203626:  lsrs     r1, r2, #7                     
    0020362A:  mrc2     p13, #7, apsr_nzcv, c9, c7, #7 
    0020362E:  adds     r0, #0xfe                      
    00203630:  strb     r1, [r4]                       
    00203632:  lsls     r0, r4, #0x1c                  
    00203634:  lsrs     r2, r1, #0x1d                  
    00203636:  cbz      r6, #0x203676                  
    00203638:  lsls     r0, r7, #7                     
    0020363A:  lsls     r6, r0, #0x19                  
    0020363C:  pop      {r3, r6, pc}                   
    0020363E:  asrs     r0, r5, #3                     
    00203640:  lsls     r0, r0, #0x1d                  
    00203642:  bls      #0x203632                      
    00203644:  asrs     r6, r7, #2                     
    00203646:  lsls     r5, r7, #2                     
    00203648:  svc      #0xbf                          
    0020364A:  movs     r0, #0x82                      
    0020364C:  movs     r0, r0                         
    0020364E:  movs     r0, #0x83                      
    00203650:  adr      r3, #0                         
    00203652:  movs     r0, #0x90                      
}

/* ---- sub_00203654 @ 0x00203654 ---- */
void sub_00203654() {
    00203654:  push     {lr}                           
    00203656:  movs     r0, #0x81                      
    00203658:  cmp      r5, #0                         
    0020365C:  adds     r1, #0x41                      
    0020365E:  lsls     r3, r1, #0x15                  
    00203660:  str      r3, [sp, #0x118]               
}

/* ---- sub_00203662 @ 0x00203662 ---- */
// Called by: sub_0020524A
void sub_00203662() {
    00203662:  subs     r4, #0xf8                      
    00203664:  movs     r0, r6                         
    00203666:  ldrh     r3, [r5, r4]                   
    00203668:  lsls     r0, r2, #0x1b                  
    0020366A:  cmp      r0, #0x7a                      
    0020366C:  bvc      #0x20365c                      
    0020366E:  subs     r0, r7, #7                     
    00203670:  ldrsb    r6, [r5, r0]                   
    00203672:  cmp      r0, #0xd8                      
    00203674:  lsls     r6, r0, #9                     
    00203676:  lsls     r6, r6, #0x13                  
    00203678:  lsls     r7, r7, #3                     
    0020367A:  lsls     r4, r4, #0x18                  
    0020367C:  cmp      r3, #0xe0                      
    0020367E:  movs     r1, #0x19                      
    00203680:  ldrh     r6, [r0, r1]                   
    00203682:  cmp      r1, #0x7a                      
    00203684:  lsls     r0, r1, #0x1d                  
    00203686:  stm      r0!, {r1, r2, r4, r5, r6, r7}  
    00203688:  lsls     r6, r7, #7                     
    0020368A:  b        #0x203cf6                      
    0020368C:  cbz      r2, #0x2036fc                  
    0020368E:  adc      r5, r2, #0x698000              
    00203692:  lsrs     r1, r6, #0xf                   
    00203694:  movs     r5, #1                         
    00203696:  lsrs     r0, r1, #9                     
    00203698:  asrs     r2, r4                         
    0020369A:  asrs     r6, r6, #0xf                   
    0020369C:  lsls     r6, r7, #0x13                  
    0020369E:  lsls     r6, r0, #1                     
    002036A0:  subs     r6, #0x28                      
    002036A2:  movs     r3, #0xd1                      
    002036A4:  lsls     r0, r1, #0x1d                  
    002036A6:  ldr      r5, [sp, #0x3d8]               
    002036A8:  lsls     r6, r7, #7                     
    002036AA:  ldr      r7, [pc, #0x80]                  // = 0x208C9400
    002036AC:  strh     r4, [r6, #6]                   
    002036AE:  lsrs     r2, r0, #1                     
    002036B0:  lsls     r1, r4, #0xc                   
    002036B2:  movs     r0, #0x46                      
    002036B4:  adds     r6, r1, r1                     
    002036B6:  sub      sp, #0x1d8                     
    002036B8:  lsls     r3, r7, #0xb                   
    002036BA:  subs     r7, r4, #4                     
    002036BC:  rsbs     r5, r1, #0                     
    002036BE:  asrs     r2, r6, #3                     
    002036C0:  asrs     r0, r6, #1                     
    002036C2:  ldr      r0, [pc, #0x3d8]                 // = 0x45F804FA
    002036C4:  ldc2l    p7, c3, [sb, #0x80]!           
    002036C8:  adds     r0, r4, r5                     
    002036CA:  cmp      r6, #0xf6                      
    002036CC:  cmp      r3, #0xfe                      
    002036CE:  rsbs     r0, r5, #0                     
    002036D0:  asrs     r2, r6, #3                     
    002036D2:  subs     r3, #0x70                      
    002036D4:  cmp      r3, #0x43                      
    002036D6:  asrs     r0, r4, #1                     
    002036D8:  subs     r5, #0xf6                      
    002036DA:  cdp2     p7, #0xf, c3, c9, c0, #1       
    002036DE:  adds     r0, r4, r5                     
    002036E0:  movs     r3, #0xf6                      
    002036E2:  cmp      r3, #0xfe                      
    002036E4:  rsbs     r0, r5, #0                     
    002036E6:  asrs     r2, r6, #3                     
    002036E8:  subs     r3, #0x70                      
    002036EA:  cmp      r3, #0x43                      
    002036EC:  asrs     r0, r4, #1                     
    002036EE:  adds     r2, #0xf6                      
    002036F0:  asrs     r1, r7, #0xb                   
    002036F2:  lsls     r0, r1, #0x1d                  
    002036F4:  strb     r6, [r6, #0x1b]                
    002036F6:  asrs     r6, r7, #0xb                   
    002036F8:  movs     r0, #0x4b                      
    002036FA:  bls      #0x20378a                      
    002036FC:  lsrs     r0, r7, #1                     
    00203700:  asrs     r1, r7, #3                     
    00203702:  asrs     r0, r1, #1                     
    00203704:  movs     r7, #0xf6                      
    00203706:  movs     r0, #0xf9                      
    00203708:  movs     r1, #0x46                      
    0020370A:  lsrs     r6, r0, #0x19                  
    0020370E:  movs     r0, #0xf8                      
    00203710:  lsls     r6, r0, #5                     
    00203712:  ldr      r7, [pc, #0x84]                  // = 0x113014F8
    00203714:  strh     r4, [r6, #6]                   
    00203716:  movs     r3, #0x42                      
    00203718:  pop      {r1, r2, r6, pc}               
    0020371C:  adds     r1, r0, r1                     
    0020371E:  ldrb     r6, [r6, #0x13]                
    00203720:  pop      {r0, r1, r3, r4, r5, r7, pc}   
    00203722:  bl       #0x6eb828                        // ROM
    00203726:  movs     r0, #0x86                      
    00203728:  asrs     r0, r0, #0x14                  
    0020372A:  movs     r0, #0x83                      
    0020372C:  str      r4, [sp]                       
    0020372E:  movs     r0, #0x8c                      
    00203730:  cmp      r0, #0                         
    00203732:  movs     r0, #0x83                      
    00203734:  ldrh     r0, [r0]                       
    00203736:  adds     r6, #0                         
    00203738:  add      r4, sp, #0                     
    0020373A:  adds     r6, #0                         
    0020373C:  ldrsh    r0, [r0, r4]                   
    0020373E:  movs     r0, #0x83                      
    00203742:  movs     r0, #4                         
    00203744:  adr      r0, #0                         
    00203746:  lsls     r6, r0, #6                     
    00203748:  lsls     r0, r0, #0xc                   
    0020374A:  lsrs     r1, r4, #0x20                  
    0020374C:  lsls     r5, r6, #2                     
    0020374E:  adds     r0, r4, r0                     
    00203750:  ldrh     r6, [r6, #0x16]                
    00203752:  lsls     r4, r7, #7                     
    00203754:  lsrs     r0, r5, #4                     
    00203756:  lsrs     r2, r1, #9                     
    00203758:  ldr      r7, [pc, #0x12c]                 // = 0x88A901FF
    0020375A:  lsls     r0, r6, #3                     
    0020375C:  lsls     r1, r0, #0x10                  
    0020375E:  strh     r1, [r2, #0x16]                
    00203760:  subs     r7, #0xf8                      
    00203762:  adds     r0, r0, r4                     
    00203764:  lsls     r0, r6, #0x1d                  
    00203766:  lsls     r0, r1, #0x11                  
    00203768:  strh     r0, [r4, #0x16]                
    0020376A:  subs     r7, #0xf8                      
    0020376C:  lsls     r0, r2, #0x18                  
    0020376E:  lsls     r0, r1, #5                     
    00203770:  subs     r2, r4, r0                     
    00203772:  pop      {r4, r5, r6, pc}               
    00203774:  lsrs     r0, r5, #3                     
    00203776:  lsls     r0, r0, #0x1d                  
    00203778:  adds     r4, #0xf6                      
    0020377A:  lsls     r6, r7, #2                     
    0020377E:  movs     r0, #0x86                      
    00203782:  movs     r0, #0x86                      
    00203784:  ldr      r0, [r0, #0x60]                
    00203786:  movs     r0, #0x83                      
    00203788:  ldrb     r0, [r0, #4]                   
    0020378A:  movs     r0, #0x83                      
    0020378C:  cmp      r5, #0                         
    00203790:  lsrs     r1, r0, #0x11                  
    00203792:  adr      r1, #0x1e0                     
    00203794:  strh     r3, [r4, #0x30]                
    00203796:  ldrh     r0, [r6, #0x2c]                
    00203798:  asrs     r0, r7, #0x13                  
    0020379A:  asrs     r0, r6, #4                     
    0020379C:  ands     r3, r4                         
    0020379E:  lsrs     r4, r5, #0x14                  
    002037A0:  ldrh     r6, [r0, #0x2a]                
    002037A2:  asrs     r0, r7, #0x17                  
    002037A4:  adds     r0, #0x30                      
    002037A6:  asrs     r0, r2, #0x17                  
    002037A8:  asrs     r0, r3, #0xb                   
    002037AA:  ands     r4, r5                         
    002037AC:  lsrs     r0, r2, #0xb                   
    002037AE:  lsls     r0, r3, #0xf                   
    002037B0:  add      r4, r5                         
    002037B2:  lsls     r0, r2, #0xb                   
    002037B4:  lsls     r0, r3, #3                     
    002037B6:  subs     r0, #0x2c                      
    002037B8:  subs     r3, #0xd0                      
    002037BA:  asrs     r0, r4, #3                     
    002037BC:  asrs     r4, r5                         
    002037BE:  asrs     r0, r2, #7                     
    002037C0:  adds     r7, #0x2c                      
    002037C2:  adds     r1, r2, #7                     
    002037C4:  asrs     r0, r4, #0x13                  
    002037C6:  adds     r4, r5, #4                     
    002037C8:  subs     r2, #0xd0                      
    002037CA:  movs     r0, #0xd3                      
    002037CC:  subs     r0, #0x2c                      
    002037CE:  adds     r0, #0xd0                      
    002037D0:  cmp      r7, #0x2c                      
    002037D2:  cmp      r4, #0xd1                      
    002037D4:  str      r0, [r4, #0xc]                 
    002037D6:  cmp      r2, #0x2c                      
    002037D8:  lsls     r0, r2, #0x1f                  
    002037DA:  add      r8, fp                         
    002037DC:  lsls     r4, r5, #0xc                   
    002037DE:  mvns     r0, r3                         
    002037E0:  movs     r3, #0x2c                      
    002037E2:  rors     r2, r2                         
    002037E4:  lsls     r4, r5, #0x14                  
    002037E6:  cmp      r8, ip                         
    002037E8:  lsls     r4, r5, #0xc                   
    002037EA:  adr      r0, #0x380                     
    002037EC:  subs     r4, r5, r0                     
    002037EE:  lsls     r0, r2, #0xb                   
    002037F0:  strh     r0, [r3, #6]                   
    002037F2:  subs     r4, r5, #0                     
    002037F4:  movs     r4, #0xd1                      
    002037F6:  adr      r1, #0x380                     
    002037F8:  adds     r4, r5, r4                     
    002037FC:  adds     r4, r5, r4                     
    002037FE:  asrs     r1, r2, #0x13                  
    00203800:  lsls     r0, r4, #0x17                  
    00203802:  subs     r4, r4, #0                     
    00203804:  lsls     r0, r4, #0xf                   
    00203806:  adds     r4, r4, #0                     
    00203808:  ldr      r1, [pc, #0x380]                 // = 0x82F60E4B
    0020380A:  ldrh     r0, [r7, #0x1a]                
    0020380C:  lsls     r1, r1, #8                     
    0020380E:  asrs     r3, r5, #0x1c                  
    00203810:  ldrb     r1, [r2, #0xf]                 
    00203812:  lsls     r0, r1, #0x1d                  
    00203816:  ldr      r5, [r7, #0x1c]                
    00203818:  ldrb     r0, [r7, #9]                   
    0020381A:  ldrh     r0, [r1, #0xa]                 
    0020381C:  lsls     r1, r1, #0x1c                  
    00203820:  lsls     r5, r7, #0x1b                  
    00203822:  lsrs     r4, r4, #0x18                  
    00203824:  ldrb     r0, [r4, #3]                   
    00203826:  lsls     r3, r1, #1                     
    00203828:  subs     r2, r4, r0                     
    0020382A:  lsls     r0, r6, #5                     
    0020382C:  lsrs     r4, r4, #4                     
    0020382E:  asrs     r0, r4, #3                     
    00203830:  lsls     r4, r4, #0x1c                  
    00203832:  strb     r0, [r4, #0x1b]                
    00203834:  lsls     r0, r1, #0x1d                  
    00203836:  bpl      #0x203826                      
    00203838:  lsls     r5, r7, #3                     
    0020383A:  lsls     r4, r4, #8                     
    0020383C:  lsls     r0, r4, #0x1f                  
    0020383E:  movs     r4, r4                         
    00203840:  lsls     r0, r4, #0xb                   
    00203842:  strb     r4, [r4, #0xc]                 
    00203844:  cmp      r1, #0x4e                      
    00203846:  lsls     r0, r4, #4                     
    00203848:  lsls     r1, r4, #0x18                  
    0020384A:  subs     r3, #0xf1                      
    0020384C:  lsrs     r2, r0, #0x18                  
    0020384E:  ldr      r6, [sp, #0x3d8]               
    00203850:  str      r6, [sp, #0x3fc]               
    00203852:  subs     r3, #0xf8                      
    00203854:  svc      #0x70                          
    00203856:  bgt      #0x20384a                      
    00203858:  lsls     r1, r0, #6                     
    0020385A:  ldrh     r7, [r5]                       
    0020385C:  lsls     r0, r7, #3                     
    0020385E:  movs     r0, #0                         
    00203860:  cmp      r3, #0xd1                      
    00203862:  b.w      #0x117c5d8                     
    00203866:  lsrs     r0, r7                         
    00203868:  blt      #0x2038cc                      
    0020386A:  str      r1, [r7, #0x48]                
    0020386C:  ldrh     r2, [r4, #0x28]                
    0020386E:  lsls     r0, r7, #0x17                  
    00203870:  lsrs     r0, r4, #8                     
    00203872:  ldr      r5, [sp, #0x84]                
    00203874:  lsrs     r0, r7, #3                     
    00203876:  asrs     r0, r4, #8                     
    00203878:  ldrh     r0, [r4, #0x28]                
    0020387A:  lsls     r0, r7, #0x1b                  
    0020387C:  ldrh     r0, [r6, #0x28]                
    0020387E:  lsls     r0, r7, #0x1f                  
    00203880:  ldrh     r0, [r6, #0x28]                
    00203882:  lsls     r0, r7, #0x13                  
    00203884:  lsrs     r0, r6, #0x19                  
    00203886:  strh     r6, [r6, #0x16]                
    00203888:  lsls     r7, r7, #7                     
    0020388A:  ldrh     r1, [r5, #4]                   
    0020388C:  lsls     r0, r7, #3                     
    0020388E:  lsrs     r0, r0, #0x18                  
    00203890:  ands     r2, r4                         
    00203892:  movs     r1, #0xf2                      
    00203894:  lsrs     r0, r0, #0x1d                  
    00203896:  adds     r6, r6, r3                     
    00203898:  ldrsh    r0, [r7, r3]                   
    0020389A:  lsls     r0, r1, #0x1d                  
    0020389C:  adr      r2, #0x3d8                     
    0020389E:  strh     r5, [r7, #0x36]                
    002038A0:  lsrs     r0, r7                         
    002038A2:  lsls     r0, r6, #5                     
    002038A4:  movs     r1, r4                         
    002038A6:  ldr      r7, [pc, #0x80]                  // = 0x7FF0005D
    002038A8:  strh     r4, [r6, #6]                   
    002038AA:  lsrs     r2, r0, #0xd                   
    002038AC:  adds     r6, r0, r1                     
    002038AE:  push     {r1, r2, r4, r5, r6, r7}       
    002038B0:  cmp      r6, #0xfa                      
    002038B2:  ldrsb    r0, [r7, r5]                   
    002038B4:  adr      r1, #0x128                     
    002038B6:  subs     r6, r5, #0                     
    002038B8:  ldr      r1, [r2, #0x3c]                
    002038BA:  ldrh     r0, [r7, #0x2a]                
    002038BC:  asrs     r0, r7, #0x1b                  
    002038BE:  movs     r3, #0x30                      
    002038C0:  str      r2, [sp, #0x2c4]               
    002038C2:  rors     r0, r7                         
    002038C4:  ldr      r1, [sp, #0x40]                
    002038C6:  lsls     r2, r0, #1                     
    002038C8:  ldrh     r0, [r6, #0x26]                
    002038CA:  strh     r0, [r0, #0x14]                
    002038CC:  rors     r0, r7                         
    002038CE:  lsls     r0, r6, #8                     
    002038D0:  lsls     r6, r4, #0x10                  
    002038D2:  add      r0, sp, #0x380                 
    002038D4:  adds     r5, r3, r5                     
    002038D6:  cmp      r0, #0xf6                      
    002038D8:  lsls     r5, r7, #7                     
    002038DA:  bhi.w    #0x17a642                      
    002038E0:  lsls     r3, r3, #0xf                   
    002038E2:  ands     r2, r4                         
    002038E4:  movs     r1, #0xf2                      
    002038E6:  lsls     r0, r0, #0x15                  
    002038E8:  lsrs     r1, r5, #0x1a                  
    002038EA:  mrc      p8, #7, r4, c6, c15, #7        
    002038EE:  lsls     r3, r1, #1                     
    002038F0:  strh     r2, [r4, #0x18]                
    002038F2:  lsrs     r0, r7                         
    002038F4:  strb     r0, [r4, #0x14]                
    002038F6:  str      r2, [sp, #0x380]               
    002038F8:  subs     r3, #0xf8                      
    002038FA:  lsls     r0, r6, #4                     
    002038FC:  strb     r3, [r5, r4]                   
    002038FE:  ldc2l    p9, c1, [r0, #0x80]            
    00203902:  asrs     r6, r6, #0xb                   
    00203904:  add      sp, pc                         
    00203906:  ldr      r7, [pc, #0x12c]                 // = 0x20879A00
    0020390A:  subs     r2, r6, r0                     
    0020390C:  lsls     r0, r0, #2                     
    0020390E:  asrs     r6, r4, #4                     
    00203910:  add      r0, sp, #0x380                 
    00203912:  mrc2     p7, #2, r2, c13, c7, #7        
    00203916:  add      r0, sp, #0x3f8                 
    00203918:  lsls     r5, r3, #0xd                   
    0020391A:  blt      #0x203958                      
    0020391C:  lsls     r2, r6, #6                     
    0020391E:  lsls     r3, r5, #0x14                  
    00203920:  ldc2l    p9, c1, [r8], {0x20}           
    00203924:  lsls     r6, r6, #7                     
    00203926:  add      r0, sp, #0x3f4                 
    00203928:  lsls     r5, r3, #1                     
    0020392A:  ldrb     r0, [r6, #0x1f]                
    0020392C:  adds     r0, r0, r4                     
    0020392E:  ldc2l    p1, c0, [r6], #0x3f0           
    00203932:  bhi.w    #0x17a69a                      
    00203936:  adc.w    r7, r2, fp, lsr #15            
    0020393A:  adds     r0, #0x4e                      
    0020393C:  lsls     r0, r1, #2                     
    0020393E:  lsls     r2, r1, #0xc                   
    00203940:  blt      #0x20397e                      
    00203942:  lsls     r2, r6, #6                     
    00203944:  lsrs     r3, r5, #0xc                   
    00203946:  ldc2l    p9, c1, [r8], {0x20}           
    0020394A:  mrc      p0, #7, r3, c6, c12, #7        
    0020394E:  stm      r0!, {r3, r7}                  
    00203950:  lsls     r3, r6, #0x1b                  
    00203952:  adds     r0, r4, r4                     
    00203954:  ldrd     r3, r1, [r6, #0x3f0]!          
    00203958:  lsls     r0, r1, #0x1d                  
    0020395A:  mvns     r6, r6                         
    0020395C:  lsls     r5, r7, #7                     
    0020395E:  adds     r0, r4, r7                     
    00203960:  b        #0x204150                      
    00203962:  cmp      r5, #0xfc                      
    00203964:  adds     r0, #0x4e                      
    00203966:  lsls     r0, r7, #0xd                   
    00203968:  blt      #0x2039a6                      
    0020396A:  lsls     r2, r6, #6                     
    0020396C:  lsrs     r3, r5, #0xc                   
    0020396E:  ldc2l    p9, c1, [r8], {0x20}           
    00203972:  bge      #0x203962                      
    00203974:  adds     r0, #0xfc                      
    00203976:  lsls     r0, r7, #1                     
    00203978:  ldrb     r0, [r6, #0x1f]                
    0020397A:  adds     r0, r0, r4                     
    0020397C:  bpl      #0x20396c                      
    0020397E:  cmp      r0, #0xfc                      
    00203980:  lsls     r0, r1, #0x1d                  
    00203982:  cmp      r7, #0xf6                      
    00203984:  lsls     r5, r7, #7                     
    00203986:  adds     r0, r4, r7                     
    00203988:  ldm      r7, {r1, r2, r4, r5, r6, r7}   
    0020398A:  lsls     r4, r7, #3                     
    0020398C:  lsls     r6, r4, #0x14                  
    0020398E:  add      r1, sp, #0x380                 
    00203990:  movs     r4, #0x5d                      
    00203992:  lsls     r0, r1, #0x1d                  
    00203994:  adds     r0, #0xf6                      
    00203996:  lsls     r5, r7, #7                     
    00203998:  bhi.w    #0x17a700                      
    0020399C:  sbfx     lr, r2, #7, #0x1c              
    002039A0:  movs     r1, #0x4b                      
    002039A2:  adds     r0, r1, r5                     
    002039A4:  lsls     r0, r1, #0x1e                  
    002039A6:  movs     r7, #0xf6                      
    002039A8:  subs     r5, r7, r7                     
    002039AA:  adr      r0, #0x380                     
    002039AC:  adds     r6, r5, r4                     
    002039AE:  asrs     r1, r2, #7                     
    002039B0:  stc2     p13, c8, [r3, #-0x80]!         
    002039B4:  asrs     r0, r7, #0x17                  
    002039B6:  ldrh     r0, [r6, #0x28]                
    002039B8:  asrs     r0, r7, #0x13                  
    002039BA:  adds     r0, r4, r5                     
}

/* ---- sub_002039BC @ 0x002039BC ---- */
void sub_002039BC() {
    002039BC:  push     {r1, r2, r4, r5, r6, r7, lr}   
    002039BE:  adds     r0, #0xfc                      
    002039C0:  adds     r6, r0, r5                     
    002039C2:  uxtb     r6, r6                         
    002039C4:  lsls     r4, r7, #3                     
    002039C6:  adds     r0, r4, r4                     
    002039C8:  add      r7, sp, #0x3d8                 
    002039CA:  lsls     r4, r7, #3                     
    002039CC:  adds     r0, r4, r4                     
    002039CE:  add      r4, sp, #0x3d8                 
    002039D0:  lsrs     r4, r7                         
    002039D2:  movs     r1, #0xf2                      
    002039D4:  lsls     r0, r0, #0x15                  
    002039D6:  lsls     r1, r5, #0xa                   
    002039D8:  lsrs     r2, r4, #0x18                  
    002039DA:  strb     r6, [r6, #0x1b]                
    002039DC:  asrs     r7, r7, #0xf                   
    002039DE:  lsls     r0, r1, #0x1d                  
    002039E0:  lsls     r6, r6, #3                     
    002039E2:  lsls     r5, r7, #3                     
    002039E4:  lsls     r0, r4, #0xc                   
    002039E6:  lsls     r6, r0, #5                     
    002039E8:  ldr      r7, [pc, #0x84]                  // = 0x1A22004B
    002039EA:  strh     r4, [r6, #6]                   
    002039EC:  adds     r2, r0, r1                     
    002039EE:  asrs     r6, r6, #0x13                  
    002039F0:  lsrs     r2, r7, #0x1f                  
    002039F2:  lsls     r0, r1, #0x1d                  
    002039F6:  lsls     r4, r7, #3                     
    002039F8:  lsls     r0, r4, #0x18                  
    002039FA:  pop      {r4, r5, r7, pc}               
    002039FE:  lsls     r1, r0, #2                     
    00203A00:  strh     r7, [r7, #0x2c]                
    00203A02:  movs     r0, #0x83                      
    00203A04:  str      r5, [sp]                       
    00203A06:  movs     r0, #0x83                      
    00203A0A:  movs     r0, #0x86                      
    00203A0C:  cbz      r0, #0x203a50                  
    00203A0E:  movs     r0, #0x83                      
    00203A10:  and      r0, r0, #0x86008600            
    00203A16:  movs     r0, #0x83                      
    00203A18:  bmi      #0x203a1c                      
    00203A1A:  movs     r0, #0x90                      
    00203A1C:  vqadd.u8 q1, q0, q13                    
    00203A20:  adds     r0, #0                         
    00203A22:  movs     r0, #0x7b                      
    00203A24:  str      r0, [r0, #0x10]                
    00203A26:  movs     r0, #0x7b                      
    00203A28:  ldrb     r0, [r0]                       
    00203A2A:  movs     r0, #0x7b                      
    00203A2C:  strh     r0, [r0, #0x38]                
    00203A2E:  movs     r0, #0x7d                      
    00203A30:  cdp2     p0, #0, c2, c0, c3, #4         
    00203A34:  ldr      r2, [sp]                       
    00203A36:  movs     r0, #0x87                      
    00203A38:  lsrs     r0, r0, #0x20                  
    00203A3A:  lsls     r5, r6, #0xa                   
    00203A3C:  lsls     r0, r1, #0x1d                  
    00203A3E:  bne      #0x203a2e                      
    00203A40:  lsls     r4, r7, #3                     
    00203A42:  lsrs     r0, r4, #0x20                  
    00203A44:  adds     r5, r7, #6                     
    00203A46:  movs     r0, #0x84                      
    00203A48:  lsrs     r0, r0, #0x20                  
    00203A4A:  lsls     r5, r6, #0xa                   
    00203A4C:  lsls     r0, r1, #0x1d                  
    00203A4E:  ldm      r1, {r1, r2, r4, r5, r6, r7}   
    00203A50:  lsls     r4, r7, #3                     
    00203A52:  lsrs     r0, r4, #0x20                  
    00203A54:  ldrh     r5, [r7, r6]                   
    00203A56:  movs     r0, #0x84                      
    00203A58:  lsls     r0, r0, #0xc                   
    00203A5A:  subs     r3, r1, r5                     
    00203A5C:  lsls     r0, r7, #0x11                  
    00203A5E:  lsls     r3, r5, #4                     
    00203A60:  lsls     r1, r2, #3                     
    00203A62:  ldrh     r0, [r6, r3]                   
    00203A64:  strb     r2, [r7, #2]                   
    00203A66:  lsls     r7, r0, #1                     
    00203A68:  adds     r4, #0xbf                      
    00203A6A:  movs     r0, #0x87                      
    00203A6C:  lsrs     r0, r0, #0x20                  
    00203A6E:  lsls     r5, r6, #0xe                   
    00203A70:  lsls     r3, r1, #1                     
    00203A72:  subs     r2, r4, r0                     
    00203A74:  lsls     r0, r6, #1                     
    00203A76:  ldr      r2, [sp, #0x3c0]               
    00203A78:  lsls     r1, r7, #7                     
    00203A7A:  lsrs     r0, r4, #0x20                  
    00203A7C:  adds     r4, #0xbd                      
    00203A7E:  movs     r0, #0x87                      
    00203A80:  cmp      r5, #0                         
    00203A84:  lsls     r1, r0, #1                     
    00203A86:  ldr      r7, [pc, #0x8c]                  // = 0x014620F9
    00203A88:  lsls     r0, r6, #7                     
    00203A8A:  asrs     r4, r1, #0x20                  
    00203A8C:  subs     r7, r1, r1                     
    00203A8E:  ldm      r6, {r5, r6, r7}               
    00203A90:  lsls     r4, r3, #0x1d                  
    00203A92:  movs     r4, r4                         
    00203A94:  asrs     r5, r4, #0x18                  
    00203A96:  lsls     r0, r6, #7                     
    00203A98:  adds     r7, r1, #0                     
    00203A9A:  lsrs     r7, r7, #0x12                  
    00203A9C:  lsls     r2, r7, #0x13                  
    00203A9E:  cmp      r8, pc                         
    00203AA0:  lsrs     r2, r5, #3                     
    00203AA2:  strb     r5, [r0, #0x18]                
    00203AA4:  asrs     r0, r1, #0x10                  
    00203AA6:  vsri.32  d31, d20, #0xf                 
    00203AAA:  strh     r2, [r2, #6]                   
    00203AAC:  lsls     r2, r5, #0x17                  
    00203AAE:  lsrs     r0, r4, #1                     
    00203AB0:  movs     r4, r4                         
    00203AB2:  ldr      r7, [pc, #0xa0]                  // = 0x2090E000
    00203AB4:  lsrs     r2, r5                         
    00203AB8:  ldrb     r7, [r7, #2]                   
    00203ABA:  lsls     r0, r0, #5                     
    00203ABC:  b        #0x203338                      
    00203ABE:  lsls     r2, r6, #2                     
    00203AC2:  lsls     r1, r2, #7                     
    00203AC4:  str      r3, [sp, #0xcc]                
    00203AC6:  b        #0x203f4e                      
    00203AC8:  pop      {r0, r1, r3, r4, r6, r7, pc}   
    00203ACA:  b.w      #0x6ec9d0                      
    00203ACE:  stm      r1!, {r0, r2, r3, r4}          
    00203AD0:  asrs     r4, r0, #0x20                  
    00203AD2:  subs     r5, r6, #6                     
    00203AD4:  movs     r3, r4                         
    00203AD6:  lsls     r2, r4, #4                     
    00203AD8:  asrs     r1, r4, #0x20                  
    00203ADA:  lsls     r0, r6, #7                     
    00203ADC:  adds     r7, r1, #0                     
    00203ADE:  lsls     r7, r7, #6                     
    00203AE0:  lsls     r2, r7, #0xf                   
    00203AE2:  movs     r2, #0xf4                      
    00203AE4:  eors     r3, r0                         
    00203AE6:  asrs     r0, r1, #0xc                   
    00203AE8:  vsli.32  d31, d19, #0x11                
    00203AEC:  beq      #0x203a94                      
    00203AEE:  asrs     r3, r0, #1                     
    00203AF2:  lsls     r5, r6, #2                     
    00203AF4:  strh     r0, [r4, #0x38]                
    00203AF6:  ldr      r7, [pc, #0x2c0]                 // = 0x26F60768
    00203AF8:  vsli.32  d17, d20, #0x10                
    00203AFC:  asrs     r7, r1, #0xd                   
    00203AFE:  lsls     r0, r4, #3                     
    00203B00:  asrs     r1, r6, #0x13                  
    00203B02:  add      r6, sp, #0x18                  
    00203B04:  cmp      r4, #0x42                      
    00203B06:  stm      r0!, {r0, r1, r2, r3, r4, r5, r7}
    00203B08:  lsls     r3, r5, #0x17                  
    00203B0A:  asrs     r5, r0, #0x10                  
    00203B0C:  lsls     r5, r4, #4                     
    00203B0E:  cmp      r2, #0xa9                      
    00203B10:  lsls     r6, r0, #1                     
    00203B14:  movs     r0, #0xf9                      
    00203B16:  lsls     r6, r0, #5                     
    00203B18:  cmp      r2, #0xa9                      
    00203B1C:  cbz      r7, #0x203b5c                  
    00203B1E:  lsls     r7, r7, #0x13                  
    00203B20:  movs     r7, #0x46                      
    00203B22:  ldrb     r6, [r6, #0x13]                
    00203B24:  adds     r0, #0xfe                      
    00203B26:  subs     r5, #0x46                      
    00203B28:  add      r0, sp, #0x220                 
    00203B2A:  strex    r0, r2, [r2, #0x34c]           
    00203B30:  ldm      r7, {r0, r1, r2, r4, r5, r6, r7}
    00203B32:  lsrs     r7, r7, #3                     
    00203B34:  lsls     r5, r1, #0x11                  
    00203B36:  cmp      r1, #0x46                      
    00203B38:  lsls     r0, r5, #0x1d                  
    00203B3A:  movs     r2, #0x48                      
    00203B3C:  lsls     r6, r0, #0x1d                  
    00203B3E:  str      r6, [r6, #0x4c]                
    00203B40:  cmp      r0, #0xfc                      
    00203B42:  movs     r3, #0x68                      
    00203B44:  ldr      r2, [r3, r0]                   
    00203B46:  eors     r2, r0                         
    00203B48:  lsls     r3, r5, #0xf                   
    00203B4A:  lsls     r0, r0, #0x1c                  
    00203B4E:  lsls     r5, r7, #2                     
    00203B50:  bgt      #0x203ad2                      
    00203B52:  movs     r0, #0x90                      
    00203B54:  b        #0x203b58                      
    00203B56:  movs     r0, #0x90                      
    00203B58:  ldrb     r0, [r0]                       
    00203B5A:  movs     r0, #0x84                      
    00203B5C:  adds     r7, #0                         
    00203B5E:  lsrs     r5, r6, #0x1e                  
    00203B60:  lsls     r2, r1, #0xd                   
    00203B62:  asrs     r6, r0, #0x15                  
    00203B64:  lsrs     r0, r1, #0x12                  
    00203B66:  ldrh     r6, [r0, #0x2a]                
    00203B68:  lsls     r0, r7, #0x1f                  
    00203B6A:  movs     r5, #0                         
    00203B6C:  lsrs     r1, r7, #0x12                  
    00203B6E:  lsls     r0, r1, #0x1d                  
    00203B70:  subs     r0, #0xf6                      
    00203B72:  cmp      r0, #0xfc                      
    00203B74:  asrs     r6, r0, #1                     
    00203B76:  lsrs     r0, r4, #0xf                   
    00203B78:  adds     r0, r1, r5                     
    00203B7A:  lsls     r6, r0, #0x1d                  
    00203B7C:  subs     r4, #0xf6                      
    00203B7E:  ldr      r7, [pc, #0x3f0]                 // = 0x0E601361
    00203B80:  lsls     r6, r6, #0xb                   
    00203B82:  lsrs     r0, r6, #0x15                  
    00203B84:  lsls     r1, r6, #0x1f                  
    00203B86:  lsls     r1, r0, #4                     
    00203B88:  adds     r2, r4, #0                     
    00203B8A:  lsls     r1, r6, #0x1e                  
    00203B8C:  lsrs     r3, r1, #0x19                  
    00203B8E:  strh     r6, [r6, #0x16]                
    00203B90:  lsls     r6, r7, #7                     
    00203B92:  lsrs     r0, r4, #0x1b                  
    00203B94:  ldr      r1, [sp, #0x3d8]               
    00203B96:  lsls     r6, r7, #7                     
    00203B98:  subs     r6, #0x20                      
    00203B9A:  lsls     r5, r7, #2                     
    00203B9C:  cmp      r2, #0xbf                      
    00203B9E:  movs     r0, #0x91                      
    00203BA0:  ldr      r1, [sp]                       
    00203BA2:  movs     r0, #0x84                      
    00203BA4:  add      r5, sp, #0                     
    00203BA6:  movs     r0, #0x84                      
    00203BA8:  str      r1, [sp]                       
    00203BAA:  movs     r0, #0x6f                      
    00203BAC:  cmp      r5, #0                         
    00203BB0:  add      r1, r8                         
    00203BB2:  lsls     r5, r1, #0x11                  
    00203BB4:  lsls     r0, r7, #0x19                  
    00203BB6:  ldrh     r6, [r0, #2]                   
    00203BB8:  cmp      r2, #0x46                      
    00203BBA:  muls     r0, r7, r0                     
    00203BBC:  movs     r1, #0x48                      
    00203BBE:  lsls     r6, r0, #0x1d                  
    00203BC0:  movs     r3, #0xf6                      
    00203BC2:  lsls     r4, r7, #7                     
    00203BC4:  lsls     r4, r5, #0x1c                  
    00203BC6:  lsls     r1, r2, #3                     
    00203BC8:  lsls     r0, r4, #4                     
    00203BCA:  cmp      r4, #0x46                      
    00203BCE:  stm      r6!, {r0, r1, r2, r4, r5, r6, r7}
    00203BD0:  movs     r0, #0xff                      
    00203BD2:  pop      {r1, r2, r6, pc}               
    00203BD6:  lsls     r1, r0, #0x1e                  
    00203BD8:  lsls     r4, r5, #0x18                  
    00203BDA:  lsls     r1, r2, #3                     
    00203BDC:  lsls     r0, r4, #0x14                  
    00203BDE:  lsls     r3, r4, #4                     
    00203BE0:  cmp      r3, #0x46                      
    00203BE4:  cbnz     r7, #0x203c64                  
    00203BE6:  mov      pc, pc                         
    00203BE8:  cmp      r7, #0xe0                      
    00203BEA:  lsls     r0, r7, #5                     
    00203BEC:  lsls     r7, r5, #0xc                   
    00203BEE:  str      r0, [r2, #0x5c]                
    00203BF0:  lsls     r3, r2, #0xb                   
    00203BF2:  ldrb     r7, [r5, r0]                   
    00203BF4:  adds     r6, #0xd1                      
    00203BF6:  lsls     r0, r4, #0xb                   
    00203BF8:  ldr      r4, [r5, r4]                   
    00203BFC:  lsls     r1, r6, #0xb                   
    00203BFE:  bhi      #0x203c20                      
    00203C00:  adds     r2, #0xbf                      
    00203C02:  adds     r5, #0x48                      
    00203C04:  lsls     r5, r3, #3                     
    00203C06:  lsrs     r0, r6, #3                     
    00203C08:  strh     r1, [r7, #6]                   
    00203C0A:  adds     r0, #0x46                      
    00203C0C:  lsls     r1, r7, #0x12                  
    00203C0E:  asrs     r0, r4                         
    00203C12:  adr      r4, #0x3dc                     
    00203C14:  lsrs     r7, r7                         
    00203C16:  pop      {r1, r2, r6, pc}               
    00203C1A:  lsls     r1, r0, #0x1a                  
    00203C1C:  lsls     r0, r4, #4                     
    00203C1E:  lsls     r6, r0, #1                     
    00203C20:  ldr      r7, [pc, #0x88]                  // = 0x02E00146
    00203C22:  cmp      r7, #0xf4                      
    00203C24:  lsls     r3, r6, #0x1d                  
    00203C26:  ldrh     r6, [r6, r7]                   
    00203C28:  cmp      r1, #0xf9                      
    00203C2A:  ldr      r7, [pc, #0x12c]                 // = 0x00682849
    00203C2C:  lsls     r0, r6, #3                     
    00203C2E:  adr      r3, #0x20                      
    00203C30:  lsls     r0, r7, #3                     
    00203C32:  cmp      r0, #0x80                      
    00203C34:  cmp      r0, #0x4b                      
    00203C36:  stm      r3!, {r3, r6}                  
    00203C38:  lsls     r0, r7, #3                     
    00203C3A:  cmp      r0, #0x80                      
    00203C3C:  movs     r1, #0x4b                      
    00203C3E:  stm      r3!, {r1, r2, r6}              
    00203C40:  lsls     r0, r7, #3                     
    00203C42:  strb     r0, [r0, #0xe]                 
    00203C44:  sxtb     r0, r7                         
    00203C46:  cmp      r4, #0x78                      
    00203C48:  lsls     r0, r6, #0xd                   
    00203C4A:  lsls     r3, r5, #0xb                   
    00203C4C:  movs     r4, #0x22                      
    00203C4E:  str      r2, [sp, #0x12c]               
    00203C50:  subs     r2, r6, r2                     
    00203C52:  lsls     r0, r0, #0x1e                  
    00203C54:  bls      #0x203c44                      
    00203C56:  lsrs     r3, r7                         
    00203C58:  adcs     r6, r0                         
    00203C5C:  ldrb     r7, [r6, #0x1f]                
    00203C5E:  subs     r0, #0xff                      
    00203C60:  pop      {r1, r2, r6, pc}               
    00203C64:  lsls     r1, r0, #0xe                   
    00203C66:  movs     r2, #0x2c                      
    00203C6A:  lsls     r1, r6, #0x13                  
    00203C6C:  lsls     r7, r1, #0x18                  
    00203C6E:  adds     r4, r3, #7                     
    00203C70:  adcs     r0, r1                         
    00203C72:  lsls     r6, r0, #0x1d                  
    00203C74:  stm      r0!, {r1, r2, r4, r5, r6, r7}  
    00203C76:  lsls     r3, r7, #3                     
    00203C78:  pop      {r5, pc}                       
    00203C7C:  strb     r1, [r0, #0xe]                 
    00203C7E:  sxtb     r0, r7                         
    00203C80:  lsls     r0, r7, #0xd                   
    00203C82:  lsls     r3, r5, #0xb                   
    00203C86:  lsls     r0, r7, #9                     
    00203C88:  lsls     r3, r5, #0xf                   
    00203C8A:  adds     r3, #0x42                      
    00203C8C:  lsls     r1, r7, #9                     
    00203C8E:  lsls     r3, r5, #0xf                   
    00203C90:  asrs     r2, r4, #0x15                  
    00203C92:  subs     r3, r1, r1                     
    00203C96:  cmp      r4, #0xf7                      
    00203C98:  lsls     r7, r7, #7                     
    00203C9A:  movs     r0, #0x46                      
    00203C9C:  lsls     r1, r6, #0x12                  
    00203C9E:  cmp      r3, #0x23                      
    00203CA0:  lsls     r0, r6, #1                     
    00203CA2:  lsls     r0, r4, #4                     
    00203CA4:  lsls     r1, r4, #0x14                  
    00203CA6:  lsls     r0, r4, #0x17                  
    00203CA8:  cmp      r3, #0x23                      
    00203CAA:  movs     r0, #0x70                      
    00203CAC:  lsls     r6, r0, #5                     
    00203CAE:  lsls     r0, r4, #0xb                   
    00203CB0:  movs     r0, r4                         
    00203CB4:  strh     r7, [r6, r7]                   
    00203CB6:  lsls     r7, r7, #7                     
    00203CB8:  pop      {r5, pc}                       
    00203CBC:  lsls     r1, r0, #6                     
    00203CBE:  pop      {r5, pc}                       
    00203CC2:  lsls     r1, r0, #2                     
    00203CC4:  adds     r4, #0xbf                      
    00203CC6:  movs     r0, #0x87                      
    00203CC8:  pop      {pc}                           
    00203CCA:  movs     r0, #0x84                      
    00203CCC:  bhs      #0x203cd0                      
    00203CCE:  movs     r0, #0x84                      
    00203CD0:  b        #0x2034d4                      
    00203CD2:  movs     r0, #0x90                      
    00203CD4:  bhi      #0x203cd8                      
    00203CD6:  movs     r0, #0x90                      
    00203CD8:  b        #0x203adc                      
    00203CDA:  movs     r0, #0x84                      
    00203CDE:  movs     r0, #0x90                      
    00203CE0:  bgt      #0x203ce4                      
    00203CE2:  movs     r0, #0x90                      
    00203CE4:  cdp2     p0, #0, c2, c0, c4, #4         
    00203CE8:  b        #0x203cec                      
    00203CEA:  movs     r0, #0x90                      
    00203CEC:  lsls     r0, r0, #8                     
    00203CEE:  lsls     r1, r5, #0x1c                  
    00203CF0:  lsls     r1, r2, #0xf                   
    00203CF2:  rsbs     r0, r7, #0                     
    00203CF4:  lsls     r0, r7, #5                     
    00203CF6:  lsls     r0, r4, #0xc                   
    00203CF8:  lsls     r3, r5, #0xb                   
    00203CFA:  lsls     r2, r4, #8                     
    00203CFC:  subs     r3, r1, r1                     
    00203CFE:  strb     r0, [r0, #2]                   
    00203D00:  lsls     r7, r0, #1                     
    00203D02:  strb     r0, [r4]                       
    00203D04:  cmp      r2, #0x47                      
    00203D06:  movs     r0, #0x91                      
    00203D0A:  adds     r5, r6, #2                     
    00203D0C:  adds     r7, r1, #1                     
    00203D0E:  lsrs     r5, r1, #0x11                  
    00203D10:  cmp      r2, #0x46                      
    00203D12:  subs     r1, #0x68                      
    00203D14:  subs     r0, r5, r5                     
    00203D16:  strh     r6, [r1, #0x32]                
    00203D18:  adds     r3, #0x46                      
    00203D1A:  ldrh     r0, [r1, #4]                   
    00203D1C:  movs     r0, r3                         
    00203D1E:  ldr      r0, [sp, #0x64]                
    00203D20:  lsls     r2, r0, #9                     
    00203D22:  asrs     r4, r3, #3                     
    00203D24:  subs     r4, #0x19                      
    00203D26:  lsls     r0, r5, #0x14                  
    00203D28:  asrs     r5, r3, #0x1f                  
    00203D2A:  lsls     r0, r1, #1                     
    00203D2C:  lsls     r4, r2, #0x1e                  
    00203D2E:  ldrb     r6, [r6, #0x1b]                
    00203D30:  lsls     r3, r7, #3                     
    00203D32:  movs     r2, #0x20                      
    00203D34:  asrs     r0, r4, #0x17                  
    00203D36:  strb     r0, [r1, #5]                   
    00203D38:  asrs     r6, r0, #1                     
    00203D3A:  movs     r2, #0x18                      
    00203D3C:  adcs     r6, r0                         
    00203D3E:  strh     r6, [r6, #0x36]                
    00203D40:  cmp      r2, #0xfa                      
    00203D42:  adr      r2, #0x1a0                     
    00203D44:  subs     r4, #0x18                      
    00203D46:  cmp      r2, #0x2a                      
    00203D48:  lsls     r0, r4, #0x11                  
    00203D4A:  subs     r1, #0xd0                      
    00203D4C:  adds     r3, #0x68                      
    00203D4E:  str      r0, [r1, r6]                   
    00203D50:  ldr      r1, [sp, #0x60]                
    00203D52:  asrs     r2, r0, #5                     
    00203D54:  lsrs     r1, r2, #7                     
    00203D56:  lsrs     r5, r1, #0x15                  
    00203D58:  cmp      r0, #0x49                      
    00203D5A:  lsls     r0, r5, #1                     
    00203D5C:  str      r7, [sp, #0x3c0]               
    00203D5E:  cmp      r3, #0xf8                      
    00203D60:  subs     r0, r5, r5                     
    00203D62:  lsrs     r1, r7, #0xa                   
    00203D64:  subs     r0, r1, #1                     
    00203D66:  lsls     r1, r4, #0x1c                  
    00203D68:  ldrb     r6, [r6, #0x17]                
    00203D6A:  lsls     r3, r7, #0x17                  
    00203D6C:  cmp      r1, #0x4b                      
    00203D6E:  subs     r0, r5, r1                     
    00203D70:  ldrh     r0, [r5, #0x12]                
    00203D72:  cmp      r2, #0x18                      
    00203D74:  lsls     r0, r4, #1                     
    00203D76:  subs     r2, r4, r0                     
    00203D78:  lsls     r0, r4, #5                     
    00203D7A:  mcr2     p8, #1, lr, c0, c13, #5        
    00203D7E:  movs     r0, #0x90                      
    00203D80:  bhi      #0x203d84                      
    00203D82:  movs     r0, #0x90                      
    00203D84:  bgt      #0x203d88                      
    00203D86:  movs     r0, #0x90                      
    00203D88:  asrs     r0, r0, #4                     
    00203D8A:  movs     r0, #0x85                      
    00203D8C:  stc      p0, c2, [r0, #-0x240]          
    00203D90:  lsls     r0, r0, #0x14                  
    00203D92:  subs     r3, r1, r5                     
    00203D94:  lsls     r0, r5, #0xd                   
    00203D96:  strb     r0, [r6, #3]                   
    00203D98:  asrs     r3, r0, #0x20                  
    00203D9A:  lsrs     r3, r5, #0x10                  
    00203D9C:  lsls     r7, r7                         
    00203D9E:  ldrb     r0, [r6, #0x1f]                
    00203DA0:  eors     r0, r0                         
    00203DA2:  ldrb     r0, [r6, #3]                   
    00203DA4:  strb     r0, [r0, #1]                   
    00203DA6:  lsls     r7, r0, #1                     
    00203DA8:  ldm      r4, {r0, r1, r2, r3, r4, r5, r7}
    00203DAA:  movs     r0, #0x44                      
    00203DAC:  asrs     r0, r0, #8                     
    00203DAE:  asrs     r3, r1, #1                     
    00203DB0:  asrs     r5, r6, #0xa                   
    00203DB2:  subs     r4, r1, r1                     
    00203DB4:  asrs     r0, r5, #9                     
    00203DB6:  movs     r1, #0x48                      
    00203DB8:  lsls     r0, r5, #0x1d                  
    00203DBA:  movs     r6, #0xf6                      
    00203DBC:  asrs     r3, r7, #7                     
    00203DBE:  asrs     r3, r1, #9                     
    00203DC0:  adds     r2, r1, r5                     
    00203DC2:  asrs     r0, r5, #9                     
    00203DC4:  lsls     r3, r1, #5                     
    00203DC6:  strb     r0, [r6, #3]                   
    00203DC8:  asrs     r1, r0, #0x20                  
    00203DCA:  adds     r1, r7, r0                     
    00203DCC:  lsls     r7, r7, #6                     
    00203DCE:  cmp      r0, #0x21                      
    00203DD0:  movs     r0, r4                         
    00203DD2:  lsls     r3, r7, #7                     
    00203DD4:  adds     r2, r4, r4                     
    00203DD6:  movs     r3, #0x60                      
    00203DD8:  str      r1, [sp, #0x1a0]               
    00203DDA:  ldrh     r0, [r5, #0x1a]                
    00203DDC:  lsrs     r2, r0, #9                     
    00203DDE:  asrs     r0, r2, #0xb                   
    00203DE0:  str      r3, [sp, #0x1a4]               
    00203DE2:  lsls     r2, r0, #0x1d                  
    00203DE4:  lsrs     r0, r2, #0xb                   
    00203DE6:  lsls     r0, r1, #0x1d                  
    00203DE8:  ldc2l    p10, c0, [r6], #0x3e8          
    00203DEC:  pop      {r3, r6, pc}                   
    00203DEE:  asrs     r0, r5, #3                     
    00203DF0:  lsls     r0, r0, #0x1d                  
    00203DF4:  asrs     r2, r7, #2                     
    00203DF6:  lsls     r5, r7, #2                     
    00203DF8:  bmi      #0x203d7a                      
    00203DFA:  movs     r0, #0x44                      
    00203DFC:  bhi      #0x203e00                      
    00203DFE:  movs     r0, #0x44                      
    00203E00:  ands     r0, r0                         
    00203E02:  movs     r0, #0x85                      
    00203E06:  movs     r0, #0x44                      
    00203E08:  and      r0, r0, #0x78007800            
    00203E0C:  subs     r0, #0                         
    00203E0E:  movs     r0, #0x87                      
    00203E10:  str      r0, [r0, #0x20]                
    00203E12:  movs     r0, #0x85                      
    00203E14:  add      sp, #0                         
    00203E16:  movs     r0, #0x85                      
    00203E18:  subs     r0, #0                         
    00203E1A:  asrs     r5, r6, #0x1e                  
    00203E1C:  asrs     r3, r1, #0x1d                  
    00203E1E:  adds     r5, r1, r5                     
    00203E20:  asrs     r0, r5, #0x1d                  
    00203E22:  cmp      r3, #0x4c                      
    00203E24:  cmp      r0, #0x68                      
    00203E26:  lsls     r2, r4, #8                     
    00203E28:  lsls     r3, r7, #0xf                   
    00203E2A:  str      r0, [sp, #0x108]               
    00203E2C:  strh     r0, [r5, #0xa]                 
    00203E2E:  lsls     r2, r0, #0x1d                  
    00203E30:  asrs     r0, r2, #0xb                   
    00203E32:  str      r1, [sp, #0x1a4]               
    00203E34:  lsls     r2, r0, #0x11                  
    00203E36:  asrs     r0, r2, #0xf                   
    00203E38:  lsls     r0, r1, #0x1d                  
    00203E3A:  blo      #0x203e2a                      
    00203E3C:  lsls     r2, r7, #3                     
    00203E3E:  subs     r0, #0x20                      
    00203E40:  strh     r5, [r7, #0xc]                 
    00203E42:  ldr      r2, [r0, #0x14]                
    00203E44:  adds     r0, r4, r1                     
    00203E46:  lsls     r7, r7, #0xa                   
    00203E48:  lsls     r6, r0, #0xd                   
    00203E4A:  cmp      r0, #0xd1                      
    00203E4C:  lsls     r2, r4, #8                     
    00203E4E:  lsls     r3, r7, #0xf                   
    00203E50:  movs     r2, #0x44                      
    00203E52:  lsrs     r1, r5, #9                     
    00203E54:  strh     r4, [r1, #0xa]                 
    00203E56:  lsrs     r2, r0, #9                     
    00203E58:  adr      r2, #0x120                     
    00203E5A:  movs     r5, #0x60                      
    00203E5C:  ldr      r7, [pc, #0x118]                 // = 0xDBD00B2C
    00203E5E:  cmp      r0, #0xf0                      
    00203E60:  lsls     r4, r0, #0x10                  
    00203E62:  lsls     r3, r7, #0xf                   
    00203E64:  lsrs     r3, r0, #0x10                  
    00203E66:  ldrh     r7, [r7, r6]                   
    00203E68:  blt      #0x203f3e                      
    00203E6A:  lsls     r0, r5, #0x1d                  
    00203E6C:  adc.w    r7, r8, r0, asr #1             
    00203E70:  blo      #0x203e60                      
    00203E72:  lsls     r2, r7, #7                     
    00203E74:  subs     r0, #0x20                      
    00203E76:  lsls     r5, r7, #2                     
    00203E78:  bhi      #0x203dfa                      
    00203E7A:  movs     r0, #0x44                      
    00203E7C:  subs     r0, #0                         
    00203E7E:  movs     r0, #0x87                      
    00203E80:  and      r0, r0, #0x78007800            
    00203E84:  lsrs     r0, r0, #0x14                  
    00203E86:  movs     r0, #0x86                      
    00203E88:  ands     r0, r0                         
    00203E8A:  movs     r0, #0x86                      
    00203E8C:  cmp      r5, #0                         
    00203E8E:  bl       #0xaedd14                        // ROM
    00203E92:  ldrb     r0, [r7, r3]                   
    00203E94:  lsls     r0, r0, #0x12                  
    00203E96:  bhi      #0x203f26                      
    00203E98:  lsrs     r0, r7, #3                     
    00203E9A:  lsrs     r0, r0, #0x14                  
    00203E9C:  movs     r0, #0x46                      
    00203E9E:  asrs     r0, r3, #0x1c                  
    00203EA2:  strb     r7, [r6, #0x1b]                
    00203EA4:  asrs     r7, r7, #7                     
    00203EA6:  lsls     r3, r1, #0x19                  
    00203EA8:  subs     r6, r0, r5                     
    00203EAA:  lsls     r0, r5, #0xd                   
    00203EAC:  strb     r0, [r6, #3]                   
    00203EAE:  asrs     r3, r0, #0x20                  
    00203EB0:  adds     r3, r7, r0                     
    00203EB2:  lsls     r7, r7, #6                     
    00203EB4:  movs     r3, r4                         
    00203EB6:  asrs     r4, r5, #0x10                  
    00203EB8:  lsls     r7, r7, #2                     
    00203EBA:  lsls     r4, r4, #0xc                   
    00203EBC:  lsls     r0, r6, #7                     
    00203EBE:  ldr      r4, [r0, #0x40]                
    00203EC0:  lsls     r1, r6, #0x12                  
    00203EC2:  lsls     r6, r0, #0x19                  
    00203EC4:  movs     r0, #0xe0                      
    00203EC6:  ldr      r7, [pc, #0x118]                 // = 0x4FD0032B
    00203EC8:  strh     r4, [r6, #6]                   
    00203ECA:  asrs     r1, r2, #1                     
    00203ECC:  lsrs     r6, r6, #0x1f                  
    00203ECE:  lsls     r0, r7, #0x13                  
    00203ED0:  strh     r5, [r6, #6]                   
    00203ED2:  bhi      #0x203f7e                      
    00203ED4:  lsrs     r0, r7, #0x13                  
    00203ED6:  b.w      #0xd3470a                      
    00203EDA:  sbfx     r8, r2, #0xb, #0x14            
    00203EDE:  adds     r1, #0x46                      
    00203EE0:  subs     r2, #0x46                      
    00203EE2:  pop      {r1, r2, r6, pc}               
    00203EE6:  lsrs     r1, r0, #0x1d                  
    00203EE8:  bhi      #0x203ed8                      
    00203EEA:  lsls     r7, r7, #2                     
    00203EEC:  ldm      r4, {r0, r1, r2, r3, r4, r5, r7}
    00203EEE:  movs     r0, #0x44                      
    00203EF0:  subs     r0, #0                         
    00203EF2:  movs     r0, #0x87                      
    00203EF4:  subs     r0, #0                         
    00203EF6:  lsls     r5, r6, #0x1e                  
    00203EF8:  lsrs     r3, r1, #0x15                  
    00203EFA:  ldr      r3, [sp, #0x118]               
    00203EFC:  asrs     r0, r5, #0x11                  
    00203EFE:  stm      r0!, {r1, r2, r6}              
    00203F02:  mov      pc, lr                         
    00203F04:  movs     r2, #0xff                      
    00203F06:  lsls     r6, r0, #5                     
    00203F08:  cmp      r0, #0x46                      
    00203F0A:  asrs     r6, r0, #1                     
    00203F0C:  ldrb     r6, [r6, #0x1f]                
    00203F0E:  lsls     r0, r7, #3                     
    00203F10:  subs     r0, #0x20                      
    00203F12:  lsls     r5, r7, #2                     
    00203F14:  subs     r0, #0xbf                      
    00203F16:  movs     r0, #0x87                      
    00203F18:  strb     r0, [r0, r0]                   
    00203F1A:  cmp      r5, #0x4b                      
    00203F1E:  subs     r3, r0, r5                     
    00203F20:  str      r5, [sp, #0x1a0]               
    00203F22:  lsls     r0, r6, #0xe                   
    00203F24:  strb     r0, [r6, #3]                   
    00203F26:  asrs     r3, r0, #0x20                  
    00203F28:  cmp      r0, #0x2b                      
    00203F2A:  svc      #0xd0                          
    00203F2C:  add      r8, pc                         
    00203F2E:  svc      #0x91                          
    00203F30:  ldr      r0, [pc, #0x3e0]                 // = 0x00000000
    00203F32:  lsls     r1, r0, #2                     
    00203F34:  bhi      #0x203f80                      
    00203F36:  lsls     r0, r7, #3                     
    00203F38:  lsrs     r0, r6, #8                     
    00203F3A:  lsls     r7, r4, #0x1c                  
    00203F3C:  lsls     r3, r7, #0xf                   
    00203F3E:  ldr      r3, [r0, r5]                   
    00203F40:  movs     r3, #0xf8                      
    00203F44:  movs     r5, #0xf7                      
    00203F46:  ldr      r2, [pc, #0x3fc]                 // = 0x04100034
    00203F48:  lsls     r6, r1, #5                     
    00203F4A:  cmp      r0, #0x46                      
    00203F4C:  ldr      r1, [pc, #0x88]                  // = 0x03681B20
    00203F4E:  asrs     r0, r1, #1                     
    00203F50:  ldrb     r6, [r6, r7]                   
    00203F52:  ldr      r0, [pc, #0x3e0]                 // = 0xC4DE3B14
    00203F54:  lsls     r0, r1, #0x19                  
    00203F56:  str      r1, [r6, r3]                   
    00203F58:  lsrs     r1, r0, #0xc                   
    00203F5A:  bx       r4                             
    00203F5C:  adcs     r5, r1                         
    00203F5E:  cbz      r6, #0x203f9e                  
    00203F60:  lsrs     r1, r7                         
    00203F62:  cmp      r3, #0xb9                      
    00203F64:  cmp      r0, sp                         
    00203F66:  lsls     r2, r1, #0x1d                  
    00203F68:  lsls     r3, r7, #0xf                   
    00203F6A:  ldrsb    r4, [r0, r1]                   
    00203F6C:  movs     r4, #0xf8                      
    00203F6E:  cmp      r3, #0x30                      
    00203F70:  asrs     r1, r4, #0xd                   
    00203F72:  lsrs     r0, r4, #0x19                  
    00203F74:  lsls     r0, r4, #7                     
    00203F76:  lsls     r4, r6, #8                     
    00203F78:  lsrs     r4, r5, #0xc                   
    00203F7A:  blt      #0x203f1e                      
    00203F7C:  subs     r7, #0xe7                      
    00203F7E:  adds     r3, r1, r1                     
    00203F80:  subs     r5, #0x68                      
    00203F82:  adds     r3, r1, r1                     
    00203F86:  lsls     r7, r6, #0x13                  
    00203F88:  cmp      r0, #0xff                      
    00203F8A:  lsls     r2, r4, #4                     
    00203F8C:  subs     r1, #0x46                      
    00203F8E:  asrs     r0, r1, #1                     
    00203F90:  subs     r5, #0xf6                      
    00203F92:  subs     r1, #0xf8                      
    00203F94:  cmp      r0, #0x4d                      
    00203F96:  adds     r7, #0x22                      
    00203F98:  ldr      r1, [r1, #4]                   
    00203F9A:  adcs     r6, r0                         
    00203F9C:  ldrsb    r6, [r6, r7]                   
    00203F9E:  cmp      r3, #0xf9                      
    00203FA0:  cmp      r0, #0x68                      
    00203FA2:  ldr      r3, [pc, #0x84]                  // = 0x13701A02
    00203FA4:  adds     r2, #0x43                      
    00203FA6:  beq      #0x20403e                      
    00203FA8:  bne      #0x20405c                      
    00203FAA:  cmp      r3, #0x18                      
    00203FAC:  strh     r1, [r5, #0x1a]                
    00203FAE:  lsrs     r2, r0, #1                     
    00203FB0:  ldr      r0, [pc, #0x2fc]                 // = 0x02E3DD50
    00203FB2:  ldr      r0, [r5, #4]                   
    00203FB6:  vldmia   r7!, {d26, d27, d28, d29, d30, d31}
    00203FBA:  lsls     r0, r5, #0x11                  
    00203FBC:  stm      r3!, {r1, r2, r6}              
    00203FBE:  lsls     r3, r6, #0x1f                  
    00203FC0:  ldrh     r2, [r4, #0x28]                
    00203FC2:  subs     r0, r7, #3                     
    00203FC4:  ldrh     r0, [r6, #0x28]                
    00203FC6:  subs     r0, r7, #7                     
    00203FC8:  stm      r3!, {r5}                      
    00203FCA:  lsls     r3, r6, #0x1f                  
    00203FCC:  subs     r2, r0, r5                     
    00203FCE:  ldrh     r6, [r1, #0x28]                
    00203FD0:  movs     r1, #0xf8                      
    00203FD2:  movs     r6, #0x30                      
    00203FD4:  ldrh     r3, [r1, #0x2a]                
    00203FD6:  movs     r0, #0xf8                      
    00203FD8:  subs     r0, r4, r4                     
    00203FDA:  lsls     r0, r5, #0xd                   
    00203FDC:  strb     r0, [r6, #3]                   
    00203FDE:  asrs     r3, r0, #0x20                  
    00203FE0:  lsls     r3, r5, #0xc                   
    00203FE2:  ldr      r7, [pc, #0x340]                 // = 0x3B75D4ED
    00203FE4:  strh     r4, [r6, #6]                   
    00203FE6:  lsrs     r1, r2, #0x1d                  
    00203FE8:  strh     r6, [r6, #0xe]                 
    00203FEA:  cmp      r0, #0xff                      
    00203FEC:  ldr      r2, [r4]                       
    00203FEE:  movs     r1, #0x46                      
    00203FF0:  lsrs     r6, r0, #0x1d                  
    00203FF2:  strh     r6, [r6, r7]                   
    00203FF4:  lsls     r7, r7, #0xb                   
    00203FF6:  adds     r6, r0, r1                     
    00203FF8:  movs     r1, #0xb1                      
    00203FFA:  lsls     r0, r1, #0x1d                  
    00203FFE:  cmp      r1, #0xf9                      
    00204000:  cmp      r0, #0xe0                      
    00204002:  lsrs     r1, r4, #8                     
    00204004:  sbcs     r0, r5                         
    00204006:  cmn      r6, r6                         
    00204008:  lsrs     r1, r7, #0xb                   
    0020400A:  movs     r1, #0xa8                      
    0020400C:  cmp      r0, #0x46                      
    0020400E:  lsrs     r2, r4, #0x1c                  
    00204010:  ldc2l    p8, c15, [r6, #0x3fc]!         
    00204014:  lsrs     r1, r7, #0xa                   
    00204016:  ldr      r0, [r5, #0x18]                
    00204018:  cmp      r0, #0x46                      
    0020401A:  asrs     r2, r4                         
    0020401C:  strh     r6, [r6, r3]                   
    0020401E:  ldm      r0, {r0, r3, r4, r5, r6, r7}   
    00204020:  asrs     r1, r7, #0x12                  
    00204022:  subs     r3, r1, r1                     
    00204024:  strh     r0, [r7, #0x12]                
    00204026:  lsls     r0, r6, #7                     
    00204028:  subs     r2, r0, r0                     
    0020402A:  asrs     r0, r6, #0xd                   
    0020402C:  adds     r3, r1, r1                     
    00204030:  add      r7, sp, #0x3dc                 
    00204032:  lsrs     r6, r7, #0x1b                  
    00204034:  lsls     r3, r1, #0x11                  
    00204036:  subs     r6, r0, r5                     
    00204038:  lsls     r0, r5, #0xd                   
    0020403A:  strb     r0, [r6, #3]                   
    0020403C:  asrs     r3, r0, #0x20                  
    0020403E:  lsls     r3, r5, #0xc                   
    00204040:  ldr      r7, [pc, #0x340]                 // = 0x00000000
    00204042:  strh     r4, [r6, #6]                   
    00204044:  lsrs     r1, r2, #0x1d                  
    00204046:  strh     r6, [r6, r3]                   
    00204048:  movs     r1, #0xff                      
    0020404A:  cmp      r0, #0x46                      
    0020404C:  lsrs     r2, r4, #4                     
    0020404E:  lsrs     r0, r1, #0x1d                  
    00204050:  movs     r4, #0xf6                      
    00204052:  lsls     r7, r7, #0xb                   
    00204054:  lsrs     r0, r4, #0xf                   
    00204056:  lsls     r0, r1, #0x1d                  
    00204058:  stm      r4!, {r1, r2, r4, r5, r6, r7}  
    0020405A:  lsrs     r1, r7, #0x1f                  
    0020405C:  adr      r7, #0x3d8                     
    0020405E:  lsls     r3, r7, #3                     
    00204060:  lsrs     r0, r4, #0x1c                  
    00204064:  asrs     r6, r7, #0x17                  
    00204066:  pop      {r4, r5, r7, pc}               
    0020406A:  lsls     r3, r0, #2                     
    0020406C:  ldm      r4, {r0, r1, r2, r3, r4, r5, r7}
    0020406E:  movs     r0, #0x44                      
    00204070:  and      r0, r0, #0x78007800            
    00204074:  cmp      r4, #0                         
    00204076:  movs     r0, #0x91                      
    00204078:  subs     r0, #0                         
    0020407A:  movs     r0, #0x87                      
    0020407C:  bmi      #0x204080                      
    0020407E:  movs     r0, #0x44                      
    00204080:  strb     r0, [r0, #0xc]                 
    00204082:  movs     r0, #0x86                      
    00204084:  ldrh     r0, [r0, #0x18]                
    00204086:  movs     r0, #0x86                      
    00204088:  lsls     r0, r0, #0x1c                  
    0020408A:  ldr      r7, [pc, #0x12c]                 // = 0x0310180A
    0020408C:  lsls     r4, r6, #3                     
    0020408E:  subs     r2, r2, r0                     
    00204090:  lsls     r0, r4, #0x19                  
    00204092:  lsls     r2, r1, #0x1d                  
    00204094:  subs     r3, r1, r1                     
    00204096:  lsls     r0, r4, #0x1d                  
    00204098:  lsls     r3, r1, #9                     
    0020409A:  subs     r2, r4, r0                     
    0020409C:  lsls     r0, r6, #0x19                  
    0020409E:  subs     r3, r1, r1                     
    002040A0:  rsbs     r0, r5, #0                     
    002040A2:  lsls     r0, r6, #0x13                  
    002040A4:  subs     r2, r0, r0                     
    002040A6:  strb     r0, [r4, #1]                   
    002040A8:  cmp      r4, #0x47                      
    002040AA:  movs     r0, #6                         
    002040AC:  strb     r0, [r0, r4]                   
    002040AE:  movs     r0, #0x55                      
    002040B0:  movs     r0, r0                         
    002040B2:  movs     r0, #4                         
    002040B4:  and      r0, r0, #0x5000500             
    002040B8:  str      r0, [r0, r0]                   
    002040BA:  movs     r0, #6                         
    002040BC:  lsrs     r0, r0, #0x20                  
    002040BE:  lsls     r5, r6, #6                     
    002040C0:  stm      r1!, {r4, r5, r6, r7}          
    002040C2:  lsls     r5, r7, #7                     
    002040C4:  ldm      r2!, {r4, r5, r6, r7}          
    002040C6:  lsls     r5, r7, #7                     
    002040C8:  bls      #0x2040ac                      
    002040CA:  lsls     r5, r7, #7                     
    002040CC:  adr      r7, #0x3c0                     
    002040CE:  lsls     r5, r7, #7                     
    002040D0:  add      r7, sp, #0x3c0                 
    002040D2:  pop      {r0, r2, r3, r4, r5, r6, r7, pc}
    002040D4:  lsrs     r0, r5, #3                     
    002040D6:  lsls     r0, r0, #5                     
    002040D8:  blt      #0x2040bc                      
    002040DA:  lsrs     r5, r7, #0xa                   
    002040DC:  asrs     r0, r3, #2                     
    002040DE:  strb     r4, [r2, #0x18]                
    002040E0:  movs     r0, r4                         
    002040F2:  movs     r0, r0                         
    002040F4:  movs     r0, r0                         
    002040F6:  movs     r0, r0                         
    002040F8:  movs     r0, r0                         
    002040FA:  movs     r0, r0                         
    002040FC:  movs     r0, r0                         
    002040FE:  movs     r0, r0                         
    00204100:  movs     r0, r0                         
    00204102:  movs     r0, r0                         
    00204104:  movs     r0, r0                         
    00204106:  movs     r0, r0                         
    00204108:  movs     r0, r0                         
    0020410A:  movs     r0, r0                         
    0020410C:  movs     r0, r0                         
    0020410E:  movs     r0, r0                         
    00204110:  movs     r0, r0                         
    00204112:  lsls     r5, r6, #8                     
    00204114:  lsls     r0, r0, #4                     
    00204116:  lsls     r2, r0, #0x10                  
    00204118:  cmp      r0, #0                         
    0020411A:  adds     r0, r0, r0                     
    0020411C:  lsls     r0, r2, #4                     
    0020411E:  lsls     r2, r0, #0x1c                  
    00204120:  cmp      r0, #3                         
    00204122:  asrs     r2, r0, #4                     
    00204124:  movs     r1, r0                         
    00204126:  asrs     r2, r5, #4                     
    00204128:  lsls     r1, r0, #8                     
    0020412A:  movs     r3, r1                         
    0020412C:  orrs     r2, r5                         
    0020412E:  cmp      r5, #0x43                      
    00204130:  strb     r2, [r2, r1]                   
    00204132:  tst      r5, r5                         
    00204134:  cmp      r4, sb                         
    00204136:  lsls     r0, r4, #4                     
    00204138:  lsls     r2, r0, #0x1c                  
    0020413A:  cmp      r0, #3                         
    0020413C:  movs     r1, #2                         
    0020413E:  lsls     r1, r0, #4                     
    00204140:  movs     r1, #0x2a                      
    00204142:  lsls     r1, r0, #8                     
    00204144:  lsls     r4, r0, #4                     
    00204146:  movs     r2, r5                         
    00204148:  adds     r0, #0                         
    0020414A:  lsls     r1, r0, #8                     
    0020414C:  lsls     r7, r0, #0xc                   
    0020414E:  lsls     r0, r5, #8                     
    00204150:  lsls     r1, r6, #4                     
    00204152:  cmp      r2, #2                         
    00204154:  lsls     r1, r6, #4                     
    00204156:  lsls     r2, r0, #0xc                   
    00204158:  cmp      r2, #2                         
    0020415A:  ands     r0, r0                         
    0020415C:  lsls     r1, r0, #8                     
    0020415E:  lsls     r7, r0, #0xc                   
    00204160:  lsrs     r0, r5, #0x20                  
    00204162:  lsls     r1, r0, #5                     
    00204164:  cmp      r2, #3                         
    00204166:  lsls     r1, r0, #5                     
    00204168:  lsrs     r0, r1, #0x20                  
    0020416A:  lsls     r6, r0, #0xc                   
    0020416C:  movs     r2, r5                         
    0020416E:  movs     r0, r0                         
    00204170:  movs     r0, r0                         
    00204172:  str      r0, [r0, r0]                   
    00204174:  lsls     r1, r0, #8                     
    00204176:  lsls     r7, r0, #0xc                   
    00204178:  lsls     r0, r5, #8                     
    0020417A:  lsls     r1, r2, #5                     
    0020417C:  cmp      r2, #4                         
    0020417E:  lsls     r1, r2, #5                     
    00204180:  lsrs     r2, r0, #8                     
    00204182:  cmp      r2, #4                         
    00204184:  movs     r0, r0                         
    00204186:  movs     r0, r0                         
    00204188:  movs     r0, r0                         
    0020418A:  movs     r0, r0                         
    0020418C:  lsls     r0, r0, #8                     
    0020418E:  lsls     r2, r0, #0x10                  
    00204190:  cmp      r0, #0                         
    00204192:  adds     r1, r0, r0                     
    00204194:  lsls     r0, r2, #8                     
    00204196:  lsls     r2, r0, #0x1c                  
    00204198:  cmp      r0, #3                         
    0020419A:  asrs     r2, r4, #4                     
    0020419C:  lsls     r2, r0, #0x14                  
    0020419E:  asrs     r2, r5, #4                     
    002041A0:  lsls     r2, r0, #8                     
    002041A2:  lsls     r6, r0, #0x14                  
    002041A4:  movs     r2, r5                         
    002041A6:  movs     r0, r0                         
    002041A8:  movs     r0, #0                         
    002041AA:  ldr      r2, [r0, #0x60]                
    002041AC:  lsls     r4, r0, #8                     
    002041AE:  cmp      r1, #2                         
    002041B0:  movs     r0, r0                         
    002041B2:  lsls     r0, r0, #0xc                   
    002041B4:  lsls     r2, r0, #0x10                  
    002041B6:  cmp      r0, #0                         
    002041B8:  adds     r2, r1, r0                     
    002041BA:  lsls     r0, r2, #0xc                   
    002041BC:  lsls     r2, r0, #0x1c                  
    002041BE:  cmp      r0, #3                         
    002041C0:  asrs     r2, r0, #4                     
    002041C2:  cmp      r1, #3                         
    002041C4:  asrs     r2, r5, #4                     
    002041C6:  lsls     r3, r0, #8                     
    002041C8:  cmp      r1, #6                         
    002041CA:  str      r2, [r5, #0x50]                
    002041CC:  cmp      r5, #0x71                      
    002041CE:  movs     r0, #0x33                      
    002041D0:  lsls     r3, r0, #8                     
    002041D2:  lsls     r7, r0, #0xc                   
    002041D4:  lsls     r0, r5, #8                     
    002041D6:  lsls     r1, r4, #0xc                   
    002041D8:  cmp      r2, #0x24                      
    002041DA:  lsls     r1, r4, #0xc                   
    002041DC:  lsrs     r2, r0, #0xc                   
    002041DE:  cmp      r2, #0x24                      
    002041E0:  muls     r3, r0, r3                     
    002041E2:  strh     r5, [r5, r0]                   
    002041E4:  cmp      r5, #0x54                      
    002041E6:  ldr      r4, [pc, #0x108]                 // = 0x142489FF
    002041E8:  lsls     r5, r0, #1                     
    002041EA:  lsls     r4, r0, #8                     
    002041EC:  movs     r2, r2                         
    002041EE:  mov      r0, r5                         
    002041F2:  vpmax.u16 d20, d27, d22                 
    002041F6:  str      r0, [sp, #0x4c]                
    002041F8:  ldr      r7, [pc, #0x240]                 // = 0x00000000
    002041FA:  rsbs     r5, r4, #0                     
    002041FC:  asrs     r1, r2, #0xd                   
    002041FE:  asrs     r6, r7, #0x20                  
    00204200:  lsls     r4, r0, #8                     
    00204202:  lsls     r5, r2, #0xc                   
    00204204:  lsrs     r0, r5, #8                     
    00204206:  lsls     r1, r2, #0x10                  
    00204208:  and.w    r1, sb, sb, ror #1             
    0020420E:  blt      #0x2042a8                      
    00204210:  subs     r3, #0xad                      
    00204212:  ldm      r6, {r1, r3, r6}               
    00204214:  ldr      r2, [r3, r1]                   
    00204216:  subs     r7, #0xa4                      
    00204218:  lsls     r1, r2, #0x10                  
    0020421A:  movs     r0, #0x8a                      
    0020421C:  lsrs     r0, r2, #4                     
    0020421E:  ldrb     r2, [r5, #7]                   
    00204220:  svc      #0x81                          
    00204222:  ldr      r3, [pc, #0x2e0]                 // = 0x64253A6E
    00204224:  add      r5, sp, #0x36c                 
    00204226:  ldr      r2, [pc, #0xec]                  // = 0x00000000
    00204228:  ldrh     r6, [r1, r3]                   
    0020422A:  adr      r4, #0x160                     
    0020422C:  movs     r7, r7                         
    0020422E:  movs     r0, r0                         
    00204230:  movs     r0, r0                         
    00204232:  movs     r0, r0                         
    00204234:  movs     r0, r0                         
    00204236:  movs     r0, r0                         
    00204238:  movs     r0, r0                         
    0020423A:  movs     r0, r0                         
    0020423C:  movs     r0, #0                         
    0020423E:  lsls     r4, r0, #8                     
    00204240:  lsls     r5, r2, #0xc                   
    00204242:  subs     r0, r5, r0                     
    00204244:  lsls     r1, r4, #0x10                  
    0020424A:  ldr      r0, [r2, #0x48]                
    0020424C:  add      r7, sp, #0x104                 
    0020424E:  lsrs     r6, r2, #6                     
    00204250:  ldm      r5, {r0, r3, r5}               
    00204252:  muls     r5, r1, r5                     
    00204254:  beq      #0x204228                      
    00204256:  lsls     r1, r4, #0x10                  
    00204258:  movs     r0, #0x8a                      
    0020425A:  cmp      r2, #0x10                      
    0020425C:  b        #0x204436                      
    0020425E:  str      r0, [sp, #0x3d0]               
    00204260:  adcs     r4, r5                         
    00204262:  str      r6, [sp, #0x2bc]               
    00204264:  cmp      r1, #9                         
    00204266:  ldr      r5, [pc, #0x334]                 // = 0x56444100
    00204268:  strex    r0, r0, [r3, #0x340]           
    0020426C:  movs     r0, r0                         
    0020426E:  movs     r0, r0                         
    00204270:  movs     r0, r0                         
    00204272:  movs     r0, r0                         
    00204274:  movs     r0, r0                         
    00204276:  movs     r0, r0                         
    00204278:  movs     r0, r0                         
    0020427A:  adds     r0, #0                         
    0020427C:  ldr      r4, [r0, #0x60]                
    0020427E:  lsls     r4, r0, #8                     
    00204280:  cmp      r1, #2                         
    00204282:  movs     r1, r0                         
    00204284:  vhsub.u8 d1, d0, d2                     
    00204288:  cmp      r0, #0                         
    0020428A:  subs     r0, #0x6f                      
    0020428C:  subs     r0, #0xa1                      
    0020428E:  strh     r5, [r5, #0x14]                
    00204290:  strh     r5, [r6, #0x30]                
    00204292:  bics     r0, r4                         
    00204294:  ldrb     r3, [r2, r0]                   
    00204296:  subs     r7, r0, #1                     
    00204298:  ldr      r6, [sp, #0x174]               
    0020429A:  vrshl.u8 d1, d2, d1                     
    0020429E:  cmp      r0, #3                         
    002042A0:  lsls     r0, r7, #8                     
    002042A2:  ldr      r7, [r7, #0x3c]                
    002042A4:  ldr      r6, [r4, #0x44]                
    002042A6:  lsrs     r0, r1, #8                     
    002042A8:  ldrh     r7, [r2, #0x32]                
    002042AA:  ldr      r1, [sp, #0x20c]               
    002042AC:  adr      r7, #0x138                     
    002042AE:  ittee    al                             
    002042B0:  b        #0x204354                      
    002042B2:  lsl      r3, r4, #0xb                   
    002042B4:  ldrh     r7, [r7, #6]                   
    002042B6:  lsl      r5, r2, #0x14                  
    002042B8:  str      r3, [r5, #0x64]                
    002042BA:  lsrs     r4, r5, #1                     
    002042BC:  ldrsb    r2, [r1, r4]                   
    002042BE:  strh     r6, [r1, #0x1c]                
    002042C0:  ldr      r6, [pc, #0x264]                 // = 0x56202164
    002042C4:  str      r7, [r7, r2]                   
    002042C6:  b        #0x204a84                      
    002042C8:  movs     r0, r0                         
    002042CA:  movs     r0, r0                         
    002042CC:  lsls     r0, r0, #0xc                   
    002042CE:  lsrs     r7, r7, #0xb                   
    002042D0:  lsls     r4, r0, #8                     
    002042D2:  cmp      r1, #2                         
    002042D4:  movs     r0, r0                         
    002042D6:  vrshl.u8 d1, d2, d4                     
    002042DA:  cmp      r0, #3                         
    002042DC:  lsls     r0, r1, #0x14                  
    002042DE:  adds     r6, #0xff                      
    002042E0:  cmp      r6, #0xfe                      
    002042E2:  lsrs     r7, r4, #7                     
    002042E4:  ldr      r7, [pc, #0x90]                  // = 0x00003030
    002042E6:  str      r1, [sp, #0x2dc]               
    002042E8:  str      r0, [r0, #0x14]                
    002042EA:  ldrb     r1, [r3, #0xb]                 
    002042EC:  strd     r0, r5, [ip], #-0x248          
    002042F0:  ldrh     r7, [r7, #0xe]                 
    002042F2:  asrs     r4, r4, #0x10                  
    002042F4:  cdp2     p7, #3, c14, c6, c14, #1       
    002042F8:  movs     r4, #9                         
    002042FC:  lsls     r1, r2                         
    002042FE:  bls      #0x2043c4                      
    00204300:  ldr      r2, [r7, #0x44]                
    00204302:  str      r2, [sp, #0x3a0]               
    00204304:  movs     r0, r0                         
    00204306:  movs     r0, r0                         
    00204308:  movs     r0, r0                         
    0020430A:  movs     r0, r0                         
    0020430C:  movs     r0, r0                         
    0020430E:  movs     r0, r0                         
    00204310:  movs     r0, r0                         
    00204312:  movs     r0, r0                         
    00204314:  movs     r0, r0                         
    00204316:  movs     r0, r0                         
    00204318:  vrshl.u8 d1, d2, d6                     
    0020431C:  cmp      r0, #3                         
    0020431E:  lsls     r2, r0, #0x1c                  
    00204320:  subs     r3, #0xff                      
    00204322:  stm      r4!, {r1, r2, r3, r4, r6, r7}  
    00204324:  bmi      #0x204302                      
    00204326:  subs     r3, #0x75                      
    0020432A:  cmp      r5, #0x47                      
    0020432C:  lsrs     r6, r5, #0x20                  
    0020432E:  ldrb     r6, [r6, #0x1d]                
    00204330:  lsls     r4, r6, #0x1c                  
    00204332:  strh     r7, [r7, #0x16]                
    00204334:  subs     r3, #0x14                      
    00204336:  stm      r4!, {r1, r2, r3, r4, r6, r7}  
    00204338:  bmi      #0x204316                      
    0020433A:  subs     r3, #0x75                      
    0020433E:  cmp      r5, #0x47                      
    00204340:  lsrs     r6, r5, #0x20                  
    00204342:  ldrb     r6, [r6, #0x1d]                
    00204344:  movs     r4, r6                         
    00204346:  lsls     r0, r2, #0x10                  
    00204348:  movs     r4, r0                         
    0020434A:  lsls     r0, r2, #0x10                  
    0020434C:  movs     r4, r0                         
    0020434E:  lsls     r0, r5, #0xf                   
    00204350:  movs     r0, r0                         
    00204352:  lsls     r0, r4, #2                     
    00204354:  lsls     r0, r0, #0x19                  
    00204356:  movs     r6, r3                         
    00204358:  lsls     r0, r5, #0xf                   
    0020435A:  movs     r0, r0                         
    0020435C:  movs     r0, r0                         
    0020435E:  movs     r0, r0                         
    00204360:  movs     r0, r0                         
    00204362:  muls     r3, r0, r3                     
    00204364:  strh     r5, [r5, r0]                   
    00204366:  cmp      r5, #0x54                      
    00204368:  ldr      r4, [pc, #0x108]                 // = 0x69727700
    0020436A:  lsls     r5, r0, #1                     
    0020436C:  movs     r0, r0                         
    0020436E:  movs     r0, r0                         
    00204370:  movs     r0, r0                         
    00204372:  movs     r0, r0                         
    00204374:  movs     r0, r0                         
    00204376:  cmp      r6, #0x31                      
    00204378:  adds     r0, #0x30                      
    0020437A:  movs     r0, r0                         
    0020437C:  movs     r3, r0                         
    0020437E:  lsls     r0, r0, #0x10                  
    00204380:  lsls     r2, r3, #1                     
    00204382:  lsls     r1, r2, #0xc                   
    00204384:  movs     r0, r0                         
    00204386:  movs     r0, r0                         
    00204388:  movs     r0, r0                         
    0020438A:  movs     r0, r0                         
    0020438C:  adds     r2, r1, r0                     
    0020438E:  movs     r0, r0                         
    00204390:  movs     r0, r0                         
    00204392:  movs     r0, r0                         
    00204394:  movs     r0, r0                         
    00204396:  cmp      r2, #0x29                      
    00204398:  movs     r0, r0                         
    0020439A:  movs     r0, r0                         
    0020439C:  movs     r0, r0                         
    0020439E:  movs     r0, r0                         
    002043A0:  movs     r0, r0                         
    002043A2:  movs     r0, r0                         
    002043A4:  movs     r0, r0                         
    002043A6:  movs     r0, r0                         
    002043A8:  movs     r0, r0                         
    002043AA:  movs     r0, r0                         
    002043AC:  movs     r0, r0                         
    002043AE:  movs     r0, r0                         
    002043B0:  movs     r0, r0                         
    002043B2:  movs     r0, r0                         
    002043B4:  movs     r0, r0                         
    002043B6:  strh     r0, [r0]                       
    002043B8:  movs     r5, r4                         
    002043BA:  movs     r0, #0                         
    002043BC:  movs     r1, r4                         
    002043BE:  movs     r0, r0                         
    002043C0:  movs     r0, r0                         
    002043C2:  lsls     r0, r0, #4                     
    002043C4:  movs     r0, r0                         
    002043C6:  lsls     r0, r0, #0x16                  
    002043C8:  movs     r0, r0                         
    002043CA:  ldrb     r0, [r0, #8]                   
    002043CC:  movs     r0, r0                         
    002043CE:  strh     r0, [r0]                       
    002043D0:  movs     r0, r0                         
    002043D2:  ldrb     r0, [r0, #8]                   
    002043D4:  movs     r0, r0                         
    002043D6:  lsls     r0, r0, #5                     
    002043D8:  movs     r0, r0                         
    002043DA:  lsls     r0, r0, #0x10                  
    002043DC:  movs     r0, r0                         
    002043DE:  movs     r0, r0                         
    002043E0:  movs     r0, r0                         
    002043E2:  movs     r0, r0                         
    002043E4:  movs     r0, r0                         
    002043E6:  movs     r0, r0                         
    002043E8:  movs     r0, r0                         
    002043EA:  asrs     r0, r0, #0x20                  
    002043EC:  movs     r0, r0                         
    002043EE:  ands     r0, r0                         
    002043F0:  movs     r0, r0                         
    002043F2:  str      r0, [r0]                       
    002043F4:  movs     r0, r0                         
    002043F6:  adr      r0, #0                         
    002043F8:  movs     r0, r0                         
    002043FA:  str      r0, [r0]                       
    002043FC:  movs     r0, r0                         
    002043FE:  movs     r0, #0                         
    00204400:  movs     r0, r0                         
    00204402:  asrs     r0, r0, #0x20                  
    00204404:  movs     r0, r0                         
    00204406:  adds     r0, #0                         
    00204408:  movs     r0, r0                         
    0020440A:  asrs     r0, r0, #0x20                  
    0020440C:  movs     r0, r0                         
    0020440E:  lsrs     r1, r0, #0x20                  
    00204410:  and      r0, r0, #0                     
    00204414:  lsrs     r2, r4, #1                     
    00204416:  ldrb     r0, [r0, r7]                   
    00204418:  lsls     r1, r1, #2                     
    0020441A:  movs     r0, r0                         
    0020441C:  movs     r0, r0                         
    0020441E:  ldrsb    r3, [r5, r7]                   
    00204420:  movs     r0, r4                         
    00204422:  ldr      r7, [r3, r0]                   
    00204424:  movs     r0, r4                         
    00204426:  movs     r0, r0                         
    00204428:  movs     r0, r0                         
    0020442A:  movs     r0, r0                         
    0020442C:  movs     r0, r0                         
    0020442E:  movs     r0, r0                         
    00204430:  movs     r0, r0                         
    00204432:  movs     r0, r0                         
    00204434:  movs     r0, r0                         
    00204436:  movs     r0, r0                         
    00204438:  movs     r0, r0                         
    0020443A:  movs     r0, r0                         
    0020443C:  movs     r0, r0                         
    0020443E:  movs     r0, r0                         
    00204440:  movs     r0, r0                         
    00204442:  ldr      r3, [r3, r0]                   
    00204444:  movs     r0, r4                         
    00204446:  str      r2, [r4, #0x14]                
    00204448:  movs     r0, #0x64                      
    0020444A:  str      r4, [r5, #0x54]                
    0020444C:  str      r6, [r5, #0x74]                
    0020444E:  ldr      r4, [r6, #4]                   
    00204450:  movs     r5, #0x3a                      
    00204452:  movs     r0, #0x64                      
    00204454:  str      r0, [r5, #0x14]                
    00204456:  str      r6, [r5, #0x44]                
    00204458:  str      r4, [r5, #0x54]                
    0020445A:  movs     r5, #0x3a                      
    0020445C:  adds     r4, #0x30                      
    0020445E:  lsls     r0, r7, #1                     
    00204460:  str      r0, [r5, #0x14]                
    00204462:  str      r6, [r5, #0x44]                
    00204464:  str      r4, [r5, #0x54]                
    00204466:  movs     r5, #0x3a                      
    00204468:  adds     r2, #0x30                      
    0020446A:  movs     r0, #0x78                      
    0020446C:  str      r6, [r6, #0x14]                
    0020446E:  subs     r2, #0x6c                      
    00204470:  adds     r0, #0x25                      
    00204472:  ldrb     r4, [r6]                       
    00204474:  strb     r0, [r0, #0x1c]                
    00204476:  ldr      r2, [r6, #0x14]                
    00204478:  str      r4, [r6, #0x54]                
    0020447A:  ldr      r0, [r4, #0x40]                
    0020447C:  ldr      r5, [r4, #0x64]                
    0020447E:  movs     r5, #0x3a                      
    00204480:  movs     r0, #0x64                      
    00204482:  str      r0, [r5, #0x14]                
    00204484:  str      r6, [r5, #0x44]                
    00204486:  str      r4, [r5, #0x54]                
    00204488:  movs     r5, #0x3a                      
    0020448A:  adds     r2, #0x30                      
    0020448C:  lsls     r0, r7, #1                     
    0020448E:  ldr      r4, [r4, #0x74]                
    00204490:  movs     r7, #0x6e                      
    00204492:  movs     r0, #0x74                      
    00204494:  ldr      r6, [r5, #0x74]                
    00204496:  ldr      r4, [r6, #0x14]                
    00204498:  ldrb     r6, [r4, #5]                   
    0020449A:  ldr      r0, [r4]                       
    0020449C:  ldr      r1, [r4, #0x64]                
    0020449E:  ldr      r4, [r4, #0x44]                
    002044A0:  subs     r2, #0x65                      
    002044A2:  adds     r0, #0x25                      
    002044A4:  ldrb     r2, [r6]                       
    002044A6:  ldr      r0, [r0, #0x60]                
    002044A8:  strb     r7, [r5, #0x11]                
    002044AA:  str      r0, [r4, #0x30]                
    002044AC:  ldr      r7, [r5, #0x64]                
    002044AE:  str      r6, [r5, #0x54]                
    002044B0:  strb     r3, [r4, #0x11]                
    002044B2:  str      r5, [r4, #0x44]                
    002044B4:  ldr      r0, [r4]                       
    002044B6:  ldr      r1, [r4, #0x64]                
    002044B8:  ldr      r4, [r4, #0x44]                
    002044BA:  subs     r2, #0x65                      
    002044BC:  adds     r0, #0x25                      
    002044BE:  ldrb     r2, [r6]                       
    002044C0:  strb     r0, [r0, #0x1c]                
    002044C2:  ldr      r1, [r4, #0x14]                
    002044C4:  movs     r0, #0x74                      
    002044C6:  ldr      r3, [r4, #0x74]                
    002044C8:  str      r6, [r5, #0x64]                
    002044CA:  strb     r1, [r5, #9]                   
    002044CC:  str      r5, [r5, #0x14]                
    002044CE:  ldr      r4, [r6, #0x14]                
    002044D0:  ldr      r7, [r5, #0x64]                
    002044D2:  ldr      r0, [r4]                       
    002044D4:  ldr      r1, [r4, #0x64]                
    002044D6:  ldr      r4, [r4, #0x44]                
    002044D8:  subs     r2, #0x65                      
    002044DA:  adds     r0, #0x25                      
    002044DC:  ldrb     r2, [r6]                       
    002044DE:  ldr      r0, [r0, #0x10]                
    002044E0:  str      r6, [r5, #0x44]                
    002044E2:  str      r1, [r5, #0x34]                
    002044E4:  strb     r1, [r4, #0x11]                
    002044E6:  movs     r0, #0x65                      
    002044E8:  str      r4, [r5, #0x54]                
    002044EA:  subs     r2, #0x6e                      
    002044EC:  str      r5, [r4, #0x40]                
    002044EE:  ldr      r0, [r4]                       
    002044F0:  ldr      r1, [r4, #0x64]                
    002044F2:  ldr      r4, [r4, #0x44]                
    002044F4:  subs     r5, #0x65                      
    002044F6:  adds     r0, #0x25                      
    002044F8:  ldrb     r2, [r6]                       
    002044FA:  ldr      r0, [r0, #0x60]                
    002044FC:  strb     r7, [r5, #0x11]                
    002044FE:  str      r1, [r5, #0x64]                
    00204500:  movs     r0, #0x79                      
    00204502:  str      r4, [r5, #0x54]                
    00204504:  subs     r2, #0x6e                      
    00204506:  str      r5, [r4, #0x40]                
    00204508:  ldr      r0, [r4]                       
    0020450A:  ldr      r1, [r4, #0x64]                
    0020450C:  ldr      r4, [r4, #0x44]                
    0020450E:  subs     r2, #0x65                      
    00204510:  adds     r0, #0x25                      
    00204512:  ldrb     r2, [r6]                       
    00204514:  asrs     r0, r0                         
    00204516:  movs     r0, #0x6e                      
    00204518:  ldr      r1, [r1, #0x64]                
    0020451A:  str      r4, [r6, #0x54]                
    0020451C:  strb     r2, [r6, #9]                   
    0020451E:  strb     r5, [r6, #1]                   
    00204520:  movs     r0, #0x74                      
    00204522:  str      r7, [r5, #0x34]                
    00204524:  strb     r3, [r4, #0x15]                
    00204526:  str      r2, [r6, #0x54]                
    00204528:  movs     r1, #0x64                      
    0020452A:  ldrsb    r0, [r4, r0]                   
    0020452C:  ldr      r1, [r4, #0x44]                
    0020452E:  str      r5, [r6, #0x54]                
    00204530:  movs     r0, #0x3a                      
    00204532:  adds     r0, #0x25                      
    00204534:  ldrb     r2, [r6]                       
    00204536:  asrs     r0, r0                         
    00204538:  ldrsb    r4, [r0, r1]                   
    0020453A:  strb     r0, [r4, #0xc]                 
    0020453C:  ldr      r4, [r6, #0x74]                
    0020453E:  movs     r1, #0x70                      
    00204540:  movs     r1, #0x21                      
    00204542:  movs     r1, r4                         
    00204544:  strb     r4, [r6, #9]                   
    00204546:  ldrsh    r6, [r6, r5]                   
    00204548:  ldr      r2, [r4, #0x44]                
    0020454A:  ldrsh    r5, [r4, r5]                   
    0020454C:  ldr      r3, [r4, #0x74]                
    0020454E:  ldr      r6, [r5, #0x64]                
    00204550:  str      r5, [r4, #0x34]                
    00204552:  ldr      r4, [r6, #0x14]                
    00204554:  ldr      r7, [r5, #0x64]                
    00204556:  str      r7, [r3, #0x44]                
    00204558:  strb     r7, [r5, #0x1d]                
    0020455A:  cmp      r0, #0x6e                      
    0020455C:  ldr      r6, [r6, #0x74]                
    0020455E:  str      r1, [r5, #0x44]                
    00204560:  movs     r1, r5                         
    00204562:  ldr      r3, [r4, #0x74]                
    00204564:  ldr      r6, [r5, #0x64]                
    00204566:  str      r5, [r4, #0x34]                
    00204568:  ldr      r4, [r6, #0x14]                
    0020456A:  ldr      r7, [r5, #0x64]                
    0020456C:  add      r0, r4                         
    0020456E:  ldrsb    r7, [r1, r5]                   
    00204570:  movs     r0, #0x4e                      
    00204572:  str      r0, [r5, #0x14]                
    00204574:  str      r6, [r5, #0x44]                
    00204576:  str      r4, [r5, #0x54]                
    00204578:  movs     r0, #0x72                      
    0020457A:  strb     r3, [r6, #0x11]                
    0020457C:  strb     r1, [r4, #9]                   
    0020457E:  str      r4, [r6, #0x54]                
    00204580:  movs     r1, #0x64                      
    00204582:  str      r0, [r0, #0x30]                
    00204584:  ldr      r7, [r5, #0x64]                
    00204586:  str      r6, [r5, #0x54]                
    00204588:  strb     r3, [r4, #0x11]                
    0020458A:  ldr      r1, [r5, #0x74]                
    0020458C:  ldrsh    r6, [r5, r5]                   
    0020458E:  ldr      r4, [r4, #0x74]                
    00204590:  ldr      r7, [r6, #0x64]                
    00204592:  ldr      r2, [r7]                       
    00204594:  ldr      r1, [r4, #0x64]                
    00204596:  ldr      r4, [r4, #0x44]                
    00204598:  subs     r2, #0x65                      
    0020459A:  str      r5, [r4, #0x40]                
    0020459C:  asrs     r0, r0                         
    0020459E:  ldrsb    r4, [r0, r1]                   
    002045A0:  strb     r0, [r4, #0xc]                 
    002045A2:  str      r4, [r6, #0x14]                
    002045A4:  strb     r2, [r6, #0x11]                
    002045A6:  movs     r0, #0x3a                      
    002045A8:  adds     r0, #0x25                      
    002045AA:  ldrb     r0, [r7]                       
    002045AC:  adds     r0, #0x25                      
    002045AE:  ldrb     r4, [r6]                       
    002045B0:  str      r0, [r0, r0]                   
    002045B2:  movs     r0, #0x4b                      
    002045B4:  strb     r4, [r6, #9]                   
    002045B6:  ldr      r1, [r4, #0x64]                
    002045B8:  ldr      r3, [r6, #0x54]                
    002045BA:  strb     r1, [r5, #0xd]                 
    002045BC:  ldr      r3, [r6, #0x14]                
    002045BE:  ldr      r7, [r5, #0x64]                
    002045C0:  movs     r1, r4                         
    002045C2:  ldr      r3, [r0, #0x74]                
    002045C4:  strb     r6, [r5, #0x11]                
    002045C6:  ldr      r5, [r4, #0x64]                
    002045C8:  movs     r0, #0x74                      
    002045CA:  ldrb     r5, [r4]                       
    002045CC:  asrs     r0, r0                         
    002045CE:  strb     r4, [r6, #0x11]                
    002045D0:  ldr      r5, [r4, #0x64]                
    002045D2:  ldr      r4, [r6, #0x14]                
    002045D4:  ldr      r7, [r5, #0x64]                
    002045D6:  movs     r0, #0x21                      
    002045D8:  muls     r6, r0, r6                     
    002045DA:  ldr      r0, [r4, #0x70]                
    002045DC:  movs     r0, #0x72                      
    002045DE:  add      r6, r8                         
    002045E0:  ldr      r0, [r4, #0x10]                
    002045E2:  movs     r0, #0x6e                      
    002045E4:  ldr      r3, [r4, #4]                   
    002045E6:  str      r5, [r4, #0x34]                
    002045E8:  strb     r3, [r5, #0xd]                 
    002045EA:  ldr      r5, [r6, #0x54]                
    002045EC:  str      r0, [r4, #0x20]                
    002045EE:  strb     r1, [r7, #0x11]                
    002045F0:  movs     r0, #0x65                      
    002045F2:  movs     r0, #0x31                      
    002045F4:  str      r4, [r4, #0x54]                
    002045F6:  str      r4, [r6, #0x54]                
    002045F8:  strb     r3, [r4, #0x11]                
    002045FA:  str      r5, [r4, #0x44]                
    002045FC:  movs     r1, r4                         
    002045FE:  strb     r1, [r0, #0x11]                
    00204600:  str      r4, [r6, #0x54]                
    00204602:  strb     r6, [r5, #0x11]                
    00204604:  ldr      r1, [r5, #0x74]                
    00204606:  movs     r1, #0x6e                      
    00204608:  mov      r0, r4                         
    0020460A:  movs     r0, #0x43                      
    0020460C:  strb     r7, [r5, #9]                   
    0020460E:  mov      r0, r4                         
    00204610:  movs     r0, #0x44                      
    00204612:  ldr      r1, [r5, #0x64]                
    00204614:  str      r0, [r4, #0x30]                
    00204616:  str      r0, [r5, #0x54]                
    00204618:  ldr      r3, [r4, #0x34]                
    0020461A:  strb     r3, [r6, #0x15]                
    0020461C:  movs     r0, #0x6d                      
    0020461E:  ldrb     r2, [r4, #5]                   
    00204620:  str      r4, [r6, #0x54]                
    00204622:  adds     r2, #0x20                      
    00204624:  str      r0, [r4, #0x40]                
    00204626:  strb     r5, [r4, #0x11]                
    00204628:  str      r5, [r4, #0x34]                
    0020462A:  str      r4, [r6, #0x54]                
    0020462C:  movs     r1, #0x64                      
    0020462E:  strb     r0, [r0, r0]                   
    00204630:  str      r2, [r6, #0x14]                
    00204632:  strb     r6, [r5, #0xd]                 
    00204634:  ldr      r5, [r5, #0x14]                
    00204636:  strb     r4, [r6, #0x11]                
    00204638:  str      r5, [r4, #0x44]                
    0020463A:  str      r0, [r4, r0]                   
    0020463C:  ldrb     r1, [r4, #5]                   
    0020463E:  ldr      r4, [r5, #0x74]                
    00204640:  str      r1, [r4, #0x44]                
    00204642:  movs     r5, #0x20                      
    00204644:  lsls     r0, r7, #1                     
    00204646:  strh     r3, [r0, r1]                   
    00204648:  cmp      r5, #0x43                      
    0020464A:  str      r2, [r2, #0x54]                
    0020464C:  ldr      r7, [r4, #0x14]                
    0020464E:  strb     r3, [r6, #0x11]                
    00204650:  strb     r5, [r4, #9]                   
    00204652:  movs     r5, #0x20                      
    00204654:  lsls     r0, r7, #1                     
    00204656:  adds     r3, #0x23                      
    00204658:  str      r0, [r0, #0x30]                
    0020465A:  str      r2, [r6, #0x54]                
    0020465C:  strb     r1, [r4, #0x11]                
    0020465E:  cmp      r0, #0x65                      
    00204660:  movs     r1, r5                         
    00204662:  adds     r1, #0x23                      
    00204664:  movs     r0, #0                         
    00204666:  strb     r0, [r6, #0x15]                
    00204668:  strb     r1, [r4, #9]                   
    0020466A:  ldrsh    r4, [r6, r5]                   
    0020466C:  ldr      r1, [r5, #0x64]                
    0020466E:  strb     r1, [r5, #0x11]                
    00204670:  str      r1, [r5, #0x14]                
    00204672:  ldr      r4, [r5, #0x14]                
    00204674:  str      r2, [r7, #0x14]                
    00204676:  ldr      r4, [r6, #0x14]                
    00204678:  ldr      r7, [r5, #0x64]                
    0020467A:  cmp      r1, #0x28                      
    0020467C:  str      r0, [r0, r0]                   
    0020467E:  strb     r1, [r4, #0xd]                 
    00204680:  ldr      r3, [pc, #0x1cc]                 // = 0x64657463
    00204682:  ldrb     r5, [r4, #5]                   
    00204684:  strb     r0, [r4, #8]                   
    00204686:  str      r5, [r4, #0x14]                
    00204688:  movs     r0, #0x64                      
    0020468A:  strb     r6, [r4, #9]                   
    0020468C:  ldr      r7, [r5, #0x54]                
    0020468E:  ldr      r6, [pc, #0x80]                  // = 0x6B636150
    00204690:  strh     r6, [r2, r1]                   
    00204692:  ldr      r5, [pc, #0x104]                 // = 0x2F4E206F
    00204694:  movs     r0, #0x3a                      
    00204696:  ldrb     r5, [r4]                       
    00204698:  movs     r0, #0x2c                      
    0020469A:  ldrb     r5, [r4]                       
    0020469C:  movs     r0, #0x2c                      
    0020469E:  ldrb     r5, [r4]                       
    002046A0:  mov      r0, r0                         
    002046A2:  strb     r1, [r5, #9]                   
    002046A4:  strb     r3, [r6, #0x11]                
    002046A6:  strb     r0, [r4, #8]                   
    002046A8:  ldr      r5, [r6, #0x64]                
    002046AA:  strb     r0, [r4, #8]                   
    002046AC:  str      r5, [r4, #0x14]                
    002046AE:  movs     r0, #0x64                      
    002046B0:  strb     r6, [r4, #9]                   
    002046B2:  ldr      r7, [r5, #0x54]                
    002046B4:  ldr      r6, [pc, #0x80]                  // = 0x6F742074
    002046B6:  strh     r6, [r2, r1]                   
    002046B8:  ldr      r5, [pc, #0x104]                 // = 0x6564206F
    002046BA:  movs     r0, #0x3a                      
    002046BC:  ldrb     r5, [r4]                       
    002046BE:  strb     r0, [r4, #8]                   
    002046C0:  subs     r2, #0x62                      
    002046C2:  movs     r5, #0x20                      
    002046C4:  lsls     r0, r7, #1                     
    002046C6:  str      r7, [r0, #0x54]                
    002046C8:  str      r6, [r5, #0x54]                
    002046CA:  str      r2, [r6, #0x14]                
    002046CC:  str      r4, [r6, #0x54]                
    002046CE:  movs     r0, #0x64                      
    002046D0:  str      r2, [r2, #0x14]                
    002046D2:  str      r6, [r5, #0x44]                
    002046D4:  ldr      r7, [r5, #0x54]                
    002046D6:  ldr      r6, [pc, #0x80]                  // = 0x64746574
    002046D8:  ldr      r5, [r6, #0x54]                
    002046DA:  str      r2, [r4, #0x54]                
    002046DC:  subs     r2, #0x72                      
    002046DE:  movs     r5, #0x20                      
    002046E0:  lsls     r0, r7, #1                     
    002046E2:  str      r7, [r0, #0x54]                
    002046E4:  str      r6, [r5, #0x54]                
    002046E6:  str      r2, [r6, #0x14]                
    002046E8:  str      r4, [r6, #0x54]                
    002046EA:  movs     r0, #0x64                      
    002046EC:  str      r0, [r2, #0x14]                
    002046EE:  strb     r3, [r6, #0xd]                 
    002046F0:  str      r3, [r5, #0x54]                
    002046F2:  subs     r2, #0x79                      
    002046F4:  movs     r5, #0x20                      
    002046F6:  movs     r0, #0x78                      
    002046F8:  ldrb     r5, [r4]                       
    002046FA:  movs     r5, #0x20                      
    002046FC:  lsls     r0, r7, #1                     
    002046FE:  str      r7, [r0, #0x54]                
    00204700:  str      r6, [r5, #0x54]                
    00204702:  str      r2, [r6, #0x14]                
    00204704:  str      r4, [r6, #0x54]                
    00204706:  movs     r0, #0x64                      
    00204708:  ldr      r0, [r2, #0x14]                
    0020470A:  subs     r2, #0x6e                      
    0020470C:  movs     r5, #0x20                      
    0020470E:  lsls     r5, r6, #1                     
    00204710:  str      r0, [r2, #0x14]                
    00204712:  ldr      r3, [r4, #0x34]                
    00204714:  asrs     r0, r4                         
    00204716:  ldrsb    r4, [r0, r1]                   
    00204718:  mov      r0, r4                         
    0020471A:  str      r1, [r5, #0x54]                
    0020471C:  str      r4, [r5, #0x44]                
    0020471E:  strb     r0, [r4]                       
    00204720:  strb     r5, [r4, #9]                   
    00204722:  ldr      r6, [r4, #0x74]                
    00204724:  ldr      r2, [r6, #0x54]                
    00204726:  str      r0, [r0, r0]                   
    00204728:  ldr      r1, [r4, #0x14]                
    0020472A:  ldr      r2, [r6, #0x14]                
    0020472C:  str      r6, [r5, #0x74]                
    0020472E:  asrs     r0, r4                         
    00204730:  strb     r3, [r4, #0x11]                
    00204732:  strb     r1, [r5, #0x19]                
    00204734:  movs     r0, #0x65                      
    00204736:  str      r3, [r6, #0x54]                
    00204738:  movs     r0, #0x74                      
    0020473A:  ldr      r4, [r6, #0x74]                
    0020473C:  movs     r5, #0x20                      
    0020473E:  movs     r0, #0x78                      
    00204740:  ldr      r1, [r5, #0x64]                
    00204742:  asrs     r0, r4                         
    00204744:  strb     r4, [r4, #0x19]                
    00204746:  strb     r5, [r4, #9]                   
    00204748:  ldr      r4, [r6, #0x14]                
    0020474A:  ldr      r3, [r6, #0x14]                
    0020474C:  str      r6, [r5, #0x74]                
    0020474E:  movs     r1, r4                         
    00204750:  strb     r4, [r2, #9]                   
    00204752:  ldr      r1, [r4, #0x64]                
    00204754:  ldr      r3, [r6, #0x54]                
    00204756:  strb     r1, [r5, #0x11]                
    00204758:  str      r4, [r6, #0x54]                
    0020475A:  str      r4, [r6, #0x44]                
    0020475C:  strh     r0, [r4, r4]                   
    0020475E:  subs     r2, #0x4e                      
    00204760:  movs     r5, #0x20                      
    00204762:  movs     r0, #0x78                      
    00204764:  ldrb     r5, [r4]                       
    00204766:  movs     r5, #0x20                      
    00204768:  lsls     r0, r7, #1                     
    0020476A:  strb     r3, [r2, #0x11]                
    0020476C:  strb     r1, [r4, #0x11]                
    0020476E:  strb     r5, [r6, #0xd]                 
    00204770:  ldr      r1, [r5, #0x64]                
    00204772:  ldr      r6, [r4, #0x74]                
    00204774:  ldr      r6, [pc, #0x80]                  // = 0x72676F72
    00204776:  asrs     r7, r5                         
    00204778:  ldr      r3, [pc, #0x10c]                 // = 0x78300029
    0020477A:  strb     r0, [r4, #0x1c]                
    0020477C:  strb     r1, [r5, #0x11]                
    0020477E:  movs     r0, #0x68                      
    00204780:  str      r0, [r2, #0x14]                
    00204782:  strb     r2, [r6, #0x11]                
    00204784:  movs     r0, #0x79                      
    00204786:  str      r4, [r4, #0x54]                
    00204788:  str      r4, [r6, #0x54]                
    0020478A:  strb     r3, [r4, #0x11]                
    0020478C:  str      r5, [r4, #0x44]                
    0020478E:  strh     r0, [r0, r4]                   
    00204790:  str      r4, [r6, #0x14]                
    00204792:  strb     r4, [r6, #0x15]                
    00204794:  ldr      r3, [r6, #0x14]                
    00204796:  str      r6, [r5, #0x64]                
    00204798:  movs     r0, #0x6f                      
    0020479A:  cmp      r7, #0x4e                      
    0020479C:  muls     r1, r0, r1                     
    0020479E:  movs     r0, #0x4b                      
    002047A0:  str      r4, [r4, #0x54]                
    002047A2:  str      r4, [r6, #0x54]                
    002047A4:  strb     r3, [r4, #0x11]                
    002047A6:  str      r5, [r4, #0x44]                
    002047A8:  ldr      r6, [pc, #0]                     // = 0x77206B63
    002047AA:  asrs     r7, r5                         
    002047AC:  ldr      r3, [r4, #0x34]                
    002047AE:  strb     r0, [r4, #0x1c]                
    002047B0:  strb     r1, [r5, #0x11]                
    002047B2:  ldr      r0, [r5, #0x74]                
    002047B4:  strb     r5, [r6, #0x11]                
    002047B6:  strh     r0, [r4, r4]                   
    002047B8:  str      r4, [r6, #0x14]                
    002047BA:  strb     r4, [r6, #0x15]                
    002047BC:  ldr      r3, [r6, #0x14]                
    002047BE:  str      r6, [r5, #0x64]                
    002047C0:  movs     r0, #0x6f                      
    002047C2:  str      r4, [r4, #0x54]                
    002047C4:  str      r4, [r6, #0x54]                
    002047C6:  strb     r3, [r4, #0x11]                
    002047C8:  str      r5, [r4, #0x44]                
    002047CA:  asrs     r0, r0                         
    002047CC:  ldr      r3, [r4, #0x34]                
    002047CE:  strb     r0, [r4, #0x1c]                
    002047D0:  strb     r1, [r5, #0x11]                
    002047D2:  movs     r0, #0x68                      
    002047D4:  mov      r3, r8                         
    002047D6:  movs     r0, #0x47                      
    002047D8:  str      r7, [r2, #0x54]                
    002047DA:  ldr      r5, [r4, #0x34]                
    002047DC:  str      r0, [r4, r0]                   
    002047DE:  ldr      r2, [r6, #0x74]                
    002047E0:  strb     r7, [r4, #9]                   
    002047E2:  ldr      r1, [r4, #0x54]                
    002047E4:  add      r0, r4                         
    002047E6:  ldrb     r1, [r4, #5]                   
    002047E8:  str      r0, [r4, #0x40]                
    002047EA:  strb     r5, [r4, #0x11]                
    002047EC:  str      r5, [r4, #0x34]                
    002047EE:  str      r4, [r6, #0x54]                
    002047F0:  lsls     r4, r4, #1                     
    002047F2:  str      r7, [r2, #0x54]                
    002047F4:  ldr      r5, [r4, #0x34]                
    002047F6:  strb     r0, [r4]                       
    002047F8:  ldr      r2, [r6, #0x74]                
    002047FA:  strb     r7, [r4, #9]                   
    002047FC:  ldr      r1, [r4, #0x54]                
    002047FE:  strb     r0, [r4, #8]                   
    00204800:  strb     r5, [r4, #0xd]                 
    00204802:  ldr      r0, [r6, #0x74]                
    00204804:  strb     r6, [r5, #0xd]                 
    00204806:  movs     r0, #0x65                      
    00204808:  str      r4, [r4, #0x54]                
    0020480A:  str      r4, [r6, #0x54]                
    0020480C:  strb     r3, [r4, #0x11]                
    0020480E:  str      r5, [r4, #0x44]                
    00204810:  strb     r0, [r0, r0]                   
    00204812:  str      r2, [r6, #0x14]                
    00204814:  strb     r6, [r5, #0xd]                 
    00204816:  ldr      r5, [r5, #0x14]                
    00204818:  strb     r3, [r6, #0xd]                 
    0020481A:  ldr      r1, [r5, #0x74]                
    0020481C:  movs     r0, #0x6e                      
    0020481E:  str      r7, [r5, #0x64]                
    00204820:  ldr      r1, [pc, #0x80]                  // = 0x696E6946
    00204822:  strb     r6, [r5, #0x11]                
    00204824:  strb     r5, [r4, #9]                   
    00204826:  str      r6, [r5, #0x14]                
    00204828:  strb     r4, [r5, #0xd]                 
    0020482A:  str      r0, [r4, #0x40]                
    0020482C:  strb     r5, [r4, #0x11]                
    0020482E:  str      r5, [r4, #0x34]                
    00204830:  str      r4, [r6, #0x54]                
    00204832:  lsls     r4, r4, #1                     
    00204834:  strb     r4, [r2, #9]                   
    00204836:  ldr      r1, [r4, #0x64]                
    00204838:  ldr      r3, [r6, #0x54]                
    0020483A:  strb     r1, [r5, #0xd]                 
    0020483C:  ldr      r3, [r6, #0x14]                
    0020483E:  ldr      r7, [r5, #0x64]                
    00204840:  ldr      r0, [r4, #0x70]                
    00204842:  movs     r0, #0x66                      
    00204844:  adcs     r0, r2                         
    00204846:  strh     r1, [r1, r1]                   
    00204848:  ldr      r6, [pc, #0x124]                 // = 0x48474948
    0020484A:  movs     r0, #0x47                      
    0020484C:  str      r4, [r4, #0x54]                
    0020484E:  str      r4, [r6, #0x54]                
    00204850:  strb     r3, [r4, #0x11]                
    00204852:  str      r5, [r4, #0x44]                
    00204854:  adds     r0, #0                         
    00204856:  adcs     r0, r7                         
    00204858:  cmp      r3, #0x30                      
    0020485A:  ldrb     r0, [r6]                       
    0020485C:  adds     r1, #0x31                      
    0020485E:  strb     r0, [r4, #0xc]                 
    00204860:  ldr      r5, [r4, #0x64]                
    00204862:  movs     r0, #0x74                      
    00204864:  ldr      r4, [r6, #0x74]                
    00204866:  strb     r0, [r4]                       
    00204868:  str      r5, [r4, #0x54]                
    0020486A:  lsls     r2, r6, #1                     
    0020486C:  ldrb     r0, [r6]                       
    0020486E:  adds     r1, #0x41                      
    00204870:  adds     r0, #0x2b                      
    00204872:  adds     r3, #0x78                      
    00204874:  movs     r0, #0x33                      
    00204876:  str      r3, [r6, #0x54]                
    00204878:  strb     r6, [r5, #0x11]                
    0020487A:  strb     r0, [r4, #0x10]                
    0020487C:  movs     r0, #0x6f                      
    0020487E:  str      r0, [r6, #0x54]                
    00204880:  strb     r5, [r4, #9]                   
    00204882:  cmp      r0, #0x20                      
    00204884:  adcs     r6, r1                         
    00204886:  ldr      r3, [pc, #0x10c]                 // = 0x4D206E77
    00204888:  movs     r1, r5                         
    0020488A:  ldrb     r0, [r6]                       
    0020488C:  adds     r1, #0x41                      
    0020488E:  adds     r0, #0x2b                      
    00204890:  adds     r4, #0x78                      
    00204892:  movs     r0, #0x34                      
    00204894:  str      r3, [r6, #0x54]                
    00204896:  strb     r6, [r5, #0x11]                
    00204898:  strb     r0, [r4, #0x10]                
    0020489A:  movs     r0, #0x6f                      
    0020489C:  str      r0, [r6, #0x54]                
    0020489E:  strb     r5, [r4, #9]                   
    002048A0:  tst      r0, r4                         
    002048A2:  cmp      r5, #0x4c                      
    002048A4:  ldr      r6, [r0, #0x14]                
    002048A6:  ldr      r6, [r5, #0x14]                
    002048A8:  ldr      r3, [r6, #4]                   
    002048AA:  str      r5, [r4, #0x44]                
    002048AC:  movs     r1, r4                         
    002048AE:  strb     r3, [r2, #0x11]                
    002048B0:  strb     r1, [r4, #0x11]                
    002048B2:  strb     r5, [r6, #0xd]                 
    002048B4:  ldr      r1, [pc, #0x80]                  // = 0x4342206F
    002048B6:  str      r6, [r5, #0x64]                
    002048B8:  movs     r0, #0x6f                      
    002048BA:  str      r2, [r2, #0x54]                
    002048BC:  strb     r3, [r6, #1]                   
    002048BE:  ldr      r7, [r5, #0x64]                
    002048C0:  str      r3, [r6, #0x54]                
    002048C2:  strb     r0, [r0, r0]                   
    002048C4:  ldr      r1, [r5, #0x54]                
    002048C6:  ldr      r1, [pc, #0x194]                 // = 0x676E6972
    002048C8:  str      r6, [r5, #0x64]                
    002048CA:  strh     r7, [r5, r1]                   
    002048CC:  strb     r5, [r4, #5]                   
    002048CE:  str      r5, [r6, #0x54]                
    002048D0:  strb     r3, [r6, #0x11]                
    002048D2:  str      r0, [r4, #0x40]                
    002048D4:  strb     r5, [r4, #0x11]                
    002048D6:  str      r5, [r4, #0x34]                
    002048D8:  str      r4, [r6, #0x54]                
    002048DA:  movs     r1, #0x64                      
    002048DC:  mov      r0, r0                         
    002048DE:  cmp      r3, #0x44                      
    002048E0:  muls     r3, r0, r3                     
    002048E2:  strb     r0, [r4, #8]                   
    002048E4:  str      r5, [r4, #0x34]                
    002048E6:  ldr      r5, [r4, #0x14]                
    002048E8:  str      r6, [r6, #0x54]                
    002048EA:  movs     r0, #0x64                      
    002048EC:  strb     r6, [r4, #9]                   
    002048EE:  ldr      r7, [r5, #0x54]                
    002048F0:  tst      r0, r4                         
    002048F2:  ldr      r5, [pc, #0x10c]                 // = 0x206E6F69
    002048F4:  movs     r0, #0x32                      
    002048F6:  movs     r0, #0x2c                      
    002048F8:  str      r3, [r6, #0x34]                
    002048FA:  ldr      r1, [r4, #0x64]                
    002048FC:  ldr      r5, [r5, #0x74]                
    002048FE:  str      r4, [r4, #0x54]                
    00204900:  ldr      r0, [r4, #0x50]                
    00204902:  ldrb     r1, [r4, #5]                   
    00204904:  strb     r0, [r4, #0xc]                 
    00204906:  str      r4, [r6, #0x14]                
    00204908:  strb     r2, [r6, #0x11]                
    0020490A:  asrs     r0, r0                         
    0020490C:  strb     r3, [r4, #0x11]                
    0020490E:  strb     r1, [r5, #0x19]                
    00204910:  strb     r1, [r4, #0x11]                
    00204912:  movs     r0, #0x65                      
    00204914:  str      r4, [r2, #0x54]                
    00204916:  strb     r3, [r6, #0x11]                
    00204918:  ldr      r5, [r5, #0x74]                
    0020491A:  str      r4, [r4, #0x54]                
    0020491C:  strh     r0, [r0, r4]                   
    0020491E:  ldr      r5, [r4, #0x64]                
    00204920:  movs     r0, #0x74                      
    00204922:  ldrb     r0, [r6]                       
    00204924:  add      r6, r8                         
    00204926:  adds     r0, #0x2b                      
    00204928:  mov      r0, pc                         
    0020492A:  lsls     r6, r0, #1                     
    0020492C:  strb     r7, [r6, #9]                   
    0020492E:  strb     r1, [r5, #0x11]                
    00204930:  str      r4, [r6, #0x54]                
    00204932:  movs     r0, #0x6e                      
    00204934:  ldr      r6, [pc, #0x14c]                 // = 0x6D617256
    00204936:  strb     r0, [r4, #0x10]                
    00204938:  movs     r0, #0x6f                      
    0020493A:  muls     r2, r0, r2                     
    0020493C:  adds     r2, #0x4d                      
    0020493E:  movs     r0, #0x3a                      
    00204940:  ldrb     r5, [r4]                       
    00204942:  str      r0, [r0, r0]                   
    00204944:  ldr      r1, [r4, #0x14]                
    00204946:  ldr      r2, [r6, #0x14]                
    00204948:  str      r6, [r5, #0x74]                
    0020494A:  str      r0, [r4, #0x10]                
    0020494C:  strb     r3, [r4, #0x11]                
    0020494E:  strb     r1, [r5, #0x19]                
    00204950:  movs     r0, #0x65                      
    00204952:  str      r3, [r6, #0x54]                
    00204954:  movs     r0, #0x74                      
    00204956:  ldr      r4, [r6, #0x74]                
    00204958:  ldr      r0, [r4, #0x70]                
    0020495A:  str      r6, [r5, #0x54]                
    0020495C:  ldr      r0, [r4, #0x10]                
    0020495E:  movs     r0, #0x6e                      
    00204960:  str      r4, [r2, #0x54]                
    00204962:  strb     r3, [r6, #0x11]                
    00204964:  strb     r2, [r6, #0x15]                
    00204966:  ldr      r6, [r5, #0x64]                
    00204968:  strb     r5, [r4, #9]                   
    0020496A:  ldr      r5, [r5, #0x74]                
    0020496C:  str      r4, [r4, #0x54]                
    0020496E:  movs     r0, #0x21                      
    00204970:  ldr      r1, [pc, #0x120]                 // = 0x65646F4D
    00204972:  ldr      r0, [pc, #0x11c]                 // = 0x2D564441
    00204974:  asrs     r0, r4                         
    00204976:  strb     r4, [r4, #0x19]                
    00204978:  strb     r5, [r4, #9]                   
    0020497A:  ldr      r4, [r6, #0x14]                
    0020497C:  str      r3, [r6, #0x54]                
    0020497E:  str      r5, [r5, #0x54]                
    00204980:  strb     r6, [r5, #0x11]                
    00204982:  lsls     r3, r6, #1                     
    00204984:  ldr      r3, [pc, #0x140]                 // = 0x6F742074
    00204986:  strb     r0, [r4, #8]                   
    00204988:  strb     r5, [r4, #5]                   
    0020498A:  str      r5, [r6, #0x54]                
    0020498C:  strb     r3, [r6, #0x11]                
    0020498E:  strb     r0, [r0, r4]                   
    00204990:  ldr      r6, [r5, #0x34]                
    00204992:  ldr      r6, [r5, #0x74]                
    00204994:  ldr      r7, [r6, #0x64]                
    00204996:  ldr      r5, [pc, #0x80]                  // = 0x203A314E
    00204998:  strb     r5, [r4, #0xd]                 
    0020499A:  str      r3, [r6, #0x14]                
    0020499C:  str      r7, [r4, #0x54]                
    0020499E:  ldrb     r4, [r2, #5]                   
    002049A0:  str      r0, [r6, #0x54]                
    002049A2:  str      r0, [r0, r0]                   
    002049A4:  strb     r1, [r4, #9]                   
    002049A6:  ldrb     r4, [r6, #5]                   
    002049A8:  ldr      r6, [r0, #0x44]                
    002049AA:  str      r1, [r4, #0x74]                
    002049AC:  asrs     r0, r4                         
    002049AE:  strb     r3, [r4, #0x11]                
    002049B0:  strb     r1, [r5, #0x19]                
    002049B2:  lsls     r5, r4, #1                     
    002049B4:  str      r4, [r0, #0x14]                
    002049B6:  str      r4, [r6, #0x14]                
    002049B8:  strh     r0, [r4, r0]                   
    002049BA:  str      r5, [r4, #0x14]                
    002049BC:  movs     r0, #0x64                      
    002049BE:  ldr      r6, [r0, #0x44]                
    002049C0:  str      r1, [r4, #0x74]                
    002049C2:  asrs     r0, r4                         
    002049C4:  strb     r3, [r4, #0x11]                
    002049C6:  strb     r1, [r5, #0x19]                
    002049C8:  lsls     r5, r4, #1                     
    002049CA:  ldr      r0, [r6, #0x74]                
    002049CC:  movs     r0, #0x73                      
    002049CE:  movs     r0, #0x3d                      
    002049D0:  ldrb     r5, [r4]                       
    002049D2:  strb     r0, [r0, #0xc]                 
    002049D4:  ldr      r0, [r5, #0x14]                
    002049D6:  strb     r6, [r4, #0x11]                
    002049D8:  strb     r7, [r3, #9]                   
    002049DA:  str      r5, [r4, #0x74]                
    002049DC:  subs     r5, #0x20                      
    002049DE:  movs     r5, #0x20                      
    002049E0:  lsls     r0, r7, #1                     
    002049E2:  strh     r3, [r0, r1]                   
    002049E4:  cmp      r5, #0x43                      
    002049E6:  ldr      r3, [r0, #4]                   
    002049E8:  str      r5, [r4, #0x34]                
    002049EA:  movs     r0, #0x6b                      
    002049EC:  strb     r3, [r6, #0x15]                
    002049EE:  str      r3, [r4, #0x34]                
    002049F0:  strb     r5, [r4, #0xd]                 
    002049F2:  str      r3, [r6, #0x64]                
    002049F4:  ldr      r5, [r6, #0x44]                
    002049F6:  ldr      r6, [pc, #0]                     // = 0x6669746F
    002049F8:  strb     r7, [r5, #0x11]                
    002049FA:  str      r1, [r5, #0x64]                
    002049FC:  str      r1, [r5, #0x34]                
    002049FE:  strb     r1, [r4, #0x11]                
    00204A00:  ldr      r1, [r5, #0x74]                
    00204A02:  movs     r0, #0x6e                      
    00204A04:  str      r3, [r6, #0x54]                
    00204A06:  strb     r6, [r5, #0x11]                
    00204A08:  strb     r0, [r4, #0x10]                
    00204A0A:  movs     r0, #0x6f                      
    00204A0C:  ldr      r3, [r6, #0x54]                
    00204A0E:  strb     r1, [r4, #9]                   
    00204A10:  strb     r4, [r6, #1]                   
    00204A12:  ldr      r0, [r5, #0x74]                
    00204A14:  str      r6, [r5, #0x54]                
    00204A16:  strh     r0, [r0, r4]                   
    00204A18:  adds     r1, #0x4e                      
    00204A1A:  movs     r0, #0x3a                      
    00204A1C:  ldrb     r5, [r4]                       
    00204A1E:  movs     r5, #0x20                      
    00204A20:  movs     r0, #0x78                      
    00204A22:  ldrb     r5, [r4]                       
    00204A24:  strh     r0, [r0, r4]                   
    00204A26:  adds     r2, #0x4e                      
    00204A28:  movs     r0, #0x3a                      
    00204A2A:  ldrb     r5, [r4]                       
    00204A2C:  movs     r5, #0x20                      
    00204A2E:  movs     r0, #0x78                      
    00204A30:  ldrb     r5, [r4]                       
    00204A32:  strh     r0, [r0, r4]                   
    00204A34:  adds     r3, #0x4e                      
    00204A36:  movs     r0, #0x3a                      
    00204A38:  ldrb     r5, [r4]                       
    00204A3A:  movs     r5, #0x20                      
    00204A3C:  movs     r0, #0x78                      
    00204A3E:  ldrb     r5, [r4]                       
    00204A40:  movs     r5, #0x20                      
    00204A42:  lsls     r0, r7, #1                     
    00204A44:  ldrsh    r7, [r4, r5]                   
    00204A46:  ldr      r6, [r4, #0x14]                
    00204A48:  strb     r2, [r6, #0xd]                 
    00204A4A:  strh     r4, [r6, r1]                   
    00204A4C:  ldr      r5, [r6, #0x64]                
    00204A4E:  strb     r0, [r4, #0xc]                 
    00204A50:  strb     r5, [r4, #0x11]                
    00204A52:  strb     r0, [r4, #0x10]                
    00204A54:  movs     r0, #0x6f                      
    00204A56:  movs     r0, r6                         
    00204A58:  ldr      r5, [r0, #0x64]                
    00204A5A:  str      r4, [r6, #0x54]                
    00204A5C:  ldr      r2, [r6, #0x14]                
    00204A5E:  str      r6, [r5, #0x74]                
    00204A60:  str      r0, [r4, #0x40]                
    00204A62:  str      r5, [r4, #0x54]                
    00204A64:  movs     r0, #0x70                      
    00204A66:  ldr      r3, [r6, #0x44]                
    00204A68:  str      r5, [r4, #0x54]                
    00204A6A:  cmp      r6, #0x70                      
    00204A6C:  mov      r0, r0                         
    00204A6E:  strb     r1, [r5, #9]                   
    00204A70:  strb     r3, [r6, #0x11]                
    00204A72:  strh     r0, [r4, r0]                   
    00204A74:  ldr      r5, [r6, #0x64]                
    00204A76:  strh     r0, [r4, r4]                   
    00204A78:  strb     r5, [r4, #0x11]                
    00204A7A:  strb     r0, [r4, #0x10]                
    00204A7C:  movs     r0, #0x6f                      
    00204A7E:  movs     r0, #0x31                      
    00204A80:  ldr      r1, [r5, #0x64]                
    00204A82:  ldr      r6, [pc, #0x80]                  // = 0x5D305B6C
    00204A84:  strb     r6, [r2, #9]                   
    00204A86:  ldr      r1, [r4, #0x54]                
    00204A88:  strb     r0, [r4, #0x1c]                
    00204A8A:  subs     r2, #0x62                      
    00204A8C:  movs     r5, #0x20                      
    00204A8E:  lsls     r0, r7, #1                     
    00204A90:  add      r1, r8                         
    00204A92:  cmp      r5, #0x56                      
    00204A94:  ldr      r5, [r1, #0x74]                
    00204A96:  str      r4, [r4, #0x54]                
    00204A98:  strb     r0, [r4, #0xc]                 
    00204A9A:  strb     r5, [r4, #0x11]                
    00204A9C:  strb     r0, [r4, #0x10]                
    00204A9E:  movs     r0, #0x6f                      
    00204AA0:  ldr      r1, [pc, #0x120]                 // = 0x3D5D3031
    00204AA2:  ldr      r0, [pc, #0x11c]                 // = 0x5B6C6F72
    00204AA4:  strb     r7, [r3, r5]                   
    00204AA6:  add      r6, sb                         
    00204AA8:  strh     r1, [r1, r1]                   
    00204AAA:  muls     r5, r0, r5                     
    00204AAC:  cmp      r4, sl                         
    00204AAE:  ldrsh    r4, [r0, r5]                   
    00204AB0:  ldr      r1, [pc, #0x110]                 // = 0x3D5D3031
    00204AB2:  muls     r3, r2, r3                     
    00204AB4:  ldrsb    r7, [r1, r1]                   
    00204AB6:  strh     r5, [r0, r1]                   
    00204AB8:  rsbs     r1, r0, #0                     
    00204ABA:  cmp      r4, sb                         
    00204ABC:  asrs     r0, r0                         
    00204ABE:  ldrsb    r4, [r0, r1]                   
    00204AC0:  ldr      r5, [pc, #0xb4]                  // = 0x203D5D36
    00204AC2:  str      r7, [r5, #0x44]                
    00204AC4:  movs     r0, #0x65                      
    00204AC6:  str      r3, [r6, #0x54]                
    00204AC8:  movs     r0, #0x74                      
    00204ACA:  ldr      r4, [r6, #0x74]                
    00204ACC:  ldr      r4, [pc, #0x80]                  // = 0x5D345B6C
    00204ACE:  ldrsb    r7, [r1, r5]                   
    00204AD0:  strb     r7, [r3, r5]                   
    00204AD2:  add      r6, sb                         
    00204AD4:  strh     r1, [r1, r1]                   
    00204AD6:  muls     r5, r0, r5                     
    00204AD8:  cmp      r4, sl                         
    00204ADA:  ldrsh    r4, [r0, r5]                   
    00204ADC:  ldr      r1, [pc, #0x110]                 // = 0x00782520
    00204ADE:  muls     r3, r2, r3                     
    00204AE0:  ldrsb    r7, [r1, r1]                   
    00204AE2:  strh     r5, [r0, r1]                   
    00204AE4:  rsbs     r1, r0, #0                     
    00204AE6:  cmp      r4, sb                         
    00204AE8:  orrs     r0, r0                         
    00204AEA:  muls     r2, r2, r2                     
    00204AEC:  orrs     r5, r5                         
    00204AEE:  str      r0, [r5, #0x54]                
    00204AF0:  ldr      r3, [r4, #0x34]                
    00204AF2:  mov      r0, r4                         
    00204AF4:  ldr      r1, [pc, #0x104]                 // = 0x5B6C6F72
    00204AF6:  cmp      r4, sb                         
    00204AF8:  lsls     r4, r0, #1                     
    00204AFA:  ldr      r2, [r4, #0x44]                
    00204AFC:  ldrsh    r5, [r4, r5]                   
    00204AFE:  ldr      r3, [r4, #0x74]                
    00204B00:  strb     r6, [r5, #0x11]                
    00204B02:  ldr      r2, [r6, #0x74]                
    00204B04:  ldrh     r4, [r5, r5]                   
    00204B06:  ldrb     r0, [r6, r4]                   
    00204B08:  movs     r0, #0x3d                      
    00204B0A:  ldrb     r5, [r4]                       
    00204B0C:  str      r0, [r0, #0x20]                
    00204B0E:  str      r4, [r5, #0x54]                
    00204B10:  str      r7, [r3, #0x34]                
    00204B12:  ldr      r7, [r5, #0x64]                
    00204B14:  strb     r4, [r6, #9]                   
    00204B16:  ldr      r7, [r5, #0x44]                
    00204B18:  adds     r1, #0x5b                      
    00204B1A:  subs     r5, #0x5d                      
    00204B1C:  movs     r5, #0x20                      
    00204B1E:  lsls     r0, r7, #1                     
    00204B20:  ldr      r2, [r4, #0x44]                
    00204B22:  ldrsh    r5, [r4, r5]                   
    00204B24:  ldr      r3, [r4, #0x74]                
    00204B26:  strb     r6, [r5, #0x11]                
    00204B28:  ldr      r2, [r6, #0x74]                
    00204B2A:  ldrh     r4, [r5, r5]                   
    00204B2C:  ldrb     r2, [r6, r4]                   
    00204B2E:  movs     r0, #0x3d                      
    00204B30:  ldrb     r5, [r4]                       
    00204B32:  str      r0, [r0, #0x20]                
    00204B34:  str      r4, [r5, #0x54]                
    00204B36:  str      r7, [r3, #0x34]                
    00204B38:  ldr      r7, [r5, #0x64]                
    00204B3A:  strb     r4, [r6, #9]                   
    00204B3C:  ldr      r7, [r5, #0x44]                
    00204B3E:  adds     r3, #0x5b                      
    00204B40:  subs     r5, #0x5d                      
    00204B42:  movs     r5, #0x20                      
    00204B44:  lsls     r0, r7, #1                     
    00204B46:  ldr      r2, [r4, #0x44]                
    00204B48:  ldrsh    r5, [r4, r5]                   
    00204B4A:  ldr      r3, [r4, #0x74]                
    00204B4C:  strb     r6, [r5, #0x11]                
    00204B4E:  ldr      r2, [r6, #0x74]                
    00204B50:  ldrh     r4, [r5, r5]                   
    00204B52:  ldrb     r4, [r6, r4]                   
    00204B54:  movs     r0, #0x3d                      
    00204B56:  ldrb     r5, [r4]                       
    00204B58:  str      r0, [r0, #0x20]                
    00204B5A:  str      r4, [r5, #0x54]                
    00204B5C:  str      r7, [r3, #0x34]                
    00204B5E:  ldr      r7, [r5, #0x64]                
    00204B60:  strb     r4, [r6, #9]                   
    00204B62:  ldr      r7, [r5, #0x44]                
    00204B64:  adds     r5, #0x5b                      
    00204B66:  subs     r5, #0x5d                      
    00204B68:  movs     r5, #0x20                      
    00204B6A:  lsls     r0, r7, #1                     
    00204B6C:  ldr      r2, [r4, #0x44]                
    00204B6E:  ldrsh    r5, [r4, r5]                   
    00204B70:  ldr      r3, [r4, #0x74]                
    00204B72:  strb     r6, [r5, #0x11]                
    00204B74:  ldr      r2, [r6, #0x74]                
    00204B76:  ldrh     r4, [r5, r5]                   
    00204B78:  ldrb     r6, [r6, r4]                   
    00204B7A:  movs     r0, #0x3d                      
    00204B7C:  ldrb     r5, [r4]                       
    00204B7E:  str      r0, [r0, #0x20]                
    00204B80:  str      r4, [r5, #0x54]                
    00204B82:  str      r7, [r3, #0x34]                
    00204B84:  ldr      r7, [r5, #0x64]                
    00204B86:  strb     r4, [r6, #9]                   
    00204B88:  ldr      r7, [r5, #0x44]                
    00204B8A:  adds     r7, #0x5b                      
    00204B8C:  subs     r5, #0x5d                      
    00204B8E:  movs     r5, #0x20                      
    00204B90:  lsls     r0, r7, #1                     
    00204B92:  ldr      r2, [r4, #0x44]                
    00204B94:  ldrsh    r5, [r4, r5]                   
    00204B96:  ldr      r3, [r4, #0x74]                
    00204B98:  strb     r6, [r5, #0x11]                
    00204B9A:  ldr      r2, [r6, #0x74]                
    00204B9C:  ldrh     r4, [r5, r5]                   
    00204B9E:  ldrb     r0, [r7, r4]                   
    00204BA0:  movs     r0, #0x3d                      
    00204BA2:  ldrb     r5, [r4]                       
    00204BA4:  str      r0, [r0, #0x20]                
    00204BA6:  str      r4, [r5, #0x54]                
    00204BA8:  str      r7, [r3, #0x34]                
    00204BAA:  ldr      r7, [r5, #0x64]                
    00204BAC:  strb     r4, [r6, #9]                   
    00204BAE:  ldr      r7, [r5, #0x44]                
    00204BB0:  subs     r1, #0x5b                      
    00204BB2:  subs     r5, #0x5d                      
    00204BB4:  movs     r5, #0x20                      
    00204BB6:  lsls     r0, r7, #1                     
    00204BB8:  ldr      r2, [r4, #0x44]                
    00204BBA:  ldrsh    r5, [r4, r5]                   
    00204BBC:  ldr      r3, [r4, #0x74]                
    00204BBE:  strb     r6, [r5, #0x11]                
    00204BC0:  ldr      r2, [r6, #0x74]                
    00204BC2:  ldrh     r4, [r5, r5]                   
    00204BC4:  adds     r0, #0x31                      
    00204BC6:  subs     r5, #0x5d                      
    00204BC8:  movs     r5, #0x20                      
    00204BCA:  lsls     r0, r7, #1                     
    00204BCC:  ldr      r2, [r4, #0x44]                
    00204BCE:  ldrsh    r5, [r4, r5]                   
    00204BD0:  ldr      r3, [r4, #0x74]                
    00204BD2:  strb     r6, [r5, #0x11]                
    00204BD4:  ldr      r2, [r6, #0x74]                
    00204BD6:  ldrh     r4, [r5, r5]                   
    00204BD8:  adds     r1, #0x31                      
    00204BDA:  subs     r5, #0x5d                      
    00204BDC:  movs     r5, #0x20                      
    00204BDE:  lsls     r0, r7, #1                     
    00204BE0:  ldr      r2, [r4, #0x44]                
    00204BE2:  ldrsh    r5, [r4, r5]                   
    00204BE4:  ldr      r3, [r4, #0x74]                
    00204BE6:  strb     r6, [r5, #0x11]                
    00204BE8:  ldr      r2, [r6, #0x74]                
    00204BEA:  ldrh     r4, [r5, r5]                   
    00204BEC:  adds     r2, #0x31                      
    00204BEE:  subs     r5, #0x5d                      
    00204BF0:  movs     r5, #0x20                      
    00204BF2:  lsls     r0, r7, #1                     
    00204BF4:  ldr      r2, [r4, #0x44]                
    00204BF6:  ldrsh    r5, [r4, r5]                   
    00204BF8:  ldr      r3, [r4, #0x74]                
    00204BFA:  strb     r6, [r5, #0x11]                
    00204BFC:  ldr      r2, [r6, #0x74]                
    00204BFE:  ldrh     r4, [r5, r5]                   
    00204C00:  adds     r3, #0x31                      
    00204C02:  subs     r5, #0x5d                      
    00204C04:  movs     r5, #0x20                      
    00204C06:  lsls     r0, r7, #1                     
    00204C08:  ldr      r2, [r4, #0x44]                
    00204C0A:  ldrsh    r5, [r4, r5]                   
    00204C0C:  ldr      r3, [r4, #0x74]                
    00204C0E:  strb     r6, [r5, #0x11]                
    00204C10:  ldr      r2, [r6, #0x74]                
    00204C12:  ldrh     r4, [r5, r5]                   
    00204C14:  adds     r4, #0x31                      
    00204C16:  subs     r5, #0x5d                      
    00204C18:  movs     r5, #0x20                      
    00204C1A:  lsls     r0, r7, #1                     
    00204C1C:  ldr      r2, [r4, #0x44]                
    00204C1E:  ldrsh    r5, [r4, r5]                   
    00204C20:  ldr      r3, [r4, #0x74]                
    00204C22:  strb     r6, [r5, #0x11]                
    00204C24:  ldr      r2, [r6, #0x74]                
    00204C26:  ldrh     r4, [r5, r5]                   
    00204C28:  adds     r5, #0x31                      
    00204C2A:  subs     r5, #0x5d                      
    00204C2C:  movs     r5, #0x20                      
    00204C2E:  lsls     r0, r7, #1                     
    00204C30:  ldr      r2, [r4, #0x44]                
    00204C32:  ldrsh    r5, [r4, r5]                   
    00204C34:  ldr      r3, [r4, #0x74]                
    00204C36:  strb     r6, [r5, #0x11]                
    00204C38:  ldr      r2, [r6, #0x74]                
    00204C3A:  ldrh     r4, [r5, r5]                   
    00204C3C:  adds     r6, #0x31                      
    00204C3E:  subs     r5, #0x5d                      
    00204C40:  movs     r5, #0x20                      
    00204C42:  lsls     r0, r7, #1                     
    00204C44:  ldr      r2, [r4, #0x44]                
    00204C46:  ldrsh    r5, [r4, r5]                   
    00204C48:  ldr      r3, [r4, #0x74]                
    00204C4A:  strb     r6, [r5, #0x11]                
    00204C4C:  ldr      r2, [r6, #0x74]                
    00204C4E:  ldrh     r4, [r5, r5]                   
    00204C50:  adds     r7, #0x31                      
    00204C52:  subs     r5, #0x5d                      
    00204C54:  movs     r5, #0x20                      
    00204C56:  lsls     r0, r7, #1                     
    00204C58:  ldr      r2, [r4, #0x44]                
    00204C5A:  ldrsh    r5, [r4, r5]                   
    00204C5C:  ldr      r3, [r4, #0x74]                
    00204C5E:  strb     r6, [r5, #0x11]                
    00204C60:  ldr      r2, [r6, #0x74]                
    00204C62:  ldrh     r4, [r5, r5]                   
    00204C64:  subs     r0, #0x31                      
    00204C66:  subs     r5, #0x5d                      
    00204C68:  movs     r5, #0x20                      
    00204C6A:  lsls     r0, r7, #1                     
    00204C6C:  ldr      r6, [r1, #0x74]                
    00204C6E:  ldr      r4, [r6, #0x14]                
    00204C70:  ldr      r6, [r4, #0x14]                
    00204C72:  str      r3, [r4, #0x14]                
    00204C74:  ldr      r4, [r6, #0x14]                
    00204C76:  ldr      r7, [r5, #0x64]                
    00204C78:  movs     r5, #0x3a                      
    00204C7A:  adds     r2, #0x30                      
    00204C7C:  cmp      r4, #0x78                      
    00204C7E:  movs     r5, #0x20                      
    00204C80:  lsrs     r4, r4, #9                     
    00204C82:  ldr      r6, [pc, #0]                     // = 0x4D415256
    00204C84:  strh     r6, [r2, r1]                   
    00204C86:  ldr      r5, [pc, #0x104]                 // = 0x69204E53
    00204C88:  strb     r0, [r4, #0x1c]                
    00204C8A:  ldr      r2, [r6, #0x14]                
    00204C8C:  str      r4, [r6, #0x54]                
    00204C8E:  movs     r5, #0x3a                      
    00204C90:  adds     r4, #0x30                      
    00204C92:  lsls     r0, r7, #1                     
    00204C94:  ldr      r5, [r4, #0x64]                
    00204C96:  strb     r3, [r4, #9]                   
    00204C98:  strb     r1, [r7, #1]                   
    00204C9A:  ldr      r4, [r6, #0x14]                
    00204C9C:  ldr      r7, [r5, #0x64]                
    00204C9E:  orrs     r0, r4                         
    00204CA0:  adcs     r0, r1                         
    00204CA2:  bxns     sb                             
    00204CA4:  add      r5, r8                         
    00204CA6:  ldr      r0, [r4]                       
    00204CA8:  ldr      r1, [r4, #0x64]                
    00204CAA:  ldr      r4, [r4, #0x44]                
    00204CAC:  strb     r5, [r4, #9]                   
    00204CAE:  strb     r0, [r4, #0xc]                 
    00204CB0:  str      r4, [r6, #0x14]                
    00204CB2:  strb     r2, [r6, #0x11]                
    00204CB4:  str      r5, [r4, #0x44]                
    00204CB6:  movs     r1, r4                         
    00204CB8:  ldr      r5, [r4, #0x64]                
    00204CBA:  strb     r3, [r4, #9]                   
    00204CBC:  strb     r1, [r7, #1]                   
    00204CBE:  ldr      r4, [r6, #0x14]                
    00204CC0:  ldr      r7, [r5, #0x64]                
    00204CC2:  str      r0, [r4, #0x30]                
    00204CC4:  str      r0, [r5, #0x14]                
    00204CC6:  str      r6, [r5, #0x74]                
    00204CC8:  str      r5, [r4, #0x44]                
    00204CCA:  movs     r5, #0x20                      
    00204CCC:  subs     r0, #0x30                      
    00204CCE:  movs     r5, #0x78                      
    00204CD0:  adds     r4, #0x30                      
    00204CD2:  lsls     r0, r7, #1                     
    00204CD4:  strb     r4, [r6, #9]                   
    00204CD6:  ldrsh    r6, [r6, r5]                   
    00204CD8:  ldr      r2, [r4, #0x44]                
    00204CDA:  ldrsh    r5, [r4, r5]                   
    00204CDC:  ldr      r3, [r4, #0x74]                
    00204CDE:  ldr      r6, [r5, #0x64]                
    00204CE0:  str      r5, [r4, #0x34]                
    00204CE2:  ldr      r4, [r6, #0x14]                
    00204CE4:  ldr      r7, [r5, #0x64]                
    00204CE6:  strb     r7, [r3, #0x15]                
    00204CE8:  cmp      r0, #0x70                      
    00204CEA:  ldr      r6, [r6, #0x74]                
    00204CEC:  str      r1, [r5, #0x44]                
    00204CEE:  movs     r1, r5                         
    00204CF0:  strb     r4, [r6, #9]                   
    00204CF2:  ldrsh    r6, [r6, r5]                   
    00204CF4:  ldr      r2, [r4, #0x44]                
    00204CF6:  ldrsh    r5, [r4, r5]                   
    00204CF8:  ldr      r3, [r4, #0x74]                
    00204CFA:  ldr      r6, [r5, #0x64]                
    00204CFC:  str      r5, [r4, #0x34]                
    00204CFE:  ldr      r4, [r6, #0x14]                
    00204D00:  ldr      r7, [r5, #0x64]                
    00204D02:  strb     r7, [r3, #0x15]                
    00204D04:  subs     r2, #0x70                      
    00204D06:  movs     r5, #0x20                      
    00204D08:  subs     r0, #0x30                      
    00204D0A:  movs     r5, #0x78                      
    00204D0C:  adds     r4, #0x30                      
    00204D0E:  movs     r0, #0x78                      
    00204D10:  str      r5, [r4, #0x40]                
    00204D12:  movs     r2, r1                         
    00204D14:  ldrsb    r6, [r1, r1]                   
    00204D16:  adcs     r2, r2                         
    00204D18:  movs     r0, #0x4d                      
    00204D1A:  strb     r7, [r6, #9]                   
    00204D1C:  strb     r1, [r5, #0x11]                
    00204D1E:  subs     r2, #0x65                      
    00204D20:  adds     r0, #0x25                      
    00204D22:  ldrb     r4, [r6]                       
    00204D24:  movs     r2, r1                         
    00204D26:  str      r3, [r6, #0x34]                
    00204D28:  ldrh     r2, [r6, r5]                   
    00204D2A:  ldrb     r1, [r6, r4]                   
    00204D2C:  ldr      r6, [r5, #0x40]                
    00204D2E:  ldr      r5, [r4, #0x64]                
    00204D30:  subs     r5, #0x20                      
    00204D32:  movs     r5, #0x20                      
    00204D34:  lsls     r0, r7, #1                     
    00204D36:  str      r3, [r6, #0x34]                
    00204D38:  ldrh     r2, [r6, r5]                   
    00204D3A:  ldrb     r1, [r6, r4]                   
    00204D3C:  strb     r6, [r5, #0x18]                
    00204D3E:  ldr      r1, [r4, #0x44]                
    00204D40:  subs     r5, #0x20                      
    00204D42:  movs     r5, #0x20                      
    00204D44:  lsls     r0, r7, #1                     
    00204D46:  str      r3, [r6, #0x34]                
    00204D48:  ldrh     r2, [r6, r5]                   
    00204D4A:  ldrb     r1, [r6, r4]                   
    00204D4C:  str      r6, [r5, #0x40]                
    00204D4E:  strb     r1, [r4, #0x11]                
    00204D50:  ldrh     r1, [r4, r5]                   
    00204D52:  ldrb     r0, [r6, r4]                   
    00204D54:  cmp      r0, #0x20                      
    00204D56:  str      r0, [r6, #0x14]                
    00204D58:  strb     r1, [r5, #9]                   
    00204D5A:  ldr      r1, [r5, #0x64]                
    00204D5C:  ldrsh    r7, [r4, r5]                   
    00204D5E:  str      r1, [r4, #0x34]                
    00204D60:  ldr      r4, [r6, #0x14]                
    00204D62:  str      r6, [r6, #0x54]                
    00204D64:  movs     r0, #0x29                      
    00204D66:  movs     r0, #0x3d                      
    00204D68:  ldrb     r5, [r4]                       
    00204D6A:  strh     r0, [r0, r4]                   
    00204D6C:  movs     r0, #0x4e                      
    00204D6E:  ldr      r1, [r5, #0x64]                
    00204D70:  asrs     r0, r4                         
    00204D72:  ldrsb    r4, [r0, r1]                   
    00204D74:  strb     r0, [r4]                       
    00204D76:  strb     r1, [r4, #9]                   
    00204D78:  movs     r0, #0x74                      
    00204D7A:  subs     r2, #0x31                      
    00204D7C:  movs     r5, #0x20                      
    00204D7E:  movs     r0, #0x78                      
    00204D80:  ldrb     r5, [r4]                       
    00204D82:  movs     r5, #0x20                      
    00204D84:  movs     r0, #0x78                      
    00204D86:  ldrb     r5, [r4]                       
    00204D88:  movs     r5, #0x20                      
    00204D8A:  lsls     r0, r7, #1                     
    00204D8C:  ldr      r6, [pc, #0x14c]                 // = 0x656C646E
    00204D8E:  ldr      r0, [r4, #0x10]                
    00204D90:  movs     r0, #0x6e                      
    00204D92:  add      r1, r8                         
    00204D94:  movs     r0, #0x56                      
    00204D96:  str      r0, [r6, #0x14]                
    00204D98:  strb     r2, [r6, #0x11]                
    00204D9A:  adds     r2, #0x20                      
    00204D9C:  movs     r0, #0x3a                      
    00204D9E:  ldrb     r5, [r4]                       
    00204DA0:  movs     r5, #0x20                      
    00204DA2:  movs     r0, #0x78                      
    00204DA4:  ldrb     r5, [r4]                       
    00204DA6:  movs     r5, #0x20                      
    00204DA8:  movs     r0, #0x78                      
    00204DAA:  ldrb     r5, [r4]                       
    00204DAC:  strb     r0, [r0, #0xc]                 
    00204DAE:  strb     r5, [r5, #1]                   
    00204DB0:  str      r7, [r3, #0x24]                
    00204DB2:  ldr      r7, [r5, #0x64]                
    00204DB4:  ldrsh    r4, [r4, r5]                   
    00204DB6:  str      r2, [r6, #0x54]                
    00204DB8:  strb     r3, [r6, #0x15]                
    00204DBA:  strb     r4, [r5, #0x11]                
    00204DBC:  ldr      r0, [r4]                       
    00204DBE:  ldr      r1, [r4, #0x64]                
    00204DC0:  ldr      r4, [r4, #0x44]                
    00204DC2:  strb     r5, [r4, #9]                   
    00204DC4:  strb     r0, [r4, #0xc]                 
    00204DC6:  str      r4, [r6, #0x14]                
    00204DC8:  strb     r2, [r6, #0x11]                
    00204DCA:  str      r5, [r4, #0x44]                
    00204DCC:  movs     r1, r4                         
    00204DCE:  ldr      r3, [r6, #0x54]                
    00204DD0:  ldrsh    r0, [r6, r5]                   
    00204DD2:  ldr      r2, [r4, #0x74]                
    00204DD4:  str      r6, [r5, #0x44]                
    00204DD6:  strb     r7, [r3, #9]                   
    00204DD8:  strb     r5, [r4, #0xd]                 
    00204DDA:  ldr      r5, [r6, #0x44]                
    00204DDC:  movs     r0, #0x74                      
    00204DDE:  adds     r0, #0x25                      
    00204DE0:  ldrb     r2, [r6]                       
    00204DE2:  str      r0, [r0, #0x50]                
    00204DE4:  strb     r6, [r6, #0x11]                
    00204DE6:  subs     r6, #0x2d                      
    00204DE8:  str      r4, [r4, #0x14]                
    00204DEA:  str      r4, [r6, #0x14]                
    00204DEC:  movs     r5, #0x5b                      
    00204DEE:  ldrb     r0, [r7, r5]                   
    00204DF0:  subs     r5, #0x20                      
    00204DF2:  movs     r5, #0x20                      
    00204DF4:  lsls     r0, r7, #1                     
    00204DF6:  str      r4, [r2, #0x54]                
    00204DF8:  strb     r3, [r6, #0x11]                
    00204DFA:  strb     r0, [r4, #0xc]                 
    00204DFC:  str      r5, [r6, #0x34]                
    00204DFE:  str      r3, [r4, #0x54]                
    00204E00:  strb     r3, [r6, #0xd]                 
    00204E02:  strb     r6, [r4, #0x15]                
    00204E04:  cmp      r4, #0x6c                      
    00204E06:  asrs     r0, r4                         
    00204E08:  str      r4, [r4, #0x44]                
    00204E0A:  str      r2, [r6, #0x54]                
    00204E0C:  strb     r3, [r6, #0xd]                 
    00204E0E:  strb     r5, [r4, #0xd]                 
    00204E10:  ldr      r0, [r4, #0x10]                
    00204E12:  movs     r0, #0x6e                      
    00204E14:  add      r1, r8                         
    00204E16:  movs     r0, #0x56                      
    00204E18:  ldr      r1, [r4, #0x64]                
    00204E1A:  movs     r0, #0x64                      
    00204E1C:  str      r3, [r6, #0x14]                
    00204E1E:  str      r6, [r6, #0x54]                
    00204E20:  movs     r0, #0x64                      
    00204E22:  strb     r1, [r4, #9]                   
    00204E24:  movs     r0, #0x65                      
    00204E26:  strb     r5, [r4, #5]                   
    00204E28:  str      r5, [r6, #0x14]                
    00204E2A:  movs     r1, #0x6c                      
    00204E2C:  strh     r0, [r0, r4]                   
    00204E2E:  ldr      r5, [r4, #0x64]                
    00204E30:  movs     r0, #0x74                      
    00204E32:  ldrb     r0, [r6]                       
    00204E34:  add      r6, r8                         
    00204E36:  adds     r0, #0x2b                      
    00204E38:  mov      r0, pc                         
    00204E3A:  lsls     r5, r0, #1                     
    00204E3C:  str      r7, [r0, r1]                   
    00204E3E:  ldr      r7, [pc, #0x124]                 // = 0x0D007825
    00204E40:  movs     r0, #0x3a                      
    00204E42:  strh     r4, [r2, r1]                   
    00204E44:  cmp      r5, sl                         
    00204E46:  bx       r0                             
    00204E48:  ldr      r1, [pc, #0x140]                 // = 0x6D6D6F43
    00204E4A:  subs     r2, #0x4f                      
    00204E4C:  mov      r0, r4                         
    00204E4E:  ldr      r4, [pc, #0x104]                 // = 0x78253A64
    00204E50:  cmp      r3, sl                         
    00204E52:  str      r0, [r0, #0x10]                
    00204E54:  strb     r4, [r6, #0x11]                
    00204E56:  str      r2, [r6, r1]                   
    00204E58:  strb     r4, [r6, #9]                   
    00204E5A:  adds     r1, #0x5b                      
    00204E5C:  movs     r0, #0x5d                      
    00204E5E:  movs     r0, #0x3d                      
    00204E60:  ldrb     r5, [r4]                       
    00204E62:  cmp      r0, #0                         
    00204E64:  str      r0, [r5, #0x10]                
    00204E66:  strb     r4, [r6, #0x11]                
    00204E68:  str      r2, [r6, r1]                   
    00204E6A:  strb     r4, [r6, #9]                   
    00204E6C:  adds     r1, #0x5b                      
    00204E6E:  movs     r6, #0x5d                      
    00204E70:  ldrb     r0, [r6]                       
    00204E72:  adds     r0, #0x63                      
    00204E74:  movs     r0, #0x29                      
    00204E76:  subs     r6, #0x3e                      
    00204E78:  adds     r6, #0x20                      
    00204E7A:  movs     r0, #0x29                      
    00204E7C:  movs     r0, #0x3d                      
    00204E7E:  ldrb     r5, [r4]                       
    00204E80:  ldr      r5, [pc, #0]                     // = 0x65676173
    00204E82:  strb     r5, [r4, #0xd]                 
    00204E84:  str      r3, [r6, #0x14]                
    00204E86:  str      r7, [r4, #0x54]                
    00204E88:  strb     r0, [r4, r0]                   
    00204E8A:  strb     r1, [r7, #1]                   
    00204E8C:  movs     r0, #0x65                      
    00204E8E:  ldr      r5, [r6, #0x64]                
    00204E90:  str      r4, [r4, #0x54]                
    00204E92:  ldr      r6, [r4, #0x14]                
    00204E94:  str      r6, [r5, #0x54]                
    00204E96:  lsls     r4, r4, #1                     
    00204E98:  strb     r4, [r0, #0x15]                
    00204E9A:  ldr      r5, [r5, #0x54]                
    00204E9C:  movs     r0, #0x79                      
    00204E9E:  ldr      r6, [r1, #0x74]                
    00204EA0:  ldr      r4, [r6, #0x14]                
    00204EA2:  ldr      r6, [r4, #0x14]                
    00204EA4:  str      r3, [r4, #0x14]                
    00204EA6:  ldr      r4, [r6, #0x14]                
    00204EA8:  ldr      r7, [r5, #0x64]                
    00204EAA:  strb     r0, [r4, #0xc]                 
    00204EAC:  ldr      r5, [r4, #0x64]                
    00204EAE:  movs     r0, #0x74                      
    00204EB0:  ldr      r4, [r6, #0x74]                
    00204EB2:  strb     r0, [r4, #0xc]                 
    00204EB4:  str      r5, [r5, #0x14]                
    00204EB6:  strb     r2, [r6, #0x11]                
    00204EB8:  ldr      r0, [r6, #4]                   
    00204EBA:  ldr      r7, [r5, #0x64]                
    00204EBC:  movs     r0, #0x65                      
    00204EBE:  ldr      r4, [r6, #0x74]                
    00204EC0:  strb     r0, [r4, #0xc]                 
    00204EC2:  str      r4, [r6, #0x14]                
    00204EC4:  strb     r2, [r6, #0x11]                
    00204EC6:  ldr      r7, [pc, #0x80]                  // = 0x65765F73
    00204EC8:  adcs     r4, r2                         
    00204ECA:  lsls     r5, r2, #1                     
    00204ECC:  adds     r2, #0x23                      
    00204ECE:  ldr      r1, [pc, #0]                     // = 0x4349444E
    00204ED0:  add      r6, sb                         
    00204ED2:  muls     r1, r1, r1                     
    00204ED4:  strb     r1, [r0, r1]                   
    00204ED6:  ldr      r7, [pc, #0x124]                 // = 0x6F742064
    00204ED8:  movs     r0, #0x4e                      
    00204EDA:  str      r0, [r5, #0x14]                
    00204EDC:  str      r6, [r5, #0x44]                
    00204EDE:  str      r4, [r5, #0x54]                
    00204EE0:  movs     r0, #0x72                      
    00204EE2:  strb     r3, [r6, #0x11]                
    00204EE4:  strb     r1, [r4, #9]                   
    00204EE6:  str      r4, [r6, #0x54]                
    00204EE8:  movs     r1, #0x64                      
    00204EEA:  ldr      r0, [r0, #0x70]                
    00204EEC:  ldrsh    r6, [r5, r5]                   
    00204EEE:  strb     r7, [r6, #9]                   
    00204EF0:  strb     r1, [r5, #0x11]                
    00204EF2:  ldrsh    r5, [r4, r5]                   
    00204EF4:  str      r7, [r4, #0x54]                
    00204EF6:  str      r6, [r5, #0x54]                
    00204EF8:  ldr      r2, [r6, #0x14]                
    00204EFA:  ldrsh    r3, [r4, r5]                   
    00204EFC:  str      r1, [r4, #0x34]                
    00204EFE:  str      r3, [r4, #0x54]                
    00204F00:  strb     r3, [r6, #0xd]                 
    00204F02:  strb     r7, [r3, #9]                   
    00204F04:  str      r5, [r4, #0x34]                
    00204F06:  ldr      r7, [r5, #0x64]                
    00204F08:  str      r6, [r5, #0x54]                
    00204F0A:  strb     r3, [r4, #0x11]                
    00204F0C:  ldr      r1, [r5, #0x74]                
    00204F0E:  ldrsh    r6, [r5, r5]                   
    00204F10:  str      r1, [r4, #0x44]                
    00204F12:  strb     r4, [r4, #9]                   
    00204F14:  strb     r5, [r4, #0xd]                 
    00204F16:  movs     r0, #0x73                      
    00204F18:  str      r0, [r5, #0x14]                
    00204F1A:  str      r6, [r5, #0x44]                
    00204F1C:  str      r4, [r5, #0x54]                
    00204F1E:  movs     r0, #0x72                      
    00204F20:  strb     r3, [r6, #0x11]                
    00204F22:  strb     r1, [r4, #9]                   
    00204F24:  str      r4, [r6, #0x54]                
    00204F26:  movs     r1, #0x64                      
    00204F28:  ldr      r6, [pc, #0]                     // = 0x63696669
    00204F2A:  strb     r7, [r5, #0x11]                
    00204F2C:  str      r1, [r5, #0x64]                
    00204F2E:  str      r1, [r5, #0x34]                
    00204F30:  strb     r1, [r4, #0x11]                
    00204F32:  ldr      r1, [r5, #0x74]                
    00204F34:  movs     r0, #0x6e                      
    00204F36:  str      r0, [r1, #0x14]                
    00204F38:  str      r6, [r5, #0x44]                
    00204F3A:  str      r4, [r5, #0x54]                
    00204F3C:  movs     r0, #0x72                      
    00204F3E:  strb     r3, [r6, #0x11]                
    00204F40:  strb     r1, [r4, #9]                   
    00204F42:  str      r4, [r6, #0x54]                
    00204F44:  lsls     r4, r4, #1                     
    00204F46:  strb     r5, [r1, #0x1c]                
    00204F48:  ldrsh    r3, [r6, r5]                   
    00204F4A:  str      r6, [r6, #0x54]                
    00204F4C:  ldr      r2, [r6, #0x14]                
    00204F4E:  ldrb     r6, [r4, #5]                   
    00204F50:  strb     r0, [r4, #8]                   
    00204F52:  strb     r3, [r4, #0x19]                
    00204F54:  subs     r2, #0x64                      
    00204F56:  ldrb     r5, [r4]                       
    00204F58:  str      r0, [r4, #0x30]                
    00204F5A:  ldr      r1, [r4, #0x44]                
    00204F5C:  strb     r3, [r4, #0x15]                
    00204F5E:  str      r4, [r5, #0x14]                
    00204F60:  str      r4, [r6, #0x54]                
    00204F62:  subs     r2, #0x64                      
    00204F64:  ldrb     r5, [r4]                       
    00204F66:  lsrs     r0, r0, #0x14                  
    00204F68:  str      r3, [r6, #0x54]                
    00204F6A:  str      r6, [r5, #0x44]                
    00204F6C:  strb     r7, [r3, #0xd]                 
    00204F6E:  str      r4, [r6, #0x14]                
    00204F70:  strb     r4, [r6, #0x15]                
    00204F72:  movs     r0, #0x73                      
    00204F74:  str      r6, [r4, #0x14]                
    00204F76:  ldr      r1, [r5, #0x44]                
    00204F78:  str      r5, [r4, #0x44]                
    00204F7A:  lsrs     r0, r0, #0x14                  
    00204F7C:  str      r3, [r6, #0x54]                
    00204F7E:  str      r6, [r5, #0x44]                
    00204F80:  strb     r7, [r3, #0xd]                 
    00204F82:  str      r4, [r6, #0x14]                
    00204F84:  strb     r4, [r6, #0x15]                
    00204F86:  movs     r0, #0x73                      
    00204F88:  str      r5, [r4, #0x40]                
    00204F8A:  lsrs     r0, r0, #0x14                  
    00204F8C:  ldr      r3, [r0, #0x74]                
    00204F8E:  ldr      r5, [r5, #0x54]                
    00204F90:  ldr      r1, [r4, #0x64]                
    00204F92:  subs     r2, #0x64                      
    00204F94:  str      r5, [r4, #0x40]                
    00204F96:  strh     r0, [r4, r4]                   
    00204F98:  str      r4, [r6, #0x14]                
    00204F9A:  str      r4, [r6, #0x54]                
    00204F9C:  movs     r5, #0x3a                      
    00204F9E:  lsls     r4, r4, #1                     
    00204FA0:  tst      r5, r1                         
    00204FA2:  str      r1, [r4, #0x44]                
    00204FA4:  add      r0, r4                         
    00204FA6:  strb     r7, [r5, #0x1d]                
    00204FA8:  ldr      r6, [r5, #0x44]                
    00204FAA:  str      r7, [r5, #0x14]                
    00204FAC:  movs     r0, #0x64                      
    00204FAE:  str      r4, [r5, #0x54]                
    00204FB0:  subs     r2, #0x6e                      
    00204FB2:  str      r5, [r4, #0x40]                
    00204FB4:  lsrs     r0, r0, #0x14                  
    00204FB6:  strb     r3, [r6, #0x11]                
    00204FB8:  strb     r1, [r4, #0x11]                
    00204FBA:  subs     r2, #0x65                      
    00204FBC:  str      r5, [r4, #0x40]                
    00204FBE:  strb     r0, [r4, #0x10]                
    00204FC0:  strb     r7, [r5, #0x11]                
    00204FC2:  ldr      r1, [r4, #0x44]                
    00204FC4:  ldr      r7, [r3, #0x44]                
    00204FC6:  ldr      r5, [r4, #0x64]                
    00204FC8:  movs     r5, #0x3a                      
    00204FCA:  lsls     r4, r4, #1                     
    00204FCC:  tst      r5, r1                         
    00204FCE:  str      r1, [r4, #0x44]                
    00204FD0:  ldrsb    r0, [r4, r0]                   
    00204FD2:  strb     r5, [r4, #9]                   
    00204FD4:  str      r1, [r5, #0x64]                
    00204FD6:  movs     r0, #0x79                      
    00204FD8:  str      r4, [r5, #0x54]                
    00204FDA:  subs     r2, #0x6e                      
    00204FDC:  str      r5, [r4, #0x40]                
    00204FDE:  lsrs     r0, r0, #0x14                  
    00204FE0:  ldr      r4, [r2, #0x74]                
    00204FE2:  movs     r0, #0x6f                      
    00204FE4:  strb     r5, [r5, #0x15]                
    00204FE6:  ldr      r3, [r4, #4]                   
    00204FE8:  str      r0, [r4, #0x40]                
    00204FEA:  strb     r1, [r4, #0x11]                
    00204FEC:  movs     r0, #0x61                      
    00204FEE:  str      r7, [r5, #0x64]                
    00204FF0:  strb     r6, [r4, #0xd]                 
    00204FF2:  strb     r5, [r4, #0x11]                
    00204FF4:  subs     r2, #0x73                      
    00204FF6:  str      r5, [r4, #0x40]                
    00204FF8:  cmp      r3, #0x20                      
    00204FFA:  movs     r5, #0x20                      
    00204FFC:  movs     r0, #0x64                      
    00204FFE:  ldr      r4, [r6, #0x74]                
    00205000:  str      r4, [r6, #0x14]                
    00205002:  subs     r2, #0x6c                      
    00205004:  str      r5, [r4, #0x40]                
    00205006:  ldr      r0, [r4, #0x40]                
    00205008:  ldr      r5, [r4, #0x64]                
    0020500A:  movs     r5, #0x3a                      
    0020500C:  lsls     r4, r4, #1                     
    0020500E:  strb     r5, [r1, #0x1c]                
    00205010:  ldrsh    r3, [r6, r5]                   
    00205012:  strb     r5, [r6, #1]                   
    00205014:  strb     r7, [r4, #9]                   
    00205016:  str      r1, [r4, #0x44]                
    00205018:  ldrsh    r5, [r4, r5]                   
    0020501A:  ldr      r1, [r5, #0x64]                
    0020501C:  strb     r1, [r5, #0x11]                
    0020501E:  movs     r0, #0x3a                      
    00205020:  strh     r4, [r0, r5]                   
    00205022:  movs     r5, #0x3a                      
    00205024:  adds     r4, #0x30                      
    00205026:  movs     r0, #0x78                      
    00205028:  strh     r3, [r2, r5]                   
    0020502A:  movs     r5, #0x3a                      
    0020502C:  adds     r4, #0x30                      
    0020502E:  lsls     r0, r7, #1                     
    00205030:  adcs     r7, r2                         
    00205032:  ldr      r6, [pc, #0x148]                 // = 0xB7704600
    00205034:  ldr      r6, [pc, #0x124]                 // = 0x6E20646C
    00205036:  subs     r2, #0x47                      
    00205038:  strb     r0, [r4, r4]                   
    0020503A:  str      r0, [r6, #0x74]                
    0020503C:  str      r2, [r6, #0x14]                
    0020503E:  str      r4, [r4, #0x54]                
    00205040:  strb     r0, [r4, #0x1c]                
    00205042:  ldr      r1, [r5, #0x44]                
    00205044:  movs     r0, #0x6c                      
    00205046:  str      r6, [r4, #0x14]                
    00205048:  ldr      r1, [r5, #0x44]                
    0020504A:  cmp      r5, #0x20                      
    0020504C:  str      r0, [r4, #0x10]                
    0020504E:  strb     r3, [r4, #0x11]                
    00205050:  strb     r1, [r5, #0x19]                
    00205052:  movs     r0, #0x65                      
    00205054:  strh     r4, [r0, r5]                   
    00205056:  ldr      r0, [r4, #0x10]                
    00205058:  movs     r0, #0x73                      
    0020505A:  ldr      r6, [r5, #0x74]                
    0020505C:  movs     r0, #0x74                      
    0020505E:  ldr      r7, [r5, #0x64]                
    00205060:  movs     r0, #0x65                      
    00205062:  str      r7, [r5, #0x64]                
    00205064:  strb     r0, [r4, #0x10]                
    00205066:  str      r0, [r5, #0x54]                
    00205068:  str      r0, [r4, #0x50]                
    0020506A:  strb     r0, [r7, #1]                   
    0020506C:  str      r5, [r4, #0x34]                
    0020506E:  str      r4, [r6, #0x54]                
    00205070:  movs     r0, #0x64                      
    00205072:  ldr      r4, [r5, #0x74]                
    00205074:  str      r3, [r4, #0x14]                
    00205076:  ldr      r4, [r6, #0x14]                
    00205078:  ldr      r7, [r5, #0x64]                
    0020507A:  cmp      r6, #0x73                      
    0020507C:  movs     r2, r1                         
    0020507E:  adcs     r7, r2                         
    00205080:  ldr      r6, [pc, #0x148]                 // = 0x55850000
    00205082:  ldr      r6, [pc, #0x124]                 // = 0x00000000
    00205084:  subs     r2, #0x47                      
    00205086:  asrs     r0, r4                         
    00205088:  str      r2, [r6, #0x54]                
    0020508A:  orrs     r0, r4                         
    0020508C:  ldr      r7, [r5, #0x64]                
    0020508E:  ldr      r6, [r4, #0x14]                
    00205090:  add      r7, ip                         
    00205092:  ldr      r4, [pc, #0x14c]                 // = 0x558D0000
    00205094:  str      r7, [r5, #0x34]                
    00205096:  strb     r1, [r4, #0x11]                
    00205098:  ldr      r1, [r5, #0x74]                
    0020509A:  movs     r0, #0x6e                      
    0020509C:  ldr      r1, [r4, #0x64]                
    0020509E:  movs     r0, #0x64                      
    002050A0:  ldr      r4, [pc, #0x110]                 // = 0x00000400
    002050A2:  ldr      r3, [r0, #0x74]                
    002050A4:  str      r6, [r5, #0x64]                
    002050A6:  str      r1, [r5, #0x74]                
    002050A8:  strh     r6, [r2, r5]                   
    002050AA:  ldr      r4, [r1, #0x74]                
    002050AC:  str      r3, [r4, #0x14]                
    002050AE:  ldr      r4, [r6, #0x14]                
    002050B0:  ldr      r7, [r5, #0x64]                
    002050B2:  ldr      r0, [r4, #0x10]                
    002050B4:  movs     r0, #0x6e                      
    002050B6:  ldr      r4, [r6, #4]                   
    002050B8:  movs     r0, #0x65                      
    002050BA:  str      r6, [r5, #0x20]                
    002050BC:  strb     r4, [r6, #1]                   
    002050BE:  strb     r0, [r4, #0xc]                 
    002050C0:  strb     r5, [r4, #0x11]                
    002050C2:  strb     r0, [r4, #0x14]                
    002050C4:  movs     r0, #0x70                      
    002050C6:  strb     r1, [r4, #0xd]                 
    002050C8:  ldr      r0, [r4, #0x10]                
    002050CA:  movs     r0, #0x6e                      
    002050CC:  strb     r6, [r5, #0x19]                
    002050CE:  ldr      r7, [r3, #0x44]                
    002050D0:  str      r7, [r5, #0x34]                
    002050D2:  ldr      r7, [r3, #0x44]                
    002050D4:  ldr      r5, [r4, #0x64]                
    002050D6:  ldrb     r3, [r3, r5]                   
    002050D8:  lsrs     r7, r7, #8                     
    002050DA:  asrs     r0, r0                         
    002050DC:  strb     r3, [r4, #0x11]                
    002050DE:  strb     r1, [r5, #0x19]                
    002050E0:  movs     r0, #0x65                      
    002050E2:  strh     r4, [r0, r5]                   
    002050E4:  ldr      r0, [r4, #0x10]                
    002050E6:  movs     r0, #0x73                      
    002050E8:  ldr      r6, [r5, #0x74]                
    002050EA:  movs     r0, #0x74                      
    002050EC:  strh     r4, [r0, r5]                   
    002050EE:  movs     r0, #0x31                      
    002050F0:  ldr      r1, [r4, #0x64]                
    002050F2:  movs     r0, #0x64                      
    002050F4:  ldr      r6, [r5, #0x74]                
    002050F6:  movs     r0, #0x74                      
    002050F8:  strh     r4, [r0, r5]                   
    002050FA:  cmp      r6, #0x32                      
    002050FC:  orrs     r0, r4                         
    002050FE:  ldr      r1, [r4, #0x64]                
    00205100:  ldr      r6, [r5, #0x74]                
    00205102:  movs     r0, #0x74                      
    00205104:  strb     r5, [r6, #1]                   
    00205106:  strb     r7, [r4, #9]                   
    00205108:  str      r1, [r4, #0x44]                
    0020510A:  cmp      r6, #0x65                      
    0020510C:  movs     r2, r1                         
    0020510E:  str      r1, [r0, #0x34]                
    00205110:  ldr      r4, [r6, #0x14]                
    00205112:  str      r6, [r6, #0x54]                
    00205114:  movs     r0, #0x3a                      
    00205116:  ldrb     r0, [r6]                       
    00205118:  adds     r0, #0x25                      
    0020511A:  ldr      r0, [r7, r0]                   
    0020511C:  movs     r0, #0x2c                      
    0020511E:  strb     r5, [r2, #1]                   
    00205120:  strb     r7, [r4, #9]                   
    00205122:  str      r1, [r4, #0x44]                
    00205124:  subs     r2, #0x65                      
    00205126:  adds     r0, #0x20                      
    00205128:  movs     r5, #0x78                      
    0020512A:  subs     r0, #0x30                      
    0020512C:  cmp      r4, #0x58                      
    0020512E:  strb     r0, [r4, r4]                   
    00205130:  movs     r0, #0x47                      
    00205132:  str      r4, [r5, #0x54]                
    00205134:  str      r6, [r5, #0x74]                
    00205136:  ldr      r4, [r6, #4]                   
    00205138:  movs     r0, #0x3a                      
    0020513A:  ldrb     r0, [r6]                       
    0020513C:  adds     r0, #0x25                      
    0020513E:  ldr      r0, [r7, r0]                   
    00205140:  orrs     r0, r0                         
    00205142:  strb     r7, [r5, #0x15]                
    00205144:  str      r4, [r5, #0x44]                
    00205146:  ldr      r0, [r4, #0x60]                
    00205148:  strb     r7, [r5, #0x11]                
    0020514A:  strb     r0, [r4, #0x1c]                
    0020514C:  ldr      r2, [r6, #0x14]                
    0020514E:  str      r4, [r6, #0x54]                
    00205150:  ldr      r0, [r4, #0x60]                
    00205152:  strb     r5, [r4, #0x1d]                
    00205154:  strh     r0, [r4, r4]                   
    00205156:  movs     r1, #0x53                      
    00205158:  orrs     r0, r0                         
    0020515A:  strb     r7, [r5, #0x15]                
    0020515C:  str      r4, [r5, #0x44]                
    0020515E:  ldr      r0, [r4, #0x60]                
    00205160:  strb     r7, [r5, #0x11]                
    00205162:  str      r0, [r4, #0x30]                
    00205164:  str      r2, [r6, #0x54]                
    00205166:  strb     r1, [r4, #0x11]                
    00205168:  movs     r0, #0x65                      
    0020516A:  strb     r5, [r6, #1]                   
    0020516C:  strb     r7, [r4, #9]                   
    0020516E:  str      r1, [r4, #0x44]                
    00205170:  movs     r0, #0x65                      
    00205172:  strh     r3, [r2, r5]                   
    00205174:  movs     r2, r1                         
    00205176:  tst      r2, r1                         
    00205178:  add      r0, sp, #0                     
    0020517A:  movs     r0, #0x86                      
    0020517C:  mov      r0, r0                         
    00205180:  vpmax.u16 d20, d27, d22                 
    00205184:  str      r0, [sp, #0x4c]                
    00205186:  ldr      r7, [pc, #0x240]               
    00205188:  rsbs     r5, r4, #0                     
    0020518A:  asrs     r1, r2, #0xd                   
    0020518C:  lsls     r6, r7, #4                     
    0020518E:  b        #0x205612                      
    00205190:  movs     r1, r0                         
    00205192:  movs     r0, r0                         
    00205194:  movs     r0, r0                         
    00205196:  movs     r0, r0                         
    00205198:  movs     r0, r0                         
    0020519A:  movs     r0, r0                         
    0020519C:  movs     r0, r0                         
    0020519E:  movs     r0, r0                         
    002051A0:  adr      r3, #0                         
    002051A2:  movs     r0, #0x90                      
    002051A4:  movs     r0, r0                         
    002051A6:  lsls     r7, r7, #3                     
    002051A8:  movs     r0, r0                         
    002051AA:  movs     r0, r0                         
    002051AC:  movs     r0, r0                         
    002051AE:  movs     r0, r0                         
    002051B0:  movs     r0, r0                         
    002051B2:  movs     r0, r0                         
    002051B4:  lsls     r0, r0, #0x10                  
    002051B6:  movs     r0, r0                         
    002051B8:  movs     r0, #0                         
    002051BA:  lsrs     r0, r4, #0xa                   
    002051BC:  lsls     r4, r2, #3                     
    002051BE:  str      r1, [sp, #0x150]               
    002051C0:  movs     r0, r4                         
    002051C2:  ldr      r0, [pc, #0xc]                   // = 0xFB6B0020
    002051C4:  ldr      r1, [pc, #8]                     // = 0xFB6B0020
    002051C6:  adds     r0, r0, #6                     
    002051C8:  b.w      #0x200938                      
    002051CC:  movs     r0, r0                         
    002051CE:  strb     r5, [r0, r6]                   
    002051D0:  movs     r0, r4                         
    002051D2:  smmls    r0, fp, r0, r0                 
    002051D6:  ldr      r0, [pc, #0xc]                   // = 0x96E70020
    002051D8:  ldr      r1, [pc, #8]                     // = 0x96E70020
    002051DA:  adds     r0, #0x5a                      
    002051DC:  b.w      #0x200938                      
    002051E0:  movs     r0, r0                         
    002051E2:  strb     r5, [r1, r6]                   
    002051E4:  movs     r0, r4                         
    002051E6:  str      r6, [sp, #0x39c]               
    002051E8:  movs     r0, r0                         
    002051EA:  ldr      r0, [pc, #0x1c]                  // = 0x2BB00000
    002051EC:  ldr      r1, [pc, #0x20]                  // = 0x56810020
    002051EE:  ldr      r2, [r0, #0x60]                
    002051F0:  str      r2, [r1, #4]                   
    002051F2:  ldr      r2, [r0, #0x64]                
    002051F4:  str      r2, [r1, #8]                   
    002051F6:  ldr      r1, [pc, #0x18]                  // = 0x56810020
    002051F8:  str      r1, [r0, #0x60]                
    002051FA:  ldr      r1, [pc, #0x18]                  // = 0x566B0020
    002051FC:  str      r1, [r0, #0x64]                
    002051FE:  bx       lr                             
    00205200:  ldr      r1, [pc, #0x18]                  // = 0x27B90020
    00205202:  ldr      r0, [pc, #0x18]                  // = 0x27B90020
    00205204:  b.w      #0x200938                      
    00205208:  movs     r0, r0                         
    0020520A:  cmp      r3, #0xb0                      
    0020520C:  movs     r0, r4                         
    0020520E:  strh     r0, [r2, #0x36]                
    00205210:  movs     r0, r4                         
    00205212:  ldrsb    r1, [r0, r2]                   
    00205214:  movs     r0, r4                         
    00205216:  ldrsb    r3, [r5, r1]                   
    00205218:  movs     r0, r4                         
    0020521A:  ldrsb    r7, [r2, r2]                   
    0020521C:  movs     r0, r4                         
    0020521E:  movs     r7, #0xb9                      
    00205220:  movs     r3, r0                         
    00205222:  ldr      r0, [pc, #0xc]                   // = 0x0D930020
    00205224:  ldr      r1, [pc, #8]                     // = 0x0D930020
    00205226:  adds     r0, r0, #2                     
    00205228:  b.w      #0x200938                      
    0020522C:  movs     r0, r0                         
    0020522E:  strb     r1, [r3, r6]                   
    00205230:  movs     r0, r4                         
    00205232:  lsrs     r3, r2, #0x16                  
    00205234:  movs     r4, r0                         
    00205236:  ldr      r1, [pc, #4]                     // = 0x5915BB7D
    00205238:  ldr      r0, [pc, #8]                     // = 0x480B0003
    0020523A:  b.w      #0x200938                      
    0020523E:  ldr      r5, [r2, r4]                   
    00205240:  movs     r0, r4                         
    00205242:  ldr      r5, [sp, #0x354]               
    00205244:  movs     r3, r0                         
    00205246:  ldr      r0, [pc, #0x2c]                  // = 0x86A8B9DC
    00205248:  ldr      r1, [pc, #0x30]                  // = 0x003E0020
}

/* ---- sub_0020524A @ 0x0020524A ---- */
void sub_0020524A() {
    0020524A:  push     {r3, lr}                       
    0020524C:  cmp      r0, r1                         
    0020524E:  beq      #0x205256                      
    00205250:  ldr      r2, [pc, #0x2c]                  // = 0x0A6C0000
    00205252:  bl       #0x447f2                         // ROM
    00205256:  ldr      r1, [pc, #0x28]                  // = 0x0A6C0000
    00205258:  movs     r2, #0                         
    0020525A:  ldr      r0, [pc, #0x28]                  // = 0x86E80000
    0020525C:  bl       #0x44832                         // ROM
    00205260:  ldr      r2, [pc, #0x28]                  // = 0x0C5C0020
    00205262:  ldr      r3, [pc, #0x28]                  // = 0x0C5C0020
    00205264:  bic      r2, r2, #0xf                   
    00205268:  str      r2, [r3]                       
    0020526A:  bl       #0x203662                      
    0020526E:  pop.w    {r3, lr}                       
    00205272:  b.w      #0x20362e                      
    00205276:  strh     r0, [r5, #0x34]                
    00205278:  movs     r0, r4                         
    0020527A:  strh     r0, [r5, #0x34]                
    0020527C:  movs     r0, r4                         
    0020527E:  movs     r6, r7                         
    00205280:  movs     r0, r0                         
    00205282:  lsrs     r4, r5, #9                     
    00205284:  movs     r0, r0                         
    00205286:  strh     r0, [r5, #0x36]                
    00205288:  movs     r0, r4                         
    0020528A:  str      r1, [sp, #0x1d0]               
    0020528C:  movs     r0, r4                         
    0020528E:  lsrs     r4, r3, #0x11                  
    00205290:  movs     r0, r4                         
    00205292:  lsls     r3, r1, #0x10                  
    00205294:  bls      #0x205298                      
    00205296:  movs     r0, #0x91                      
    00205298:  cdp2     p0, #0, c0, c0, c0, #0         
}


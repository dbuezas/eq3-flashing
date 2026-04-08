/* EQ3 CC-RT-BLE v1.48 noauth - Disassembly with string annotations */
/* Base: 0x00200000 - SPAR patch (callbacks + config + GATT DB + strings) */
/* Code: 0x00201000-0x00201500 (~1.3KB of init/callback registration) */
/* Most logic is in BCM20736 ROM (320KB) - SPAR only registers callbacks */

  00200F00: bmi        #0x200ea6
  00200F02: push       {r3, r4, r5, r6, r7}
  00200F04: strh       r5, [r2]
  00200F06: stm        r1!, {r0, r1, r3, r4, r5, r6}
  00200F08: lsls       r3, r6, #7
  00200F0A: ldr        r6, [r2, #0x20]
  00200F0C: adds       r1, #0x46
  00200F0E: movs       r5, #0x46
  00200F10: subs       r6, r6, #7
  00200F12: lsls       r2, r7, #3
  00200F14: ldr        r0, [r3, #0x18]
  00200F16: lsls       r6, r0, #1
  00200F18: lsls       r0, r6, #0xf
  00200F1A: movs       r0, r0
  00200F1C: adds       r0, #0x90
  00200F1E: movs       r5, #0x46
  00200F20: ldr        r6, [sp, #0x3d8]
  00200F22: lsls       r2, r7, #3


/* ======== STRING TABLE (0x4500+) ======== */
/* 0x00204500: "p(void)" */
/* 0x00204501: "(void)" */
/* 0x00204502: "void)" */
/* 0x00204503: "oid)" */
/* 0x00204508: "trv_ble_connection_up: %08x%04x %d" */
/* 0x00204509: "rv_ble_connection_up: %08x%04x %d" */
/* 0x0020450A: "v_ble_connection_up: %08x%04x %d" */
/* 0x0020450B: "_ble_connection_up: %08x%04x %d" */
/* 0x0020450C: "ble_connection_up: %08x%04x %d" */
/* 0x0020450D: "le_connection_up: %08x%04x %d" */
/* 0x0020450E: "e_connection_up: %08x%04x %d" */
/* 0x0020450F: "_connection_up: %08x%04x %d" */
/* 0x00204510: "connection_up: %08x%04x %d" */
/* 0x00204511: "onnection_up: %08x%04x %d" */
/* 0x00204512: "nnection_up: %08x%04x %d" */
/* 0x00204513: "nection_up: %08x%04x %d" */
/* 0x00204514: "ection_up: %08x%04x %d" */
/* 0x00204515: "ction_up: %08x%04x %d" */
/* 0x00204516: "tion_up: %08x%04x %d" */
/* 0x00204517: "ion_up: %08x%04x %d" */
/* 0x00204518: "on_up: %08x%04x %d" */
/* 0x00204519: "n_up: %08x%04x %d" */
/* 0x0020451A: "_up: %08x%04x %d" */
/* 0x0020451B: "up: %08x%04x %d" */
/* 0x0020451C: "p: %08x%04x %d" */
/* 0x0020451D: ": %08x%04x %d" */
/* 0x0020451E: " %08x%04x %d" */
/* 0x0020451F: "%08x%04x %d" */
/* 0x00204520: "08x%04x %d" */
/* 0x00204521: "8x%04x %d" */
/* 0x00204522: "x%04x %d" */
/* 0x00204523: "%04x %d" */
/* 0x00204524: "04x %d" */
/* 0x00204525: "4x %d" */
/* 0x00204526: "x %d" */
/* 0x0020452C: "NVRAM write:%04x" */
/* 0x0020452D: "VRAM write:%04x" */
/* 0x0020452E: "RAM write:%04x" */
/* 0x0020452F: "AM write:%04x" */
/* 0x00204530: "M write:%04x" */
/* 0x00204531: " write:%04x" */
/* 0x00204532: "write:%04x" */
/* 0x00204533: "rite:%04x" */
/* 0x00204534: "ite:%04x" */
/* 0x00204535: "te:%04x" */
/* 0x00204536: "e:%04x" */
/* 0x00204537: ":%04x" */
/* 0x00204538: "%04x" */
/* 0x0020453E: "scr[1].len = %x" */
/* 0x0020453F: "cr[1].len = %x" */
/* 0x00204540: "r[1].len = %x" */
/* 0x00204541: "[1].len = %x" */
/* 0x00204542: "1].len = %x" */
/* 0x00204543: "].len = %x" */
/* 0x00204544: ".len = %x" */
/* 0x00204545: "len = %x" */
/* 0x00204546: "en = %x" */
/* 0x00204547: "n = %x" */
/* 0x00204548: " = %x" */
/* 0x00204549: "= %x" */
/* 0x0020454E: "scr[1].val = %x" */
/* 0x0020454F: "cr[1].val = %x" */
/* 0x00204550: "r[1].val = %x" */
/* 0x00204551: "[1].val = %x" */
/* 0x00204552: "1].val = %x" */
/* 0x00204553: "].val = %x" */
/* 0x00204554: ".val = %x" */
/* 0x00204555: "val = %x" */
/* 0x00204556: "al = %x" */
/* 0x00204557: "l = %x" */
/* 0x00204558: " = %x" */
/* 0x00204559: "= %x" */
/* 0x0020455E: "scr[1].data[0] (pairing_active) = %x" */
/* 0x0020455F: "cr[1].data[0] (pairing_active) = %x" */
/* 0x00204560: "r[1].data[0] (pairing_active) = %x" */
/* 0x00204561: "[1].data[0] (pairing_active) = %x" */
/* 0x00204562: "1].data[0] (pairing_active) = %x" */
/* 0x00204563: "].data[0] (pairing_active) = %x" */
/* 0x00204564: ".data[0] (pairing_active) = %x" */
/* 0x00204565: "data[0] (pairing_active) = %x" */
/* 0x00204566: "ata[0] (pairing_active) = %x" */
/* 0x00204567: "ta[0] (pairing_active) = %x" */
/* 0x00204568: "a[0] (pairing_active) = %x" */
/* 0x00204569: "[0] (pairing_active) = %x" */
/* 0x0020456A: "0] (pairing_active) = %x" */
/* 0x0020456B: "] (pairing_active) = %x" */
/* 0x0020456C: " (pairing_active) = %x" */
/* 0x0020456D: "(pairing_active) = %x" */
/* 0x0020456E: "pairing_active) = %x" */
/* 0x0020456F: "airing_active) = %x" */
/* 0x00204570: "iring_active) = %x" */
/* 0x00204571: "ring_active) = %x" */
/* 0x00204572: "ing_active) = %x" */
/* 0x00204573: "ng_active) = %x" */
/* 0x00204574: "g_active) = %x" */
/* 0x00204575: "_active) = %x" */
/* 0x00204576: "active) = %x" */
/* 0x00204577: "ctive) = %x" */
/* 0x00204578: "tive) = %x" */
/* 0x00204579: "ive) = %x" */
/* 0x0020457A: "ve) = %x" */
/* 0x0020457B: "e) = %x" */
/* 0x0020457C: ") = %x" */
/* 0x0020457D: " = %x" */
/* 0x0020457E: "= %x" */
/* 0x00204583: "SN in ADV part 1: %x %x %x %x %x" */
/* 0x00204584: "N in ADV part 1: %x %x %x %x %x" */
/* 0x00204585: " in ADV part 1: %x %x %x %x %x" */
/* 0x00204586: "in ADV part 1: %x %x %x %x %x" */
/* 0x00204587: "n ADV part 1: %x %x %x %x %x" */
/* 0x00204588: " ADV part 1: %x %x %x %x %x" */
/* 0x00204589: "ADV part 1: %x %x %x %x %x" */
/* 0x0020458A: "DV part 1: %x %x %x %x %x" */
/* 0x0020458B: "V part 1: %x %x %x %x %x" */
/* 0x0020458C: " part 1: %x %x %x %x %x" */
/* 0x0020458D: "part 1: %x %x %x %x %x" */
/* 0x0020458E: "art 1: %x %x %x %x %x" */
/* 0x0020458F: "rt 1: %x %x %x %x %x" */
/* 0x00204590: "t 1: %x %x %x %x %x" */
/* 0x00204591: " 1: %x %x %x %x %x" */
/* 0x00204592: "1: %x %x %x %x %x" */
/* 0x00204593: ": %x %x %x %x %x" */
/* 0x00204594: " %x %x %x %x %x" */
/* 0x00204595: "%x %x %x %x %x" */
/* 0x00204596: "x %x %x %x %x" */
/* 0x00204597: " %x %x %x %x" */
/* 0x00204598: "%x %x %x %x" */
/* 0x00204599: "x %x %x %x" */
/* 0x0020459A: " %x %x %x" */
/* 0x0020459B: "%x %x %x" */
/* 0x0020459C: "x %x %x" */
/* 0x0020459D: " %x %x" */
/* 0x0020459E: "%x %x" */
/* 0x0020459F: "x %x" */
/* 0x002045A4: "SN in ADV part 2: %x %x %x %x %x" */
/* 0x002045A5: "N in ADV part 2: %x %x %x %x %x" */
/* 0x002045A6: " in ADV part 2: %x %x %x %x %x" */
/* 0x002045A7: "in ADV part 2: %x %x %x %x %x" */
/* 0x002045A8: "n ADV part 2: %x %x %x %x %x" */
/* 0x002045A9: " ADV part 2: %x %x %x %x %x" */
/* 0x002045AA: "ADV part 2: %x %x %x %x %x" */
/* 0x002045AB: "DV part 2: %x %x %x %x %x" */
/* 0x002045AC: "V part 2: %x %x %x %x %x" */
/* 0x002045AD: " part 2: %x %x %x %x %x" */
/* 0x002045AE: "part 2: %x %x %x %x %x" */
/* 0x002045AF: "art 2: %x %x %x %x %x" */
/* 0x002045B0: "rt 2: %x %x %x %x %x" */
/* 0x002045B1: "t 2: %x %x %x %x %x" */
/* 0x002045B2: " 2: %x %x %x %x %x" */
/* 0x002045B3: "2: %x %x %x %x %x" */
/* 0x002045B4: ": %x %x %x %x %x" */
/* 0x002045B5: " %x %x %x %x %x" */
/* 0x002045B6: "%x %x %x %x %x" */
/* 0x002045B7: "x %x %x %x %x" */
/* 0x002045B8: " %x %x %x %x" */
/* 0x002045B9: "%x %x %x %x" */
/* 0x002045BA: "x %x %x %x" */
/* 0x002045BB: " %x %x %x" */
/* 0x002045BC: "%x %x %x" */
/* 0x002045BD: "x %x %x" */
/* 0x002045BE: " %x %x" */
/* 0x002045BF: "%x %x" */
/* 0x002045C0: "x %x" */
/* 0x002045C5: "smp_bond_result handler started!" */
/* 0x002045C6: "mp_bond_result handler started!" */
/* 0x002045C7: "p_bond_result handler started!" */
/* 0x002045C8: "_bond_result handler started!" */
/* 0x002045C9: "bond_result handler started!" */
/* 0x002045CA: "ond_result handler started!" */
/* 0x002045CB: "nd_result handler started!" */
/* 0x002045CC: "d_result handler started!" */
/* 0x002045CD: "_result handler started!" */
/* 0x002045CE: "result handler started!" */
/* 0x002045CF: "esult handler started!" */
/* 0x002045D0: "sult handler started!" */
/* 0x002045D1: "ult handler started!" */
/* 0x002045D2: "lt handler started!" */
/* 0x002045D3: "t handler started!" */
/* 0x002045D4: " handler started!" */
/* 0x002045D5: "handler started!" */
/* 0x002045D6: "andler started!" */
/* 0x002045D7: "ndler started!" */
/* 0x002045D8: "dler started!" */
/* 0x002045D9: "ler started!" */
/* 0x002045DA: "er started!" */
/* 0x002045DB: "r started!" */
/* 0x002045DC: " started!" */
/* 0x002045DD: "started!" */
/* 0x002045DE: "tarted!" */
/* 0x002045DF: "arted!" */
/* 0x002045E0: "rted!" */
/* 0x002045E1: "ted!" */
/* 0x002045E6: "smp_bond_result %02x" */
/* 0x002045E7: "mp_bond_result %02x" */
/* 0x002045E8: "p_bond_result %02x" */
/* 0x002045E9: "_bond_result %02x" */
/* 0x002045EA: "bond_result %02x" */
/* 0x002045EB: "ond_result %02x" */
/* 0x002045EC: "nd_result %02x" */
/* 0x002045ED: "d_result %02x" */
/* 0x002045EE: "_result %02x" */
/* 0x002045EF: "result %02x" */
/* 0x002045F0: "esult %02x" */
/* 0x002045F1: "sult %02x" */
/* 0x002045F2: "ult %02x" */
/* 0x002045F3: "lt %02x" */
/* 0x002045F4: "t %02x" */
/* 0x002045F5: " %02x" */
/* 0x002045F6: "%02x" */
/* 0x002045FB: "evt->data[%x] = %x" */
/* 0x002045FC: "vt->data[%x] = %x" */
/* 0x002045FD: "t->data[%x] = %x" */
/* 0x002045FE: "->data[%x] = %x" */
/* 0x002045FF: ">data[%x] = %x" */
/* 0x00204600: "data[%x] = %x" */
/* 0x00204601: "ata[%x] = %x" */
/* 0x00204602: "ta[%x] = %x" */
/* 0x00204603: "a[%x] = %x" */
/* 0x00204604: "[%x] = %x" */
/* 0x00204605: "%x] = %x" */
/* 0x00204606: "x] = %x" */
/* 0x00204607: "] = %x" */
/* 0x00204608: " = %x" */
/* 0x00204609: "= %x" */
/* 0x0020460E: "Test successful, Addresses in ADV and saved are equal!" */
/* 0x0020460F: "est successful, Addresses in ADV and saved are equal!" */
/* 0x00204610: "st successful, Addresses in ADV and saved are equal!" */
/* 0x00204611: "t successful, Addresses in ADV and saved are equal!" */
/* 0x00204612: " successful, Addresses in ADV and saved are equal!" */
/* 0x00204613: "successful, Addresses in ADV and saved are equal!" */
/* 0x00204614: "uccessful, Addresses in ADV and saved are equal!" */
/* 0x00204615: "ccessful, Addresses in ADV and saved are equal!" */
/* 0x00204616: "cessful, Addresses in ADV and saved are equal!" */
/* 0x00204617: "essful, Addresses in ADV and saved are equal!" */
/* 0x00204618: "ssful, Addresses in ADV and saved are equal!" */
/* 0x00204619: "sful, Addresses in ADV and saved are equal!" */
/* 0x0020461A: "ful, Addresses in ADV and saved are equal!" */
/* 0x0020461B: "ul, Addresses in ADV and saved are equal!" */
/* 0x0020461C: "l, Addresses in ADV and saved are equal!" */
/* 0x0020461D: ", Addresses in ADV and saved are equal!" */
/* 0x0020461E: " Addresses in ADV and saved are equal!" */
/* 0x0020461F: "Addresses in ADV and saved are equal!" */
/* 0x00204620: "ddresses in ADV and saved are equal!" */
/* 0x00204621: "dresses in ADV and saved are equal!" */
/* 0x00204622: "resses in ADV and saved are equal!" */
/* 0x00204623: "esses in ADV and saved are equal!" */
/* 0x00204624: "sses in ADV and saved are equal!" */
/* 0x00204625: "ses in ADV and saved are equal!" */
/* 0x00204626: "es in ADV and saved are equal!" */
/* 0x00204627: "s in ADV and saved are equal!" */
/* 0x00204628: " in ADV and saved are equal!" */
/* 0x00204629: "in ADV and saved are equal!" */
/* 0x0020462A: "n ADV and saved are equal!" */
/* 0x0020462B: " ADV and saved are equal!" */
/* 0x0020462C: "ADV and saved are equal!" */
/* 0x0020462D: "DV and saved are equal!" */
/* 0x0020462E: "V and saved are equal!" */
/* 0x0020462F: " and saved are equal!" */
/* 0x00204630: "and saved are equal!" */
/* 0x00204631: "nd saved are equal!" */
/* 0x00204632: "d saved are equal!" */
/* 0x00204633: " saved are equal!" */
/* 0x00204634: "saved are equal!" */
/* 0x00204635: "aved are equal!" */
/* 0x00204636: "ved are equal!" */
/* 0x00204637: "ed are equal!" */
/* 0x00204638: "d are equal!" */
/* 0x00204639: " are equal!" */
/* 0x0020463A: "are equal!" */
/* 0x0020463B: "re equal!" */
/* 0x0020463C: "e equal!" */
/* 0x0020463D: " equal!" */
/* 0x0020463E: "equal!" */
/* 0x0020463F: "qual!" */
/* 0x00204640: "ual!" */
/* 0x00204645: "Sent 0xFD+0xFE" */
/* 0x00204646: "ent 0xFD+0xFE" */
/* 0x00204647: "nt 0xFD+0xFE" */
/* 0x00204648: "t 0xFD+0xFE" */
/* 0x00204649: " 0xFD+0xFE" */
/* 0x0020464A: "0xFD+0xFE" */
/* 0x0020464B: "xFD+0xFE" */
/* 0x0020464C: "FD+0xFE" */
/* 0x0020464D: "D+0xFE" */
/* 0x0020464E: "+0xFE" */
/* 0x0020464F: "0xFE" */
/* 0x00204654: "GPIO: TRUE" */
/* 0x00204655: "PIO: TRUE" */
/* 0x00204656: "IO: TRUE" */
/* 0x00204657: "O: TRUE" */
/* 0x00204658: ": TRUE" */
/* 0x00204659: " TRUE" */
/* 0x0020465A: "TRUE" */
/* 0x0020465F: "GPIO: FALSE" */
/* 0x00204660: "PIO: FALSE" */
/* 0x00204661: "IO: FALSE" */
/* 0x00204662: "O: FALSE" */
/* 0x00204663: ": FALSE" */
/* 0x00204664: " FALSE" */
/* 0x00204665: "FALSE" */
/* 0x00204666: "ALSE" */
/* 0x0020466B: "attrPtr[1] = %x" */
/* 0x0020466C: "ttrPtr[1] = %x" */
/* 0x0020466D: "trPtr[1] = %x" */
/* 0x0020466E: "rPtr[1] = %x" */
/* 0x0020466F: "Ptr[1] = %x" */
/* 0x00204670: "tr[1] = %x" */
/* 0x00204671: "r[1] = %x" */
/* 0x00204672: "[1] = %x" */
/* 0x00204673: "1] = %x" */
/* 0x00204674: "] = %x" */
/* 0x00204675: " = %x" */
/* 0x00204676: "= %x" */
/* 0x0020467B: "((attrPtr[1]&0xc0) >> 6) = %x" */
/* 0x0020467C: "(attrPtr[1]&0xc0) >> 6) = %x" */
/* 0x0020467D: "attrPtr[1]&0xc0) >> 6) = %x" */
/* 0x0020467E: "ttrPtr[1]&0xc0) >> 6) = %x" */
/* 0x0020467F: "trPtr[1]&0xc0) >> 6) = %x" */
/* 0x00204680: "rPtr[1]&0xc0) >> 6) = %x" */
/* 0x00204681: "Ptr[1]&0xc0) >> 6) = %x" */
/* 0x00204682: "tr[1]&0xc0) >> 6) = %x" */
/* 0x00204683: "r[1]&0xc0) >> 6) = %x" */
/* 0x00204684: "[1]&0xc0) >> 6) = %x" */
/* 0x00204685: "1]&0xc0) >> 6) = %x" */
/* 0x00204686: "]&0xc0) >> 6) = %x" */
/* 0x00204687: "&0xc0) >> 6) = %x" */
/* 0x00204688: "0xc0) >> 6) = %x" */
/* 0x00204689: "xc0) >> 6) = %x" */
/* 0x0020468A: "c0) >> 6) = %x" */
/* 0x0020468B: "0) >> 6) = %x" */
/* 0x0020468C: ") >> 6) = %x" */
/* 0x0020468D: " >> 6) = %x" */
/* 0x0020468E: ">> 6) = %x" */
/* 0x0020468F: "> 6) = %x" */
/* 0x00204690: " 6) = %x" */
/* 0x00204691: "6) = %x" */
/* 0x00204692: ") = %x" */
/* 0x00204693: " = %x" */
/* 0x00204694: "= %x" */
/* 0x00204699: "Message Type undefined" */
/* 0x0020469A: "essage Type undefined" */
/* 0x0020469B: "ssage Type undefined" */
/* 0x0020469C: "sage Type undefined" */
/* 0x0020469D: "age Type undefined" */
/* 0x0020469E: "ge Type undefined" */
/* 0x0020469F: "e Type undefined" */
/* 0x002046A0: " Type undefined" */
/* 0x002046A1: "Type undefined" */
/* 0x002046A2: "ype undefined" */
/* 0x002046A3: "pe undefined" */
/* 0x002046A4: "e undefined" */
/* 0x002046A5: " undefined" */
/* 0x002046A6: "undefined" */
/* 0x002046A7: "ndefined" */
/* 0x002046A8: "defined" */
/* 0x002046A9: "efined" */
/* 0x002046AA: "fined" */
/* 0x002046AB: "ined" */
/* 0x002046B0: "Dummy Notification sent to smartphone to start OTAU" */
/* 0x002046B1: "ummy Notification sent to smartphone to start OTAU" */
/* 0x002046B2: "mmy Notification sent to smartphone to start OTAU" */
/* 0x002046B3: "my Notification sent to smartphone to start OTAU" */
/* 0x002046B4: "y Notification sent to smartphone to start OTAU" */
/* 0x002046B5: " Notification sent to smartphone to start OTAU" */
/* 0x002046B6: "Notification sent to smartphone to start OTAU" */
/* 0x002046B7: "otification sent to smartphone to start OTAU" */
/* 0x002046B8: "tification sent to smartphone to start OTAU" */
/* 0x002046B9: "ification sent to smartphone to start OTAU" */
/* 0x002046BA: "fication sent to smartphone to start OTAU" */
/* 0x002046BB: "ication sent to smartphone to start OTAU" */
/* 0x002046BC: "cation sent to smartphone to start OTAU" */
/* 0x002046BD: "ation sent to smartphone to start OTAU" */
/* 0x002046BE: "tion sent to smartphone to start OTAU" */
/* 0x002046BF: "ion sent to smartphone to start OTAU" */
/* 0x002046C0: "on sent to smartphone to start OTAU" */
/* 0x002046C1: "n sent to smartphone to start OTAU" */
/* 0x002046C2: " sent to smartphone to start OTAU" */
/* 0x002046C3: "sent to smartphone to start OTAU" */
/* 0x002046C4: "ent to smartphone to start OTAU" */
/* 0x002046C5: "nt to smartphone to start OTAU" */
/* 0x002046C6: "t to smartphone to start OTAU" */
/* 0x002046C7: " to smartphone to start OTAU" */
/* 0x002046C8: "to smartphone to start OTAU" */
/* 0x002046C9: "o smartphone to start OTAU" */
/* 0x002046CA: " smartphone to start OTAU" */
/* 0x002046CB: "smartphone to start OTAU" */
/* 0x002046CC: "martphone to start OTAU" */
/* 0x002046CD: "artphone to start OTAU" */
/* 0x002046CE: "rtphone to start OTAU" */
/* 0x002046CF: "tphone to start OTAU" */
/* 0x002046D0: "phone to start OTAU" */
/* 0x002046D1: "hone to start OTAU" */
/* 0x002046D2: "one to start OTAU" */
/* 0x002046D3: "ne to start OTAU" */
/* 0x002046D4: "e to start OTAU" */
/* 0x002046D5: " to start OTAU" */
/* 0x002046D6: "to start OTAU" */
/* 0x002046D7: "o start OTAU" */
/* 0x002046D8: " start OTAU" */
/* 0x002046D9: "start OTAU" */
/* 0x002046DA: "tart OTAU" */
/* 0x002046DB: "art OTAU" */
/* 0x002046DC: "rt OTAU" */
/* 0x002046DD: "t OTAU" */
/* 0x002046DE: " OTAU" */
/* 0x002046DF: "OTAU" */
/* 0x002046E7: "INDICATION handler started!" */
/* 0x002046E8: "NDICATION handler started!" */
/* 0x002046E9: "DICATION handler started!" */
/* 0x002046EA: "ICATION handler started!" */
/* 0x002046EB: "CATION handler started!" */
/* 0x002046EC: "ATION handler started!" */
/* 0x002046ED: "TION handler started!" */
/* 0x002046EE: "ION handler started!" */
/* 0x002046EF: "ON handler started!" */
/* 0x002046F0: "N handler started!" */
/* 0x002046F1: " handler started!" */
/* 0x002046F2: "handler started!" */
/* 0x002046F3: "andler started!" */
/* 0x002046F4: "ndler started!" */
/* 0x002046F5: "dler started!" */
/* 0x002046F6: "ler started!" */
/* 0x002046F7: "er started!" */
/* 0x002046F8: "r started!" */
/* 0x002046F9: " started!" */
/* 0x002046FA: "started!" */
/* 0x002046FB: "tarted!" */
/* 0x002046FC: "arted!" */
/* 0x002046FD: "rted!" */
/* 0x002046FE: "ted!" */
/* 0x00204703: "on_write_generic_access_reconnection_address handler started!" */
/* 0x00204704: "n_write_generic_access_reconnection_address handler started!" */
/* 0x00204705: "_write_generic_access_reconnection_address handler started!" */
/* 0x00204706: "write_generic_access_reconnection_address handler started!" */
/* 0x00204707: "rite_generic_access_reconnection_address handler started!" */
/* 0x00204708: "ite_generic_access_reconnection_address handler started!" */
/* 0x00204709: "te_generic_access_reconnection_address handler started!" */
/* 0x0020470A: "e_generic_access_reconnection_address handler started!" */
/* 0x0020470B: "_generic_access_reconnection_address handler started!" */
/* 0x0020470C: "generic_access_reconnection_address handler started!" */
/* 0x0020470D: "eneric_access_reconnection_address handler started!" */
/* 0x0020470E: "neric_access_reconnection_address handler started!" */
/* 0x0020470F: "eric_access_reconnection_address handler started!" */
/* 0x00204710: "ric_access_reconnection_address handler started!" */
/* 0x00204711: "ic_access_reconnection_address handler started!" */
/* 0x00204712: "c_access_reconnection_address handler started!" */
/* 0x00204713: "_access_reconnection_address handler started!" */
/* 0x00204714: "access_reconnection_address handler started!" */
/* 0x00204715: "ccess_reconnection_address handler started!" */
/* 0x00204716: "cess_reconnection_address handler started!" */
/* 0x00204717: "ess_reconnection_address handler started!" */
/* 0x00204718: "ss_reconnection_address handler started!" */
/* 0x00204719: "s_reconnection_address handler started!" */
/* 0x0020471A: "_reconnection_address handler started!" */
/* 0x0020471B: "reconnection_address handler started!" */
/* 0x0020471C: "econnection_address handler started!" */
/* 0x0020471D: "connection_address handler started!" */
/* 0x0020471E: "onnection_address handler started!" */
/* 0x0020471F: "nnection_address handler started!" */
/* 0x00204720: "nection_address handler started!" */
/* 0x00204721: "ection_address handler started!" */
/* 0x00204722: "ction_address handler started!" */
/* 0x00204723: "tion_address handler started!" */
/* 0x00204724: "ion_address handler started!" */
/* 0x00204725: "on_address handler started!" */
/* 0x00204726: "n_address handler started!" */
/* 0x00204727: "_address handler started!" */
/* 0x00204728: "address handler started!" */
/* 0x00204729: "ddress handler started!" */
/* 0x0020472A: "dress handler started!" */
/* 0x0020472B: "ress handler started!" */
/* 0x0020472C: "ess handler started!" */
/* 0x0020472D: "ss handler started!" */
/* 0x0020472E: "s handler started!" */
/* 0x0020472F: " handler started!" */
/* 0x00204730: "handler started!" */
/* 0x00204731: "andler started!" */
/* 0x00204732: "ndler started!" */
/* 0x00204733: "dler started!" */
/* 0x00204734: "ler started!" */
/* 0x00204735: "er started!" */
/* 0x00204736: "r started!" */
/* 0x00204737: " started!" */
/* 0x00204738: "started!" */
/* 0x00204739: "tarted!" */
/* 0x0020473A: "arted!" */
/* 0x0020473B: "rted!" */
/* 0x0020473C: "ted!" */
/* 0x00204741: "Notification Handler started" */
/* 0x00204742: "otification Handler started" */
/* 0x00204743: "tification Handler started" */
/* 0x00204744: "ification Handler started" */
/* 0x00204745: "fication Handler started" */
/* 0x00204746: "ication Handler started" */
/* 0x00204747: "cation Handler started" */
/* 0x00204748: "ation Handler started" */
/* 0x00204749: "tion Handler started" */
/* 0x0020474A: "ion Handler started" */
/* 0x0020474B: "on Handler started" */
/* 0x0020474C: "n Handler started" */
/* 0x0020474D: " Handler started" */
/* 0x0020474E: "Handler started" */
/* 0x0020474F: "andler started" */
/* 0x00204750: "ndler started" */
/* 0x00204751: "dler started" */
/* 0x00204752: "ler started" */
/* 0x00204753: "er started" */
/* 0x00204754: "r started" */
/* 0x00204755: " started" */
/* 0x00204756: "started" */
/* 0x00204757: "tarted" */
/* 0x00204758: "arted" */
/* 0x00204759: "rted" */
/* 0x0020475F: "ws_verify rcvd:%x calculated:%x" */
/* 0x00204760: "s_verify rcvd:%x calculated:%x" */
/* 0x00204761: "_verify rcvd:%x calculated:%x" */
/* 0x00204762: "verify rcvd:%x calculated:%x" */
/* 0x00204763: "erify rcvd:%x calculated:%x" */
/* 0x00204764: "rify rcvd:%x calculated:%x" */
/* 0x00204765: "ify rcvd:%x calculated:%x" */
/* 0x00204766: "fy rcvd:%x calculated:%x" */
/* 0x00204767: "y rcvd:%x calculated:%x" */
/* 0x00204768: " rcvd:%x calculated:%x" */
/* 0x00204769: "rcvd:%x calculated:%x" */
/* 0x0020476A: "cvd:%x calculated:%x" */
/* 0x0020476B: "vd:%x calculated:%x" */
/* 0x0020476C: "d:%x calculated:%x" */
/* 0x0020476D: ":%x calculated:%x" */
/* 0x0020476E: "%x calculated:%x" */
/* 0x0020476F: "x calculated:%x" */
/* 0x00204770: " calculated:%x" */
/* 0x00204771: "calculated:%x" */
/* 0x00204772: "alculated:%x" */
/* 0x00204773: "lculated:%x" */
/* 0x00204774: "culated:%x" */
/* 0x00204775: "ulated:%x" */
/* 0x00204776: "lated:%x" */
/* 0x00204777: "ated:%x" */
/* 0x00204778: "ted:%x" */
/* 0x00204779: "ed:%x" */
/* 0x0020477A: "d:%x" */
/* 0x00204780: "send_status failed" */
/* 0x00204781: "end_status failed" */
/* 0x00204782: "nd_status failed" */
/* 0x00204783: "d_status failed" */
/* 0x00204784: "_status failed" */
/* 0x00204785: "status failed" */
/* 0x00204786: "tatus failed" */
/* 0x00204787: "atus failed" */
/* 0x00204788: "tus failed" */
/* 0x00204789: "us failed" */
/* 0x0020478A: "s failed" */
/* 0x0020478B: " failed" */
/* 0x0020478C: "failed" */
/* 0x0020478D: "ailed" */
/* 0x0020478E: "iled" */
/* 0x00204794: "send_status %d" */
/* 0x00204795: "end_status %d" */
/* 0x00204796: "nd_status %d" */
/* 0x00204797: "d_status %d" */
/* 0x00204798: "_status %d" */
/* 0x00204799: "status %d" */
/* 0x0020479A: "tatus %d" */
/* 0x0020479B: "atus %d" */
/* 0x0020479C: "tus %d" */
/* 0x0020479D: "us %d" */
/* 0x0020479E: "s %d" */
/* 0x002047A4: "Command:%d State:%d" */
/* 0x002047A5: "ommand:%d State:%d" */
/* 0x002047A6: "mmand:%d State:%d" */
/* 0x002047A7: "mand:%d State:%d" */
/* 0x002047A8: "and:%d State:%d" */
/* 0x002047A9: "nd:%d State:%d" */
/* 0x002047AA: "d:%d State:%d" */
/* 0x002047AB: ":%d State:%d" */
/* 0x002047AC: "%d State:%d" */
/* 0x002047AD: "d State:%d" */
/* 0x002047AE: " State:%d" */
/* 0x002047AF: "State:%d" */
/* 0x002047B0: "tate:%d" */
/* 0x002047B1: "ate:%d" */
/* 0x002047B2: "te:%d" */
/* 0x002047B3: "e:%d" */
/* 0x002047B9: "Bad Download len:%d" */
/* 0x002047BA: "ad Download len:%d" */
/* 0x002047BB: "d Download len:%d" */
/* 0x002047BC: " Download len:%d" */
/* 0x002047BD: "Download len:%d" */
/* 0x002047BE: "ownload len:%d" */
/* 0x002047BF: "wnload len:%d" */
/* 0x002047C0: "nload len:%d" */
/* 0x002047C1: "load len:%d" */
/* 0x002047C2: "oad len:%d" */
/* 0x002047C3: "ad len:%d" */
/* 0x002047C4: "d len:%d" */
/* 0x002047C5: " len:%d" */
/* 0x002047C6: "len:%d" */
/* 0x002047C7: "en:%d" */
/* 0x002047C8: "n:%d" */
/* 0x002047CE: "state:%d total_len:%d" */
/* 0x002047CF: "tate:%d total_len:%d" */
/* 0x002047D0: "ate:%d total_len:%d" */
/* 0x002047D1: "te:%d total_len:%d" */
/* 0x002047D2: "e:%d total_len:%d" */
/* 0x002047D3: ":%d total_len:%d" */
/* 0x002047D4: "%d total_len:%d" */
/* 0x002047D5: "d total_len:%d" */
/* 0x002047D6: " total_len:%d" */
/* 0x002047D7: "total_len:%d" */
/* 0x002047D8: "otal_len:%d" */
/* 0x002047D9: "tal_len:%d" */
/* 0x002047DA: "al_len:%d" */
/* 0x002047DB: "l_len:%d" */
/* 0x002047DC: "_len:%d" */
/* 0x002047DD: "len:%d" */
/* 0x002047DE: "en:%d" */
/* 0x002047DF: "n:%d" */
/* 0x002047E5: "Bad Verify len:%d" */
/* 0x002047E6: "ad Verify len:%d" */
/* 0x002047E7: "d Verify len:%d" */
/* 0x002047E8: " Verify len:%d" */
/* 0x002047E9: "Verify len:%d" */
/* 0x002047EA: "erify len:%d" */
/* 0x002047EB: "rify len:%d" */
/* 0x002047EC: "ify len:%d" */
/* 0x002047ED: "fy len:%d" */
/* 0x002047EE: "y len:%d" */
/* 0x002047EF: " len:%d" */
/* 0x002047F0: "len:%d" */
/* 0x002047F1: "en:%d" */
/* 0x002047F2: "n:%d" */
/* 0x002047F8: "Too much data offsets:%d + %d total:%d len:%d" */
/* 0x002047F9: "oo much data offsets:%d + %d total:%d len:%d" */
/* 0x002047FA: "o much data offsets:%d + %d total:%d len:%d" */
/* 0x002047FB: " much data offsets:%d + %d total:%d len:%d" */
/* 0x002047FC: "much data offsets:%d + %d total:%d len:%d" */
/* 0x002047FD: "uch data offsets:%d + %d total:%d len:%d" */
/* 0x002047FE: "ch data offsets:%d + %d total:%d len:%d" */
/* 0x002047FF: "h data offsets:%d + %d total:%d len:%d" */
/* 0x00204800: " data offsets:%d + %d total:%d len:%d" */
/* 0x00204801: "data offsets:%d + %d total:%d len:%d" */
/* 0x00204802: "ata offsets:%d + %d total:%d len:%d" */
/* 0x00204803: "ta offsets:%d + %d total:%d len:%d" */
/* 0x00204804: "a offsets:%d + %d total:%d len:%d" */
/* 0x00204805: " offsets:%d + %d total:%d len:%d" */
/* 0x00204806: "offsets:%d + %d total:%d len:%d" */
/* 0x00204807: "ffsets:%d + %d total:%d len:%d" */
/* 0x00204808: "fsets:%d + %d total:%d len:%d" */
/* 0x00204809: "sets:%d + %d total:%d len:%d" */
/* 0x0020480A: "ets:%d + %d total:%d len:%d" */
/* 0x0020480B: "ts:%d + %d total:%d len:%d" */
/* 0x0020480C: "s:%d + %d total:%d len:%d" */
/* 0x0020480D: ":%d + %d total:%d len:%d" */
/* 0x0020480E: "%d + %d total:%d len:%d" */
/* 0x0020480F: "d + %d total:%d len:%d" */
/* 0x00204810: " + %d total:%d len:%d" */
/* 0x00204811: "+ %d total:%d len:%d" */
/* 0x00204812: " %d total:%d len:%d" */
/* 0x00204813: "%d total:%d len:%d" */
/* 0x00204814: "d total:%d len:%d" */
/* 0x00204815: " total:%d len:%d" */
/* 0x00204816: "total:%d len:%d" */
/* 0x00204817: "otal:%d len:%d" */
/* 0x00204818: "tal:%d len:%d" */
/* 0x00204819: "al:%d len:%d" */
/* 0x0020481A: "l:%d len:%d" */
/* 0x0020481B: ":%d len:%d" */
/* 0x0020481C: "%d len:%d" */
/* 0x0020481D: "d len:%d" */
/* 0x0020481E: " len:%d" */
/* 0x0020481F: "len:%d" */
/* 0x00204820: "en:%d" */
/* 0x00204821: "n:%d" */
/* 0x00204827: "ws_upgrade_init: DS:%04x SS:%04x" */
/* 0x00204828: "s_upgrade_init: DS:%04x SS:%04x" */
/* 0x00204829: "_upgrade_init: DS:%04x SS:%04x" */
/* 0x0020482A: "upgrade_init: DS:%04x SS:%04x" */
/* 0x0020482B: "pgrade_init: DS:%04x SS:%04x" */
/* 0x0020482C: "grade_init: DS:%04x SS:%04x" */
/* 0x0020482D: "rade_init: DS:%04x SS:%04x" */
/* 0x0020482E: "ade_init: DS:%04x SS:%04x" */
/* 0x0020482F: "de_init: DS:%04x SS:%04x" */
/* 0x00204830: "e_init: DS:%04x SS:%04x" */
/* 0x00204831: "_init: DS:%04x SS:%04x" */
/* 0x00204832: "init: DS:%04x SS:%04x" */
/* 0x00204833: "nit: DS:%04x SS:%04x" */
/* 0x00204834: "it: DS:%04x SS:%04x" */
/* 0x00204835: "t: DS:%04x SS:%04x" */
/* 0x00204836: ": DS:%04x SS:%04x" */
/* 0x00204837: " DS:%04x SS:%04x" */
/* 0x00204838: "DS:%04x SS:%04x" */
/* 0x00204839: "S:%04x SS:%04x" */
/* 0x0020483A: ":%04x SS:%04x" */
/* 0x0020483B: "%04x SS:%04x" */
/* 0x0020483C: "04x SS:%04x" */
/* 0x0020483D: "4x SS:%04x" */
/* 0x0020483E: "x SS:%04x" */
/* 0x0020483F: " SS:%04x" */
/* 0x00204840: "SS:%04x" */
/* 0x00204841: "S:%04x" */
/* 0x00204842: ":%04x" */
/* 0x00204843: "%04x" */
/* 0x00204848: "WARNING: Upgrade will fail - active DS is not one of the expected locations." */
/* 0x00204849: "ARNING: Upgrade will fail - active DS is not one of the expected locations." */
/* 0x0020484A: "RNING: Upgrade will fail - active DS is not one of the expected locations." */
/* 0x0020484B: "NING: Upgrade will fail - active DS is not one of the expected locations." */
/* 0x0020484C: "ING: Upgrade will fail - active DS is not one of the expected locations." */
/* 0x0020484D: "NG: Upgrade will fail - active DS is not one of the expected locations." */
/* 0x0020484E: "G: Upgrade will fail - active DS is not one of the expected locations." */
/* 0x0020484F: ": Upgrade will fail - active DS is not one of the expected locations." */
/* 0x00204850: " Upgrade will fail - active DS is not one of the expected locations." */
/* 0x00204851: "Upgrade will fail - active DS is not one of the expected locations." */
/* 0x00204852: "pgrade will fail - active DS is not one of the expected locations." */
/* 0x00204853: "grade will fail - active DS is not one of the expected locations." */
/* 0x00204854: "rade will fail - active DS is not one of the expected locations." */
/* 0x00204855: "ade will fail - active DS is not one of the expected locations." */
/* 0x00204856: "de will fail - active DS is not one of the expected locations." */
/* 0x00204857: "e will fail - active DS is not one of the expected locations." */
/* 0x00204858: " will fail - active DS is not one of the expected locations." */
/* 0x00204859: "will fail - active DS is not one of the expected locations." */
/* 0x0020485A: "ill fail - active DS is not one of the expected locations." */
/* 0x0020485B: "ll fail - active DS is not one of the expected locations." */
/* 0x0020485C: "l fail - active DS is not one of the expected locations." */
/* 0x0020485D: " fail - active DS is not one of the expected locations." */
/* 0x0020485E: "fail - active DS is not one of the expected locations." */
/* 0x0020485F: "ail - active DS is not one of the expected locations." */
/* 0x00204860: "il - active DS is not one of the expected locations." */
/* 0x00204861: "l - active DS is not one of the expected locations." */
/* 0x00204862: " - active DS is not one of the expected locations." */
/* 0x00204863: "- active DS is not one of the expected locations." */
/* 0x00204864: " active DS is not one of the expected locations." */
/* 0x00204865: "active DS is not one of the expected locations." */
/* 0x00204866: "ctive DS is not one of the expected locations." */
/* 0x00204867: "tive DS is not one of the expected locations." */
/* 0x00204868: "ive DS is not one of the expected locations." */
/* 0x00204869: "ve DS is not one of the expected locations." */
/* 0x0020486A: "e DS is not one of the expected locations." */
/* 0x0020486B: " DS is not one of the expected locations." */
/* 0x0020486C: "DS is not one of the expected locations." */
/* 0x0020486D: "S is not one of the expected locations." */
/* 0x0020486E: " is not one of the expected locations." */
/* 0x0020486F: "is not one of the expected locations." */
/* 0x00204870: "s not one of the expected locations." */
/* 0x00204871: " not one of the expected locations." */
/* 0x00204872: "not one of the expected locations." */
/* 0x00204873: "ot one of the expected locations." */
/* 0x00204874: "t one of the expected locations." */
/* 0x00204875: " one of the expected locations." */
/* 0x00204876: "one of the expected locations." */
/* 0x00204877: "ne of the expected locations." */
/* 0x00204878: "e of the expected locations." */
/* 0x00204879: " of the expected locations." */
/* 0x0020487A: "of the expected locations." */
/* 0x0020487B: "f the expected locations." */
/* 0x0020487C: " the expected locations." */
/* 0x0020487D: "the expected locations." */
/* 0x0020487E: "he expected locations." */
/* 0x0020487F: "e expected locations." */
/* 0x00204880: " expected locations." */
/* 0x00204881: "expected locations." */
/* 0x00204882: "xpected locations." */
/* 0x00204883: "pected locations." */
/* 0x00204884: "ected locations." */
/* 0x00204885: "cted locations." */
/* 0x00204886: "ted locations." */
/* 0x00204887: "ed locations." */
/* 0x00204888: "d locations." */
/* 0x00204889: " locations." */
/* 0x0020488A: "locations." */
/* 0x0020488B: "ocations." */
/* 0x0020488C: "cations." */
/* 0x0020488D: "ations." */
/* 0x0020488E: "tions." */
/* 0x0020488F: "ions." */
/* 0x00204890: "ons." */
/* 0x00204896: "WARNING: Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x00204897: "ARNING: Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x00204898: "RNING: Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x00204899: "NING: Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x0020489A: "ING: Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x0020489B: "NG: Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x0020489C: "G: Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x0020489D: ": Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x0020489E: " Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x0020489F: "Are ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A0: "re ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A1: "e ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A2: " ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A3: "ConfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A4: "onfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A5: "nfigDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A6: "figDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A7: "igDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A8: "gDSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048A9: "DSLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048AA: "SLocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048AB: "Location and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048AC: "ocation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048AD: "cation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048AE: "ation and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048AF: "tion and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B0: "ion and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B1: "on and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B2: "n and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B3: " and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B4: "and DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B5: "nd DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B6: "d DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B7: " DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B8: "DLConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048B9: "LConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048BA: "ConfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048BB: "onfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048BC: "nfigVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048BD: "figVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048BE: "igVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048BF: "gVSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C0: "VSLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C1: "SLocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C2: "Location in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C3: "ocation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C4: "cation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C5: "ation in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C6: "tion in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C7: "ion in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C8: "on in the .btp set up as in nv_loc_len[]?" */
/* 0x002048C9: "n in the .btp set up as in nv_loc_len[]?" */
/* 0x002048CA: " in the .btp set up as in nv_loc_len[]?" */
/* 0x002048CB: "in the .btp set up as in nv_loc_len[]?" */
/* 0x002048CC: "n the .btp set up as in nv_loc_len[]?" */
/* 0x002048CD: " the .btp set up as in nv_loc_len[]?" */
/* 0x002048CE: "the .btp set up as in nv_loc_len[]?" */
/* 0x002048CF: "he .btp set up as in nv_loc_len[]?" */
/* 0x002048D0: "e .btp set up as in nv_loc_len[]?" */
/* 0x002048D1: " .btp set up as in nv_loc_len[]?" */
/* 0x002048D2: ".btp set up as in nv_loc_len[]?" */
/* 0x002048D3: "btp set up as in nv_loc_len[]?" */
/* 0x002048D4: "tp set up as in nv_loc_len[]?" */
/* 0x002048D5: "p set up as in nv_loc_len[]?" */
/* 0x002048D6: " set up as in nv_loc_len[]?" */
/* 0x002048D7: "set up as in nv_loc_len[]?" */
/* 0x002048D8: "et up as in nv_loc_len[]?" */
/* 0x002048D9: "t up as in nv_loc_len[]?" */
/* 0x002048DA: " up as in nv_loc_len[]?" */
/* 0x002048DB: "up as in nv_loc_len[]?" */
/* 0x002048DC: "p as in nv_loc_len[]?" */
/* 0x002048DD: " as in nv_loc_len[]?" */
/* 0x002048DE: "as in nv_loc_len[]?" */
/* 0x002048DF: "s in nv_loc_len[]?" */
/* 0x002048E0: " in nv_loc_len[]?" */
/* 0x002048E1: "in nv_loc_len[]?" */
/* 0x002048E2: "n nv_loc_len[]?" */
/* 0x002048E3: " nv_loc_len[]?" */
/* 0x002048E4: "nv_loc_len[]?" */
/* 0x002048E5: "v_loc_len[]?" */
/* 0x002048E6: "_loc_len[]?" */
/* 0x002048E7: "loc_len[]?" */
/* 0x002048E8: "oc_len[]?" */
/* 0x002048E9: "c_len[]?" */
/* 0x002048EA: "_len[]?" */
/* 0x002048EB: "len[]?" */
/* 0x002048EC: "en[]?" */
/* 0x002048ED: "n[]?" */
/* 0x002048F3: "Active DS is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048F4: "ctive DS is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048F5: "tive DS is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048F6: "ive DS is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048F7: "ve DS is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048F8: "e DS is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048F9: " DS is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048FA: "DS is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048FB: "S is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048FC: " is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048FD: "is not DS1 and not DS2. Cannot upgrade." */
/* 0x002048FE: "s not DS1 and not DS2. Cannot upgrade." */
/* 0x002048FF: " not DS1 and not DS2. Cannot upgrade." */
/* 0x00204900: "not DS1 and not DS2. Cannot upgrade." */
/* 0x00204901: "ot DS1 and not DS2. Cannot upgrade." */
/* 0x00204902: "t DS1 and not DS2. Cannot upgrade." */
/* 0x00204903: " DS1 and not DS2. Cannot upgrade." */
/* 0x00204904: "DS1 and not DS2. Cannot upgrade." */
/* 0x00204905: "S1 and not DS2. Cannot upgrade." */
/* 0x00204906: "1 and not DS2. Cannot upgrade." */
/* 0x00204907: " and not DS2. Cannot upgrade." */
/* 0x00204908: "and not DS2. Cannot upgrade." */
/* 0x00204909: "nd not DS2. Cannot upgrade." */
/* 0x0020490A: "d not DS2. Cannot upgrade." */
/* 0x0020490B: " not DS2. Cannot upgrade." */
/* 0x0020490C: "not DS2. Cannot upgrade." */
/* 0x0020490D: "ot DS2. Cannot upgrade." */
/* 0x0020490E: "t DS2. Cannot upgrade." */
/* 0x0020490F: " DS2. Cannot upgrade." */
/* 0x00204910: "DS2. Cannot upgrade." */
/* 0x00204911: "S2. Cannot upgrade." */
/* 0x00204912: "2. Cannot upgrade." */
/* 0x00204913: ". Cannot upgrade." */
/* 0x00204914: " Cannot upgrade." */
/* 0x00204915: "Cannot upgrade." */
/* 0x00204916: "annot upgrade." */
/* 0x00204917: "nnot upgrade." */
/* 0x00204918: "not upgrade." */
/* 0x00204919: "ot upgrade." */
/* 0x0020491A: "t upgrade." */
/* 0x0020491B: " upgrade." */
/* 0x0020491C: "upgrade." */
/* 0x0020491D: "pgrade." */
/* 0x0020491E: "grade." */
/* 0x0020491F: "rade." */
/* 0x00204920: "ade." */
/* 0x00204926: "Active: 0x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204927: "ctive: 0x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204928: "tive: 0x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204929: "ive: 0x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x0020492A: "ve: 0x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x0020492B: "e: 0x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x0020492C: ": 0x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x0020492D: " 0x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x0020492E: "0x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x0020492F: "x%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204930: "%08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204931: "08X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204932: "8X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204933: "X, Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204934: ", Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204935: " Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204936: "Upgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204937: "pgrade: 0x%08X, UG length: 0x%08X" */
/* 0x00204938: "grade: 0x%08X, UG length: 0x%08X" */
/* 0x00204939: "rade: 0x%08X, UG length: 0x%08X" */
/* 0x0020493A: "ade: 0x%08X, UG length: 0x%08X" */
/* 0x0020493B: "de: 0x%08X, UG length: 0x%08X" */
/* 0x0020493C: "e: 0x%08X, UG length: 0x%08X" */
/* 0x0020493D: ": 0x%08X, UG length: 0x%08X" */
/* 0x0020493E: " 0x%08X, UG length: 0x%08X" */
/* 0x0020493F: "0x%08X, UG length: 0x%08X" */
/* 0x00204940: "x%08X, UG length: 0x%08X" */
/* 0x00204941: "%08X, UG length: 0x%08X" */
/* 0x00204942: "08X, UG length: 0x%08X" */
/* 0x00204943: "8X, UG length: 0x%08X" */
/* 0x00204944: "X, UG length: 0x%08X" */
/* 0x00204945: ", UG length: 0x%08X" */
/* 0x00204946: " UG length: 0x%08X" */
/* 0x00204947: "UG length: 0x%08X" */
/* 0x00204948: "G length: 0x%08X" */
/* 0x00204949: " length: 0x%08X" */
/* 0x0020494A: "length: 0x%08X" */
/* 0x0020494B: "ength: 0x%08X" */
/* 0x0020494C: "ngth: 0x%08X" */
/* 0x0020494D: "gth: 0x%08X" */
/* 0x0020494E: "th: 0x%08X" */
/* 0x0020494F: "h: 0x%08X" */
/* 0x00204950: ": 0x%08X" */
/* 0x00204951: " 0x%08X" */
/* 0x00204952: "0x%08X" */
/* 0x00204953: "x%08X" */
/* 0x00204954: "%08X" */
/* 0x00204959: "Could not write new SS!" */
/* 0x0020495A: "ould not write new SS!" */
/* 0x0020495B: "uld not write new SS!" */
/* 0x0020495C: "ld not write new SS!" */
/* 0x0020495D: "d not write new SS!" */
/* 0x0020495E: " not write new SS!" */
/* 0x0020495F: "not write new SS!" */
/* 0x00204960: "ot write new SS!" */
/* 0x00204961: "t write new SS!" */
/* 0x00204962: " write new SS!" */
/* 0x00204963: "write new SS!" */
/* 0x00204964: "rite new SS!" */
/* 0x00204965: "ite new SS!" */
/* 0x00204966: "te new SS!" */
/* 0x00204967: "e new SS!" */
/* 0x00204968: " new SS!" */
/* 0x00204969: "new SS!" */
/* 0x0020496A: "ew SS!" */
/* 0x0020496B: "w SS!" */
/* 0x0020496C: " SS!" */
/* 0x00204971: "Could not create upgrade SS" */
/* 0x00204972: "ould not create upgrade SS" */
/* 0x00204973: "uld not create upgrade SS" */
/* 0x00204974: "ld not create upgrade SS" */
/* 0x00204975: "d not create upgrade SS" */
/* 0x00204976: " not create upgrade SS" */
/* 0x00204977: "not create upgrade SS" */
/* 0x00204978: "ot create upgrade SS" */
/* 0x00204979: "t create upgrade SS" */
/* 0x0020497A: " create upgrade SS" */
/* 0x0020497B: "create upgrade SS" */
/* 0x0020497C: "reate upgrade SS" */
/* 0x0020497D: "eate upgrade SS" */
/* 0x0020497E: "ate upgrade SS" */
/* 0x0020497F: "te upgrade SS" */
/* 0x00204980: "e upgrade SS" */
/* 0x00204981: " upgrade SS" */
/* 0x00204982: "upgrade SS" */
/* 0x00204983: "pgrade SS" */
/* 0x00204984: "grade SS" */
/* 0x00204985: "rade SS" */
/* 0x00204986: "ade SS" */
/* 0x00204987: "de SS" */
/* 0x00204988: "e SS" */
/* 0x0020499F: "OeBQ" */
/* 0x00204A07: "nJ`Bn" */
/* 0x00204A08: "J`Bn" */
/* 0x00204A13: "IAfpG" */
/* 0x00204A14: "AfpG" */

// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const char Roboto_Condensed_20[] PROGMEM = {
  0x10, // Width: 16
  0x18, // Height: 24
  0x20, // First Char: 32
  0xE0, // Numbers of Chars: 224

  // Jump Table:
  0xFF, 0xFF, 0x00, 0x05,  // 32:65535
  0x00, 0x00, 0x0C, 0x06,  // 33:0
  0x00, 0x0C, 0x0E, 0x06,  // 34:12
  0x00, 0x1A, 0x1D, 0x0B,  // 35:26
  0x00, 0x37, 0x1B, 0x0A,  // 36:55
  0x00, 0x52, 0x24, 0x0D,  // 37:82
  0x00, 0x76, 0x1E, 0x0B,  // 38:118
  0x00, 0x94, 0x08, 0x04,  // 39:148
  0x00, 0x9C, 0x12, 0x06,  // 40:156
  0x00, 0xAE, 0x0F, 0x06,  // 41:174
  0x00, 0xBD, 0x19, 0x0A,  // 42:189
  0x00, 0xD6, 0x1A, 0x0A,  // 43:214
  0x00, 0xF0, 0x09, 0x04,  // 44:240
  0x00, 0xF9, 0x0E, 0x06,  // 45:249
  0x01, 0x07, 0x09, 0x05,  // 46:263
  0x01, 0x10, 0x13, 0x07,  // 47:272
  0x01, 0x23, 0x1A, 0x0A,  // 48:291
  0x01, 0x3D, 0x15, 0x0B,  // 49:317
  0x01, 0x52, 0x1B, 0x0A,  // 50:338
  0x01, 0x6D, 0x18, 0x09,  // 51:365
  0x01, 0x85, 0x1D, 0x0B,  // 52:389
  0x01, 0xA2, 0x1B, 0x0A,  // 53:418
  0x01, 0xBD, 0x1B, 0x0A,  // 54:445
  0x01, 0xD8, 0x19, 0x0A,  // 55:472
  0x01, 0xF1, 0x1B, 0x0A,  // 56:497
  0x02, 0x0C, 0x1A, 0x0A,  // 57:524
  0x02, 0x26, 0x09, 0x04,  // 58:550
  0x02, 0x2F, 0x09, 0x04,  // 59:559
  0x02, 0x38, 0x18, 0x09,  // 60:568
  0x02, 0x50, 0x17, 0x09,  // 61:592
  0x02, 0x67, 0x17, 0x09,  // 62:615
  0x02, 0x7E, 0x17, 0x09,  // 63:638
  0x02, 0x95, 0x2A, 0x0F,  // 64:661
  0x02, 0xBF, 0x21, 0x0C,  // 65:703
  0x02, 0xE0, 0x1E, 0x0B,  // 66:736
  0x02, 0xFE, 0x1E, 0x0B,  // 67:766
  0x03, 0x1C, 0x20, 0x0C,  // 68:796
  0x03, 0x3C, 0x1E, 0x0A,  // 69:828
  0x03, 0x5A, 0x1C, 0x0A,  // 70:858
  0x03, 0x76, 0x1E, 0x0B,  // 71:886
  0x03, 0x94, 0x21, 0x0D,  // 72:916
  0x03, 0xB5, 0x0C, 0x06,  // 73:949
  0x03, 0xC1, 0x1B, 0x0A,  // 74:961
  0x03, 0xDC, 0x21, 0x0C,  // 75:988
  0x03, 0xFD, 0x1E, 0x0A,  // 76:1021
  0x04, 0x1B, 0x2A, 0x10,  // 77:1051
  0x04, 0x45, 0x21, 0x0D,  // 78:1093
  0x04, 0x66, 0x20, 0x0C,  // 79:1126
  0x04, 0x86, 0x20, 0x0C,  // 80:1158
  0x04, 0xA6, 0x21, 0x0C,  // 81:1190
  0x04, 0xC7, 0x21, 0x0C,  // 82:1223
  0x04, 0xE8, 0x1E, 0x0B,  // 83:1256
  0x05, 0x06, 0x1C, 0x0B,  // 84:1286
  0x05, 0x22, 0x1E, 0x0B,  // 85:1314
  0x05, 0x40, 0x1F, 0x0B,  // 86:1344
  0x05, 0x5F, 0x2B, 0x0F,  // 87:1375
  0x05, 0x8A, 0x1E, 0x0B,  // 88:1418
  0x05, 0xA8, 0x1C, 0x0A,  // 89:1448
  0x05, 0xC4, 0x1E, 0x0B,  // 90:1476
  0x05, 0xE2, 0x0C, 0x05,  // 91:1506
  0x05, 0xEE, 0x15, 0x07,  // 92:1518
  0x06, 0x03, 0x0C, 0x05,  // 93:1539
  0x06, 0x0F, 0x14, 0x07,  // 94:1551
  0x06, 0x23, 0x1B, 0x0A,  // 95:1571
  0x06, 0x3E, 0x0A, 0x06,  // 96:1598
  0x06, 0x48, 0x18, 0x09,  // 97:1608
  0x06, 0x60, 0x1B, 0x0A,  // 98:1632
  0x06, 0x7B, 0x1B, 0x0A,  // 99:1659
  0x06, 0x96, 0x1B, 0x0A,  // 100:1686
  0x06, 0xB1, 0x1B, 0x0A,  // 101:1713
  0x06, 0xCC, 0x13, 0x07,  // 102:1740
  0x06, 0xDF, 0x1B, 0x0A,  // 103:1759
  0x06, 0xFA, 0x18, 0x09,  // 104:1786
  0x07, 0x12, 0x09, 0x04,  // 105:1810
  0x07, 0x1B, 0x09, 0x04,  // 106:1819
  0x07, 0x24, 0x1B, 0x09,  // 107:1828
  0x07, 0x3F, 0x09, 0x04,  // 108:1855
  0x07, 0x48, 0x27, 0x0E,  // 109:1864
  0x07, 0x6F, 0x18, 0x09,  // 110:1903
  0x07, 0x87, 0x1B, 0x0A,  // 111:1927
  0x07, 0xA2, 0x1B, 0x0A,  // 112:1954
  0x07, 0xBD, 0x1B, 0x0A,  // 113:1981
  0x07, 0xD8, 0x11, 0x06,  // 114:2008
  0x07, 0xE9, 0x18, 0x09,  // 115:2025
  0x08, 0x01, 0x12, 0x07,  // 116:2049
  0x08, 0x13, 0x18, 0x09,  // 117:2067
  0x08, 0x2B, 0x17, 0x09,  // 118:2091
  0x08, 0x42, 0x23, 0x0D,  // 119:2114
  0x08, 0x65, 0x18, 0x09,  // 120:2149
  0x08, 0x7D, 0x17, 0x08,  // 121:2173
  0x08, 0x94, 0x18, 0x09,  // 122:2196
  0x08, 0xAC, 0x0F, 0x06,  // 123:2220
  0x08, 0xBB, 0x0C, 0x06,  // 124:2235
  0x08, 0xC7, 0x11, 0x06,  // 125:2247
  0x08, 0xD8, 0x20, 0x0C,  // 126:2264
  0x08, 0xF8, 0x15, 0x08,  // 127:2296
  0x09, 0x0D, 0x15, 0x08,  // 128:2317
  0x09, 0x22, 0x15, 0x08,  // 129:2338
  0x09, 0x37, 0x15, 0x08,  // 130:2359
  0x09, 0x4C, 0x15, 0x08,  // 131:2380
  0x09, 0x61, 0x15, 0x08,  // 132:2401
  0x09, 0x76, 0x15, 0x08,  // 133:2422
  0x09, 0x8B, 0x15, 0x08,  // 134:2443
  0x09, 0xA0, 0x15, 0x08,  // 135:2464
  0x09, 0xB5, 0x15, 0x08,  // 136:2485
  0x09, 0xCA, 0x15, 0x08,  // 137:2506
  0x09, 0xDF, 0x15, 0x08,  // 138:2527
  0x09, 0xF4, 0x15, 0x08,  // 139:2548
  0x0A, 0x09, 0x15, 0x08,  // 140:2569
  0x0A, 0x1E, 0x15, 0x08,  // 141:2590
  0x0A, 0x33, 0x15, 0x08,  // 142:2611
  0x0A, 0x48, 0x15, 0x08,  // 143:2632
  0x0A, 0x5D, 0x15, 0x08,  // 144:2653
  0x0A, 0x72, 0x15, 0x08,  // 145:2674
  0x0A, 0x87, 0x15, 0x08,  // 146:2695
  0x0A, 0x9C, 0x15, 0x08,  // 147:2716
  0x0A, 0xB1, 0x15, 0x08,  // 148:2737
  0x0A, 0xC6, 0x15, 0x08,  // 149:2758
  0x0A, 0xDB, 0x15, 0x08,  // 150:2779
  0x0A, 0xF0, 0x15, 0x08,  // 151:2800
  0x0B, 0x05, 0x15, 0x08,  // 152:2821
  0x0B, 0x1A, 0x15, 0x08,  // 153:2842
  0x0B, 0x2F, 0x15, 0x08,  // 154:2863
  0x0B, 0x44, 0x15, 0x08,  // 155:2884
  0x0B, 0x59, 0x15, 0x08,  // 156:2905
  0x0B, 0x6E, 0x15, 0x08,  // 157:2926
  0x0B, 0x83, 0x15, 0x08,  // 158:2947
  0x0B, 0x98, 0x15, 0x08,  // 159:2968
  0xFF, 0xFF, 0x00, 0x05,  // 160:65535
  0x0B, 0xAD, 0x09, 0x04,  // 161:2989
  0x0B, 0xB6, 0x1B, 0x0A,  // 162:2998
  0x0B, 0xD1, 0x1E, 0x0B,  // 163:3025
  0x0B, 0xEF, 0x27, 0x0E,  // 164:3055
  0x0C, 0x16, 0x1C, 0x0A,  // 165:3094
  0x0C, 0x32, 0x09, 0x05,  // 166:3122
  0x0C, 0x3B, 0x1E, 0x0B,  // 167:3131
  0x0C, 0x59, 0x13, 0x08,  // 168:3161
  0x0C, 0x6C, 0x2C, 0x10,  // 169:3180
  0x0C, 0x98, 0x11, 0x07,  // 170:3224
  0x0C, 0xA9, 0x15, 0x09,  // 171:3241
  0x0C, 0xBE, 0x17, 0x0A,  // 172:3262
  0x0C, 0xD5, 0x0E, 0x06,  // 173:3285
  0x0C, 0xE3, 0x2C, 0x10,  // 174:3299
  0x0D, 0x0F, 0x13, 0x08,  // 175:3343
  0x0D, 0x22, 0x10, 0x07,  // 176:3362
  0x0D, 0x32, 0x1A, 0x0A,  // 177:3378
  0x0D, 0x4C, 0x11, 0x07,  // 178:3404
  0x0D, 0x5D, 0x11, 0x07,  // 179:3421
  0x0D, 0x6E, 0x0D, 0x06,  // 180:3438
  0x0D, 0x7B, 0x18, 0x09,  // 181:3451
  0x0D, 0x93, 0x15, 0x09,  // 182:3475
  0x0D, 0xA8, 0x08, 0x04,  // 183:3496
  0x0D, 0xB0, 0x0C, 0x05,  // 184:3504
  0x0D, 0xBC, 0x0E, 0x07,  // 185:3516
  0x0D, 0xCA, 0x14, 0x08,  // 186:3530
  0x0D, 0xDE, 0x17, 0x09,  // 187:3550
  0x0D, 0xF5, 0x21, 0x0C,  // 188:3573
  0x0E, 0x16, 0x24, 0x0D,  // 189:3606
  0x0E, 0x3A, 0x27, 0x0E,  // 190:3642
  0x0E, 0x61, 0x18, 0x09,  // 191:3681
  0x0E, 0x79, 0x21, 0x0C,  // 192:3705
  0x0E, 0x9A, 0x21, 0x0C,  // 193:3738
  0x0E, 0xBB, 0x21, 0x0B,  // 194:3771
  0x0E, 0xDC, 0x21, 0x0C,  // 195:3804
  0x0E, 0xFD, 0x21, 0x0C,  // 196:3837
  0x0F, 0x1E, 0x21, 0x0C,  // 197:3870
  0x0F, 0x3F, 0x30, 0x10,  // 198:3903
  0x0F, 0x6F, 0x1D, 0x0B,  // 199:3951
  0x0F, 0x8C, 0x1E, 0x0A,  // 200:3980
  0x0F, 0xAA, 0x1E, 0x0A,  // 201:4010
  0x0F, 0xC8, 0x1E, 0x0A,  // 202:4040
  0x0F, 0xE6, 0x1E, 0x0A,  // 203:4070
  0x10, 0x04, 0x0C, 0x06,  // 204:4100
  0x10, 0x10, 0x10, 0x06,  // 205:4112
  0x10, 0x20, 0x0D, 0x05,  // 206:4128
  0x10, 0x2D, 0x0A, 0x04,  // 207:4141
  0x10, 0x37, 0x20, 0x0C,  // 208:4151
  0x10, 0x57, 0x21, 0x0D,  // 209:4183
  0x10, 0x78, 0x20, 0x0C,  // 210:4216
  0x10, 0x98, 0x20, 0x0C,  // 211:4248
  0x10, 0xB8, 0x20, 0x0C,  // 212:4280
  0x10, 0xD8, 0x20, 0x0C,  // 213:4312
  0x10, 0xF8, 0x20, 0x0C,  // 214:4344
  0x11, 0x18, 0x18, 0x09,  // 215:4376
  0x11, 0x30, 0x20, 0x0C,  // 216:4400
  0x11, 0x50, 0x1E, 0x0B,  // 217:4432
  0x11, 0x6E, 0x1E, 0x0B,  // 218:4462
  0x11, 0x8C, 0x1E, 0x0B,  // 219:4492
  0x11, 0xAA, 0x1E, 0x0B,  // 220:4522
  0x11, 0xC8, 0x1C, 0x0A,  // 221:4552
  0x11, 0xE4, 0x1A, 0x0A,  // 222:4580
  0x11, 0xFE, 0x1B, 0x0A,  // 223:4606
  0x12, 0x19, 0x18, 0x09,  // 224:4633
  0x12, 0x31, 0x18, 0x09,  // 225:4657
  0x12, 0x49, 0x18, 0x09,  // 226:4681
  0x12, 0x61, 0x18, 0x09,  // 227:4705
  0x12, 0x79, 0x18, 0x09,  // 228:4729
  0x12, 0x91, 0x18, 0x09,  // 229:4753
  0x12, 0xA9, 0x2A, 0x0F,  // 230:4777
  0x12, 0xD3, 0x1B, 0x0A,  // 231:4819
  0x12, 0xEE, 0x1B, 0x0A,  // 232:4846
  0x13, 0x09, 0x1B, 0x0A,  // 233:4873
  0x13, 0x24, 0x1A, 0x0A,  // 234:4900
  0x13, 0x3E, 0x1B, 0x0A,  // 235:4926
  0x13, 0x59, 0x09, 0x05,  // 236:4953
  0x13, 0x62, 0x0D, 0x05,  // 237:4962
  0x13, 0x6F, 0x0D, 0x05,  // 238:4975
  0x13, 0x7C, 0x0A, 0x04,  // 239:4988
  0x13, 0x86, 0x1A, 0x0A,  // 240:4998
  0x13, 0xA0, 0x18, 0x09,  // 241:5024
  0x13, 0xB8, 0x1B, 0x0A,  // 242:5048
  0x13, 0xD3, 0x1B, 0x0A,  // 243:5075
  0x13, 0xEE, 0x1B, 0x0A,  // 244:5102
  0x14, 0x09, 0x1B, 0x0A,  // 245:5129
  0x14, 0x24, 0x1B, 0x0A,  // 246:5156
  0x14, 0x3F, 0x1A, 0x0A,  // 247:5183
  0x14, 0x59, 0x1A, 0x0A,  // 248:5209
  0x14, 0x73, 0x18, 0x09,  // 249:5235
  0x14, 0x8B, 0x18, 0x09,  // 250:5259
  0x14, 0xA3, 0x18, 0x09,  // 251:5283
  0x14, 0xBB, 0x18, 0x09,  // 252:5307
  0x14, 0xD3, 0x17, 0x08,  // 253:5331
  0x14, 0xEA, 0x1B, 0x0A,  // 254:5354
  0x15, 0x05, 0x14, 0x08,  // 255:5381

  // Font Data:
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x04,0xF0,0x3F,0x04,  // 33
  0x00,0x00,0x00,0xF0,0x01,0x00,0xF0,0x01,0x00,0xF0,0x01,0x00,0xF0,0x01,  // 34
  0x00,0x00,0x00,0x00,0x41,0x00,0x00,0xC1,0x07,0x00,0xFF,0x01,0xF0,0x4F,0x00,0x30,0x41,0x00,0x00,0xC1,0x07,0x80,0xFF,0x00,0xF0,0x43,0x00,0x10,0x41, // 35
  0x00,0x00,0x00,0xC0,0x87,0x03,0xE0,0x8F,0x07,0x70,0x0C,0x06,0x3C,0x18,0x1C,0x3C,0x18,0x1C,0x70,0x30,0x06,0xE0,0xF1,0x07,0xC0,0xE1,0x03, // 36
  0x00,0x00,0x00,0xE0,0x03,0x00,0xF0,0x07,0x00,0x10,0x04,0x03,0xF0,0xC7,0x00,0xE0,0x33,0x00,0x00,0xEC,0x03,0x00,0xF3,0x07,0xC0,0x10,0x04,0x00,0x10,0x04,0x00,0xF0,0x07,0x00,0xE0,0x03,  // 37
  0x00,0x00,0x00,0x00,0xC0,0x01,0xC0,0xF3,0x03,0xF0,0x37,0x06,0x10,0x1C,0x04,0x10,0x7E,0x04,0xF0,0xE7,0x07,0xE0,0x81,0x03,0x00,0xE0,0x07,0x00,0xE0,0x04,  // 38
  0x00,0x00,0x00,0xF0,0x01,0x00,0xF0,0x01,  // 39
  0x00,0x00,0x00,0x00,0xFE,0x01,0xC0,0xFF,0x0F,0xE0,0x00,0x3C,0x38,0x00,0x60,0x08,0x00,0x40,  // 40
  0x08,0x00,0x40,0x38,0x00,0x60,0xE0,0x01,0x3C,0xC0,0xFF,0x0F,0x00,0xFE,0x01, // 41
  0x00,0x00,0x00,0xC0,0x00,0x00,0x80,0x0C,0x00,0x80,0x0F,0x00,0xF0,0x03,0x00,0xF0,0x03,0x00,0x80,0x0F,0x00,0x80,0x08,0x00,0x80, // 42
  0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0xFF,0x03,0x00,0xFF,0x03,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,  // 43
  0x00,0x00,0x20,0x00,0x00,0x3E,0x00,0x00,0x0E, // 44
  0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,  // 45
  0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x04, // 46
  0x00,0x00,0x08,0x00,0x00,0x0F,0x00,0xE0,0x03,0x00,0x3C,0x00,0x80,0x07,0x00,0xF0,0x00,0x00,0x10, // 47
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x30,0x00,0x06,0x10,0x00,0x04,0x10,0x00,0x04,0x30,0x00,0x06,0xE0,0xFF,0x03,0x80,0xFF,  // 48
  0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0xE0,0xFF,0x07,0xF0,0xFF,0x07, // 49
  0x00,0x00,0x00,0xC0,0x00,0x06,0xE0,0x00,0x07,0x30,0x80,0x07,0x10,0xE0,0x05,0x10,0x70,0x04,0x30,0x3C,0x04,0xE0,0x0F,0x04,0xC0,0x03,0x04, // 50
  0x00,0x00,0x00,0xC0,0x80,0x01,0xE0,0x80,0x03,0x30,0x08,0x06,0x10,0x08,0x04,0x30,0x1C,0x06,0xE0,0xF7,0x03,0xC0,0xE3,0x01,  // 51
  0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x78,0x00,0x00,0x4E,0x00,0x80,0x43,0x00,0xE0,0x40,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x00,0x40,0x00,0x00,0x40, // 52
  0x00,0x00,0x00,0x00,0x80,0x01,0xF0,0x8F,0x03,0x70,0x04,0x06,0x10,0x04,0x04,0x10,0x04,0x04,0x10,0x0C,0x06,0x10,0xF8,0x03,0x10,0xF0,0x01, // 53
  0x00,0x00,0x00,0x00,0xFF,0x00,0xC0,0xFF,0x03,0xE0,0x0C,0x06,0x30,0x04,0x04,0x10,0x04,0x04,0x10,0x0C,0x06,0x00,0xF8,0x03,0x00,0xF0,0x01, // 54
  0x00,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x07,0x10,0xE0,0x03,0x10,0x7C,0x00,0x90,0x0F,0x00,0xF0,0x01,0x00,0x30, // 55
  0x00,0x00,0x00,0xC0,0xE3,0x01,0xE0,0xF7,0x03,0x30,0x1C,0x06,0x10,0x08,0x04,0x30,0x0C,0x04,0xE0,0x17,0x06,0xC0,0xF3,0x03,0x00,0xE0,0x01, // 56
  0x00,0x00,0x00,0xC0,0x0F,0x00,0xE0,0x1F,0x00,0x30,0x30,0x04,0x10,0x20,0x04,0x10,0x20,0x06,0x70,0x10,0x03,0xE0,0xFF,0x01,0x80,0x7F,  // 57
  0x00,0x00,0x00,0x00,0x01,0x04,0x00,0x01,0x04, // 58
  0x00,0x00,0x08,0x00,0x81,0x0F,0x00,0x81,0x07, // 59
  0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x38,0x00,0x00,0x6C,0x00,0x00,0x4C,0x00,0x00,0xC6,0x00,0x00,0x86,0x00,0x00,0x83,0x01,  // 60
  0x00,0x00,0x00,0x00,0x44,0x00,0x00,0x44,0x00,0x00,0x44,0x00,0x00,0x44,0x00,0x00,0x44,0x00,0x00,0x44,0x00,0x00,0x44, // 61
  0x00,0x00,0x00,0x00,0x83,0x01,0x00,0xC6,0x00,0x00,0xC6,0x00,0x00,0x6C,0x00,0x00,0x6C,0x00,0x00,0x38,0x00,0x00,0x30, // 62
  0x00,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x30,0xE0,0x04,0x10,0xF8,0x04,0x30,0x1C,0x00,0xE0,0x0F,0x00,0xC0,0x03, // 63
  0x00,0x00,0x00,0x00,0xFC,0x03,0x80,0xFF,0x0F,0xC0,0x03,0x3C,0x60,0x00,0x30,0x20,0xF8,0x63,0x10,0x3C,0x46,0x10,0x06,0x44,0x10,0x02,0x42,0x10,0xFE,0x47,0x20,0x04,0x04,0x60,0x00,0x04,0x80,0x01,0x02,0x00,0xFE,0x01,  // 64
  0x00,0x00,0x00,0x00,0x80,0x07,0x00,0xF0,0x03,0x00,0x7E,0x00,0xC0,0x4F,0x00,0xF0,0x40,0x00,0xF0,0x41,0x00,0x80,0x5F,0x00,0x00,0xFC,0x00,0x00,0xC0,0x07,0x00,0x00,0x06, // 65
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x08,0x04,0x10,0x08,0x04,0x10,0x08,0x04,0x30,0x1C,0x06,0xE0,0xF7,0x03,0xC0,0xE3,0x01,  // 66
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x60,0x00,0x03,0x10,0x00,0x04,0x10,0x00,0x04,0x10,0x00,0x04,0x30,0x00,0x06,0xE0,0xC1,0x03,0xC0,0xC1,0x01,  // 67
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x00,0x04,0x10,0x00,0x04,0x10,0x00,0x04,0x30,0x00,0x06,0x60,0x00,0x03,0xC0,0xFF,0x01,0x80,0xFF,  // 68
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x08,0x04,0x10,0x08,0x04,0x10,0x08,0x04,0x10,0x08,0x04,0x10,0x08,0x04,0x10,0x00,0x04,  // 69
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x08,0x00,0x10,0x08,0x00,0x10,0x08,0x00,0x10,0x08,0x00,0x10,0x08,0x00,0x10,  // 70
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x30,0x00,0x03,0x10,0x00,0x04,0x10,0x00,0x04,0x10,0x10,0x04,0x30,0x10,0x06,0xE0,0xF0,0x07,0xC0,0xF0,0x03,  // 71
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07, // 72
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,  // 73
  0x00,0x00,0x00,0x00,0x80,0x01,0x00,0x80,0x03,0x00,0x00,0x06,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x06,0xF0,0xFF,0x03,0xF0,0xFF,0x01, // 74
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x00,0x18,0x00,0x00,0x0E,0x00,0x00,0x3F,0x00,0xC0,0xF1,0x00,0xE0,0xC0,0x01,0x30,0x00,0x07,0x10,0x00,0x06, // 75
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,  // 76
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0xF0,0x01,0x00,0x80,0x1F,0x00,0x00,0xF8,0x00,0x00,0xC0,0x07,0x00,0xC0,0x07,0x00,0xF8,0x00,0x80,0x1F,0x00,0xF0,0x01,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,  // 77
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0xE0,0x01,0x00,0x80,0x07,0x00,0x00,0x1C,0x00,0x00,0xF0,0x00,0x00,0xC0,0x03,0xF0,0xFF,0x07,0xF0,0xFF,0x07, // 78
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x60,0x00,0x03,0x10,0x00,0x04,0x10,0x00,0x04,0x10,0x00,0x04,0x10,0x00,0x04,0x60,0x00,0x03,0xE0,0xFF,0x03,0x80,0xFF,  // 79
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x10,0x00,0x10,0x10,0x00,0x10,0x10,0x00,0x10,0x10,0x00,0x30,0x18,0x00,0xE0,0x0F,0x00,0xC0,0x07,  // 80
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x60,0x00,0x03,0x10,0x00,0x04,0x10,0x00,0x04,0x10,0x00,0x04,0x10,0x00,0x04,0x60,0x00,0x0F,0xE0,0xFF,0x1B,0x80,0xFF,0x10, // 81
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x10,0x00,0x10,0x10,0x00,0x10,0x30,0x00,0x30,0xF8,0x01,0xE0,0xCF,0x07,0xC0,0x07,0x07,0x00,0x00,0x04, // 82
  0x00,0x00,0x00,0xC0,0x83,0x01,0xE0,0x87,0x03,0x30,0x0E,0x06,0x10,0x0C,0x04,0x10,0x1C,0x04,0x10,0x18,0x04,0x30,0x38,0x06,0xE0,0xF0,0x03,0xC0,0xE0,0x01,  // 83
  0x00,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x00,0x00,0x10,0x00,0x00,0x10,  // 84
  0x00,0x00,0x00,0xF0,0xFF,0x01,0xF0,0xFF,0x03,0x00,0x00,0x06,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x06,0xF0,0xFF,0x03,0xF0,0xFF,0x01,  // 85
  0x00,0x00,0x00,0xF0,0x00,0x00,0xF0,0x07,0x00,0x00,0x3F,0x00,0x00,0xF0,0x03,0x00,0x00,0x07,0x00,0xE0,0x07,0x00,0x7E,0x00,0xE0,0x0F,0x00,0xF0,0x01,0x00,0x10, // 86
  0x00,0x00,0x00,0xF0,0x00,0x00,0xF0,0x3F,0x00,0x00,0xFC,0x07,0x00,0x00,0x07,0x00,0xF8,0x01,0xC0,0x1F,0x00,0xF0,0x01,0x00,0xF0,0x07,0x00,0x00,0x7E,0x00,0x00,0xC0,0x07,0x00,0xF0,0x07,0xC0,0xFF,0x00,0xF0,0x03,0x00,0x10, // 87
  0x00,0x00,0x00,0x30,0x00,0x06,0xF0,0x80,0x07,0xE0,0xE3,0x03,0x00,0x7F,0x00,0x00,0x1C,0x00,0x00,0x7F,0x00,0xE0,0xE3,0x01,0xF0,0x80,0x07,0x30,0x00,0x06,  // 88
  0x10,0x00,0x00,0xF0,0x00,0x00,0xE0,0x03,0x00,0x00,0x0F,0x00,0x00,0xFC,0x07,0x00,0xFC,0x07,0x00,0x0F,0x00,0xE0,0x03,0x00,0xF0,0x00,0x00,0x10,  // 89
  0x00,0x00,0x00,0x10,0x00,0x06,0x10,0x80,0x07,0x10,0xE0,0x05,0x10,0x78,0x04,0x10,0x0F,0x04,0xD0,0x03,0x04,0xF0,0x00,0x04,0x30,0x00,0x04,0x00,0x00,0x04,  // 90
  0x00,0x00,0x00,0xF8,0xFF,0x3F,0xF8,0xFF,0x3F,0x08,0x00,0x20,  // 91
  0x00,0x00,0x00,0x70,0x00,0x00,0xE0,0x03,0x00,0x00,0x3F,0x00,0x00,0xF0,0x01,0x00,0x80,0x0F,0x00,0x00,0x0C, // 92
  0x08,0x00,0x20,0x08,0x00,0x20,0xF8,0xFF,0x3F,0xF8,0xFF,0x3F,  // 93
  0x00,0x00,0x00,0x00,0x06,0x00,0xC0,0x03,0x00,0x70,0x00,0x00,0xE0,0x01,0x00,0x80,0x07,0x00,0x00,0x04,  // 94
  0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08, // 95
  0x00,0x00,0x00,0x10,0x00,0x00,0x30,0x00,0x00,0x60,  // 96
  0x00,0x00,0x00,0x00,0xC6,0x03,0x00,0xE6,0x07,0x00,0x31,0x04,0x00,0x11,0x04,0x00,0x11,0x06,0x00,0xFF,0x07,0x00,0xFE,0x07,  // 97
  0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x00,0x03,0x06,0x00,0x01,0x04,0x00,0x01,0x04,0x00,0x03,0x06,0x00,0xFE,0x03,0x00,0xFC,0x01, // 98
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x00,0x03,0x06,0x00,0x01,0x04,0x00,0x01,0x04,0x00,0x03,0x06,0x00,0x0E,0x03,0x00,0x0C,0x01, // 99
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x00,0x03,0x06,0x00,0x01,0x04,0x00,0x01,0x04,0x00,0x03,0x06,0xF0,0xFF,0x07,0xF0,0xFF,0x07, // 100
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x00,0x23,0x06,0x00,0x21,0x04,0x00,0x21,0x04,0x00,0x23,0x04,0x00,0x3E,0x06,0x00,0x3C,0x02, // 101
  0x00,0x00,0x00,0x00,0x01,0x00,0xE0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x01,0x00,0x10,0x01,0x00,0x10, // 102
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x63,0x00,0x03,0x46,0x00,0x01,0x44,0x00,0x01,0x44,0x00,0x03,0x66,0x00,0xFF,0x3F,0x00,0xFF,0x1F, // 103
  0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x00,0x03,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0xFF,0x07,0x00,0xFE,0x07,  // 104
  0x00,0x00,0x00,0x10,0xFF,0x07,0x10,0xFF,0x07, // 105
  0x00,0x00,0x40,0x10,0xFF,0x7F,0x10,0xFF,0x3F, // 106
  0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x00,0x30,0x00,0x00,0x78,0x00,0x00,0xEE,0x01,0x00,0x87,0x07,0x00,0x01,0x06,0x00,0x00,0x04, // 107
  0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07, // 108
  0x00,0x00,0x00,0x00,0xFF,0x07,0x00,0xFF,0x07,0x00,0x03,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0xFF,0x07,0x00,0xFE,0x07,0x00,0x03,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0xFF,0x07,0x00,0xFE,0x07, // 109
  0x00,0x00,0x00,0x00,0xFF,0x07,0x00,0xFF,0x07,0x00,0x03,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0xFF,0x07,0x00,0xFE,0x07,  // 110
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x00,0x03,0x06,0x00,0x01,0x04,0x00,0x01,0x04,0x00,0x03,0x06,0x00,0xFE,0x03,0x00,0xFC,0x01, // 111
  0x00,0x00,0x00,0x00,0xFF,0x7F,0x00,0xFF,0x7F,0x00,0x03,0x06,0x00,0x01,0x04,0x00,0x01,0x04,0x00,0x03,0x06,0x00,0xFE,0x03,0x00,0xFC,0x01, // 112
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x00,0x03,0x06,0x00,0x01,0x04,0x00,0x01,0x04,0x00,0x03,0x06,0x00,0xFF,0x7F,0x00,0xFF,0x7F, // 113
  0x00,0x00,0x00,0x00,0xFF,0x07,0x00,0xFF,0x07,0x00,0x03,0x00,0x00,0x01,0x00,0x00,0x01, // 114
  0x00,0x00,0x00,0x00,0x1E,0x03,0x00,0x3E,0x03,0x00,0x31,0x04,0x00,0x71,0x04,0x00,0x63,0x04,0x00,0xE7,0x07,0x00,0xC6,0x03,  // 115
  0x00,0x00,0x00,0x00,0x01,0x00,0xE0,0xFF,0x03,0xE0,0xFF,0x07,0x00,0x01,0x04,0x00,0x01,0x04,  // 116
  0x00,0x00,0x00,0x00,0xFF,0x03,0x00,0xFF,0x07,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x06,0x00,0xFF,0x07,0x00,0xFF,0x07,  // 117
  0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x7E,0x00,0x00,0xE0,0x07,0x00,0x80,0x07,0x00,0xF8,0x01,0x00,0x1F,0x00,0x00,0x03, // 118
  0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0xFE,0x01,0x00,0xC0,0x07,0x00,0xE0,0x07,0x00,0x7E,0x00,0x00,0x07,0x00,0x00,0x7E,0x00,0x00,0xE0,0x07,0x00,0xC0,0x07,0x00,0xFE,0x00,0x00,0x0F, // 119
  0x00,0x00,0x00,0x00,0x03,0x06,0x00,0x8F,0x07,0x00,0xFC,0x01,0x00,0x70,0x00,0x00,0xDE,0x01,0x00,0x07,0x07,0x00,0x01,0x04,  // 120
  0x00,0x00,0x00,0x00,0x0F,0x40,0x00,0x7F,0x40,0x00,0xE0,0x3F,0x00,0x80,0x1F,0x00,0xF8,0x01,0x00,0x3F,0x00,0x00,0x03, // 121
  0x00,0x00,0x00,0x00,0x01,0x06,0x00,0x81,0x07,0x00,0xE1,0x05,0x00,0x79,0x04,0x00,0x1D,0x04,0x00,0x0F,0x04,0x00,0x03,0x04,  // 122
  0x00,0x10,0x00,0x00,0x10,0x00,0xE0,0xEF,0x0F,0xF0,0xC7,0x1F,0x18,0x00,0x30, // 123
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x1F,0xF0,0xFF,0x1F,  // 124
  0x00,0x00,0x00,0x18,0x00,0x30,0xF0,0xC7,0x1F,0xE0,0xEF,0x0F,0x00,0x30,0x00,0x00,0x10, // 125
  0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x78,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x10,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x00,0x60,0x00,0x00,0x78,0x00,0x00,0x18,  // 126
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 127
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 128
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 129
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 130
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 131
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 132
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 133
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 134
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 135
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 136
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 137
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 138
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 139
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 140
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 141
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 142
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 143
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 144
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 145
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 146
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 147
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 148
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 149
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 150
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 151
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 152
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 153
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 154
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 155
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 156
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 157
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 158
  0x00,0x00,0x00,0xE0,0xFF,0x07,0xA0,0xC3,0x05,0x20,0x3C,0x04,0x20,0xE7,0x04,0xA0,0x00,0x05,0xE0,0xFF,0x07, // 159
  0x00,0x00,0x00,0x00,0xF9,0x1F,0x00,0xF9,0x1F, // 161
  0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0xFE,0x03,0x00,0x03,0x03,0xC0,0x01,0x1E,0xC0,0x01,0x1E,0x00,0x03,0x03,0x00,0x87,0x03,0x00,0x84,0x01, // 162
  0x00,0x00,0x00,0x00,0x10,0x04,0xC0,0xFF,0x07,0xE0,0xFF,0x07,0x30,0x10,0x04,0x10,0x10,0x04,0x10,0x10,0x04,0x30,0x00,0x04,0xE0,0x00,0x04,0xC0,0x00,0x04,  // 163
  0x00,0x00,0x00,0x80,0xFC,0x04,0x80,0xFF,0x07,0x00,0x87,0x03,0x80,0x01,0x06,0x80,0x00,0x04,0x80,0x00,0x04,0x80,0x00,0x04,0x80,0x00,0x04,0x80,0x01,0x06,0x00,0x87,0x03,0x80,0xFF,0x07,0x80,0xFC,0x06, // 164
  0x10,0x00,0x00,0x70,0x90,0x00,0xE0,0x93,0x00,0x80,0x9F,0x00,0x00,0xFC,0x07,0x00,0xFC,0x07,0x80,0x9F,0x00,0xE0,0x93,0x00,0x70,0x90,0x00,0x10,  // 165
  0x00,0x00,0x00,0xF0,0xE7,0x1F,0xF0,0xE7,0x1F, // 166
  0x00,0x00,0x00,0xC0,0x79,0x18,0xE0,0xFF,0x38,0x30,0xC6,0x61,0x10,0x86,0x41,0x10,0x8C,0x41,0x10,0x0C,0x43,0x30,0x1C,0x67,0xE0,0xF8,0x3F,0xC0,0xF0,0x1C,  // 167
  0x00,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x10, // 168
  0x00,0x00,0x00,0x00,0x3E,0x00,0x80,0xC1,0x00,0x40,0x00,0x01,0x20,0x3E,0x02,0x30,0x7F,0x06,0x90,0xC1,0x04,0x90,0x80,0x04,0x90,0x80,0x04,0x90,0xE3,0x04,0x30,0x63,0x06,0x20,0x00,0x02,0x40,0x00,0x01,0x80,0xC1,0x00,0x00,0x3E,  // 169
  0x00,0x00,0x00,0x60,0x0E,0x00,0x70,0x0F,0x00,0x10,0x09,0x00,0xF0,0x0F,0x00,0xE0,0x0F, // 170
  0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x78,0x00,0x00,0xCE,0x01,0x00,0x32,0x01,0x00,0xFC,0x00,0x00,0x86,0x01, // 171
  0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x78,0x00,0x00,0x78, // 172
  0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,  // 173
  0x00,0x00,0x00,0x00,0x3E,0x00,0x80,0xC1,0x00,0x40,0x00,0x01,0x20,0x00,0x02,0xB0,0xFF,0x06,0x90,0xFF,0x04,0x90,0x08,0x04,0x90,0x08,0x04,0x90,0xF7,0x04,0x30,0xF7,0x06,0x20,0x00,0x02,0x40,0x00,0x01,0x80,0xC1,0x00,0x00,0x3E,  // 174
  0x00,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10, // 175
  0x00,0x00,0x00,0xE0,0x00,0x00,0x10,0x01,0x00,0x10,0x01,0x00,0x10,0x01,0x00,0xE0,  // 176
  0x00,0x00,0x00,0x00,0x08,0x04,0x00,0x08,0x04,0x00,0x08,0x04,0xC0,0xFF,0x04,0xC0,0xFF,0x04,0x00,0x08,0x04,0x00,0x08,0x04,0x00,0x08,  // 177
  0x00,0x00,0x00,0x20,0x0C,0x00,0x10,0x0E,0x00,0x10,0x0B,0x00,0xF0,0x09,0x00,0xE0,0x08, // 178
  0x00,0x00,0x00,0x30,0x0C,0x00,0x10,0x09,0x00,0x10,0x09,0x00,0xF0,0x0F,0x00,0xE0,0x06, // 179
  0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x30,0x00,0x00,0x10, // 180
  0x00,0x00,0x00,0x00,0xFF,0x7F,0x00,0xFF,0x7F,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x06,0x00,0xFF,0x07,0x00,0xFF,0x07,  // 181
  0x00,0x01,0x00,0xE0,0x0F,0x00,0xE0,0x1F,0x00,0xF0,0x1F,0x00,0xF0,0x1F,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07, // 182
  0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x08,  // 183
  0x00,0x00,0x00,0x00,0x00,0x4C,0x00,0x00,0x78,0x00,0x00,0x30,  // 184
  0x00,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0xF0,0x0F,0x00,0xF0,0x0F,  // 185
  0x00,0x00,0x00,0xE0,0x03,0x00,0xF0,0x07,0x00,0x10,0x04,0x00,0x10,0x04,0x00,0xF0,0x07,0x00,0xE0,0x03,  // 186
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x86,0x01,0x00,0xFC,0x00,0x00,0x30,0x00,0x00,0x86,0x01,0x00,0xF8,0x00,0x00,0x30, // 187
  0x60,0x00,0x00,0x20,0x00,0x00,0xF0,0x0F,0x00,0xF0,0x8F,0x01,0x00,0xE0,0x00,0x00,0x38,0x00,0x00,0x8E,0x01,0x80,0xC3,0x01,0x40,0x30,0x01,0x00,0xF8,0x07,0x00,0xF8,0x07, // 188
  0x60,0x00,0x00,0x20,0x00,0x00,0xF0,0x0F,0x02,0xF0,0xCF,0x03,0x00,0xF0,0x00,0x00,0x1C,0x00,0x00,0x07,0x00,0xC0,0x11,0x06,0x40,0x08,0x07,0x00,0x88,0x05,0x00,0xF8,0x04,0x00,0x70,0x04,  // 189
  0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x0C,0x00,0x10,0x09,0x00,0x10,0x09,0x00,0xF0,0x8F,0x03,0xE0,0xE6,0x00,0x00,0x38,0x00,0x00,0x8E,0x01,0x80,0xC3,0x01,0xE0,0x30,0x01,0x00,0xF8,0x07,0x00,0xF8,0x07, // 190
  0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x80,0x3F,0x00,0xC0,0x41,0x00,0xF9,0x40,0x00,0x39,0x60,0x00,0x00,0x30,0x00,0x00,0x30,  // 191
  0x00,0x00,0x00,0x00,0x80,0x07,0x00,0xF0,0x03,0x01,0x7E,0x00,0xC7,0x4F,0x00,0xFE,0x40,0x00,0xF8,0x41,0x00,0x80,0x5F,0x00,0x00,0xFC,0x00,0x00,0xC0,0x07,0x00,0x00,0x06, // 192
  0x00,0x00,0x00,0x00,0x80,0x07,0x00,0xF0,0x03,0x00,0x7E,0x00,0xC0,0x4F,0x00,0xFC,0x40,0x00,0xF6,0x41,0x00,0x83,0x5F,0x00,0x01,0xFC,0x00,0x00,0xC0,0x07,0x00,0x00,0x06, // 193
  0x00,0x00,0x04,0x00,0x80,0x07,0x00,0xF8,0x01,0x08,0x7F,0x00,0xE6,0x47,0x00,0x73,0x40,0x00,0xE6,0x47,0x00,0x08,0x7F,0x00,0x00,0xF0,0x01,0x00,0x80,0x07,0x00,0x00,0x04, // 194
  0x00,0x00,0x00,0x00,0x00,0x07,0x00,0xE0,0x07,0x04,0x7E,0x00,0xC2,0x4F,0x00,0xF2,0x41,0x00,0xF4,0x41,0x00,0xC4,0x4F,0x00,0x02,0x7C,0x00,0x00,0xE0,0x07,0x00,0x00,0x07, // 195
  0x00,0x00,0x00,0x00,0x00,0x07,0x00,0xE0,0x07,0x04,0xFC,0x00,0xC4,0x4F,0x00,0xF0,0x41,0x00,0xF0,0x41,0x00,0x84,0x5F,0x00,0x04,0xFC,0x00,0x00,0xC0,0x07,0x00,0x00,0x06, // 196
  0x00,0x00,0x00,0x00,0x00,0x07,0x00,0xE0,0x07,0x00,0xFC,0x00,0x86,0x5F,0x00,0xF9,0x41,0x00,0xF9,0x41,0x00,0x86,0x5F,0x00,0x00,0xFC,0x00,0x00,0xE0,0x07,0x00,0x00,0x06, // 197
  0x00,0x00,0x06,0x00,0x80,0x07,0x00,0xE0,0x01,0x00,0x78,0x00,0x00,0x7E,0x00,0x80,0x47,0x00,0xE0,0x41,0x00,0x70,0x40,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x08,0x04,0x10,0x08,0x04,0x10,0x08,0x04,0x10,0x08,0x04,0x10,0x08,0x04,0x00,0x00,0x04,  // 198
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x60,0x80,0x03,0x10,0x00,0x07,0x10,0x00,0x4E,0x10,0x00,0x7F,0x30,0x00,0x37,0xE0,0xE0,0x03,0xC0,0xE0, // 199
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF1,0xFF,0x07,0x13,0x08,0x04,0x1E,0x08,0x04,0x18,0x08,0x04,0x10,0x08,0x04,0x10,0x08,0x04,0x10,0x00,0x04,  // 200
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x08,0x04,0x18,0x08,0x04,0x16,0x08,0x04,0x13,0x08,0x04,0x11,0x08,0x04,0x10,0x00,0x04,  // 201
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF8,0xFF,0x07,0x1E,0x08,0x04,0x13,0x08,0x04,0x16,0x08,0x04,0x18,0x08,0x04,0x10,0x08,0x04,0x10,0x00,0x04,  // 202
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF4,0xFF,0x07,0x14,0x08,0x04,0x10,0x08,0x04,0x10,0x08,0x04,0x14,0x08,0x04,0x14,0x08,0x04,0x10,0x00,0x04,  // 203
  0x01,0x00,0x00,0x03,0x00,0x00,0xFE,0xFF,0x07,0xF8,0xFF,0x07,  // 204
  0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xFF,0x07,0xFE,0xFF,0x07,0x03,0x00,0x00,0x01,  // 205
  0x08,0x00,0x00,0x0C,0x00,0x00,0xF3,0xFF,0x07,0xF3,0xFF,0x07,0x0C, // 206
  0x04,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x04,  // 207
  0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x10,0x08,0x04,0x10,0x00,0x04,0x10,0x00,0x04,0x60,0x00,0x03,0xE0,0xFF,0x03,0x80,0xFF,  // 208
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0xE6,0x01,0x00,0x02,0x07,0x00,0x04,0x1C,0x00,0x04,0xF0,0x00,0x06,0xC0,0x03,0xF0,0xFF,0x07,0xF0,0xFF,0x07, // 209
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x61,0x00,0x03,0x13,0x00,0x04,0x16,0x00,0x04,0x18,0x00,0x04,0x10,0x00,0x04,0x60,0x00,0x03,0xE0,0xFF,0x03,0x80,0xFF,  // 210
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x60,0x00,0x03,0x10,0x00,0x04,0x18,0x00,0x04,0x1E,0x00,0x04,0x13,0x00,0x04,0x61,0x00,0x03,0xE0,0xFF,0x03,0x80,0xFF,  // 211
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x64,0x00,0x03,0x16,0x00,0x04,0x13,0x00,0x04,0x16,0x00,0x04,0x14,0x00,0x04,0x60,0x00,0x03,0xE0,0xFF,0x03,0x80,0xFF,  // 212
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x64,0x00,0x03,0x12,0x00,0x04,0x12,0x00,0x04,0x14,0x00,0x04,0x14,0x00,0x04,0x62,0x00,0x03,0xE0,0xFF,0x03,0x80,0xFF,  // 213
  0x00,0x00,0x00,0x80,0xFF,0x00,0xE0,0xFF,0x03,0x62,0x00,0x03,0x12,0x00,0x04,0x10,0x00,0x04,0x10,0x00,0x04,0x12,0x00,0x04,0x62,0x00,0x03,0xE0,0xFF,0x03,0x80,0xFF,  // 214
  0x00,0x00,0x00,0x00,0x83,0x00,0x00,0xC7,0x00,0x00,0x7C,0x00,0x00,0x38,0x00,0x00,0x7C,0x00,0x00,0xE6,0x00,0x00,0x83,0x01,  // 215
  0x00,0x00,0x00,0x00,0xFF,0x08,0xC0,0xFF,0x0F,0x60,0x00,0x07,0x30,0xC0,0x07,0x10,0x70,0x04,0x10,0x1C,0x04,0x30,0x03,0x06,0xE0,0x00,0x03,0xF0,0xFF,0x01,0x90,0x7F,  // 216
  0x00,0x00,0x00,0xF0,0xFF,0x01,0xF1,0xFF,0x03,0x03,0x00,0x06,0x07,0x00,0x04,0x0C,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x06,0xF0,0xFF,0x03,0xF0,0xFF,0x01,  // 217
  0x00,0x00,0x00,0xF0,0xFF,0x01,0xF0,0xFF,0x03,0x00,0x00,0x06,0x00,0x00,0x04,0x0C,0x00,0x04,0x07,0x00,0x04,0x03,0x00,0x06,0xF1,0xFF,0x03,0xF0,0xFF,0x01,  // 218
  0x00,0x00,0x00,0xF0,0xFF,0x01,0xF0,0xFF,0x03,0x04,0x00,0x06,0x06,0x00,0x04,0x03,0x00,0x04,0x06,0x00,0x04,0x04,0x00,0x06,0xF0,0xFF,0x03,0xF0,0xFF,0x01,  // 219
  0x00,0x00,0x00,0xF0,0xFF,0x01,0xF4,0xFF,0x03,0x04,0x00,0x06,0x00,0x00,0x04,0x00,0x00,0x04,0x04,0x00,0x04,0x04,0x00,0x06,0xF0,0xFF,0x03,0xF0,0xFF,0x01,  // 220
  0x10,0x00,0x00,0xF0,0x00,0x00,0xE0,0x03,0x00,0x00,0x0F,0x00,0x08,0xFC,0x07,0x0E,0xFC,0x07,0x03,0x0F,0x00,0xE1,0x03,0x00,0xF0,0x00,0x00,0x10,  // 221
  0x00,0x00,0x00,0xF0,0xFF,0x07,0xF0,0xFF,0x07,0x00,0x81,0x00,0x00,0x81,0x00,0x00,0x81,0x00,0x00,0xC3,0x00,0x00,0x7E,0x00,0x00,0x3C,  // 222
  0x00,0x00,0x00,0xC0,0xFF,0x07,0xE0,0xFF,0x07,0x30,0x00,0x00,0x10,0x00,0x06,0x10,0x1E,0x04,0xF0,0x3F,0x04,0xE0,0x71,0x04,0x00,0xC0,0x03, // 223
  0x00,0x00,0x00,0x00,0xC6,0x03,0x10,0xE6,0x07,0x30,0x33,0x04,0x60,0x11,0x04,0x00,0x11,0x06,0x00,0xFF,0x07,0x00,0xFE,0x07,  // 224
  0x00,0x00,0x00,0x00,0xC6,0x03,0x00,0xE6,0x07,0x00,0x31,0x04,0x40,0x11,0x04,0x30,0x11,0x06,0x10,0xFF,0x07,0x00,0xFE,0x07,  // 225
  0x00,0x00,0x00,0x00,0xC6,0x03,0x40,0xE6,0x07,0x60,0x31,0x04,0x10,0x11,0x04,0x30,0x11,0x06,0x40,0xFF,0x07,0x00,0xFE,0x07,  // 226
  0x00,0x00,0x00,0x00,0xC6,0x03,0x20,0xE6,0x07,0x10,0x31,0x04,0x10,0x11,0x04,0x20,0x11,0x06,0x30,0xFF,0x07,0x10,0xFE,0x07,  // 227
  0x00,0x00,0x00,0x00,0xC6,0x03,0x10,0xE6,0x07,0x10,0x31,0x04,0x00,0x11,0x04,0x00,0x11,0x06,0x10,0xFF,0x07,0x10,0xFE,0x07,  // 228
  0x00,0x00,0x00,0x00,0xC6,0x03,0x00,0xE6,0x07,0x30,0x31,0x04,0x48,0x11,0x04,0x48,0x11,0x06,0x30,0xFF,0x07,0x00,0xFE,0x07,  // 229
  0x00,0x00,0x00,0x00,0xC6,0x03,0x00,0xE6,0x07,0x00,0x63,0x04,0x00,0x21,0x04,0x00,0x23,0x06,0x00,0xFF,0x03,0x00,0xFE,0x03,0x00,0x27,0x06,0x00,0x21,0x04,0x00,0x21,0x04,0x00,0x23,0x04,0x00,0x3E,0x06,0x00,0x3C,0x02,  // 230
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x00,0x03,0x07,0x00,0x01,0x4E,0x00,0x01,0x7E,0x00,0x03,0x37,0x00,0x86,0x03,0x00,0x86,0x01, // 231
  0x00,0x00,0x00,0x00,0xFC,0x01,0x10,0xFE,0x03,0x30,0x23,0x06,0x70,0x21,0x04,0x40,0x21,0x04,0x00,0x23,0x04,0x00,0x3E,0x06,0x00,0x3C,0x02, // 232
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x00,0x23,0x06,0x40,0x21,0x04,0x60,0x21,0x04,0x30,0x23,0x04,0x10,0x3E,0x06,0x00,0x3C,0x02, // 233
  0x00,0x00,0x00,0x00,0xFC,0x01,0x40,0xFE,0x03,0x60,0x23,0x06,0x30,0x21,0x04,0x30,0x21,0x04,0x40,0x23,0x04,0x00,0x3E,0x06,0x00,0x3C,  // 234
  0x00,0x00,0x00,0x00,0xFC,0x01,0x10,0xFE,0x03,0x10,0x23,0x06,0x00,0x21,0x04,0x00,0x21,0x04,0x10,0x23,0x04,0x10,0x3E,0x06,0x00,0x3C,0x02, // 235
  0x30,0x00,0x00,0x60,0xFF,0x07,0x40,0xFF,0x07, // 236
  0x00,0x00,0x00,0x40,0xFF,0x07,0x60,0xFF,0x07,0x30,0x00,0x00,0x10, // 237
  0x40,0x00,0x00,0x30,0xFF,0x07,0x10,0xFF,0x07,0x60,0x00,0x00,0x40, // 238
  0x10,0x00,0x00,0x00,0xFF,0x07,0x00,0xFF,0x07,0x10,  // 239
  0x00,0x00,0x00,0x00,0xF8,0x01,0x10,0xFC,0x03,0x98,0x06,0x06,0xF0,0x02,0x04,0x60,0x02,0x04,0xF0,0x05,0x06,0x90,0xFF,0x03,0x00,0xFE,  // 240
  0x00,0x00,0x00,0x00,0xFF,0x07,0x30,0xFF,0x07,0x10,0x03,0x00,0x20,0x01,0x00,0x20,0x01,0x00,0x30,0xFF,0x07,0x00,0xFE,0x07,  // 241
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x30,0x03,0x06,0x70,0x01,0x04,0x40,0x01,0x04,0x00,0x03,0x06,0x00,0xFE,0x03,0x00,0xFC,0x01, // 242
  0x00,0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x00,0x03,0x06,0x40,0x01,0x04,0x70,0x01,0x04,0x10,0x03,0x06,0x00,0xFE,0x03,0x00,0xFC,0x01, // 243
  0x00,0x00,0x00,0x00,0xFC,0x01,0x40,0xFE,0x03,0x60,0x03,0x06,0x30,0x01,0x04,0x30,0x01,0x04,0x40,0x03,0x06,0x00,0xFE,0x03,0x00,0xFC,0x01, // 244
  0x00,0x00,0x00,0x00,0xFC,0x01,0x20,0xFE,0x03,0x10,0x03,0x06,0x10,0x01,0x04,0x20,0x01,0x04,0x30,0x03,0x06,0x10,0xFE,0x03,0x00,0xFC,0x01, // 245
  0x00,0x00,0x00,0x00,0xFC,0x01,0x10,0xFE,0x03,0x10,0x03,0x06,0x00,0x01,0x04,0x00,0x01,0x04,0x10,0x03,0x06,0x10,0xFE,0x03,0x00,0xFC,0x01, // 246
  0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x80,0x08,0x01,0x80,0x08,0x01,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,  // 247
  0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0xFE,0x0B,0x00,0x03,0x06,0x00,0xC1,0x05,0x00,0x39,0x04,0x00,0x07,0x06,0xC0,0xFE,0x03,0x00,0xF8,  // 248
  0x00,0x00,0x00,0x00,0xFF,0x03,0x10,0xFF,0x07,0x30,0x00,0x04,0x60,0x00,0x04,0x00,0x00,0x06,0x00,0xFF,0x07,0x00,0xFF,0x07,  // 249
  0x00,0x00,0x00,0x00,0xFF,0x03,0x00,0xFF,0x07,0x00,0x00,0x04,0x60,0x00,0x04,0x30,0x00,0x06,0x10,0xFF,0x07,0x00,0xFF,0x07,  // 250
  0x00,0x00,0x00,0x00,0xFF,0x03,0x40,0xFF,0x07,0x60,0x00,0x04,0x10,0x00,0x04,0x60,0x00,0x06,0x40,0xFF,0x07,0x00,0xFF,0x07,  // 251
  0x00,0x00,0x00,0x10,0xFF,0x03,0x10,0xFF,0x07,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x06,0x10,0xFF,0x07,0x10,0xFF,0x07,  // 252
  0x00,0x00,0x00,0x00,0x0F,0x40,0x00,0x7E,0x40,0x00,0xE0,0x3F,0x60,0x80,0x1F,0x30,0xF8,0x01,0x10,0x3F,0x00,0x00,0x03, // 253
  0x00,0x00,0x00,0xF0,0xFF,0x7F,0xF0,0xFF,0x7F,0x00,0x03,0x06,0x00,0x01,0x04,0x00,0x01,0x04,0x00,0x03,0x06,0x00,0xFE,0x03,0x00,0xFC,0x01, // 254
  0x00,0x03,0x40,0x10,0x1F,0x40,0x10,0xFC,0x60,0x00,0x80,0x3F,0x00,0xE0,0x07,0x10,0x7E,0x00,0x10,0x07 // 255
};

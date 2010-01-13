/*
  NUI3 - C++ cross-platform GUI framework for OpenGL based applications
  Copyright (C) 2002-2003 Sebastien Metrot & Vincent Caron

  licence: see nui3/LICENCE.TXT
*/

#include "nui.h"

NGL_API const char* gpCmbcl = "\xff\xfe\x03\x01\x24\x0c\x00\x00\x00\x03\x00\x00\x14\x03\x00\x00"
"\xe6\x00\x00\x00\x15\x03\x00\x00\x15\x03\x00\x00\xe8\x00\x00\x00"
"\x16\x03\x00\x00\x19\x03\x00\x00\xdc\x00\x00\x00\x1a\x03\x00\x00"
"\x1a\x03\x00\x00\xe8\x00\x00\x00\x1b\x03\x00\x00\x1b\x03\x00\x00"
"\xd8\x00\x00\x00\x1c\x03\x00\x00\x20\x03\x00\x00\xdc\x00\x00\x00"
"\x21\x03\x00\x00\x22\x03\x00\x00\xca\x00\x00\x00\x23\x03\x00\x00"
"\x26\x03\x00\x00\xdc\x00\x00\x00\x27\x03\x00\x00\x28\x03\x00\x00"
"\xca\x00\x00\x00\x29\x03\x00\x00\x33\x03\x00\x00\xdc\x00\x00\x00"
"\x34\x03\x00\x00\x38\x03\x00\x00\x01\x00\x00\x00\x39\x03\x00\x00"
"\x3c\x03\x00\x00\xdc\x00\x00\x00\x3d\x03\x00\x00\x44\x03\x00\x00"
"\xe6\x00\x00\x00\x45\x03\x00\x00\x45\x03\x00\x00\xf0\x00\x00\x00"
"\x46\x03\x00\x00\x46\x03\x00\x00\xe6\x00\x00\x00\x47\x03\x00\x00"
"\x49\x03\x00\x00\xdc\x00\x00\x00\x4a\x03\x00\x00\x4c\x03\x00\x00"
"\xe6\x00\x00\x00\x4d\x03\x00\x00\x4e\x03\x00\x00\xdc\x00\x00\x00"
"\x50\x03\x00\x00\x52\x03\x00\x00\xe6\x00\x00\x00\x53\x03\x00\x00"
"\x56\x03\x00\x00\xdc\x00\x00\x00\x57\x03\x00\x00\x57\x03\x00\x00"
"\xe6\x00\x00\x00\x58\x03\x00\x00\x58\x03\x00\x00\xe8\x00\x00\x00"
"\x59\x03\x00\x00\x5a\x03\x00\x00\xdc\x00\x00\x00\x5b\x03\x00\x00"
"\x5b\x03\x00\x00\xe6\x00\x00\x00\x5c\x03\x00\x00\x5c\x03\x00\x00"
"\xe9\x00\x00\x00\x5d\x03\x00\x00\x5e\x03\x00\x00\xea\x00\x00\x00"
"\x5f\x03\x00\x00\x5f\x03\x00\x00\xe9\x00\x00\x00\x60\x03\x00\x00"
"\x61\x03\x00\x00\xea\x00\x00\x00\x62\x03\x00\x00\x62\x03\x00\x00"
"\xe9\x00\x00\x00\x63\x03\x00\x00\x6f\x03\x00\x00\xe6\x00\x00\x00"
"\x83\x04\x00\x00\x87\x04\x00\x00\xe6\x00\x00\x00\x91\x05\x00\x00"
"\x91\x05\x00\x00\xdc\x00\x00\x00\x92\x05\x00\x00\x95\x05\x00\x00"
"\xe6\x00\x00\x00\x96\x05\x00\x00\x96\x05\x00\x00\xdc\x00\x00\x00"
"\x97\x05\x00\x00\x99\x05\x00\x00\xe6\x00\x00\x00\x9a\x05\x00\x00"
"\x9a\x05\x00\x00\xde\x00\x00\x00\x9b\x05\x00\x00\x9b\x05\x00\x00"
"\xdc\x00\x00\x00\x9c\x05\x00\x00\xa1\x05\x00\x00\xe6\x00\x00\x00"
"\xa2\x05\x00\x00\xa7\x05\x00\x00\xdc\x00\x00\x00\xa8\x05\x00\x00"
"\xa9\x05\x00\x00\xe6\x00\x00\x00\xaa\x05\x00\x00\xaa\x05\x00\x00"
"\xdc\x00\x00\x00\xab\x05\x00\x00\xac\x05\x00\x00\xe6\x00\x00\x00"
"\xad\x05\x00\x00\xad\x05\x00\x00\xde\x00\x00\x00\xae\x05\x00\x00"
"\xae\x05\x00\x00\xe4\x00\x00\x00\xaf\x05\x00\x00\xaf\x05\x00\x00"
"\xe6\x00\x00\x00\xb0\x05\x00\x00\xb0\x05\x00\x00\x0a\x00\x00\x00"
"\xb1\x05\x00\x00\xb1\x05\x00\x00\x0b\x00\x00\x00\xb2\x05\x00\x00"
"\xb2\x05\x00\x00\x0c\x00\x00\x00\xb3\x05\x00\x00\xb3\x05\x00\x00"
"\x0d\x00\x00\x00\xb4\x05\x00\x00\xb4\x05\x00\x00\x0e\x00\x00\x00"
"\xb5\x05\x00\x00\xb5\x05\x00\x00\x0f\x00\x00\x00\xb6\x05\x00\x00"
"\xb6\x05\x00\x00\x10\x00\x00\x00\xb7\x05\x00\x00\xb7\x05\x00\x00"
"\x11\x00\x00\x00\xb8\x05\x00\x00\xb8\x05\x00\x00\x12\x00\x00\x00"
"\xb9\x05\x00\x00\xba\x05\x00\x00\x13\x00\x00\x00\xbb\x05\x00\x00"
"\xbb\x05\x00\x00\x14\x00\x00\x00\xbc\x05\x00\x00\xbc\x05\x00\x00"
"\x15\x00\x00\x00\xbd\x05\x00\x00\xbd\x05\x00\x00\x16\x00\x00\x00"
"\xbf\x05\x00\x00\xbf\x05\x00\x00\x17\x00\x00\x00\xc1\x05\x00\x00"
"\xc1\x05\x00\x00\x18\x00\x00\x00\xc2\x05\x00\x00\xc2\x05\x00\x00"
"\x19\x00\x00\x00\xc4\x05\x00\x00\xc4\x05\x00\x00\xe6\x00\x00\x00"
"\xc5\x05\x00\x00\xc5\x05\x00\x00\xdc\x00\x00\x00\xc7\x05\x00\x00"
"\xc7\x05\x00\x00\x12\x00\x00\x00\x10\x06\x00\x00\x17\x06\x00\x00"
"\xe6\x00\x00\x00\x18\x06\x00\x00\x18\x06\x00\x00\x1e\x00\x00\x00"
"\x19\x06\x00\x00\x19\x06\x00\x00\x1f\x00\x00\x00\x1a\x06\x00\x00"
"\x1a\x06\x00\x00\x20\x00\x00\x00\x4b\x06\x00\x00\x4b\x06\x00\x00"
"\x1b\x00\x00\x00\x4c\x06\x00\x00\x4c\x06\x00\x00\x1c\x00\x00\x00"
"\x4d\x06\x00\x00\x4d\x06\x00\x00\x1d\x00\x00\x00\x4e\x06\x00\x00"
"\x4e\x06\x00\x00\x1e\x00\x00\x00\x4f\x06\x00\x00\x4f\x06\x00\x00"
"\x1f\x00\x00\x00\x50\x06\x00\x00\x50\x06\x00\x00\x20\x00\x00\x00"
"\x51\x06\x00\x00\x51\x06\x00\x00\x21\x00\x00\x00\x52\x06\x00\x00"
"\x52\x06\x00\x00\x22\x00\x00\x00\x53\x06\x00\x00\x54\x06\x00\x00"
"\xe6\x00\x00\x00\x55\x06\x00\x00\x56\x06\x00\x00\xdc\x00\x00\x00"
"\x57\x06\x00\x00\x5b\x06\x00\x00\xe6\x00\x00\x00\x5c\x06\x00\x00"
"\x5c\x06\x00\x00\xdc\x00\x00\x00\x5d\x06\x00\x00\x5e\x06\x00\x00"
"\xe6\x00\x00\x00\x70\x06\x00\x00\x70\x06\x00\x00\x23\x00\x00\x00"
"\xd6\x06\x00\x00\xdc\x06\x00\x00\xe6\x00\x00\x00\xdf\x06\x00\x00"
"\xe2\x06\x00\x00\xe6\x00\x00\x00\xe3\x06\x00\x00\xe3\x06\x00\x00"
"\xdc\x00\x00\x00\xe4\x06\x00\x00\xe4\x06\x00\x00\xe6\x00\x00\x00"
"\xe7\x06\x00\x00\xe8\x06\x00\x00\xe6\x00\x00\x00\xea\x06\x00\x00"
"\xea\x06\x00\x00\xdc\x00\x00\x00\xeb\x06\x00\x00\xec\x06\x00\x00"
"\xe6\x00\x00\x00\xed\x06\x00\x00\xed\x06\x00\x00\xdc\x00\x00\x00"
"\x11\x07\x00\x00\x11\x07\x00\x00\x24\x00\x00\x00\x30\x07\x00\x00"
"\x30\x07\x00\x00\xe6\x00\x00\x00\x31\x07\x00\x00\x31\x07\x00\x00"
"\xdc\x00\x00\x00\x32\x07\x00\x00\x33\x07\x00\x00\xe6\x00\x00\x00"
"\x34\x07\x00\x00\x34\x07\x00\x00\xdc\x00\x00\x00\x35\x07\x00\x00"
"\x36\x07\x00\x00\xe6\x00\x00\x00\x37\x07\x00\x00\x39\x07\x00\x00"
"\xdc\x00\x00\x00\x3a\x07\x00\x00\x3a\x07\x00\x00\xe6\x00\x00\x00"
"\x3b\x07\x00\x00\x3c\x07\x00\x00\xdc\x00\x00\x00\x3d\x07\x00\x00"
"\x3d\x07\x00\x00\xe6\x00\x00\x00\x3e\x07\x00\x00\x3e\x07\x00\x00"
"\xdc\x00\x00\x00\x3f\x07\x00\x00\x41\x07\x00\x00\xe6\x00\x00\x00"
"\x42\x07\x00\x00\x42\x07\x00\x00\xdc\x00\x00\x00\x43\x07\x00\x00"
"\x43\x07\x00\x00\xe6\x00\x00\x00\x44\x07\x00\x00\x44\x07\x00\x00"
"\xdc\x00\x00\x00\x45\x07\x00\x00\x45\x07\x00\x00\xe6\x00\x00\x00"
"\x46\x07\x00\x00\x46\x07\x00\x00\xdc\x00\x00\x00\x47\x07\x00\x00"
"\x47\x07\x00\x00\xe6\x00\x00\x00\x48\x07\x00\x00\x48\x07\x00\x00"
"\xdc\x00\x00\x00\x49\x07\x00\x00\x4a\x07\x00\x00\xe6\x00\x00\x00"
"\xeb\x07\x00\x00\xf1\x07\x00\x00\xe6\x00\x00\x00\xf2\x07\x00\x00"
"\xf2\x07\x00\x00\xdc\x00\x00\x00\xf3\x07\x00\x00\xf3\x07\x00\x00"
"\xe6\x00\x00\x00\x16\x08\x00\x00\x19\x08\x00\x00\xe6\x00\x00\x00"
"\x1b\x08\x00\x00\x23\x08\x00\x00\xe6\x00\x00\x00\x25\x08\x00\x00"
"\x27\x08\x00\x00\xe6\x00\x00\x00\x29\x08\x00\x00\x2d\x08\x00\x00"
"\xe6\x00\x00\x00\x3c\x09\x00\x00\x3c\x09\x00\x00\x07\x00\x00\x00"
"\x4d\x09\x00\x00\x4d\x09\x00\x00\x09\x00\x00\x00\x51\x09\x00\x00"
"\x51\x09\x00\x00\xe6\x00\x00\x00\x52\x09\x00\x00\x52\x09\x00\x00"
"\xdc\x00\x00\x00\x53\x09\x00\x00\x54\x09\x00\x00\xe6\x00\x00\x00"
"\xbc\x09\x00\x00\xbc\x09\x00\x00\x07\x00\x00\x00\xcd\x09\x00\x00"
"\xcd\x09\x00\x00\x09\x00\x00\x00\x3c\x0a\x00\x00\x3c\x0a\x00\x00"
"\x07\x00\x00\x00\x4d\x0a\x00\x00\x4d\x0a\x00\x00\x09\x00\x00\x00"
"\xbc\x0a\x00\x00\xbc\x0a\x00\x00\x07\x00\x00\x00\xcd\x0a\x00\x00"
"\xcd\x0a\x00\x00\x09\x00\x00\x00\x3c\x0b\x00\x00\x3c\x0b\x00\x00"
"\x07\x00\x00\x00\x4d\x0b\x00\x00\x4d\x0b\x00\x00\x09\x00\x00\x00"
"\xcd\x0b\x00\x00\xcd\x0b\x00\x00\x09\x00\x00\x00\x4d\x0c\x00\x00"
"\x4d\x0c\x00\x00\x09\x00\x00\x00\x55\x0c\x00\x00\x55\x0c\x00\x00"
"\x54\x00\x00\x00\x56\x0c\x00\x00\x56\x0c\x00\x00\x5b\x00\x00\x00"
"\xbc\x0c\x00\x00\xbc\x0c\x00\x00\x07\x00\x00\x00\xcd\x0c\x00\x00"
"\xcd\x0c\x00\x00\x09\x00\x00\x00\x4d\x0d\x00\x00\x4d\x0d\x00\x00"
"\x09\x00\x00\x00\xca\x0d\x00\x00\xca\x0d\x00\x00\x09\x00\x00\x00"
"\x38\x0e\x00\x00\x39\x0e\x00\x00\x67\x00\x00\x00\x3a\x0e\x00\x00"
"\x3a\x0e\x00\x00\x09\x00\x00\x00\x48\x0e\x00\x00\x4b\x0e\x00\x00"
"\x6b\x00\x00\x00\xb8\x0e\x00\x00\xb9\x0e\x00\x00\x76\x00\x00\x00"
"\xc8\x0e\x00\x00\xcb\x0e\x00\x00\x7a\x00\x00\x00\x18\x0f\x00\x00"
"\x19\x0f\x00\x00\xdc\x00\x00\x00\x35\x0f\x00\x00\x35\x0f\x00\x00"
"\xdc\x00\x00\x00\x37\x0f\x00\x00\x37\x0f\x00\x00\xdc\x00\x00\x00"
"\x39\x0f\x00\x00\x39\x0f\x00\x00\xd8\x00\x00\x00\x71\x0f\x00\x00"
"\x71\x0f\x00\x00\x81\x00\x00\x00\x72\x0f\x00\x00\x72\x0f\x00\x00"
"\x82\x00\x00\x00\x74\x0f\x00\x00\x74\x0f\x00\x00\x84\x00\x00\x00"
"\x7a\x0f\x00\x00\x7d\x0f\x00\x00\x82\x00\x00\x00\x80\x0f\x00\x00"
"\x80\x0f\x00\x00\x82\x00\x00\x00\x82\x0f\x00\x00\x83\x0f\x00\x00"
"\xe6\x00\x00\x00\x84\x0f\x00\x00\x84\x0f\x00\x00\x09\x00\x00\x00"
"\x86\x0f\x00\x00\x87\x0f\x00\x00\xe6\x00\x00\x00\xc6\x0f\x00\x00"
"\xc6\x0f\x00\x00\xdc\x00\x00\x00\x37\x10\x00\x00\x37\x10\x00\x00"
"\x07\x00\x00\x00\x39\x10\x00\x00\x3a\x10\x00\x00\x09\x00\x00\x00"
"\x8d\x10\x00\x00\x8d\x10\x00\x00\xdc\x00\x00\x00\x5f\x13\x00\x00"
"\x5f\x13\x00\x00\xe6\x00\x00\x00\x14\x17\x00\x00\x14\x17\x00\x00"
"\x09\x00\x00\x00\x34\x17\x00\x00\x34\x17\x00\x00\x09\x00\x00\x00"
"\xd2\x17\x00\x00\xd2\x17\x00\x00\x09\x00\x00\x00\xdd\x17\x00\x00"
"\xdd\x17\x00\x00\xe6\x00\x00\x00\xa9\x18\x00\x00\xa9\x18\x00\x00"
"\xe4\x00\x00\x00\x39\x19\x00\x00\x39\x19\x00\x00\xde\x00\x00\x00"
"\x3a\x19\x00\x00\x3a\x19\x00\x00\xe6\x00\x00\x00\x3b\x19\x00\x00"
"\x3b\x19\x00\x00\xdc\x00\x00\x00\x17\x1a\x00\x00\x17\x1a\x00\x00"
"\xe6\x00\x00\x00\x18\x1a\x00\x00\x18\x1a\x00\x00\xdc\x00\x00\x00"
"\x60\x1a\x00\x00\x60\x1a\x00\x00\x09\x00\x00\x00\x75\x1a\x00\x00"
"\x7c\x1a\x00\x00\xe6\x00\x00\x00\x7f\x1a\x00\x00\x7f\x1a\x00\x00"
"\xdc\x00\x00\x00\x34\x1b\x00\x00\x34\x1b\x00\x00\x07\x00\x00\x00"
"\x44\x1b\x00\x00\x44\x1b\x00\x00\x09\x00\x00\x00\x6b\x1b\x00\x00"
"\x6b\x1b\x00\x00\xe6\x00\x00\x00\x6c\x1b\x00\x00\x6c\x1b\x00\x00"
"\xdc\x00\x00\x00\x6d\x1b\x00\x00\x73\x1b\x00\x00\xe6\x00\x00\x00"
"\xaa\x1b\x00\x00\xaa\x1b\x00\x00\x09\x00\x00\x00\x37\x1c\x00\x00"
"\x37\x1c\x00\x00\x07\x00\x00\x00\xd0\x1c\x00\x00\xd2\x1c\x00\x00"
"\xe6\x00\x00\x00\xd4\x1c\x00\x00\xd4\x1c\x00\x00\x01\x00\x00\x00"
"\xd5\x1c\x00\x00\xd9\x1c\x00\x00\xdc\x00\x00\x00\xda\x1c\x00\x00"
"\xdb\x1c\x00\x00\xe6\x00\x00\x00\xdc\x1c\x00\x00\xdf\x1c\x00\x00"
"\xdc\x00\x00\x00\xe0\x1c\x00\x00\xe0\x1c\x00\x00\xe6\x00\x00\x00"
"\xe2\x1c\x00\x00\xe8\x1c\x00\x00\x01\x00\x00\x00\xed\x1c\x00\x00"
"\xed\x1c\x00\x00\xdc\x00\x00\x00\xc0\x1d\x00\x00\xc1\x1d\x00\x00"
"\xe6\x00\x00\x00\xc2\x1d\x00\x00\xc2\x1d\x00\x00\xdc\x00\x00\x00"
"\xc3\x1d\x00\x00\xc9\x1d\x00\x00\xe6\x00\x00\x00\xca\x1d\x00\x00"
"\xca\x1d\x00\x00\xdc\x00\x00\x00\xcb\x1d\x00\x00\xcc\x1d\x00\x00"
"\xe6\x00\x00\x00\xcd\x1d\x00\x00\xcd\x1d\x00\x00\xea\x00\x00\x00"
"\xce\x1d\x00\x00\xce\x1d\x00\x00\xd6\x00\x00\x00\xcf\x1d\x00\x00"
"\xcf\x1d\x00\x00\xdc\x00\x00\x00\xd0\x1d\x00\x00\xd0\x1d\x00\x00"
"\xca\x00\x00\x00\xd1\x1d\x00\x00\xe6\x1d\x00\x00\xe6\x00\x00\x00"
"\xfd\x1d\x00\x00\xfd\x1d\x00\x00\xdc\x00\x00\x00\xfe\x1d\x00\x00"
"\xfe\x1d\x00\x00\xe6\x00\x00\x00\xff\x1d\x00\x00\xff\x1d\x00\x00"
"\xdc\x00\x00\x00\xd0\x20\x00\x00\xd1\x20\x00\x00\xe6\x00\x00\x00"
"\xd2\x20\x00\x00\xd3\x20\x00\x00\x01\x00\x00\x00\xd4\x20\x00\x00"
"\xd7\x20\x00\x00\xe6\x00\x00\x00\xd8\x20\x00\x00\xda\x20\x00\x00"
"\x01\x00\x00\x00\xdb\x20\x00\x00\xdc\x20\x00\x00\xe6\x00\x00\x00"
"\xe1\x20\x00\x00\xe1\x20\x00\x00\xe6\x00\x00\x00\xe5\x20\x00\x00"
"\xe6\x20\x00\x00\x01\x00\x00\x00\xe7\x20\x00\x00\xe7\x20\x00\x00"
"\xe6\x00\x00\x00\xe8\x20\x00\x00\xe8\x20\x00\x00\xdc\x00\x00\x00"
"\xe9\x20\x00\x00\xe9\x20\x00\x00\xe6\x00\x00\x00\xea\x20\x00\x00"
"\xeb\x20\x00\x00\x01\x00\x00\x00\xec\x20\x00\x00\xef\x20\x00\x00"
"\xdc\x00\x00\x00\xf0\x20\x00\x00\xf0\x20\x00\x00\xe6\x00\x00\x00"
"\xef\x2c\x00\x00\xf1\x2c\x00\x00\xe6\x00\x00\x00\xe0\x2d\x00\x00"
"\xff\x2d\x00\x00\xe6\x00\x00\x00\x2a\x30\x00\x00\x2a\x30\x00\x00"
"\xda\x00\x00\x00\x2b\x30\x00\x00\x2b\x30\x00\x00\xe4\x00\x00\x00"
"\x2c\x30\x00\x00\x2c\x30\x00\x00\xe8\x00\x00\x00\x2d\x30\x00\x00"
"\x2d\x30\x00\x00\xde\x00\x00\x00\x2e\x30\x00\x00\x2f\x30\x00\x00"
"\xe0\x00\x00\x00\x99\x30\x00\x00\x9a\x30\x00\x00\x08\x00\x00\x00"
"\x6f\xa6\x00\x00\x6f\xa6\x00\x00\xe6\x00\x00\x00\x7c\xa6\x00\x00"
"\x7d\xa6\x00\x00\xe6\x00\x00\x00\xf0\xa6\x00\x00\xf1\xa6\x00\x00"
"\xe6\x00\x00\x00\x06\xa8\x00\x00\x06\xa8\x00\x00\x09\x00\x00\x00"
"\xc4\xa8\x00\x00\xc4\xa8\x00\x00\x09\x00\x00\x00\xe0\xa8\x00\x00"
"\xf1\xa8\x00\x00\xe6\x00\x00\x00\x2b\xa9\x00\x00\x2d\xa9\x00\x00"
"\xdc\x00\x00\x00\x53\xa9\x00\x00\x53\xa9\x00\x00\x09\x00\x00\x00"
"\xb3\xa9\x00\x00\xb3\xa9\x00\x00\x07\x00\x00\x00\xc0\xa9\x00\x00"
"\xc0\xa9\x00\x00\x09\x00\x00\x00\xb0\xaa\x00\x00\xb0\xaa\x00\x00"
"\xe6\x00\x00\x00\xb2\xaa\x00\x00\xb3\xaa\x00\x00\xe6\x00\x00\x00"
"\xb4\xaa\x00\x00\xb4\xaa\x00\x00\xdc\x00\x00\x00\xb7\xaa\x00\x00"
"\xb8\xaa\x00\x00\xe6\x00\x00\x00\xbe\xaa\x00\x00\xbf\xaa\x00\x00"
"\xe6\x00\x00\x00\xc1\xaa\x00\x00\xc1\xaa\x00\x00\xe6\x00\x00\x00"
"\xed\xab\x00\x00\xed\xab\x00\x00\x09\x00\x00\x00\x1e\xfb\x00\x00"
"\x1e\xfb\x00\x00\x1a\x00\x00\x00\x20\xfe\x00\x00\x26\xfe\x00\x00"
"\xe6\x00\x00\x00\xfd\x01\x01\x00\xfd\x01\x01\x00\xdc\x00\x00\x00"
"\x0d\x0a\x01\x00\x0d\x0a\x01\x00\xdc\x00\x00\x00\x0f\x0a\x01\x00"
"\x0f\x0a\x01\x00\xe6\x00\x00\x00\x38\x0a\x01\x00\x38\x0a\x01\x00"
"\xe6\x00\x00\x00\x39\x0a\x01\x00\x39\x0a\x01\x00\x01\x00\x00\x00"
"\x3a\x0a\x01\x00\x3a\x0a\x01\x00\xdc\x00\x00\x00\x3f\x0a\x01\x00"
"\x3f\x0a\x01\x00\x09\x00\x00\x00\xb9\x10\x01\x00\xb9\x10\x01\x00"
"\x09\x00\x00\x00\xba\x10\x01\x00\xba\x10\x01\x00\x07\x00\x00\x00"
"\x65\xd1\x01\x00\x66\xd1\x01\x00\xd8\x00\x00\x00\x67\xd1\x01\x00"
"\x69\xd1\x01\x00\x01\x00\x00\x00\x6d\xd1\x01\x00\x6d\xd1\x01\x00"
"\xe2\x00\x00\x00\x6e\xd1\x01\x00\x72\xd1\x01\x00\xd8\x00\x00\x00"
"\x7b\xd1\x01\x00\x82\xd1\x01\x00\xdc\x00\x00\x00\x85\xd1\x01\x00"
"\x89\xd1\x01\x00\xe6\x00\x00\x00\x8a\xd1\x01\x00\x8b\xd1\x01\x00"
"\xdc\x00\x00\x00\xaa\xd1\x01\x00\xad\xd1\x01\x00\xe6\x00\x00\x00"
"\x42\xd2\x01\x00\x44\xd2\x01\x00\xe6\x00\x00\x00";
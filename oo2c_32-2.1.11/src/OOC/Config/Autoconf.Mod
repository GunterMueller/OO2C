MODULE OOC:Config:Autoconf;

(**This module provides all constants that are defined by running
   @code{./configure} in the top-level directory.  *)

CONST
  configFile* = "/usr/local/lib/oo2c/oo2crc.xml";
  (**Default configuration file to be used if no --config is given and
     OO2CRC is not set.  *)
  nameTargetOS* = "Unix";
  (**Target operating system.  Currently either Unix or Win32.
     Note: Cygwin is classified as "Unix".  *)
  bitsTargetInteger* = 64;
  (**Number of bits of the largest supported integer type for the target.  *)
  bitsTargetAddress* = 32;
  (**Number of bits of address type for the target.  *)

  (* Version numbers, taken from configure.ac: *)
  compilerVersion* = "2.1.11";
  compilerMajor* = 2;
  compilerMinor* = 1;
  
  (* Define address type for OOC:SymbolTable:Predef: *)
  longint* = 6;
  hugeint* = 7;
  address* = longint;

  haveLibM* = TRUE;  (* used by TestCompile *)
  haveLibDL* = TRUE;  (* used by TestCompile *)
  haveLibGC* = TRUE;  (* used by TestCompile *)
  haveLibPThread* = FALSE;  (* used by TestCompile *)

END OOC:Config:Autoconf.

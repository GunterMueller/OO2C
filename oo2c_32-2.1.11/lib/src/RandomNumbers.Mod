(*	$Id: RandomNumbers.Mod,v 1.1 2002/05/09 22:08:13 mva Exp $	*)
MODULE RandomNumbers;
(** 
For details on this algorithm take a look at
  Park S.K. and Miller K.W. (1988). ``Random number generators, good ones are
  hard to find''. Communications of the ACM, 31, 1192-1201.
*)

CONST
  modulo* = 2147483647;  (* =2^31-1 *)

VAR
  z : LONGINT;

PROCEDURE GetSeed* (VAR seed : LONGINT);
(**Returns the currently used seed value. *)
  BEGIN
    seed := z
  END GetSeed;

PROCEDURE PutSeed* (seed : LONGINT);
(**Set @oparam{seed} as the new seed value.  Any values for @oparam{seed} are
   allowed, but values beyond the intervall @samp{[1..2^31-2]} will be mapped
   into this range.  *)
  BEGIN
    seed := seed MOD modulo;
    IF (seed = 0) THEN
      z := 1
    ELSE
      z := seed
    END
  END PutSeed;

PROCEDURE NextRND;
  CONST
    a = 16807;
    q = 127773;      (* m div a *)
    r = 2836;        (* m mod a *)
  VAR
    lo, hi, test : LONGINT;
  BEGIN
    hi := z DIV q;
    lo := z MOD q;
    test := a * lo - r * hi;
    IF (test > 0) THEN
      z := test
    ELSE
      z := test + modulo
    END
  END NextRND;

PROCEDURE RND* (range : LONGINT) : LONGINT;
(**Calculates a new number.  @oparam{range} has to be in the intervall
   @samp{[1..2^31-2]}.  Result is a number from @samp{0,1,..,@oparam{range}-1}.  *)
  BEGIN
    NextRND;
    RETURN z MOD range
  END RND;

PROCEDURE Random*() : REAL;
(**Calculates a number @samp{x} with @samp{0.0 <= x < 1.0}.  *)
  BEGIN
    NextRND;
    RETURN (z-1)*(1 / (modulo-1))
  END Random;

BEGIN
  z := 1
END RandomNumbers.

#!/usr/bin/python
# -*- coding: utf-8 -*-

# ##### BEGIN LICENSE BLOCK #####
# Version: MPL 1.1/GPL 2.0/LGPL 2.1
#
# The contents of this file are subject to the Mozilla Public License Version
# 1.1 (the "License"); you may not use this file except in compliance with
# the License. You may obtain a copy of the License at
# http://www.mozilla.org/MPL/
#
# Software distributed under the License is distributed on an "AS IS" basis,
# WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
# for the specific language governing rights and limitations under the
# License.
#
# The Original Code is Mozilla Universal charset detector code.
#
# The Initial Developer of the Original Code is
# Netscape Communications Corporation.
# Portions created by the Initial Developer are Copyright (C) 2001
# the Initial Developer. All Rights Reserved.
#
# Contributor(s):
#          Jehan <jehan@girinstud.io>
#
# Alternatively, the contents of this file may be used under the terms of
# either the GNU General Public License Version 2 or later (the "GPL"), or
# the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
# in which case the provisions of the GPL or the LGPL are applicable instead
# of those above. If you wish to allow use of your version of this file only
# under the terms of either the GPL or the LGPL, and not to allow others to
# use your version of this file under the terms of the MPL, indicate your
# decision by deleting the provisions above and replace them with the notice
# and other provisions required by the GPL or the LGPL. If you do not delete
# the provisions above, a recipient may use your version of this file under
# the terms of any one of the MPL, the GPL or the LGPL.
#
# ##### END LICENSE BLOCK #####

from codepoints import *

name = 'GEORGIAN-ACADEMY'
aliases = []

language = \
{
    # Languages with complete coverage.
    'complete': [ 'ka' ],
    'incomplete': []
}

## Table generated by script/create-table.py with iconv ##
# X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF   #
charmap = \
[
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, # 0X
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, # 1X
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, # 2X
 #' ' '!' '"' '#' '$' '%' '&' ''' '(' ')' '*' '+' ',' '-' '.' '/' 
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, # 3X
 #'0' '1' '2' '3' '4' '5' '6' '7' '8' '9' ':' ';' '<' '=' '>' '?' 
  SYM,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET, # 4X
 #'@' 'A' 'B' 'C' 'D' 'E' 'F' 'G' 'H' 'I' 'J' 'K' 'L' 'M' 'N' 'O' 
  LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,SYM,SYM,SYM,SYM,SYM, # 5X
 #'P' 'Q' 'R' 'S' 'T' 'U' 'V' 'W' 'X' 'Y' 'Z' '[' '\' ']' '^' '_' 
  SYM,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET, # 6X
 #'`' 'a' 'b' 'c' 'd' 'e' 'f' 'g' 'h' 'i' 'j' 'k' 'l' 'm' 'n' 'o' 
  LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,SYM,SYM,SYM,SYM,CTR, # 7X
 #'p' 'q' 'r' 's' 't' 'u' 'v' 'w' 'x' 'y' 'z' '{' '|' '}' '~' CTR 
  CTR,CTR,SYM,LET,SYM,SYM,SYM,SYM,LET,SYM,LET,SYM,LET,CTR,CTR,CTR, # 8X
 #CTR CTR '‚' 'ƒ' '„' '…' '†' '‡' 'ˆ' '‰' 'Š' '‹' 'Œ' CTR CTR CTR 
  CTR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,LET,SYM,LET,CTR,CTR,LET, # 9X
 #CTR '‘' '’' '“' '”' '•' '–' '—' '˜' '™' 'š' '›' 'œ' CTR CTR 'Ÿ' 
  CTR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,LET,SYM,SYM,CTR,SYM,SYM, # AX
 #CTR '¡' '¢' '£' '¤' '¥' '¦' '§' '¨' '©' 'ª' '«' '¬' CTR '®' '¯' 
  SYM,SYM,NUM,NUM,SYM,LET,SYM,SYM,SYM,NUM,LET,SYM,SYM,SYM,SYM,SYM, # BX
 #'°' '±' '²' '³' '´' 'µ' '¶' '·' '¸' '¹' 'º' '»' '¼' '½' '¾' '¿' 
  LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET, # CX
 #'ა' 'ბ' 'გ' 'დ' 'ე' 'ვ' 'ზ' 'თ' 'ი' 'კ' 'ლ' 'მ' 'ნ' 'ო' 'პ' 'ჟ' 
  LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET, # DX
 #'რ' 'ს' 'ტ' 'უ' 'ფ' 'ქ' 'ღ' 'ყ' 'შ' 'ჩ' 'ც' 'ძ' 'წ' 'ჭ' 'ხ' 'ჯ' 
  LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET,LET, # EX
 #'ჰ' 'ჱ' 'ჲ' 'ჳ' 'ჴ' 'ჵ' 'ჶ' 'ç' 'è' 'é' 'ê' 'ë' 'ì' 'í' 'î' 'ï' 
  LET,LET,LET,LET,LET,LET,LET,SYM,LET,LET,LET,LET,LET,LET,LET,LET, # FX
 #'ð' 'ñ' 'ò' 'ó' 'ô' 'õ' 'ö' '÷' 'ø' 'ù' 'ú' 'û' 'ü' 'ý' 'þ' 'ÿ' 
]

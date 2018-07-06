
(define title-single-map
  '((#\x01C4 #\x01C5) ; LATIN CAPITAL LETTER DZ WITH CARON
    (#\x01C6 #\x01C5) ; LATIN SMALL LETTER DZ WITH CARON
    (#\x01C7 #\x01C8) ; LATIN CAPITAL LETTER LJ
    (#\x01C8 #\x01C8) ; LATIN CAPITAL LETTER L WITH SMALL LETTER J
    (#\x01C9 #\x01C8) ; LATIN SMALL LETTER LJ
    (#\x01CA #\x01CB) ; LATIN CAPITAL LETTER NJ
    (#\x01CC #\x01CB) ; LATIN SMALL LETTER NJ
    (#\x01F1 #\x01F2) ; LATIN CAPITAL LETTER DZ
    (#\x01F3 #\x01F2) ; LATIN SMALL LETTER DZ
    ))

;; Alist mapping characters to their multiple-letter titlecase equivalents
(define title-multiple-map
  (append
   title-single-map
   '((#\x00DF #\x0053 #\x0073)         ; LATIN SMALL LETTER SHARP S
     (#\xFB00 #\x0046 #\x0066)         ; LATIN SMALL LIGATURE FF
     (#\xFB01 #\x0046 #\x0069)         ; LATIN SMALL LIGATURE FI
     (#\xFB02 #\x0046 #\x006C)         ; LATIN SMALL LIGATURE FL
     (#\xFB03 #\x0046 #\x0066 #\x0069) ; LATIN SMALL LIGATURE FFI
     (#\xFB04 #\x0046 #\x0066 #\x006C) ; LATIN SMALL LIGATURE FFL
     (#\xFB05 #\x0053 #\x0074)         ; LATIN SMALL LIGATURE LONG S T
     (#\xFB06 #\x0053 #\x0074)         ; LATIN SMALL LIGATURE ST
     (#\x0587 #\x0535 #\x0582)      ; ARMENIAN SMALL LIGATURE ECH YIWN
     (#\xFB13 #\x0544 #\x0576)      ; ARMENIAN SMALL LIGATURE MEN NOW
     (#\xFB14 #\x0544 #\x0565)      ; ARMENIAN SMALL LIGATURE MEN ECH
     (#\xFB15 #\x0544 #\x056B)      ; ARMENIAN SMALL LIGATURE MEN INI
     (#\xFB16 #\x054E #\x0576)      ; ARMENIAN SMALL LIGATURE VEW NOW
     (#\xFB17 #\x0544 #\x056D)      ; ARMENIAN SMALL LIGATURE MEN XEH
     (#\x0149 #\x02BC #\x004E) ; LATIN SMALL LETTER N PRECEDED BY APOSTROPHE
     (#\x0390 #\x0399 #\x0308 #\x0301) ; GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS
     (#\x03B0 #\x03A5 #\x0308 #\x0301) ; GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS
     (#\x01F0 #\x004A #\x030C)  ; LATIN SMALL LETTER J WITH CARON
     (#\x1E96 #\x0048 #\x0331)  ; LATIN SMALL LETTER H WITH LINE BELOW
     (#\x1E97 #\x0054 #\x0308)  ; LATIN SMALL LETTER T WITH DIAERESIS
     (#\x1E98 #\x0057 #\x030A)  ; LATIN SMALL LETTER W WITH RING ABOVE
     (#\x1E99 #\x0059 #\x030A)  ; LATIN SMALL LETTER Y WITH RING ABOVE
     (#\x1E9A #\x0041 #\x02BE) ; LATIN SMALL LETTER A WITH RIGHT HALF RING
     (#\x1F50 #\x03A5 #\x0313) ; GREEK SMALL LETTER UPSILON WITH PSILI
     (#\x1F52 #\x03A5 #\x0313 #\x0300) ; GREEK SMALL LETTER UPSILON WITH PSILI AND VARIA
     (#\x1F54 #\x03A5 #\x0313 #\x0301) ; GREEK SMALL LETTER UPSILON WITH PSILI AND OXIA
     (#\x1F56 #\x03A5 #\x0313 #\x0342) ; GREEK SMALL LETTER UPSILON WITH PSILI AND PERISPOMENI
     (#\x1FB6 #\x0391 #\x0342) ; GREEK SMALL LETTER ALPHA WITH PERISPOMENI
     (#\x1FC6 #\x0397 #\x0342) ; GREEK SMALL LETTER ETA WITH PERISPOMENI
     (#\x1FD2 #\x0399 #\x0308 #\x0300) ; GREEK SMALL LETTER IOTA WITH DIALYTIKA AND VARIA
     (#\x1FD3 #\x0399 #\x0308 #\x0301) ; GREEK SMALL LETTER IOTA WITH DIALYTIKA AND OXIA
     (#\x1FD6 #\x0399 #\x0342) ; GREEK SMALL LETTER IOTA WITH PERISPOMENI
     (#\x1FD7 #\x0399 #\x0308 #\x0342) ; GREEK SMALL LETTER IOTA WITH DIALYTIKA AND PERISPOMENI
     (#\x1FE2 #\x03A5 #\x0308 #\x0300) ; GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND VARIA
     (#\x1FE3 #\x03A5 #\x0308 #\x0301) ; GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND OXIA
     (#\x1FE4 #\x03A1 #\x0313)     ; GREEK SMALL LETTER RHO WITH PSILI
     (#\x1FE6 #\x03A5 #\x0342) ; GREEK SMALL LETTER UPSILON WITH PERISPOMENI
     (#\x1FE7 #\x03A5 #\x0308 #\x0342) ; GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND PERISPOMENI
     (#\x1FF6 #\x03A9 #\x0342) ; GREEK SMALL LETTER OMEGA WITH PERISPOMENI
     (#\x1FB2 #\x1FBA #\x0345) ; GREEK SMALL LETTER ALPHA WITH VARIA AND YPOGEGRAMMENI
     (#\x1FB4 #\x0386 #\x0345) ; GREEK SMALL LETTER ALPHA WITH OXIA AND YPOGEGRAMMENI
     (#\x1FC2 #\x1FCA #\x0345) ; GREEK SMALL LETTER ETA WITH VARIA AND YPOGEGRAMMENI
     (#\x1FC4 #\x0389 #\x0345) ; GREEK SMALL LETTER ETA WITH OXIA AND YPOGEGRAMMENI
     (#\x1FF2 #\x1FFA #\x0345) ; GREEK SMALL LETTER OMEGA WITH VARIA AND YPOGEGRAMMENI
     (#\x1FF4 #\x038F #\x0345) ; GREEK SMALL LETTER OMEGA WITH OXIA AND YPOGEGRAMMENI
     (#\x1FB7 #\x0391 #\x0342 #\x0345) ; GREEK SMALL LETTER ALPHA WITH PERISPOMENI AND YPOGEGRAMMENI
     (#\x1FC7 #\x0397 #\x0342 #\x0345) ; GREEK SMALL LETTER ETA WITH PERISPOMENI AND YPOGEGRAMMENI
     (#\x1FF7 #\x03A9 #\x0342 #\x0345) ; GREEK SMALL LETTER OMEGA WITH PERISPOMENI AND YPOGEGRAMMENI
     )))

;; Alist mapping characters to their multiple-character lowercase equivalents
(define lower-multiple-map
  '((#\x0130 #\x0069 #\x0307))) ; LATIN CAPITAL LETTER I WITH DOT ABOVE
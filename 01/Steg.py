#coding=utf-8
import zwsp_steg

encoded = zwsp_steg.encode("CHCTF-ZWSP-STEG-BABY", zwsp_steg.MODE_ZWSP)
encoded += "Your flag is somewhere on this page. Can you find it?"

print(encoded)

test = """
​Your flag is somewhere on this page. C
an you find it?"""

decoded = zwsp_steg.decode(test, zwsp_steg.MODE_ZWSP)
print(decoded)


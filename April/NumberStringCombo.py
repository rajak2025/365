import re

test = input()

regexresult = re.compile("([0-9]+)([a-zA-Z]+)")
regexgroup = regexresult.match(test).groups()

result = list(regexgroup)

if int(result[0]) == len(result[1]):
    print("TRUE ", len(result[1]))
else :
    print("FALSE ", len(result[1]))
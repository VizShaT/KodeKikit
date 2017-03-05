# http://codeforces.com/contest/71/submission/24258501
# http://codeforces.com/contest/71/submission/24258501

for i in range(input()):
	s=raw_input()
	print [s,s[0]+str(len(s)-2)+s[-1]][len(s)>10]


'''
input
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

output
word
l10n
i18n
p43s
'''
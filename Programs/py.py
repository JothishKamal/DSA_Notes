def removeMostOccurringChar(string):
  charCount = {}
  for char in string:
    if char in charCount:
      charCount[char] += 1
    else:
      charCount[char] = 1
  mostOccurringChar = max(charCount, key=charCount.get)
  newString = string.replace(mostOccurringChar, '')

  return newString

string = "Helloo World"
result = removeMostOccurringChar(string)
print(result)  

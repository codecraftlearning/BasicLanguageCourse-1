s = "my name is khan"

freq = {}

for ch in s:
    if ch != " ":
        if ch in freq:
            freq[ch] = freq[ch] + 1
        else:
            freq[ch] = 1

for k, v in freq.items():
    print(k, "=", v)

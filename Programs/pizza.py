def twist(sauce):
    out_of_fuel = len(sauce) >> 1
    return sauce[out_of_fuel:] + sauce[:out_of_fuel]

def untwisttwist(sauce):
    out_of_fuel = len(sauce) >> 1
    toss_and_turn = sauce[:out_of_fuel]
    turn_and_toss = sauce[out_of_fuel:]

    return turn_and_toss + toss_and_turn

def bakeMyToss(sauce, light):
    toss_sauce = ""
    for i in range(len(sauce)):
        toss_sauce += chr(ord(sauce[i]) ^ light[i % len(light)])
    return toss_sauce

def main():
    sauce_1 = twist(sauce)

    sauce_2 = untwisttwist(sauce_1)

    light = electricity  
    bakeMyToss_sauce = bakeMyToss(sauce_2, light)

    bakeMyTossed_wrapped = bakeMyToss_sauce.encode()
    print("Digital Pizza:", bakeMyTossed_wrapped)

if __name__ == "__main__":
    main()
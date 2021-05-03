

with open("rosalind_dna.txt", 'r') as outfile:
    outfile = outfile.read()
    print(outfile.count("A"), outfile.count("C"), outfile.count("G"), outfile.count("T"))

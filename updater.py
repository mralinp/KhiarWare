import requests
import json

url = 'https://raw.githubusercontent.com/frk1/hazedumper/master/csgo.json'
r = requests.get(url, allow_redirects=True)

open('csgo.json', 'wb').write(r.content)

with open('csgo.json', 'r') as js:
    distros_dict = json.load(js)
    signitures = [(k, v) for k, v in distros_dict['signatures'].items()]
    netvars = [(k, v) for k, v in distros_dict['netvars'].items()]
    f = open("./khiar-ware/khiar-ware/Offsets.h", "w")
    f.close()
    with open("./khiar-ware/khiar-ware/Offsets.h", "a") as offsets_h:

        offsets_h.write("#ifndef OFFSETS_H\n")
        offsets_h.write("#define OFFSETS_H\n\n")
        offsets_h.write("#include <windows.h>\n\n")

        offsets_h.write("namespace signitures {\n")
        for i in signitures:
            offsets_h.write("\tconst DWORD %s = %s ;\n" % (i[0], i[1]))
        offsets_h.write("};\n\n")

        offsets_h.write("namespace netvars {\n")
        for i in netvars:
            offsets_h.write("\tconst DWORD %s = %s ;\n" % (i[0], i[1]))
        offsets_h.write("};\n\n")
        offsets_h.write("#endif")
        offsets_h.close()
    js.close()
print("Done!")

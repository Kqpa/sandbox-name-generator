<div align="center">

# Sandbox Name Generator
A configurable, sandbox name generator appropriate to the Sandbox Community's jargon.

</div>

## Building
Copy & paste the following command block to your terminal:
```sh
git clone https://github.com/Kqpa/sandbox-name-generator && \
cd ./sandbox-name-generator/src && \
g++ main.cpp -o generator.out && \
./generator.out
```

## Configuring
* **`Prefixes`**, **`Declinations`** & **`Suffixes`** **—** ([`./include/config/vectors.hpp`](./include/config/vectors.hpp))

  * The randomly generated sandbox names are made out of three components, a **prefix**, a **declination** *(which can sometimes be disgarded)*, and a **suffix**. These can be configured by editing the configuration file linked above.

* **Output Options** **—** ([`./include/config/options.hpp`](./include/config/options.hpp))

  * The generator outputs the sandbox names into a file, and the behaviour of the output can be configured by editing the configuration file linked above.
  * `NAME_GENERATION_COUNT` **—** The sandbox name generator generates a specific amount of names. If this variable is set to `DEFAULT_NAME_COUNT`, it will generate as much as names it can. Although, this value can be changed to generate a specific amount of names by modifying the value of this variable.
  * `OUTPUT_FILE` **—** The sandbox name generator will output the generated names into a file, and the file name is set on this variable. By default, the names will get outputted to a file named `sandbox_names.txt`. This can be changed by modifying the value of this variable.
  * `PLAIN_OUTPUT` **—** The output file will contain additional information by default; such as the avalible prefixes, amount of generations, etc. If you **only** want to get the generated names, you will have to set this variable to `true`.

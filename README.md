<div align="center">

# Sandbox Name Generator
A configurable, sandbox name generator appropriate to the Sandbox Community's jargon.

</div>

## Building
Download the repository & paste the following command block to your terminal:
```sh
cd ./sandbox-name-generator/src && \
g++ generator.cpp -o generator.out && \
./generator.out
```
## Arguments
While executing the program (`./generator.out`), you can provide extra arguments.
* `--plain`
  * This **only** outputs the generated names to the file. It removes clutter such as the generation number, the list of suffixes, etc...
* `--output-terminal`

## Configuring

The randomly generated sandbox names are built from three elements: A `prefix`, a `declinations` *(which can sometimes be **disgarded**)*, and a `suffix`. These are located inside the [`./include/config.hpp`](./include/config.hpp) file. You can add and/or remove elements from these Vectors. Although, keep in mind that you shouldn't put a comma (`,`) at the last element of the Vector.

* **For example**:
```cpp
const std::vector<std::string> food = {
  "apple",
  "banana",
  "orange",
       /* ^ (remove this comma after 'orange', it's unnecessary) */
};

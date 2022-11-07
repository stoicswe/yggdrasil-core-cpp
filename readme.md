# Yggdrasil Core
## What is Yggdrasil?
The Yggdrasil blockchain is a system designed to allow for transfer of value between participants. The blockchain is named after the great tree of Norse mythology that connects the nine worlds: Asgard, Alfheim, Nidavellir, Midgard, Jotunheim, Vanaheim, Niflheim, Muspell, and Hel. Just as the tree is known for the powerful connections it has to the reality described in the works of the Norse, so too does this project strive for strong interlocking bonds between transactions and blocks in the form of the blockcahin. Does this project strive to become great one day? No, but it does seek to explore the wonderful technology that is Blockchains, encryption, and cryptography. This project is meant to learn about the inner workings of cryptocurrency, therefore all implementations are meant to be as simplistic and straightforward as possible.
### Definitions
Here are some definitions for some aspects of the blockchain and cryptocurrency: The ticker symbol of the currency is: `$YGG`, simply...the first few letters of the project's name. The object of value or currency of the project is known as `Yggs` (pronounced "yigs"). The symbol for describing the currency is the "vend", an Old Norse ASCII character. The character is: `Ꝩ` and is added after the numerical value, for example: `0.575Ꝩ`. The reason for choosing this symbol was because it resembled a tree branch visibly. In order to type the Vend character, you can do one of the following:
```
//Windows ALT Code
ALT+42856
//macOS Option Code
Option+A768
//HTML Encoding
&#42856;
```
## Getting Started
### Prerequisites
In order to run this project, you will need:
```
C++23
CONAN
CMAKE
```
### Building
If building on Windows, there are provided scripts for generating either CLion or VS Studio project files for your preferred IDE. If on Linux, then there is a provided script for generating the necessary files for CLion or Unix MAKE files directly for compilation. The Windows build scripts do not require any parameters to execute, whereas the Linux script can have a build target (defaults to "debug") and optional true/false param for generating the MAKE files.The Linux commands are listed here:
```bash
# To generate debug clion target
./BuildLinux.sh
./BuildLinux.sh debug false
# To generate debug MAKE target
./BuildLinux.sh debug true
# To generate release clion target
./BuildLinux.sh release false
# To generate release MAKE target
./BuildLinux.sh release true
```
# Authors

* **[Nathan Bunch](https://github.com/nathanielbunch)** - *Original Author*

## Contributing

Contributions are welcome!

Before contributing, take time to review the [code of conduct](https://github.com/stoicswe/yggdrasil-core/blob/main/docs/CODE_OF_CONDUCT.md) and [contributing](https://github.com/stoicswe/yggdrasil-core/blob/main/docs/CONTRIBUTING.md) documents.

See also other contributors on the list of [contributors](https://github.com/stoicswe/yggdrasil-core/graphs/contributors).

## License

This project is licensed under the MIT - see the [LICENSE.md](LICENSE.md) file for details.

## Acknowledgements

_Original Author_ [Nathaniel Bunch](https://github.com/stoicswe)
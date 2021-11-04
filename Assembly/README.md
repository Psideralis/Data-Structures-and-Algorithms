# Assembly Bibliothek
## Author
Psideralis
## License
GNU General Public License 3.0 & Psideralis Commune Public License
## Version
00.00.000.005
## Status
Public - Progress 25%
## Compilation:

    make assembler=["as", "nasm", "masm"] platform=["windows","linux","mac"] include=["include path"] object=["object name"] architecture=["64" or "arm" or "mips"] file=["assembly file path"]

    or
    
    make default (This query for default system configuration).
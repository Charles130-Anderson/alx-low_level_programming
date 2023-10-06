#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * check_elf - Check if a file is an ELF file
 * @e_ident: Pointer to the e_ident field of the ELF header
 *
 * This function checks the e_ident field of the ELF header to determine if the
 * given file is an ELF file. If the file is not an ELF file, an error message
 * is printed to the standard error file descriptor and the program exits with
 * an exit code of 98.
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[0] != 0x7F || e_ident[1] != 'E'
		|| e_ident[2] != 'L' || e_ident[3] != 'F')
	{
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
	}
}


/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: The magic numbers are printed with each byte formatted as a
 * two-digit hexadecimal number. Spaces are used to separate the magic numbers.
 * A newline character is printed at the end.
 */

void print_magic(unsigned char *e_ident)
{
	printf(" Magic: ");

	for (int index = 0; index < 4; index++)
	{
		printf("%02x", e_ident[index]);

	if (index != 3)
	{
	printf(" ");
	}
	}

	printf("\n");
}



/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 *
 * Description: The ELF class is determined.
 * The function prints the corresponding class name
 * (none, ELF32, ELF64) or "<unknown: %x>" if the class is not recognized.
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class: ");

	unsigned char class = e_ident[EI_CLASS];

	if (class == ELFCLASSNONE)
	{
	printf("none\n");
	}
	else if (class == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (class == ELFCLASS64)
	{
	printf("ELF64\n");
	}
	else
	{
		printf("<unknown: %x>\n", class);
	}
}


/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF data type.
 *
 * Description: The data type determined by the value in the e_ident[EI_DATA]
 * position of the ELF header. The function prints the corresponding data type
 * (none, 2's complement, little endian, 2's complement, big endian) or
 * "<unknown: %x>" if the data type is not recognized.
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data: ");
	unsigned char data = e_ident[EI_DATA];

	switch (data)
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", data);
	}
}


/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 *
 * Description: Version determined by the value in the e_ident[EI_VERSION]
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version: %d", e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}


/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 *
 * @e_ident: A pointer to an array containing the ELF OS/ABI.
 *
 * Description:
 *    The OS/ABI is determined by the value in the e_ident[EI_OSABI]
 *    position of the ELF header. The function prints the corresponding
 *    OS/ABI (UNIX - System V, UNIX - HP-UX, UNIX - NetBSD, UNIX - Linux,
 *    UNIX - Solaris) or "<unknown: %x>" if the OS/ABI is not recognized.
 */
void print_osabi(unsigned char *e_ident)
{
		printf(" OS/ABI: ");

	unsigned char osabi = e_ident[EI_OSABI];

	if (osabi == ELFOSABI_NONE)
	{
		printf("UNIX - System V\n");
	}
	else if (osabi == ELFOSABI_HPUX)
	{
		printf("UNIX - HP-UX\n");
	}
	else if (osabi == ELFOSABI_NETBSD)
	{
		printf("UNIX - NetBSD\n");
	}
	else if (osabi == ELFOSABI_LINUX)
	{
		printf("UNIX - Linux\n");
	}
	else if (osabi == ELFOSABI_SOLARIS)
	{
		printf("UNIX - Solaris\n");
	}
	else
	{
		printf("<unknown: %x>\n", osabi);
	}
}
#include <stdio.h>

/**
 * print_type - Prints the type of an ELF header.
 *
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 *
 * Description:
 *    The type is determined by the value in the `e_type` parameter.
 *    If the endianness of the ELF header is ELFDATA2MSB, the `e_type`
 *    value is shifted by 8 bits. The function prints the corresponding
 *    type (NONE, REL, EXEC, DYN, CORE) or "<unknown: %x>" if the type
 *    is not recognized.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
	e_type >>= 8;
	}

		printf(" Type: ");

	if (e_type == ET_NONE)
	{
		printf("NONE (None)\n");
	}
	else if (e_type == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (e_type == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (e_type == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (e_type == ET_CORE)
	{
		printf("CORE (Core file)\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 *
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 *
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

    /* Byte swap the entry point address if endianness is ELFDATA2MSB */
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
	e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
	e_entry = (e_entry << 16) | (e_entry >> 16);
	}

    /* Print the entry point address in hexadecimal format */
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("0x%08x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("0x%016lx\n", e_entry);
	}
}


/**
 * close_elf - Closes an ELF file.
 *
 * @elf: The file descriptor of the ELF file.
 *
 * Description:
 *    The function attempts to close the file descriptor
 *    specified by the `elf` parameter. If the file cannot
 *    be closed, it prints an error message to stderr and
 *    exits the program with exit code 98.
 */
void close_elf(int elf)
{
if (close(elf) == -1)
	{
	fprintf(stderr, "Error: Can't close fd %d\n", elf);
	exit(98);
	}
}


/**
 * read_elf_header - Reads the ELF header from a file.
 *
 * @filename: The name of the file to read the header from.
 *
 * Return: A pointer to the ELF header on success, or NULL on failure.
 */
Elf64_Ehdr *read_elf_header(const char *filename)
{
int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	fprintf(stderr, "Error: Can't read file %s\n", filename);
	exit(98);
	}

struct stat st; 
	if (fstat(fd, &st) == -1)
	{
	close(fd);
	fprintf(stderr, "Error: Can't read file %s\n", filename);
	exit(98);
	}

	Elf64_Ehdr *header = malloc(sizeof(Elf64_Ehdr));
    
	if (header == NULL)
	{
	close(fd);
	fprintf(stderr, "Error: Can't allocate memory\n");
	exit(98);
	}
ssize_t n = read(fd, header, sizeof(Elf64_Ehdr));
 	if (n == -1)
	{
	free(header);
	close(fd);
	fprintf(stderr, "Error: Failed to read file %s\n", filename);
	exit(98);
	}

	close(fd);
	return (header);
}

/**
 * print_elf_header - Prints the information contained in the ELF header.
 *
 * @header: A pointer to the ELF header.
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
    // Add code to print the information contained in the ELF header
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
	exit(1);
	}

	const char *filename = argv[1];
	Elf64_Ehdr *header = read_elf_header(filename);
	print_elf_header(header);
	free(header);

	return (0);
}
